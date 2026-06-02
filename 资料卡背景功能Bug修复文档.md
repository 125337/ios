# MioPlugin 资料卡背景功能 Bug 修复文档

> **更新日期**: 2026-06-02
> **当前状态**: 隐藏信息卡片已修复 ✅，卡片背景图仍然不显示 ❌
> **参考**: 微信优化反编译代码 (`123456.c`) 深度分析

---

## 1️⃣ 当前 Bug 现象

开启 `cardBgEnabled` 并设置了背景图后，资料卡上**看不到背景图效果**，卡片显示正常内容但没有背景图。

---

## 2️⃣ 根因分析

### 视图层级关系

```
MMTableViewCell (Cell)
 ├── UIImageView (tag=999901, 自定义背景图)  ← 添加到 Cell 层
 └── MMUIButton (卡片内容容器)                ← 微信原始内容
      ├── MMHeadImageView (头像)
      ├── MMCPLabel / MMUILabel (文字)
      └── 其他子视图
```

### 🔴 根因：MMUIButton 的不透明背景色完全遮挡了背景图

当前代码执行流程（`cardBgEnabled=YES, cardBgHidden=NO`）：

**Cell Hook**（[第358-512行](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m#L358-512)）：
1. ✅ 创建 `bgImageView`，添加到 Cell
2. ✅ 计算 frame，设置图层位置
3. ✅ 异步加载图片
4. ✅ 设置 `cellViewCard.backgroundColor = [UIColor clearColor]`（第445行）
5. ✅ 设置 `cellViewCard.layer.masksToBounds = NO`（第387行）

**MMUIButton Hook**（[第175-333行](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m#L175-333)）：
1. ✅ 进入资料卡处理分支
2. ❌ **第309-315行**：设置 `backgroundColor = cardBg`（不透明颜色）
3. ❌ **第320-322行**：调用 `wp_applyProfileCardCorner`，再次设置不透明背景色
4. ❌ **第328-329行**：设置 `masksToBounds = YES`

**结果**：MMUIButton 的不透明背景色完全遮挡了 Cell 层的背景图。

```
用户视角：
 ┌─────────────────────────────────┐
 │ MMUIButton (不透明背景色)        │ ← 完全遮挡了下面的背景图
 │  ├── 头像                       │
 │  ├── 昵称                       │
 │  └── 微信号                     │
 │                                 │
 │  (背景图在 MMUIButton 下面，     │
 │   被不透明背景色完全遮住)         │
 └─────────────────────────────────┘
```

### 微信优化如何解决此问题

微信优化的 MMUIButton Hook (`FUN_0000d898`) 中，**背景色只在非 HideCard 时设置**，且设置的是**半透明渐变色**（通过 `FUN_0000e02c` 获取的 `colorWithDynamicProvider:` 颜色），不是完全不透明的纯色。

更重要的是，微信优化的**背景图是添加在 MMUIButton 之上**（`insertSubview:atIndex:0` = 最顶层），或者**在 MMUIButton 之下但在 Cell 内**（`insertSubview:belowSubview:`），通过图层位置控制可见性。

而 MioPlugin 的背景图添加在 **Cell 层**，但 MMUIButton 的不透明背景色覆盖了它。

---

## 3️⃣ 修复方案

### 方案：在 cardBgEnabled 时，MMUIButton 设置半透明背景色

当 `cardBgEnabled=YES` 且 `cardBgHidden=NO` 时，MMUIButton 的背景色应该设置为**半透明**，让 Cell 层的背景图可以透过来显示。

修改 `replaced_MMUIButton_layoutSubviews` 中第 308-315 行：

**当前代码**：
```objc
// ★ 资料卡背景功能：非 HideCard 时设置卡片背景色
if (config.cardBgEnabled) {
    UIColor *cardBg = [config colorFromHex:isDark
        ? config.listCardDarkBgColor : config.listCardLightBgColor];
    if (cardBg) {
        ((UIView *)self).backgroundColor = cardBg;
    }
}
```

**问题**：`cardBg` 是完全不透明的颜色，遮住了背景图。

**修复后**：
```objc
// ★ 资料卡背景功能：有背景图时设置半透明背景色，无背景图时设置不透明背景色
if (config.cardBgEnabled) {
    NSString *imagePath = isDark ? config.cardBgDarkImagePath
                                 : config.cardBgLightImagePath;
    BOOL hasBgImage = (imagePath.length > 0);

    if (!hasBgImage) {
        // 无背景图：检查文件系统是否有图片文件
        NSString *bgDir = [ListCornerRadiusHook wp_cardBackgroundDirectory];
        NSFileManager *fm = [NSFileManager defaultManager];
        NSString *gifPath = [bgDir stringByAppendingPathComponent:
            isDark ? @"MioCardBgDark.gif" : @"MioCardBgLight.gif"];
        NSString *pngPath = [bgDir stringByAppendingPathComponent:
            isDark ? @"MioCardBgDark.png" : @"MioCardBgLight.png"];
        hasBgImage = [fm fileExistsAtPath:gifPath] || [fm fileExistsAtPath:pngPath];
    }

    if (hasBgImage) {
        // ★ 有背景图：设置半透明背景色，让背景图可以透过来
        ((UIView *)self).backgroundColor = [UIColor clearColor];
    } else {
        // ★ 无背景图：设置不透明背景色作为降级方案
        UIColor *cardBg = [config colorFromHex:isDark
            ? config.listCardDarkBgColor : config.listCardLightBgColor];
        if (cardBg) {
            ((UIView *)self).backgroundColor = cardBg;
        }
    }
}
```

### 同时需要修改 `wp_applyProfileCardCorner`

当前 `wp_applyProfileCardCorner`（[第895-928行](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m#L895-928)）也会设置不透明背景色：

```objc
+ (void)wp_applyProfileCardCorner:(UIView *)cell
                      cornerRadius:(NSInteger)radius
                           isDark:(BOOL)isDark {
    PluginConfig *config = [PluginConfig shared];

    cell.layer.cornerRadius = radius;
    cell.layer.masksToBounds = YES;

    UIColor *cardBg = [config colorFromHex:isDark
        ? config.listCardDarkBgColor : config.listCardLightBgColor];
    if (cardBg) {
        cell.backgroundColor = cardBg;   // ← ❌ 不透明背景色
    }
    // ...
}
```

需要修改为在有背景图时不设置背景色：

```objc
+ (void)wp_applyProfileCardCorner:(UIView *)cell
                      cornerRadius:(NSInteger)radius
                           isDark:(BOOL)isDark {
    PluginConfig *config = [PluginConfig shared];

    cell.layer.cornerRadius = radius;
    cell.layer.masksToBounds = YES;

    // ★ 有背景图时不设置不透明背景色，避免遮挡背景图
    if (!config.cardBgEnabled) {
        UIColor *cardBg = [config colorFromHex:isDark
            ? config.listCardDarkBgColor : config.listCardLightBgColor];
        if (cardBg) {
            cell.backgroundColor = cardBg;
        }
    }

    if (config.listProfileCardBorderEnabled) {
        CGFloat bw = config.listProfileCardBorderWidth;
        if (bw <= 0) bw = 2.0;

        UIColor *borderColor = [config colorFromHex:isDark
            ? config.listProfileCardBorderDarkColor
            : config.listProfileCardBorderLightColor];
        if (!borderColor) {
            borderColor = isDark
                ? [UIColor colorWithRed:0.25 green:0.25 blue:0.25 alpha:1.0]
                : [UIColor colorWithRed:0.9 green:0.9 blue:0.9 alpha:1.0];
        }

        cell.layer.borderWidth = bw;
        cell.layer.borderColor = borderColor.CGColor;
    } else {
        cell.layer.borderWidth = 0;
        cell.layer.borderColor = nil;
    }
}
```

---

## 4️⃣ 完整修复代码

### 4.1 修改 `replaced_MMUIButton_layoutSubviews` 第 308-315 行

将：
```objc
    // ★ 资料卡背景功能：非 HideCard 时设置卡片背景色
    if (config.cardBgEnabled) {
        UIColor *cardBg = [config colorFromHex:isDark
            ? config.listCardDarkBgColor : config.listCardLightBgColor];
        if (cardBg) {
            ((UIView *)self).backgroundColor = cardBg;
        }
    }
```

替换为：
```objc
    // ★ 资料卡背景功能：有背景图时用透明背景，无背景图时用不透明背景
    if (config.cardBgEnabled) {
        NSString *imagePath = isDark ? config.cardBgDarkImagePath
                                     : config.cardBgLightImagePath;
        BOOL hasBgImage = (imagePath.length > 0);

        if (!hasBgImage) {
            NSString *bgDir = [ListCornerRadiusHook wp_cardBackgroundDirectory];
            NSFileManager *fm = [NSFileManager defaultManager];
            NSString *gifPath = [bgDir stringByAppendingPathComponent:
                isDark ? @"MioCardBgDark.gif" : @"MioCardBgLight.gif"];
            NSString *pngPath = [bgDir stringByAppendingPathComponent:
                isDark ? @"MioCardBgDark.png" : @"MioCardBgLight.png"];
            hasBgImage = [fm fileExistsAtPath:gifPath] || [fm fileExistsAtPath:pngPath];
        }

        if (hasBgImage) {
            ((UIView *)self).backgroundColor = [UIColor clearColor];
        } else {
            UIColor *cardBg = [config colorFromHex:isDark
                ? config.listCardDarkBgColor : config.listCardLightBgColor];
            if (cardBg) {
                ((UIView *)self).backgroundColor = cardBg;
            }
        }
    }
```

### 4.2 修改 `wp_applyProfileCardCorner:` 方法

将 [第895-928行](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m#L895-928) 替换为：

```objc
+ (void)wp_applyProfileCardCorner:(UIView *)cell
                      cornerRadius:(NSInteger)radius
                           isDark:(BOOL)isDark {
    PluginConfig *config = [PluginConfig shared];

    cell.layer.cornerRadius = radius;
    cell.layer.masksToBounds = YES;

    // ★ cardBgEnabled 时不设置不透明背景色，避免遮挡 Cell 层的背景图
    if (!config.cardBgEnabled) {
        UIColor *cardBg = [config colorFromHex:isDark
            ? config.listCardDarkBgColor : config.listCardLightBgColor];
        if (cardBg) {
            cell.backgroundColor = cardBg;
        }
    }

    if (config.listProfileCardBorderEnabled) {
        CGFloat bw = config.listProfileCardBorderWidth;
        if (bw <= 0) bw = 2.0;

        UIColor *borderColor = [config colorFromHex:isDark
            ? config.listProfileCardBorderDarkColor
            : config.listProfileCardBorderLightColor];
        if (!borderColor) {
            borderColor = isDark
                ? [UIColor colorWithRed:0.25 green:0.25 blue:0.25 alpha:1.0]
                : [UIColor colorWithRed:0.9 green:0.9 blue:0.9 alpha:1.0];
        }

        cell.layer.borderWidth = bw;
        cell.layer.borderColor = borderColor.CGColor;
    } else {
        cell.layer.borderWidth = 0;
        cell.layer.borderColor = nil;
    }
}
```

---

## 5️⃣ Bug 影响链路图

### 当前问题：背景图被 MMUIButton 不透明背景色遮挡

```
Cell Hook 执行
  ├─ 创建 bgImageView (tag=999901) ✅
  ├─ 添加到 Cell ✅
  ├─ 计算 frame ✅
  ├─ 异步加载图片 ✅
  ├─ Cell.backgroundColor = clearColor ✅
  └─ Cell.masksToBounds = NO ✅

MMUIButton Hook 执行
  ├─ backgroundColor = cardBg (不透明) ← ❌ 遮住了背景图
  ├─ wp_applyProfileCardCorner
  │   └─ backgroundColor = cardBg (不透明) ← ❌ 再次设置不透明色
  └─ masksToBounds = YES ← ❌ 裁剪了溢出内容

视图层级（从上到下）：
  MMUIButton (不透明背景色) ← 用户看到这个
   ├── 头像、文字等
  bgImageView (背景图) ← 被完全遮住，用户看不到
```

### 修复后的预期链路

```
Cell Hook 执行
  ├─ 创建 bgImageView ✅
  ├─ Cell.backgroundColor = clearColor ✅
  └─ Cell.masksToBounds = NO ✅

MMUIButton Hook 执行
  ├─ 有背景图 → backgroundColor = clearColor ★ 背景图可见
  ├─ 无背景图 → backgroundColor = cardBg ★ 降级方案
  ├─ wp_applyProfileCardCorner
  │   └─ cardBgEnabled → 不设置背景色 ★ 不遮挡
  └─ masksToBounds = YES ✅ 圆角生效

视图层级（从上到下）：
  MMUIButton (clearColor, 透明) ← 背景图可以透过来
   ├── 头像、文字等
  bgImageView (背景图) ← 用户可以看到背景图了 ✅
```

---

## 6️⃣ 修复优先级

| 优先级 | Bug | 影响 | 修复方式 |
|:------:|-----|------|---------|
| 🔴 P0 | MMUIButton 设置不透明背景色遮挡背景图 | 背景图完全不可见 | 有背景图时设 clearColor |
| 🔴 P0 | wp_applyProfileCardCorner 设置不透明背景色 | 同上 | cardBgEnabled 时跳过背景色设置 |

---

## 7️⃣ 验证步骤

1. **cardBgEnabled=YES, 有背景图, cardBgHidden=NO**：背景图可见，卡片内容正常显示在背景图之上
2. **cardBgEnabled=YES, 无背景图, cardBgHidden=NO**：显示配置的卡片背景色
3. **cardBgEnabled=YES, 有背景图, cardBgHidden=YES**：只显示背景图+渐变遮罩
4. **cardBgEnabled=YES, 图层=顶层**：背景图在内容之上
5. **cardBgEnabled=YES, 图层=底层**：背景图在内容之下
6. **深色/浅色模式切换**：背景图和颜色正确切换
7. **GIF 动图**：动画正常播放
8. **圆角功能**：圆角在背景图模式下正常显示
