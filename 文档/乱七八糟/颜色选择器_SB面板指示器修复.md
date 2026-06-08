# S/B 面板指示器修复 · 图层顺序 + 样式统一

## 修复目标

S/B 面板的圆形指示器完全对标色相条：
1. **图层顺序**：渐变在底层、指示器在顶层（当前是反的）→ 让指示器可见
2. **样式**：透明背景 + 白色边框 + 阴影 → 与色相条完全一致

---

## 根因分析

### ① 指示器被渐变层盖住了

| 组件 | 渐变插入方式 | 图层顺序 | 结果 |
|------|-------------|---------|------|
| 色相条 `WPHueSlider` | `insertSublayer:... atIndex:0` | `[gradient, indicator]` | ✅ 指示器可见 |
| S/B 面板 `WPSBView` | **`addSublayer:`** | `[indicator, sat, bri]` | ❌ 指示器被覆盖 |

`addSublayer:` 把渐变层加到**最前面**，完全遮住了指示器。

### ② 样式已有差异

| 属性 | 色相条指示器 | S/B 面板指示器（你已改过） |
|------|------------|--------------------------|
| 尺寸 | 20×20 | 24×24 |
| cornerRadius | 10 | 12 |
| backgroundColor | **无（透明）** | 白色 |
| borderColor | **白色** | 灰色 |

修复后 S/B 面板的指示器要跟色相条完全一致：20×20、透明背景、白色边框、圆角 10。

---

## 改动内容

### 修改文件

`WPSaturationBrightnessView.m` — 改 2 处

---

### 改动 1：`commonInit` — 指示器样式

改尺寸 24→20，去掉 backgroundColor（保持 nil=透明），改回白色边框，圆角同步。

```diff
- self.indicator = [[UIView alloc] initWithFrame:CGRectMake(0, 0, 24, 24)];
- self.indicator.layer.cornerRadius = 12;
- self.indicator.backgroundColor = [UIColor whiteColor];
- self.indicator.layer.borderColor = [UIColor colorWithWhite:0.3 alpha:0.5].CGColor;
+ self.indicator = [[UIView alloc] initWithFrame:CGRectMake(0, 0, 20, 20)];
+ self.indicator.layer.cornerRadius = 10;
+ self.indicator.layer.borderWidth = 2.5;
+ self.indicator.layer.borderColor = [UIColor whiteColor].CGColor;
+ self.indicator.layer.shadowColor = [UIColor blackColor].CGColor;
+ self.indicator.layer.shadowOffset = CGSizeMake(0, 1);     // 跟色相条一样
+ self.indicator.layer.shadowRadius = 2;                     // 跟色相条一样
+ self.indicator.layer.shadowOpacity = 0.4;
+ self.indicator.userInteractionEnabled = NO;
```

### 改后 `commonInit` 完整代码

```objc
- (void)commonInit {
    self.layer.cornerRadius = 8;
    self.clipsToBounds = YES;
    _hue = 0;
    _saturation = 1;
    _brightness = 1;

    // ─── 手势 ───
    UIPanGestureRecognizer *pan = [[UIPanGestureRecognizer alloc]
                                    initWithTarget:self action:@selector(handleGesture:)];
    [self addGestureRecognizer:pan];
    UITapGestureRecognizer *tap = [[UITapGestureRecognizer alloc]
                                    initWithTarget:self action:@selector(handleGesture:)];
    [self addGestureRecognizer:tap];

    // ─── 指示器（与色相条保持完全一致） ───
    self.indicator = [[UIView alloc] initWithFrame:CGRectMake(0, 0, 20, 20)];
    self.indicator.layer.cornerRadius = 10;
    self.indicator.layer.borderWidth = 2.5;
    self.indicator.layer.borderColor = [UIColor whiteColor].CGColor;
    self.indicator.layer.shadowColor = [UIColor blackColor].CGColor;
    self.indicator.layer.shadowOffset = CGSizeMake(0, 1);
    self.indicator.layer.shadowRadius = 2;
    self.indicator.layer.shadowOpacity = 0.4;
    self.indicator.userInteractionEnabled = NO;
    [self addSubview:self.indicator];
}
```

---

### 改动 2：`rebuildGradient` — 图层顺序

和色相条一样用 `insertSublayer:atIndex:` 代替 `addSublayer:`。

```diff
- [self.layer addSublayer:satLayer];
+ [self.layer insertSublayer:satLayer atIndex:0];

- [self.layer addSublayer:briLayer];
+ [self.layer insertSublayer:briLayer atIndex:1];
```

### 改后 `rebuildGradient` 完整代码

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

    UIColor *pureColor = [UIColor colorWithHue:self.hue
                                    saturation:1.0 brightness:1.0 alpha:1.0];

    // Layer 1：饱和度渐变 — 最底层
    CAGradientLayer *satLayer = [CAGradientLayer layer];
    satLayer.frame = self.bounds;
    satLayer.startPoint = CGPointMake(0, 0.5);
    satLayer.endPoint = CGPointMake(1, 0.5);
    satLayer.colors = @[(id)[UIColor whiteColor].CGColor, (id)pureColor.CGColor];
    [self.layer insertSublayer:satLayer atIndex:0];      // ← 改

    // Layer 2：明度渐变 — 在 satLayer 之上、indicator 之下
    CAGradientLayer *briLayer = [CAGradientLayer layer];
    briLayer.frame = self.bounds;
    briLayer.startPoint = CGPointMake(0.5, 1);
    briLayer.endPoint = CGPointMake(0.5, 0);
    briLayer.colors = @[(id)[UIColor blackColor].CGColor, (id)[UIColor clearColor].CGColor];
    [self.layer insertSublayer:briLayer atIndex:1];      // ← 改
}
```

---

### 修复后的图层结构

```
self.layer.sublayers:
  索引 0: satLayer          ← 饱和度渐变（底层）
  索引 1: briLayer          ← 明度渐变
  索引 2: indicator.layer   ← 透明背景+白色边框（最顶层 ✓）
```

和色相条的图层结构完全一致。

---

## 验证

| 步骤 | 预期 |
|------|------|
| 编译 | 无 warning |
| 打开颜色选择器 | S/B 面板右上角出现白色圆环指示器（s=1,b=1 → 右上角） |
| 拖动 | 指示器跟随手指，渐变层在指示器下方 |
| 样式对比 | S/B 面板指示器跟色相条指示器一模一样（20pt、透明、白边） |

---

## 修改摘要

| 文件 | 修改内容 | 行数 |
|------|---------|------|
| `WPSaturationBrightnessView.m` | `commonInit`：尺寸 24→20、去 backgroundColor、border 灰→白 | ~3 行 |
| `WPSaturationBrightnessView.m` | `rebuildGradient`：`addSublayer:` → `insertSublayer:atIndex:` | 2 行 |