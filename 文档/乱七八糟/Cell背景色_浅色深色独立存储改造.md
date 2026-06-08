# Cell背景色 · 浅色/深色独立存储改造

## 现状

目前 `listCellBgColor` 只有一个值，浅色和深色模式共用同一种颜色。

```
PluginConfig                 Hook 读取
┌────────────────┐          ┌──────────────────┐
│ listCellBgColor │  ─────→ │ config.listCellBgColor  → 不论深浅都用同一色
│ = "#FFFFFF"     │          └──────────────────┘
└────────────────┘
```

## 改造目标

```
PluginConfig                       Hook 读取（根据 isDark 自动选择）
┌────────────────────────┐         ┌────────────────────────────────┐
│ listCellLightBgColor   │ ───→   │ isDark=NO → listCellLightBgColor │
│ listCellDarkBgColor    │ ───→   │ isDark=YES → listCellDarkBgColor  │
└────────────────────────┘         └────────────────────────────────┘
```

---

## 改动清单

| # | 文件 | 改动内容 | 行数 |
|---|------|---------|:----:|
| 1 | `PluginConfig.h` | 替换属性声明 | 3 行 |
| 2 | `PluginConfig.m` | 加载 + 保存 | 6 行 |
| 3 | `SettingListCornerRadiusController.m` | UI 行 + 颜色选择器调用 | ~20 行 |
| 4 | `ListCornerRadiusHook.m` | 4 处读取 | 4 行 |
| 5 | `ProfileCardBgHook.m` | 1 处读取 | 3 行 |

---

## 1. PluginConfig.h — 属性拆分

```diff
- @property (nonatomic, copy) NSString *listCellBgColor;
+ @property (nonatomic, copy) NSString *listCellLightBgColor;  // 浅色模式背景色
+ @property (nonatomic, copy) NSString *listCellDarkBgColor;   // 深色模式背景色
```

---

## 2. PluginConfig.m — 加载/保存

### 2.1 加载（`loadConfigFromDict:` 方法中，原 `listCellBgColor` 行）

```diff
- NSString *cbg = [d stringForKey:[kPluginPrefix stringByAppendingString:@"ListCellBgColor"]];
- _listCellBgColor = cbg.length > 0 ? cbg : @"#FFFFFF";
+ NSString *light = [d stringForKey:[kPluginPrefix stringByAppendingString:@"ListCellLightBgColor"]];
+ _listCellLightBgColor = light.length > 0 ? light : @"#FFFFFF";
+ NSString *dark = [d stringForKey:[kPluginPrefix stringByAppendingString:@"ListCellDarkBgColor"]];
+ _listCellDarkBgColor = dark.length > 0 ? dark : @"#1C1C1E";
```

### 2.2 保存（`saveDict` 方法中，原 `listCellBgColor` 行）

```diff
- if (_listCellBgColor) [d setObject:_listCellBgColor forKey:[kPluginPrefix stringByAppendingString:@"ListCellBgColor"]];
+ if (_listCellLightBgColor) [d setObject:_listCellLightBgColor forKey:[kPluginPrefix stringByAppendingString:@"ListCellLightBgColor"]];
+ if (_listCellDarkBgColor) [d setObject:_listCellDarkBgColor forKey:[kPluginPrefix stringByAppendingString:@"ListCellDarkBgColor"]];
```

### 默认值

| 场景 | 默认值 | 说明 |
|------|--------|------|
| 浅色模式 | `#FFFFFF` | 微信浅色模式默认 Cell 背景是白色 |
| 深色模式 | `#1C1C1E` | 微信深色模式默认 Cell 背景是系统深灰色 |

---

## 3. SettingListCornerRadiusController.m — UI + 颜色选择器

### 3.1 创建两个颜色行（代替原来的一行）

```diff
- pcy = [self addColorRowInGroup:paramGroup
-                        title:@"Cell背景色"
-                          key:@"listCellBgColor"
-                        value:cfg.listCellBgColor
-                           cy:pcy width:w];
+ // 浅色模式 Cell 背景色
+ pcy = [self addColorRowInGroup:paramGroup
+                        title:@"浅色模式背景色"
+                          key:@"listCellLightBgColor"
+                        value:cfg.listCellLightBgColor
+                           cy:pcy width:w];
+ pcy = [self addSeparatorInGroup:paramGroup cy:pcy width:w];
+ // 深色模式 Cell 背景色
+ pcy = [self addColorRowInGroup:paramGroup
+                        title:@"深色模式背景色"
+                          key:@"listCellDarkBgColor"
+                        value:cfg.listCellDarkBgColor
+                           cy:pcy width:w];
```

### 3.2 颜色选择器调用（改用双模式构造器）

```diff
- if ([key isEqualToString:@"listCellBgColor"]) {
+ if ([key isEqualToString:@"listCellLightBgColor"] ||
+     [key isEqualToString:@"listCellDarkBgColor"]) {
      PluginConfig *cfg = [PluginConfig shared];
-     NSString *hex = cfg.listCellBgColor;

      WPHsvColorPickerController *picker = [[WPHsvColorPickerController alloc]
-         initWithHex:hex ?: @"#FFFFFF"
-         callback:^(NSString *selectedHex) {
-             sender.backgroundColor = [WPColorUtil colorFromHexString:selectedHex];
-             cfg.listCellBgColor = selectedHex;
-             [cfg save];
-         }];
+         initWithLightHex:cfg.listCellLightBgColor
+                 darkHex:cfg.listCellDarkBgColor
+                callback:^(NSString *lightHex, NSString *darkHex) {
+             // 更新按钮颜色（当前编辑哪个模式就更新对应的按钮）
+             if ([key isEqualToString:@"listCellLightBgColor"]) {
+                 sender.backgroundColor = [WPColorUtil colorFromHexString:lightHex];
+             } else {
+                 sender.backgroundColor = [WPColorUtil colorFromHexString:darkHex];
+             }
+
+             // 保存两个值（用户在颜色选择器里可能同时编辑了浅色和深色）
+             if (lightHex) cfg.listCellLightBgColor = lightHex;
+             if (darkHex)  cfg.listCellDarkBgColor  = darkHex;
+             [cfg save];
+         }];

      UINavigationController *nav = [[UINavigationController alloc] initWithRootViewController:picker];
      [self presentViewController:nav animated:YES completion:nil];
      return;
  }
```

#### 行为说明

| 点击的按钮 | 颜色选择器默认模式 | 点击确认后 |
|-----------|-------------------|-----------|
| 浅色模式背景色 | Segmented control 停在"浅色" | 当前按钮变 `lightHex` 色，两个 hex 都保存 |
| 深色模式背景色 | Segmented control 停在"深色" | 当前按钮变 `darkHex` 色，两个 hex 都保存 |

用户可以在选择器内自由切换浅色/深色模式编辑，两个颜色都会保留。

---

## 4. ListCornerRadiusHook.m — 4 处读取

所有 4 处都是用 `config.listCellBgColor`，改为根据 `isDark` 读取对应的新属性。

### 替换公式（每处一样）

```diff
- UIColor *customBg = [config colorFromHex:config.listCellBgColor];
+ UIColor *customBg = isDark
+     ? [config colorFromHex:config.listCellDarkBgColor]
+     : [config colorFromHex:config.listCellLightBgColor];
```

### 4 处具体位置

| 行号 | 上下文 | `isDark` 变量是否已存在 |
|:----:|--------|:----------------------:|
| 201 | `((UIView *)self).backgroundColor = customBg` | ✅ 已定义 |
| 271 | `UIColr *targetBg =` | ✅ 已定义 |
| 297 | `UIColr *targetBg =` | ✅ 已定义 |
| 359 | `UIColr *targetBg =` | ✅ 已定义 |

每处上方 3-5 行都有现成的 `isDark` 判断代码，直接使用即可。

---

## 5. ProfileCardBgHook.m — 1 处读取

这里没有 `isDark` 检测，需要先加上。

### 改前

```objc
UIColor *bgColor = [config colorFromHex:config.listCellBgColor];
if (bgColor) {
    cell.backgroundColor = bgColor;
}
```

### 改后

```objc
BOOL isDark = NO;
if (@available(iOS 13.0, *)) {
    isDark = (cell.traitCollection.userInterfaceStyle == UIUserInterfaceStyleDark);
}
UIColor *bgColor = isDark
    ? [config colorFromHex:config.listCellDarkBgColor]
    : [config colorFromHex:config.listCellLightBgColor];
if (bgColor) {
    cell.backgroundColor = bgColor;
}
```

---

## 验证 checklist

| 步骤 | 预期 |
|------|------|
| 编译 | 无 warning/error |
| 设置页出现两行 | "浅色模式背景色" + "深色模式背景色"，各有一个颜色按钮 |
| 点击浅色行 | 弹出颜色选择器，默认显示浅色色值，segmented control 停在"浅色" |
| 点击深色行 | 弹出颜色选择器，默认显示深色色值，segmented control 停在"深色" |
| 在选择器中切换模式编辑 | 两个颜色值各自独立保存 |
| 确认返回设置页 | 对应按钮的颜色更新 |
| 切微信深色模式 | Cell 背景 = `listCellDarkBgColor` |
| 切微信浅色模式 | Cell 背景 = `listCellLightBgColor` |
| 卸载重装 | 默认值正确（浅色白、深色灰） |