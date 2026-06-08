# 颜色选择器 · 双 bug 修复文档

## Bug 1：名字颜色页 · 颜色列表项与开关 UI 重叠

### 症状

展开开关后，颜色预览行与上方的开关行发生视觉重叠。

```
┌──────────────────────────────┐
│ [开关] 启用聊天界面名称颜色    │  ← 开关行
├──────────────────────────────┤
│ 聊天名字颜色           ○ ○   │  ← 颜色行（与上方重叠）
│                              │
│ 聊天名字颜色           ○ ○   │  ← 实际渲染错位到这里
├──────────────────────────────┤
│ [开关] 启用聊天界面名称大小    │
└──────────────────────────────┘
```

### 根因分析

`addDualColorRowInGroup:` 内部使用 `[[PluginConfig shared] colorFromHex:darkHex]` 获取 UIColor 来设置按钮背景色。但如果 `darkHex` 或 `lightHex` 传入的值格式不兼容（例如 KVC 取值返回 `nil` 或类型不对），会导致 `colorFromHex:` 返回 `nil`，进而使用 `btnSize = 24` 计算位置时出现异常偏移。

**主要导致重叠的 3 种可能：**

| # | 原因 | 说明 |
|---|------|------|
| 1 | key 与属性名不匹配 | 如 `chatNameLightColor` 并不是 `PluginConfig` 的属性名（实际属性是 `senderTextColorHex`），`[cfg valueForKey:@"chatNameLightColor"]` 返回 `nil`，导致 `colorFromHex:nil` 返回 `nil`，按钮背景色不正常 |
| 2 | 按钮 `frame` 计算时正值 `kRowH` 未生效 | `btnSize = 24` 在 `cy + (kRowH - btnSize) / 2` 中，若 `kRowH` 未正确传递，按钮 y 坐标可能溢出 |
| 3 | `addDualColorRowInGroup` 与 `addMasterSwitchRowInGroup` 的 expand 容器坐标系统冲突 | expand 容器内 `ecy` 从 0 开始，但 `addDualColorRowInGroup` 使用 `w`（屏幕宽度）重新计算 `gw`，容器宽度为 `gw` 但内部元素用 `kCellHPadding` 做边距，重复叠加内边距导致按钮错位 |

### 修复方案

#### 方案 A：修正 `addDualColorRowInGroup:` 方法（推荐）

```objc
- (CGFloat)addDualColorRowInGroup:(UIView *)group
                            title:(NSString *)title
                         lightKey:(NSString *)lightKey
                          darkKey:(NSString *)darkKey
                         lightHex:(NSString *)lightHex
                          darkHex:(NSString *)darkHex
                                cy:(CGFloat)cy
                             width:(CGFloat)w {
    CGFloat gw = w - kPad * 2;
    CGFloat btnSize = 24;
    CGFloat gap = 8;

    // ★ 确保颜色值是有效字符串
    if (![lightHex isKindOfClass:[NSString class]]) lightHex = @"#FFFFFF";
    if (![darkHex isKindOfClass:[NSString class]]) darkHex = @"#1C1C1E";

    UIColor *lightColor = [WPColorUtil colorFromHexString:lightHex] ?: [UIColor whiteColor];
    UIColor *darkColor = [WPColorUtil colorFromHexString:darkHex] ?: [UIColor darkGrayColor];

    // ─── 标题 ───
    CGFloat titleWidth = gw - kCellHPadding - kCellHPadding - btnSize - gap - btnSize - 8; // 8=右侧留白
    UILabel *tl = [[UILabel alloc] initWithFrame:CGRectMake(kCellHPadding, cy + 4,
                                          titleWidth, kRowH - 8)];
    tl.text = title;
    tl.font = [UIFont systemFontOfSize:15];
    tl.textColor = WPT1();
    [group addSubview:tl];

    // ─── 深色按钮（右侧） ───
    UIButton *darkBtn = [WPColorPicker makeColorButtonWithColor:darkColor];
    CGFloat darkX = gw - kCellHPadding - btnSize - 4;  // 4=右侧留白
    darkBtn.frame = CGRectMake(darkX, cy + (kRowH - btnSize) / 2, btnSize, btnSize);
    objc_setAssociatedObject(darkBtn, "key", darkKey, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    [darkBtn addTarget:self action:@selector(colorButtonTapped:)
      forControlEvents:UIControlEventTouchUpInside];
    [group addSubview:darkBtn];

    // ─── 浅色按钮（深色按钮左边） ───
    UIButton *lightBtn = [WPColorPicker makeColorButtonWithColor:lightColor];
    lightBtn.frame = CGRectMake(darkX - gap - btnSize, darkBtn.frame.origin.y, btnSize, btnSize);
    objc_setAssociatedObject(lightBtn, "key", lightKey, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    [lightBtn addTarget:self action:@selector(colorButtonTapped:)
      forControlEvents:UIControlEventTouchUpInside];
    [group addSubview:lightBtn];

    return cy + kRowH;
}
```

**关键修复点：**

| 修复 | 改前 | 改后 |
|------|------|------|
| 颜色值校验 | 直接用 `[cfg valueForKey:key]` | 先 `isKindOfClass:[NSString class]]` 校验 |
| 颜色转换 | 用 `[PluginConfig shared] colorFromHex:` | 用 `WPColorUtil colorFromHexString:`（更稳定） |
| 标题宽度 | `gw - kCellHPadding - 56 - btnSize - gap` (少减一个 kCellHPadding) | `gw - 2*kCellHPadding - btnSize - gap - btnSize - 8` |
| 按钮 X 位置 | `gw - kCellHPadding - btnSize` (无右侧边距) | `gw - kCellHPadding - btnSize - 4` (加右侧留白) |

#### 方案 B：临时降级 — 如果修复后仍有问题

回到原始的两行布局，改用两次 `addColorRowInGroup:` 但不加中间的 `addSeparatorInGroup:`：

```objc
*ecy = [self addColorRowInGroup:expand title:@"浅色" key:@"chatNameLightColor"
                          value:config.senderTextColorHex cy:*ecy width:w];
// 不要分隔线
*ecy = [self addColorRowInGroup:expand title:@"深色" key:@"chatNameDarkColor"
                          value:config.senderTextColorDarkHex cy:*ecy width:w];
```

但这种方法会退回到旧的两行 UI，不推荐长期使用。

---

## Bug 2：圆角设置页 · 仍有浅色/深色两个列表项

### 症状

```
┌──────────────────────────────┐
│  圆角半径                    │
├──────────────────────────────┤
│  边框宽度                    │
├──────────────────────────────┤
│  浅色模式背景色          ○   │  ← 应该合并为一行
├──────────────────────────────┤
│  深色模式背景色          ○   │  ← 应该合并为一行
├──────────────────────────────┤
│  边框颜色               ○   │
└──────────────────────────────┘
```

### 根因

`SettingListCornerRadiusController.m` 中第 165-178 行仍然是两行 `addColorRowInGroup:` 调用，未替换为 `addDualColorRowInGroup:`。从代码看，用户还没进行这个替换。

### 修复方案

替换为双按钮单行：

```diff
- // 浅色模式 Cell 背景色
- pcy = [self addColorRowInGroup:paramGroup
-                          title:@"浅色模式背景色"
-                            key:@"listCellLightBgColor"
-                          value:cfg.listCellLightBgColor
-                             cy:pcy width:w];
- pcy = [self addSeparatorInGroup:paramGroup cy:pcy width:w];
- // 深色模式 Cell 背景色
- pcy = [self addColorRowInGroup:paramGroup
-                          title:@"深色模式背景色"
-                            key:@"listCellDarkBgColor"
-                          value:cfg.listCellDarkBgColor
-                             cy:pcy width:w];
- pcy = [self addSeparatorInGroup:paramGroup cy:pcy width:w];
+ // Cell 背景色（双预览）
+ pcy = [self addDualColorRowInGroup:paramGroup
+                              title:@"Cell背景色"
+                           lightKey:@"listCellLightBgColor"
+                            darkKey:@"listCellDarkBgColor"
+                           lightHex:cfg.listCellLightBgColor
+                            darkHex:cfg.listCellDarkBgColor
+                                  cy:pcy width:w];
+ pcy = [self addSeparatorInGroup:paramGroup cy:pcy width:w];
```

共替换 **6 行** 为 **3 行**。

---

## 改动清单

| 文件 | 改动 |
|------|------|
| `SettingCategoryController.m` | ~ 修正 `addDualColorRowInGroup:` 方法（颜色值校验 + 精确布局计算） |
| `SettingListCornerRadiusController.m` | ~ 替换两行 `addColorRowInGroup:` 为一行 `addDualColorRowInGroup:` |

---

## 验证

| 步骤 | 预期 |
|------|------|
| 打开名字颜色页 | 展开开关后，颜色行与开关行无重叠 |
| 切换开关 | 展开/收起动画正常，颜色行位置正确 |
| 打开列表圆角设置 | "Cell背景色" 为单行双按钮，无"浅色模式背景色"和"深色模式背景色"两行 |
| 点击双按钮 | 双模式颜色选择器正常弹出 |