# Cell背景色 · 单行双按钮改造

## 目标

保持设置页只有一行 **"Cell背景色"**，用一个标题 + **两个颜色按钮** 同时展示浅色和深色。

### UI 对比

```
❌ 之前（两行）                          ✅ 现在（单行双按钮）
                                     ┌─────────────────────┐
┌─────────────────────┐              │ Cell背景色       ○ ○ │
│ 浅色模式背景色    ○  │              │                 浅 深 │
├─────────────────────┤              └─────────────────────┘
│ 深色模式背景色    ○  │              
└─────────────────────┘              
```

左按钮 = 浅色（关联 `listCellLightBgColor`），右按钮 = 深色（关联 `listCellDarkBgColor`），按钮下方有小字标注。

---

## 改动文件

只有 **`SettingListCornerRadiusController.m`** 的 UI 构建部分，其他文件和之前一样。

---

## 实现方式

将原来 `addColorRowInGroup:` 的单行调用，替换为手动创建 **标题 + 两个按钮**。

### 替换前

```objc
pcy = [self addColorRowInGroup:paramGroup
                         title:@"Cell背景色"
                           key:@"listCellBgColor"
                         value:cfg.listCellBgColor
                            cy:pcy width:w];
```

### 替换后

```objc
// ─── Cell背景色（浅色+深色双按钮） ───
pcy = [self addDualColorRowInGroup:paramGroup
                             title:@"Cell背景色"
                         lightHex:cfg.listCellLightBgColor
                          darkHex:cfg.listCellDarkBgColor
                                cy:pcy width:w] + kRowH;
```

---

## 新增辅助方法

在 `SettingListCornerRadiusController.m` 的 `@implementation` 中添加：

```objc
/// 创建带双颜色按钮的行
/// @param group  父 view
/// @param title  行标题
/// @param lightHex  浅色 hex
/// @param darkHex   深色 hex
/// @param cy    当前 y
/// @param w     屏幕宽
/// @return 底部的 y
- (CGFloat)addDualColorRowInGroup:(UIView *)group
                            title:(NSString *)title
                        lightHex:(NSString *)lightHex
                         darkHex:(NSString *)darkHex
                               cy:(CGFloat)cy
                            width:(CGFloat)w {
    CGFloat gw = w - kPad * 2;
    CGFloat btnSize = 24;  // 比单按钮(30)小一点，两个并排不拥挤
    CGFloat gap = 8;

    // ─── 标题 ───
    UILabel *tl = [[UILabel alloc] initWithFrame:CGRectMake(kCellHPadding, cy + 4,
                                          gw - kCellHPadding - 56 - btnSize - gap, kRowH - 8)];
    tl.text = title;
    tl.font = [UIFont systemFontOfSize:15];
    tl.textColor = WPT1();
    [group addSubview:tl];

    // ─── 深色按钮（右侧） ───
    UIColor *darkColor = [[PluginConfig shared] colorFromHex:darkHex] ?: [UIColor darkGrayColor];
    UIButton *darkBtn = [WPColorPicker makeColorButtonWithColor:darkColor];
    darkBtn.frame = CGRectMake(gw - kCellHPadding - btnSize,
                               cy + (kRowH - btnSize) / 2,
                               btnSize, btnSize);
    objc_setAssociatedObject(darkBtn, "key", @"listCellDarkBgColor",
                             OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    [darkBtn addTarget:self action:@selector(colorButtonTapped:)
      forControlEvents:UIControlEventTouchUpInside];
    [group addSubview:darkBtn];

    // ─── "深" 小字标注 ───
    UILabel *darkLabel = [[UILabel alloc] initWithFrame:CGRectMake(
        darkBtn.frame.origin.x,
        CGRectGetMaxY(darkBtn.frame) + 1,
        btnSize, 12)];
    darkLabel.text = @"深";
    darkLabel.font = [UIFont systemFontOfSize:9];
    darkLabel.textColor = WPT3();
    darkLabel.textAlignment = NSTextAlignmentCenter;
    [group addSubview:darkLabel];

    // ─── 浅色按钮（深色按钮左边） ───
    UIColor *lightColor = [[PluginConfig shared] colorFromHex:lightHex] ?: [UIColor whiteColor];
    UIButton *lightBtn = [WPColorPicker makeColorButtonWithColor:lightColor];
    lightBtn.frame = CGRectMake(darkBtn.frame.origin.x - gap - btnSize,
                                darkBtn.frame.origin.y,
                                btnSize, btnSize);
    objc_setAssociatedObject(lightBtn, "key", @"listCellLightBgColor",
                             OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    [lightBtn addTarget:self action:@selector(colorButtonTapped:)
      forControlEvents:UIControlEventTouchUpInside];
    [group addSubview:lightBtn];

    // ─── "浅" 小字标注 ───
    UILabel *lightLabel = [[UILabel alloc] initWithFrame:CGRectMake(
        lightBtn.frame.origin.x,
        CGRectGetMaxY(lightBtn.frame) + 1,
        btnSize, 12)];
    lightLabel.text = @"浅";
    lightLabel.font = [UIFont systemFontOfSize:9];
    lightLabel.textColor = WPT3();
    lightLabel.textAlignment = NSTextAlignmentCenter;
    [group addSubview:lightLabel];

    return cy + kRowH;
}
```

---

## 效果

```
┌───────────────────────────────────────┐
│  列表圆角设置                          │
│  ┌─────────────────────────────────┐  │
│  │ 列表项开关                       │  │
│  ├─────────────────────────────────┤  │
│  │ 圆角半径    ════════ ○          │  │
│  ├─────────────────────────────────┤  │
│  │ 边框宽度    2.0      ▶          │  │
│  ├─────────────────────────────────┤  │
│  │ Cell背景色            ○ ○       │  │  ← 一行两个按钮
│  │                      浅 深       │  │  ← 小字标注
│  ├─────────────────────────────────┤  │
│  │ 边框颜色              ○          │  │
│  └─────────────────────────────────┘  │
└───────────────────────────────────────┘
```

---

## 颜色选择器处理

`colorButtonTapped:` 中的代码和之前一致，无需改动：

```objc
if ([key isEqualToString:@"listCellLightBgColor"] ||
    [key isEqualToString:@"listCellDarkBgColor"]) {
    PluginConfig *cfg = [PluginConfig shared];
    WPHsvColorPickerController *picker = [[WPHsvColorPickerController alloc]
        initWithLightHex:cfg.listCellLightBgColor
                darkHex:cfg.listCellDarkBgColor
               callback:^(NSString *lightHex, NSString *darkHex) {
            // 更新按钮颜色（当前编辑哪个就更新哪个）
            if ([key isEqualToString:@"listCellLightBgColor"]) {
                sender.backgroundColor = [WPColorUtil colorFromHexString:lightHex];
            } else {
                sender.backgroundColor = [WPColorUtil colorFromHexString:darkHex];
            }
            // 保存两个值
            if (lightHex) cfg.listCellLightBgColor = lightHex;
            if (darkHex)  cfg.listCellDarkBgColor  = darkHex;
            [cfg save];
        }];
    UINavigationController *nav = [[UINavigationController alloc] initWithRootViewController:picker];
    [self presentViewController:nav animated:YES completion:nil];
    return;
}
```

---

## 其他文件的改动不受影响

| 文件 | 改动（不变） |
|------|-------------|
| `PluginConfig.h` | `listCellBgColor` → `listCellLightBgColor` + `listCellDarkBgColor` |
| `PluginConfig.m` | 加载/保存各改 2 行 |
| `ListCornerRadiusHook.m` | 4 处读取改为三元表达式 |
| `ProfileCardBgHook.m` | 加 `isDark` + 三元表达式 |

唯一变化的是 `SettingListCornerRadiusController.m` — 从**两行**改成**一行双按钮**。其他文件改动完全不变。

---

## 验证

| 步骤 | 预期 |
|------|------|
| 设置页显示一行 | "Cell背景色" 标题右侧有两个小圆色块（左浅右深） |
| 色块下方有标注 | 左按钮下方"浅"，右按钮下方"深" |
| 点击左按钮 | 弹出颜色选择器，默认编辑浅色模式 |
| 点击右按钮 | 弹出颜色选择器，默认编辑深色模式 |
| 确认后 | 对应按钮颜色更新 |
| 切微信深浅模式 | Cell 背景跟随对应的颜色值 |