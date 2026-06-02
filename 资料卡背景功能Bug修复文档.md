# MioPlugin 资料卡背景功能 Bug 修复文档

> **分析日期**: 2026-06-02
> **问题**: 隐藏信息卡片功能不生效、设置了背景图也没有效果
> **参考**: 微信优化反编译代码 (`123456.c`) 的实现方式

---

## 1️⃣ 问题根因分析

经过深度对比微信优化反编译代码与 MioPlugin 源码，发现 **3 个关键 Bug** 和 **2 个设计缺陷**。

---

## 2️⃣ Bug #1：MMUIButton Hook 覆盖了 Cell Hook 的 HideCard 和背景图效果（🔴 根因）

### 问题描述

微信的资料卡 Cell 视图层级如下：

```
MMTableViewCell (Cell 层)          ← Cell Hook 在这里处理
 └── MMUIButton (卡片内容容器)     ← MMUIButton Hook 在这里处理
      ├── MMHeadImageView (头像)
      ├── MMCPLabel / MMUILabel (文字)
      └── 其他子视图
```

**微信优化的做法**（正确）：
- **Cell Hook** (`FUN_00007b4c`)：负责背景图创建、frame 计算、图层排序、异步加载、HideCard 的 `setAlpha:0` + `setBorderWidth:0` + `setCornerRadius:0` + `setMasksToBounds:NO`
- **MMUIButton Hook** (`FUN_0000d898`)：负责圆角设置、边框绘制、HideCard 时设置背景色、非 HideCard 时设置渐变背景色

两个 Hook **协同工作**：
1. Cell Hook 先将 Cell 自身设为完全透明（alpha=0, borderWidth=0, cornerRadius=0, masksToBounds=NO）
2. MMUIButton Hook 再给 MMUIButton 设置圆角、背景色、边框

**MioPlugin 的做法**（错误）：

在 [ListCornerRadiusHook.m:175-289](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m#L175-289) 的 `replaced_MMUIButton_layoutSubviews` 中：

```objc
// 第 288 行
((UIView *)self).layer.masksToBounds = YES;  // ← 问题！
```

以及 [ListCornerRadiusHook.m:280-282](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m#L280-282)：

```objc
[ListCornerRadiusHook wp_applyProfileCardCorner:(UIView *)self
                                   cornerRadius:radius
                                        isDark:isDark];
```

`wp_applyProfileCardCorner` 方法（[第895-928行](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m#L895-928)）做了：

```objc
cell.layer.cornerRadius = radius;
cell.layer.masksToBounds = YES;    // ← 强制裁剪
cell.backgroundColor = cardBg;     // ← 覆盖了 Cell Hook 设置的 clearColor
```

**这导致了两个严重问题**：

1. **HideCard 不生效**：Cell Hook 设置了 `backgroundColor = clearColor`，但 MMUIButton Hook 又通过 `wp_applyProfileCardCorner` 把 MMUIButton 的背景色设为了不透明的 cardBg 色，遮住了背景图
2. **背景图不可见**：MMUIButton 的 `masksToBounds = YES` + 不透明背景色，完全遮挡了 Cell 层的背景 UIImageView

### 微信优化如何避免此问题

微信优化的 MMUIButton Hook (`FUN_0000d898`) 中有明确的条件判断：

```c
// 反编译代码第 9673-9681 行
auVar21 = FUN_000c3380(uVar4, extraout_x1_06, &cf_ProfileCardHideCard);
if ((auVar21._0_8_ & 1) == 0) {    // ← 只有 HideCard=NO 时才设置背景色
    FUN_0000e02c(uVar4, 1);          // 获取渐变色
    FUN_000ca840(lVar6, ...);         // 设置 MMUIButton 背景色
}

// 第 9682 行
if ((uVar1 & 1) == 0) {              // ← 只有 ContentMode != 3 时才设置圆角
    FUN_000cb180((double)lVar8);      // 设置圆角
    FUN_000cc8c0(1);                  // 设置 masksToBounds = YES
}
```

**关键逻辑**：
- **HideCard=YES 时**：跳过 MMUIButton 背景色设置，不遮挡背景图
- **ContentMode=3（特殊模式）时**：跳过圆角和 masksToBounds，让背景图全宽显示

### 修复方案

修改 `replaced_MMUIButton_layoutSubviews`，在处理资料卡时增加 HideCard 和背景图的条件判断：

```objc
// 修复位置：ListCornerRadiusHook.m 第 230-288 行
// 在 orig 调用之后，增加条件判断

if (_orig_MMUIButton_layoutSubviews) {
    ((void (*)(id, SEL))_orig_MMUIButton_layoutSubviews)(self, _cmd);
}

PluginConfig *config = [PluginConfig shared];

// ★ 新增：如果 cardBgEnabled 且 cardBgHidden，跳过背景色设置
if (config.cardBgEnabled && config.cardBgHidden) {
    // HideCard 模式：不设置 MMUIButton 背景色，让背景图可见
    ((UIView *)self).backgroundColor = [UIColor clearColor];
    ((UIView *)self).layer.masksToBounds = NO;
    return;
}

// ★ 新增：如果 cardBgEnabled 且 ContentMode==3，不设置 masksToBounds
BOOL shouldApplyCorner = YES;
if (config.cardBgEnabled && config.cardBgFillMode == 3) {
    shouldApplyCorner = NO;
}

// ★ 新增：如果 cardBgEnabled 且非 HideCard，使用渐变背景色
if (config.cardBgEnabled && !config.cardBgHidden) {
    BOOL isDark = NO;
    if (@available(iOS 13.0, *)) {
        isDark = (vc.traitCollection.userInterfaceStyle == UIUserInterfaceStyleDark);
    }
    UIColor *cardBg = [config colorFromHex:isDark
        ? config.listCardDarkBgColor : config.listCardLightBgColor];
    if (cardBg) {
        ((UIView *)self).backgroundColor = cardBg;
    }
}

if (shouldApplyCorner) {
    NSInteger radius = (NSInteger)config.listCellCornerRadius;
    if (radius == 0) radius = 18;

    [ListCornerRadiusHook wp_applyProfileCardCorner:(UIView *)self
                                       cornerRadius:radius
                                            isDark:isDark];
}

if (config.listHideRightQRCode) {
    [ListCornerRadiusHook wp_hideQRButtonInCell:(UIView *)self];
}

if (shouldApplyCorner) {
    ((UIView *)self).layer.masksToBounds = YES;
}
```

---

## 3️⃣ Bug #2：Cell Hook 中 HideCard 后未清理 Cell 自身的样式属性（🔴 根因）

### 问题描述

微信优化的 Cell Hook 在 HideCard 模式下，**先清理 Cell 自身的样式**，再隐藏子视图：

```c
// 反编译代码第 6506-6517 行
FUN_000caa60(0);    // setBorderWidth:0
FUN_000cb180(0);    // setCornerRadius:0
FUN_000cc8c0(0);    // setMasksToBounds:NO
```

同时在非 HideCard 模式下也做了同样的清理（第 6506-6517 行在 HideCard 分支之外）：

```c
// 这些操作在 HideCard 判断之后、背景图创建之前执行
FUN_000caa60(0);    // Cell 的 borderWidth = 0
FUN_000cb180(0);    // Cell 的 cornerRadius = 0
FUN_000cc8c0(0);    // Cell 的 masksToBounds = NO
```

**MioPlugin 的做法**：

在 [ListCornerRadiusHook.m:339-363](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m#L339-363) 中，HideCard 分支确实做了部分清理：

```objc
cellViewCard.backgroundColor = [UIColor clearColor];
cellViewCard.layer.borderWidth = 0;
cellViewCard.layer.cornerRadius = 0;
cellViewCard.layer.masksToBounds = NO;   // ← 这行是对的
```

但问题是：**这些清理只在 HideCard 分支中做了**。当 `cardBgEnabled=YES` 但 `cardBgHidden=NO` 时，Cell 的 `masksToBounds` 可能仍为 YES（由之前的 layoutSubviews 或其他 Hook 设置），导致背景图被裁剪。

更关键的是，微信优化在 **背景图创建之前** 就清理了 Cell 样式，而 MioPlugin 在 HideCard 分支中清理，但 **非 HideCard 时没有清理**。

### 修复方案

在 Cell Hook 的背景图处理流程中，**无论是否 HideCard，都清理 Cell 自身样式**：

```objc
// 修复位置：ListCornerRadiusHook.m 第 337 行之后（HideCard 分支结束后）
// 在背景图创建之前，统一清理 Cell 样式

// ★ 无论是否 HideCard，都清理 Cell 自身样式
cellViewCard.layer.borderWidth = 0;
cellViewCard.layer.cornerRadius = 0;
cellViewCard.layer.masksToBounds = NO;
if (!config.cardBgHidden) {
    // 非 HideCard 时也设置透明背景，让背景图可见
    // MMUIButton Hook 会负责设置 MMUIButton 的背景色
    cellViewCard.backgroundColor = [UIColor clearColor];
}
```

---

## 4️⃣ Bug #3：Cell Hook 调用 orig 的时机导致布局被覆盖（🟡 重要）

### 问题描述

**微信优化**的 Cell Hook 调用顺序：

```
Phase 0: 快速过滤
Phase 1: 高度调整
Phase 2: HideCard 处理
Phase 3: 清理 Cell 样式（alpha=0, borderWidth=0, cornerRadius=0, masksToBounds=NO）
Phase 4: 创建/复用背景 UIImageView
Phase 5: 计算 frame
Phase 6: 图层排序
Phase 7: 异步加载图片
Phase 8: 调用 orig ← 最后调用
```

**MioPlugin** 的 Cell Hook 调用顺序：

```
Phase 1: 高度调整
Phase 2: 间距调整
→ 调用 orig ← 中间调用！
Phase 3: HideCard 处理
Phase 4: 清理 ImageView
Phase 5: 创建背景 UIImageView
Phase 6: 计算 frame
Phase 7: 图层排序
Phase 8: 异步加载图片
```

**问题**：MioPlugin 在中间调用 orig，orig 执行后可能会重新布局子视图，覆盖掉之前的高度/间距调整。然后后续的 HideCard 和背景图处理虽然能工作，但 orig 造成的布局变化可能导致闪烁或尺寸不一致。

### 修复方案

将 orig 调用移到所有处理之后（与微信优化一致）：

```objc
// 修复位置：ListCornerRadiusHook.m 第 312-429 行
// 将 orig 调用从第 333 行移到第 428 行之前

// 原代码：
// if (_orig_MMTableViewCell_layoutSubviews) {
//     ((void (*)(id, SEL))_orig_MMTableViewCell_layoutSubviews)(self, _cmd);
// }
// ... 所有背景图处理 ...
// return;

// 修改为：
// ... 所有背景图处理 ...
if (_orig_MMTableViewCell_layoutSubviews) {
    ((void (*)(id, SEL))_orig_MMTableViewCell_layoutSubviews)(self, _cmd);
}
return;
```

**注意**：这个修改需要谨慎测试，因为 orig 的调用时机变化可能影响其他依赖 orig 先执行的逻辑。微信优化之所以能最后调 orig，是因为它使用了**链式 Hook**（Cell Hook → 高度修正中间层 → 原始实现），orig 的返回值不会覆盖之前的设置。

---

## 5️⃣ 设计缺陷 #1：背景图加载后 Cell 的 masksToBounds 被重新设置

### 问题描述

即使 Cell Hook 中设置了 `masksToBounds = NO`，由于 `layoutSubviews` 会被多次调用，且 MMUIButton Hook 会设置 `masksToBounds = YES`，背景图仍然会被裁剪。

微信优化的解决方案是 **分层控制**：
- Cell 层：`masksToBounds = NO`（不裁剪，让背景图可以溢出）
- MMUIButton 层：`masksToBounds = YES`（裁剪内容，圆角生效）

这样背景图在 Cell 层不受裁剪，而内容在 MMUIButton 层被圆角裁剪，两者互不干扰。

### 修复方案

确保 Cell Hook 中始终设置 `masksToBounds = NO`，圆角裁剪由 MMUIButton 层负责：

```objc
// Cell Hook 中（cardBgEnabled 分支）
cellViewCard.layer.masksToBounds = NO;  // Cell 不裁剪

// MMUIButton Hook 中
((UIView *)self).layer.masksToBounds = YES;  // MMUIButton 裁剪（圆角生效）
```

---

## 6️⃣ 设计缺陷 #2：背景图 frame 计算未考虑 MMUIButton 的偏移

### 问题描述

微信优化中，背景图的 frame 是基于 **Cell 的 bounds** 计算的，但背景图是添加到 **Cell** 上的。而 MMUIButton 在 Cell 内部有 margin 偏移（由圆角功能设置），所以背景图和 MMUIButton 的位置需要对齐。

微信优化通过 `FUN_00008e48` 计算偏移量，并在 `FUN_00008bbc`（异步帧更新）中重新计算 frame，确保背景图位置正确。

MioPlugin 的 frame 计算（[第386-416行](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m#L386-416)）：

```objc
CGRect bounds = cellViewCard.bounds;
CGFloat margin = config.listCellMargin;
if (margin <= 0) margin = 9;

CGFloat imgW = bounds.size.width;
CGFloat imgH = bounds.size.height;
CGFloat imgX = 0;
CGFloat imgY = 0;

if (config.listCornerRadiusEnabled && config.cardBgFillMode != 3) {
    imgW -= margin * 2;
    imgX = margin;
}
```

这个计算是正确的，但需要确保 **MMUIButton 的 frame 与背景图的 frame 一致**。当 MMUIButton Hook 修改了 MMUIButton 的 frame（添加 margin 偏移）时，背景图也需要相应的偏移。

### 修复方案

确保 MMUIButton Hook 中 MMUIButton 的 frame 调整与背景图 frame 计算使用相同的 margin 值。当前代码已经使用 `config.listCellMargin`，基本一致，但需要验证 MMUIButton Hook 中的 frame 调整逻辑。

---

## 7️⃣ 完整修复代码

### 7.1 修复 `replaced_MMUIButton_layoutSubviews`

**文件**: [ListCornerRadiusHook.m](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m#L175-289)

将第 230-288 行替换为：

```objc
    if (_orig_MMUIButton_layoutSubviews) {
        ((void (*)(id, SEL))_orig_MMUIButton_layoutSubviews)(self, _cmd);
    }

    PluginConfig *config = [PluginConfig shared];

    // ★ 资料卡背景功能：HideCard 模式下不设置 MMUIButton 背景色和圆角
    if (config.cardBgEnabled && config.cardBgHidden) {
        ((UIView *)self).backgroundColor = [UIColor clearColor];
        ((UIView *)self).layer.masksToBounds = NO;
        ((UIView *)self).layer.cornerRadius = 0;
        ((UIView *)self).layer.borderWidth = 0;
        if (config.listHideRightQRCode) {
            [ListCornerRadiusHook wp_hideQRButtonInCell:(UIView *)self];
        }
        return;
    }

    // ★ 资料卡背景功能：ContentMode==3 时不设置 masksToBounds（全宽模式）
    BOOL skipMasksToBounds = NO;
    if (config.cardBgEnabled && config.cardBgFillMode == 3) {
        skipMasksToBounds = YES;
    }

    CGFloat margin = config.listCellMargin;

    NSMutableArray *labelFrames = nil;
    if (margin > 0) {
        labelFrames = [NSMutableArray array];
        for (UIView *sub in ((UIView *)self).subviews) {
            if ([sub isKindOfClass:[UILabel class]]) {
                [labelFrames addObject:[NSValue valueWithCGRect:sub.frame]];
            }
        }
    }

    if (margin > 0) {
        UIView *cell = ((UIView *)self).superview;
        if (cell) {
            CGFloat containerW = cell.superview ? cell.superview.bounds.size.width
                                                : [UIScreen mainScreen].bounds.size.width;
            CGFloat targetW = containerW - 2.0 * margin;
            CGFloat currentH = ((UIView *)self).frame.size.height;
            ((UIView *)self).frame = CGRectMake(margin, 0, targetW, currentH);
        }
    }

    if (margin > 0 && labelFrames.count > 0) {
        NSInteger idx = 0;
        for (UIView *sub in ((UIView *)self).subviews) {
            if ([sub isKindOfClass:[UILabel class]] && idx < labelFrames.count) {
                CGRect originalFrame = [labelFrames[idx] CGRectValue];
                CGRect newFrame = originalFrame;
                newFrame.size.width = originalFrame.size.width - 2.0 * margin;
                if (newFrame.size.width > 0) {
                    sub.frame = newFrame;
                    [(UILabel *)sub sizeToFit];
                }
                idx++;
            }
        }
    }

    BOOL isDark = NO;
    if (@available(iOS 13.0, *)) {
        isDark = (vc.traitCollection.userInterfaceStyle == UIUserInterfaceStyleDark);
    }

    // ★ 资料卡背景功能：非 HideCard 时设置卡片背景色
    if (config.cardBgEnabled) {
        UIColor *cardBg = [config colorFromHex:isDark
            ? config.listCardDarkBgColor : config.listCardLightBgColor];
        if (cardBg) {
            ((UIView *)self).backgroundColor = cardBg;
        }
    }

    NSInteger radius = (NSInteger)config.listCellCornerRadius;
    if (radius == 0) radius = 18;

    [ListCornerRadiusHook wp_applyProfileCardCorner:(UIView *)self
                                       cornerRadius:radius
                                            isDark:isDark];

    if (config.listHideRightQRCode) {
        [ListCornerRadiusHook wp_hideQRButtonInCell:(UIView *)self];
    }

    if (!skipMasksToBounds) {
        ((UIView *)self).layer.masksToBounds = YES;
    } else {
        ((UIView *)self).layer.masksToBounds = NO;
    }
```

### 7.2 修复 `replaced_MMTableViewCell_layoutSubviews` 中的 Cell 样式清理

**文件**: [ListCornerRadiusHook.m](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m#L312-429)

在第 336 行（`BOOL isDark = ...` 之后）添加 Cell 样式清理：

```objc
        BOOL isDark = [ListCornerRadiusHook wp_isCurrentDarkMode];

        // ★ 无论是否 HideCard，都清理 Cell 自身样式
        // 让 Cell 完全透明，背景图和圆角由 MMUIButton 层控制
        cellViewCard.layer.borderWidth = 0;
        cellViewCard.layer.cornerRadius = 0;
        cellViewCard.layer.masksToBounds = NO;

        if (config.cardBgHidden) {
            // HideCard 模式：隐藏所有非背景图内容
            for (UIView *sub in cellViewCard.subviews) {
                if (![sub isKindOfClass:[UIImageView class]]) {
                    sub.hidden = YES;
                } else {
                    UIImageView *iv = (UIImageView *)sub;
                    if (iv.tag != kBgImageTagCard) {
                        iv.hidden = YES;
                    }
                }
            }
            cellViewCard.backgroundColor = [UIColor clearColor];

            // ★ HideCard 时也清理 MMUIButton 的样式
            for (UIView *sub in cellViewCard.subviews) {
                if ([sub isKindOfClass:NSClassFromString(@"MMUIButton")]) {
                    sub.backgroundColor = [UIColor clearColor];
                    sub.layer.cornerRadius = 0;
                    sub.layer.borderWidth = 0;
                    sub.layer.masksToBounds = NO;
                }
            }

            UIColor *hideColor = [config colorFromHex:isDark
                ? config.listCardDarkBgColor : config.listCardLightBgColor];
            if (hideColor) {
                for (UIView *sub in cellViewCard.subviews) {
                    if (sub.tag != kBgImageTagCard) {
                        sub.backgroundColor = hideColor;
                    }
                }
            }
        } else {
            // ★ 非 HideCard 时也设置透明背景
            cellViewCard.backgroundColor = [UIColor clearColor];
        }
```

### 7.3 修复 HideCard 分支中 MMUIButton 的 hidden 处理

当前 HideCard 逻辑隐藏了所有非 UIImageView 的子视图，但 **MMUIButton 本身也是 UIView（不是 UIImageView）**，所以它会被 hidden。然而 MMUIButton 内部包含了头像和文字，如果 MMUIButton 被 hidden，那背景图之上的渐变遮罩也不会显示。

微信优化的做法是：**不隐藏 MMUIButton**，而是给 MMUIButton 的子视图设置渐变背景色作为遮罩。

修复 HideCard 逻辑，排除 MMUIButton：

```objc
        if (config.cardBgHidden) {
            for (UIView *sub in cellViewCard.subviews) {
                // ★ 不隐藏 MMUIButton（它是内容容器，需要显示渐变遮罩）
                if (![sub isKindOfClass:[UIImageView class]] &&
                    ![sub isKindOfClass:NSClassFromString(@"MMUIButton")]) {
                    sub.hidden = YES;
                } else if ([sub isKindOfClass:[UIImageView class]]) {
                    UIImageView *iv = (UIImageView *)sub;
                    if (iv.tag != kBgImageTagCard) {
                        iv.hidden = YES;
                    }
                }
            }
            cellViewCard.backgroundColor = [UIColor clearColor];

            // MMUIButton 设置为透明，但保留其子视图用于渐变遮罩
            for (UIView *sub in cellViewCard.subviews) {
                if ([sub isKindOfClass:NSClassFromString(@"MMUIButton")]) {
                    sub.backgroundColor = [UIColor clearColor];
                    sub.layer.cornerRadius = 0;
                    sub.layer.borderWidth = 0;
                    sub.layer.masksToBounds = NO;
                    // 给 MMUIButton 的子视图设置渐变色作为遮罩
                    UIColor *hideColor = [config colorFromHex:isDark
                        ? config.listCardDarkBgColor : config.listCardLightBgColor];
                    if (hideColor) {
                        for (UIView *btnSub in sub.subviews) {
                            btnSub.backgroundColor = hideColor;
                        }
                    }
                }
            }
        }
```

---

## 8️⃣ Bug 影响链路图

```
用户开启 cardBgEnabled
  │
  ├─ Cell Hook 执行
  │   ├─ 设置 Cell backgroundColor = clearColor ✅
  │   ├─ 创建背景 UIImageView ✅
  │   ├─ 计算 frame ✅
  │   └─ 异步加载图片 ✅
  │
  └─ MMUIButton Hook 执行 ← 问题出在这里！
      ├─ wp_applyProfileCardCorner
      │   ├─ backgroundColor = cardBg (不透明) ← ❌ 遮住了背景图
      │   ├─ cornerRadius = 18 ← ❌ 可能裁剪背景图
      │   └─ masksToBounds = YES ← ❌ 裁剪了背景图
      └─ layer.masksToBounds = YES ← ❌ 再次确认裁剪

结果：背景图被 MMUIButton 的不透明背景色完全遮挡
```

```
用户开启 cardBgHidden
  │
  ├─ Cell Hook 执行
  │   ├─ 隐藏非 UIImageView 子视图
  │   │   └─ MMUIButton 也被 hidden ← ❌ 渐变遮罩无法显示
  │   ├─ 设置 Cell backgroundColor = clearColor ✅
  │   └─ 创建背景图 ✅
  │
  └─ MMUIButton Hook 执行
      ├─ wp_applyProfileCardCorner
      │   └─ backgroundColor = cardBg ← ❌ MMUIButton 虽然 hidden，
      │                               但如果后续 layoutSubviews 取消 hidden，
      │                               不透明背景色又会遮住背景图
      └─ masksToBounds = YES ← ❌

结果：HideCard 模式下背景图可能可见，但渐变遮罩不显示；
      或者 MMUIButton 的背景色遮挡了背景图
```

---

## 9️⃣ 修复优先级

| 优先级 | Bug | 影响 | 修复难度 |
|:------:|-----|------|:--------:|
| 🔴 P0 | MMUIButton Hook 覆盖背景图效果 | 背景图完全不可见 | 中 |
| 🔴 P0 | HideCard 时 MMUIButton 处理不当 | 隐藏功能不生效 | 中 |
| 🟡 P1 | Cell 样式清理不完整 | 非 HideCard 时背景图可能被裁剪 | 低 |
| 🟢 P2 | orig 调用时机 | 可能布局闪烁 | 高（需谨慎） |

---

## 🔟 验证步骤

修复后需要验证以下场景：

1. **cardBgEnabled=YES, cardBgHidden=NO**：背景图可见，卡片内容正常显示
2. **cardBgEnabled=YES, cardBgHidden=YES**：只显示背景图+渐变遮罩，卡片内容隐藏
3. **cardBgEnabled=YES, FillMode=3**：背景图全宽显示，不受 margin 影响
4. **cardBgEnabled=YES, 圆角开启**：背景图与圆角区域对齐
5. **cardBgEnabled=YES, 圆角关闭**：背景图全宽显示
6. **cardBgEnabled=YES, 图层=顶层**：背景图在内容之上
7. **cardBgEnabled=YES, 图层=底层**：背景图在内容之下
8. **深色/浅色模式切换**：背景图和颜色正确切换
9. **GIF 动图**：动画正常播放
10. **边框功能**：边框在背景图模式下正常显示
