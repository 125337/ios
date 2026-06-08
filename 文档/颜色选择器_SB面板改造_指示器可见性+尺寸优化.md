# S/B 面板改造 · 指示器可见性 + 尺寸优化

## 现状问题

### 问题 1：指示器看不见

```objc
// WPSaturationBrightnessView.m — 当前指示器配置
self.indicator.backgroundColor = nil;          // ← 透明背景，默认值
self.indicator.layer.borderColor = [UIColor whiteColor].CGColor;  // ← 白色边框
self.clipsToBounds = YES;                      // ← 阴影被裁切
```

- **背景透明** → 在白色区域（面板左上角饱和度=0处）完全消失
- **白色边框** → 在亮色区域也看不见
- **`clipsToBounds = YES`** → 阴影 `shadowOpacity:0.4` 被裁切，起不到区分作用

### 问题 2：面板太长了

```
当前约束:  width = contentView.width × 0.85  (≈ 290pt 在 iPhone 上)
           height = width (正方形!)           → 290pt × 290pt
```

290pt 的正方形占了大半个屏幕，面板下方还要放 RGB 控制、色板等，导致需要大量滚动。

---

## 修复方案

### 修改文件

| 文件 | 改动内容 |
|------|---------|
| `WPSaturationBrightnessView.m` | 指示器样式：加背景色 + 暗边框 |
| `WPHsvColorPickerController.m` | 面板比例：正方形 → 矩形 |

---

### 改动 1：指示器样式（WPSaturationBrightnessView.m → commonInit）

```diff
- self.indicator.layer.borderColor = [UIColor whiteColor].CGColor;
+ self.indicator.backgroundColor = [UIColor whiteColor];
+ self.indicator.layer.borderColor = [UIColor colorWithWhite:0.3 alpha:0.5].CGColor;
```

完整代码段：

```objc
// ─── 指示器 ───
self.indicator = [[UIView alloc] initWithFrame:CGRectMake(0, 0, 24, 24)];
self.indicator.layer.cornerRadius = 12;
self.indicator.backgroundColor = [UIColor whiteColor];                    // ← 加白色填充
self.indicator.layer.borderWidth = 2.5;
self.indicator.layer.borderColor = [UIColor colorWithWhite:0.3 alpha:0.5].CGColor;  // ← 半透明灰边框
self.indicator.layer.shadowColor = [UIColor blackColor].CGColor;
self.indicator.layer.shadowOffset = CGSizeMake(0, 2);
self.indicator.layer.shadowRadius = 3;
self.indicator.layer.shadowOpacity = 0.4;
self.indicator.userInteractionEnabled = NO;
[self addSubview:self.indicator];
```

#### 原理

| 背景区域 | 以前 | 现在 |
|---------|------|------|
| 白色（饱和度=0） | ⛔ 透明+白边 → 消失 | ✅ 白色填充+灰边 → 清晰可见 |
| 黑色（明度=0） | ✅ 白边可见 | ✅ 白底+灰边 → 依然可见 |
| 纯色（右边缘） | ⚠️ 白边可能被淹 | ✅ 灰边+白底 → 始终可见 |

---

### 改动 2：面板尺寸（WPHsvColorPickerController.m → setupConstraints）

```diff
  // 4. S/B 面板
  self.sbView.translatesAutoresizingMaskIntoConstraints = NO;
  [NSLayoutConstraint activateConstraints:@[
      [self.sbView.topAnchor constraintEqualToAnchor:prev.bottomAnchor constant:12],
      [self.sbView.centerXAnchor constraintEqualToAnchor:cv.centerXAnchor],
      [self.sbView.widthAnchor constraintEqualToAnchor:cv.widthAnchor multiplier:kSBViewRatio],
-     [self.sbView.heightAnchor constraintEqualToAnchor:self.sbView.widthAnchor],
+     [self.sbView.heightAnchor constraintEqualToAnchor:self.sbView.widthAnchor multiplier:0.7],
  ]];
```

#### 尺寸对比（iPhone 14 Pro，屏幕宽 375pt，contentView 宽 ≈ 343pt）

| 方案 | kSBViewRatio | 宽 | 高 | 面积 |
|------|:---:|:--:|:--:|:----:|
| 改造前（正方形） | 0.85 | 291pt | 291pt | **84681pt²** |
| 改造后（矩形） | 0.85 | 291pt | **204pt** | **59364pt²** |

面积减少约 **30%**，视觉效果明显更协调，RGB 控制和色板也不需要滚太远。

#### 如果需要更灵活的控制

把比例抽取为常量，方便以后微调：

```objc
// WPHsvColorPickerController.m 头部常量区
static CGFloat const kSBViewRatio = 0.85;      // 宽度占比（已有）
static CGFloat const kSBAspectRatio = 0.7;     // ★新增 高/宽比
```

```objc
[self.sbView.heightAnchor constraintEqualToAnchor:self.sbView.widthAnchor
                                        multiplier:kSBAspectRatio],
```

---

## 完整改动示例

### WPSaturationBrightnessView.m — commonInit (line 42~51)

```diff
      // ─── 指示器 ───
      self.indicator = [[UIView alloc] initWithFrame:CGRectMake(0, 0, 24, 24)];
      self.indicator.layer.cornerRadius = 12;
+     self.indicator.backgroundColor = [UIColor whiteColor];
      self.indicator.layer.borderWidth = 2.5;
-     self.indicator.layer.borderColor = [UIColor whiteColor].CGColor;
+     self.indicator.layer.borderColor = [UIColor colorWithWhite:0.3 alpha:0.5].CGColor;
      self.indicator.layer.shadowColor = [UIColor blackColor].CGColor;
      self.indicator.layer.shadowOffset = CGSizeMake(0, 2);
      self.indicator.layer.shadowRadius = 3;
      self.indicator.layer.shadowOpacity = 0.4;
      self.indicator.userInteractionEnabled = NO;
      [self addSubview:self.indicator];
```

### WPHsvColorPickerController.m — setupConstraints (line 403)

```diff
- [self.sbView.heightAnchor constraintEqualToAnchor:self.sbView.widthAnchor],
+ [self.sbView.heightAnchor constraintEqualToAnchor:self.sbView.widthAnchor multiplier:0.7],
```

---

## 验证 checklist

| 步骤 | 预期 |
|------|------|
| 编译 | 无 warning |
| 打开颜色选择器 | 面板大小明显缩小，不再又大又方 |
| 查看面板左上区域 | 白色指示器清晰可见（即使背景是白色） |
| 查看面板右上区域 | 指示器在纯色背景上仍可见（灰边区分） |
| 查看面板底部 | 指示器在黑色背景上可见（白底区分） |
| 拖动指示器 | 正常响应，位置跟随手指 |
| 色相变化后 | 面板重新绘制，指示器位置正确 |