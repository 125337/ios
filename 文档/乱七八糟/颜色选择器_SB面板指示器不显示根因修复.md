# S/B 面板指示器不显示 · 根因分析与修复

## 1. 根因：图层顺序错误

### WPHueSlider（正常工作的参考）

```objc
// WPHueSlider.m line 83 — 色相条
[self.layer insertSublayer:self.gradientLayer atIndex:0];
```

`insertSublayer:atIndex:0` → 渐变层插到**最底层**（index=0），指示器 UIView 的 layer 在渐变层之上。

```
self.layer.sublayers:
  索引 0: CAGradientLayer (渐变)   ← 底层
  索引 1: indicator.layer (指示器)  ← 顶层 ✓
```

### WPSaturationBrightnessView（出问题的）

```objc
// WPSaturationBrightnessView.m line 85, 93 — S/B 面板
[self.layer addSublayer:satLayer];   ← 加在最前面
[self.layer addSublayer:briLayer];   ← 加在最前面
```

`addSublayer:` 始终把图层添加到**最顶层** → 渐变层**覆盖**了指示器。

```
self.layer.sublayers:
  索引 0: indicator.layer (指示器)   ← 底层
  索引 1: CAGradientLayer (satLayer) ← 顶层！盖住了指示器
  索引 2: CAGradientLayer (briLayer) ← 顶层！盖住了指示器
```

**所以指示器并不是"不显示"，而是被渐变层完全覆盖了。**

### 为什么 WPHueSlider 没问题？

它的 `insertSublayer:atIndex:0` 把渐变放在 index=0（最底层），指示器的 UIView layer 自然在 index=1（顶层）。这是两个组件之间唯一的区别，也是全部的原因。

---

## 2. 修复方案

将 `rebuildGradient` 中的 `addSublayer:` 改为 `insertSublayer:atIndex:`，确保渐变层在指示器**下面**。

### 修改文件

`WPSaturationBrightnessView.m` — `rebuildGradient` 方法

### 修改内容

```diff
- [self.layer addSublayer:satLayer];
+ [self.layer insertSublayer:satLayer atIndex:0];

- [self.layer addSublayer:briLayer];
+ [self.layer insertSublayer:briLayer atIndex:1];  // 在 satLayer 之上、indicator 之下
```

### 完整的修改后方法

```objc
- (void)rebuildGradient {
    if (self.bounds.size.width <= 0 || self.bounds.size.height <= 0) return;

    // 移除旧的 CAGradientLayer
    NSArray *oldLayers = [self.layer.sublayers copy];
    for (CALayer *layer in oldLayers) {
        if ([layer isKindOfClass:[CAGradientLayer class]]) {
            [layer removeFromSuperlayer];
        }
    }

    // 纯色（当前色相，100%饱和度+明度）
    UIColor *pureColor = [UIColor colorWithHue:self.hue
                                    saturation:1.0 brightness:1.0 alpha:1.0];

    // Layer 1：饱和度渐变（左→右：白 → 纯色）— 最底层
    CAGradientLayer *satLayer = [CAGradientLayer layer];
    satLayer.frame = self.bounds;
    satLayer.startPoint = CGPointMake(0, 0.5);
    satLayer.endPoint = CGPointMake(1, 0.5);
    satLayer.colors = @[(id)[UIColor whiteColor].CGColor, (id)pureColor.CGColor];
    [self.layer insertSublayer:satLayer atIndex:0];         // ← 改这里

    // Layer 2：明度渐变（下→上：黑 → 透明）— 在 satLayer 之上
    CAGradientLayer *briLayer = [CAGradientLayer layer];
    briLayer.frame = self.bounds;
    briLayer.startPoint = CGPointMake(0.5, 1);
    briLayer.endPoint = CGPointMake(0.5, 0);
    briLayer.colors = @[(id)[UIColor blackColor].CGColor, (id)[UIColor clearColor].CGColor];
    [self.layer insertSublayer:briLayer atIndex:1];         // ← 改这里
}
```

### 修复后的图层顺序

```
self.layer.sublayers:
  索引 0: satLayer (饱和度渐变)     ← 底层
  索引 1: briLayer (明度渐变)       ← 中层
  索引 2: indicator.layer (指示器)  ← 顶层 ✓
```

---

## 3. 验证

| 步骤 | 预期 |
|------|------|
| 编译运行 | 无 warning |
| 打开颜色选择器 | S/B 面板上立即看到圆形指示器（在右上角，因为初始 s=1, b=1） |
| 拖动面板 | 指示器跟随手指移动 |
| 切换色相 | 面板重绘，指示器保持在正确位置 |
| 对比色相条 | 色相条指示器同样正常工作 |