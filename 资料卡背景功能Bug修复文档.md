# MioPlugin 资料卡背景功能 Bug 修复文档

> **更新日期**: 2026-06-02
> **当前问题**: 开启隐藏信息卡片后显示微信原始卡片，没有真正隐藏
> **参考**: 微信优化反编译代码 (`123456.c`) 深度分析

---

## 1️⃣ 当前 Bug 现象

开启 `cardBgHidden`（隐藏信息卡片）后，资料卡**显示微信原始卡片样式**，内容（头像、昵称等）全部可见，没有被隐藏。

---

## 2️⃣ 根因分析：微信优化 HideCard 的真实实现

### 微信优化的 Cell Hook (`FUN_00007b4c`) 中 HideCard 的完整逻辑

反编译代码第 6347-6436 行，还原为 ObjC 伪代码：

```objc
// Cell Hook 中，检测到 HideCard=YES 时的处理
if (ProfileCardHideCard) {
    // ★ 关键步骤 1：设置 Cell 自身背景色为 clearColor
    [self setBackgroundColor:[UIColor clearColor]];   // FUN_000ca840(param_5, ..., clearColor)

    // ★ 关键步骤 2：获取动态渐变色，设置到 Cell 的 superview（layer）
    UIColor *gradient = [self.layer backgroundColor];  // FUN_000c71e0 + FUN_000c2380
    [self.layer setBackgroundColor:gradient];           // FUN_000ca840

    // ★ 关键步骤 3：遍历 Cell 的 subviews
    for (UIView *sub in self.subviews) {
        // 如果 subview 的宽度接近 Cell 宽度（-10pt 容差）且高度接近 Cell 高度
        if (sub.frame.size.width + 10 >= self.frame.size.width &&
            sub.frame.size.height + 10 >= self.frame.size.height) {

            // ★★★ 这是 MMUIButton（大尺寸子视图）★★★
            // 检查它是否有 m_bgImageView 实例变量
            Ivar bgIvar = class_getInstanceVariable([sub class], "m_bgImageView");
            if (bgIvar) {
                // ★ 关键步骤 4：将 MMUIButton 的 m_bgImageView 设为 nil
                // 这会清除微信原始的头像背景图！
                object_setIvar(sub, bgIvar, nil);   // FUN_000c83c0(..., 0)

                // ★ 关键步骤 5：获取 MMUIButton 的 frame
                CGRect btnFrame = sub.frame;         // FUN_000c58c0 + FUN_000c35e0

                // ★ 关键步骤 6：再次检查尺寸（确认是资料卡 MMUIButton）
                if (btnFrame.size.width + 10 >= self.frame.size.width &&
                    btnFrame.size.height + 10 >= self.frame.size.height) {

                    // ★ 关键步骤 7：检查 MMUIButton 是否有 m_bgImageView
                    id bgImg = object_getIvar(sub, "m_bgImageView");
                    if (bgImg != nil) {
                        // ★★★ 设置 MMUIButton 背景色为 clearColor ★★★
                        [sub setBackgroundColor:[UIColor clearColor]];  // FUN_000ca840
                        // ★★★ 设置 MMUIButton.layer 背景色为动态渐变色 ★★★
                        [sub.layer setBackgroundColor:gradient];        // FUN_000ca840
                    }
                }
            }
        }
    }
}

// ★ 关键步骤 8：遍历 Cell 的 subviews，隐藏非目标 ImageView
for (UIView *sub in self.subviews) {
    if (![sub isKindOfClass:[UIImageView class]]) {
        sub.hidden = YES;   // FUN_000cba80(..., 1)  ← 隐藏非 ImageView
    } else {
        // 如果是 UIImageView 但不是背景图标记（UNK_0000270e / DAT_0000270f）
        if (sub.tag != bgTag1 && sub.tag != bgTag2) {
            sub.hidden = NO;   // FUN_000cba80(..., 0)  ← 保留标记的 ImageView
        }
    }
}
```

### 微信优化的 MMUIButton Hook (`FUN_0000d898`) 中 HideCard 的处理

反编译代码第 9673-9681 行：

```objc
// MMUIButton Hook 中
if (ProfileCardHideCard == NO) {
    // ★ 只有非 HideCard 时才设置 MMUIButton 背景色
    UIColor *color = [self getGradientColor:1];  // FUN_0000e02c(cfg, 1)
    [self setBackgroundColor:color];              // FUN_000ca840
}

if (specialMode == 0) {  // ContentMode != 3
    // ★ 只有非特殊模式时才设置圆角和 masksToBounds
    [self.layer setCornerRadius:radius];          // FUN_000cb180
    [self.layer setMasksToBounds:YES];            // FUN_000cc8c0(1)
}
```

---

## 3️⃣ MioPlugin 当前代码的问题

### 问题 #1：HideCard 时 MMUIButton 的 `m_bgImageView` 未被清除（🔴 根因）

微信优化在 HideCard 时，**主动清除了 MMUIButton 的 `m_bgImageView` 实例变量**：

```c
// 反编译代码第 6385 行
FUN_000c83c0(auVar26._0_8_, auVar26._8_8_, 0);  // object_setIvar(sub, bgIvar, nil)
```

`m_bgImageView` 是微信 MMUIButton 内部用于显示头像背景图的实例变量。微信原始的资料卡通过这个变量显示头像/背景图。**如果不将其设为 nil，微信会在下一次 layoutSubviews 中重新绘制原始卡片内容**，导致 HideCard 无效。

MioPlugin 当前代码**完全没有处理 `m_bgImageView`**，只是设置了 `sub.hidden = YES` 或 `backgroundColor = clearColor`，但微信的原始布局逻辑会在后续 layoutSubviews 中恢复这些属性。

### 问题 #2：HideCard 时 MMUIButton 的 `hidden` 状态被微信原始逻辑恢复（🔴 根因）

当前 MioPlugin 代码在 Cell Hook 中设置了 MMUIButton 的 `backgroundColor = clearColor` 和 `masksToBounds = NO`，但微信的原始 `layoutSubviews` 会在后续调用中**重新设置** MMUIButton 的背景色和 masksToBounds，覆盖掉 MioPlugin 的设置。

微信优化通过以下方式避免此问题：
1. **Cell Hook 中**：清除 `m_bgImageView`，设置 MMUIButton 背景为 clearColor
2. **MMUIButton Hook 中**：检测到 HideCard=YES 时，**跳过**背景色和圆角设置

MioPlugin 的 MMUIButton Hook 已经添加了 HideCard 判断（第 235-244 行），但 **Cell Hook 中缺少对 `m_bgImageView` 的清除**。

### 问题 #3：HideCard 时遍历 subviews 的逻辑与微信优化不同（🟡 重要）

微信优化的 HideCard 逻辑是**按尺寸判断**来找到 MMUIButton（宽度接近 Cell 宽度、高度接近 Cell 高度的子视图），然后专门处理它。而 MioPlugin 是按类名 `MMUIButton` 来查找。

微信优化的方式更可靠，因为：
- 不依赖类名（类名可能在新版微信中变化）
- 按尺寸判断能精确找到资料卡内容容器

### 问题 #4：HideCard 时微信原始 ImageView 的 hidden 状态未正确处理（🟡 重要）

微信优化在 HideCard 时的 ImageView 处理逻辑：

```objc
// 非 ImageView → hidden = YES
// ImageView + 不是背景图标记 → hidden = YES（微信优化中这些也被隐藏）
// ImageView + 是背景图标记 → hidden = NO（保留自定义背景图）
```

MioPlugin 当前代码（第 379-389 行）：

```objc
for (UIView *sub in cellViewCard.subviews) {
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
```

这段代码**保留了 MMUIButton 不隐藏**，但问题是微信的 MMUIButton 内部仍然有原始内容（头像、文字等），这些内容没有被隐藏。微信优化的做法是**也隐藏 MMUIButton**（`hidden = YES`），但同时给其子视图设置渐变背景色作为遮罩。

---

## 4️⃣ 修复方案

### 修复 #1：在 Cell Hook 的 HideCard 分支中清除 `m_bgImageView`

在 [ListCornerRadiusHook.m](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m) 的 HideCard 分支中，添加清除 `m_bgImageView` 的逻辑：

```objc
if (config.cardBgHidden) {
    // ★ 清除微信原始的 m_bgImageView（防止微信恢复原始卡片）
    for (UIView *sub in cellViewCard.subviews) {
        Ivar bgIvar = class_getInstanceVariable([sub class], "m_bgImageView");
        if (bgIvar) {
            object_setIvar(sub, bgIvar, nil);
        }
    }

    // 隐藏所有非自定义背景图的内容
    for (UIView *sub in cellViewCard.subviews) {
        if ([sub isKindOfClass:[UIImageView class]]) {
            UIImageView *iv = (UIImageView *)sub;
            if (iv.tag != kBgImageTagCard) {
                iv.hidden = YES;
            }
        } else {
            sub.hidden = YES;
        }
    }

    cellViewCard.backgroundColor = [UIColor clearColor];

    // ★ 给 MMUIButton 的子视图设置渐变遮罩色
    UIColor *hideColor = [config colorFromHex:isDark
        ? config.listCardDarkBgColor : config.listCardLightBgColor];
    for (UIView *sub in cellViewCard.subviews) {
        if ([sub isKindOfClass:NSClassFromString(@"MMUIButton")]) {
            sub.backgroundColor = [UIColor clearColor];
            sub.layer.cornerRadius = 0;
            sub.layer.borderWidth = 0;
            sub.layer.masksToBounds = NO;
            if (hideColor) {
                for (UIView *btnSub in sub.subviews) {
                    btnSub.backgroundColor = hideColor;
                }
            }
        }
    }
}
```

### 修复 #2：在 MMUIButton Hook 的 HideCard 分支中也清除 `m_bgImageView`

当前 MMUIButton Hook 的 HideCard 分支（第 235-244 行）需要补充 `m_bgImageView` 清除：

```objc
if (config.cardBgEnabled && config.cardBgHidden) {
    ((UIView *)self).backgroundColor = [UIColor clearColor];
    ((UIView *)self).layer.masksToBounds = NO;
    ((UIView *)self).layer.cornerRadius = 0;
    ((UIView *)self).layer.borderWidth = 0;

    // ★ 清除微信原始的 m_bgImageView
    Ivar bgIvar = class_getInstanceVariable([(id)self class], "m_bgImageView");
    if (bgIvar) {
        object_setIvar((id)self, bgIvar, nil);
    }

    // ★ 隐藏 MMUIButton 内部的所有子视图（头像、文字等）
    for (UIView *sub in ((UIView *)self).subviews) {
        sub.hidden = YES;
    }

    if (config.listHideRightQRCode) {
        [ListCornerRadiusHook wp_hideQRButtonInCell:(UIView *)self];
    }
    return;
}
```

### 修复 #3：确保 HideCard 时微信原始 ImageView 也被隐藏

当前代码在 Cell Hook 第 413-423 行有一个**独立的 ImageView 清理循环**，在 HideCard 分支之后执行。这个循环会隐藏 `image != nil` 且不是自定义背景图的 ImageView。但问题是：

1. 这个循环在 HideCard 分支**之后**执行
2. HideCard 分支中已经隐藏了非 UIImageView 的子视图
3. 但微信的 MMUIButton 内部的 ImageView（如 MMHeadImageView）**不在 Cell 的直接 subviews 中**，而是在 MMUIButton 的 subviews 中

需要确保 MMUIButton 内部的 ImageView 也被隐藏：

```objc
// 在 HideCard 分支中，遍历 MMUIButton 的子视图
for (UIView *sub in cellViewCard.subviews) {
    if ([sub isKindOfClass:NSClassFromString(@"MMUIButton")]) {
        // ★ 递归隐藏 MMUIButton 内部的所有 ImageView
        void (^hideImageViews)(NSArray<UIView *> *) = ^(NSArray<UIView *> *views) {
            for (UIView *v in views) {
                if ([v isKindOfClass:[UIImageView class]]) {
                    v.hidden = YES;
                }
                hideImageViews(v.subviews);
            }
        };
        hideImageViews(sub.subviews);
    }
}
```

---

## 5️⃣ 完整修复代码

### 5.1 修复 `replaced_MMTableViewCell_layoutSubviews` 的 HideCard 分支

将 [ListCornerRadiusHook.m](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m) 第 377-411 行替换为：

```objc
        if (config.cardBgHidden) {
            // ★ Step 1: 清除微信原始的 m_bgImageView（防止微信恢复原始卡片）
            for (UIView *sub in cellViewCard.subviews) {
                Ivar bgIvar = class_getInstanceVariable([sub class], "m_bgImageView");
                if (bgIvar) {
                    object_setIvar(sub, bgIvar, nil);
                }
            }

            // ★ Step 2: 隐藏所有非自定义背景图的内容
            for (UIView *sub in cellViewCard.subviews) {
                if ([sub isKindOfClass:[UIImageView class]]) {
                    UIImageView *iv = (UIImageView *)sub;
                    if (iv.tag != kBgImageTagCard) {
                        iv.hidden = YES;
                    }
                } else {
                    sub.hidden = YES;
                }
            }

            cellViewCard.backgroundColor = [UIColor clearColor];

            // ★ Step 3: 处理 MMUIButton —— 清除样式，设置渐变遮罩
            UIColor *hideColor = [config colorFromHex:isDark
                ? config.listCardDarkBgColor : config.listCardLightBgColor];
            for (UIView *sub in cellViewCard.subviews) {
                if ([sub isKindOfClass:NSClassFromString(@"MMUIButton")]) {
                    sub.backgroundColor = [UIColor clearColor];
                    sub.layer.cornerRadius = 0;
                    sub.layer.borderWidth = 0;
                    sub.layer.masksToBounds = NO;

                    // ★ Step 4: 隐藏 MMUIButton 内部的所有 ImageView
                    void (^hideImageViews)(NSArray<UIView *> *) = ^(NSArray<UIView *> *views) {
                        for (UIView *v in views) {
                            if ([v isKindOfClass:[UIImageView class]]) {
                                v.hidden = YES;
                            }
                            hideImageViews(v.subviews);
                        }
                    };
                    hideImageViews(sub.subviews);

                    // ★ Step 5: 给 MMUIButton 的非 ImageView 子视图设置渐变遮罩色
                    if (hideColor) {
                        for (UIView *btnSub in sub.subviews) {
                            if (![btnSub isKindOfClass:[UIImageView class]]) {
                                btnSub.backgroundColor = hideColor;
                            }
                        }
                    }
                }
            }
        } else {
            cellViewCard.backgroundColor = [UIColor clearColor];
        }
```

### 5.2 修复 `replaced_MMUIButton_layoutSubviews` 的 HideCard 分支

将 [ListCornerRadiusHook.m](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m) 第 234-244 行替换为：

```objc
    // ★ 资料卡背景功能：HideCard 模式下清除所有微信原始内容
    if (config.cardBgEnabled && config.cardBgHidden) {
        ((UIView *)self).backgroundColor = [UIColor clearColor];
        ((UIView *)self).layer.masksToBounds = NO;
        ((UIView *)self).layer.cornerRadius = 0;
        ((UIView *)self).layer.borderWidth = 0;

        // ★ 清除微信原始的 m_bgImageView
        Ivar bgIvar = class_getInstanceVariable([(id)self class], "m_bgImageView");
        if (bgIvar) {
            object_setIvar((id)self, bgIvar, nil);
        }

        // ★ 隐藏 MMUIButton 内部所有子视图
        for (UIView *sub in ((UIView *)self).subviews) {
            sub.hidden = YES;
        }

        if (config.listHideRightQRCode) {
            [ListCornerRadiusHook wp_hideQRButtonInCell:(UIView *)self];
        }
        return;
    }
```

---

## 6️⃣ Bug 影响链路图

### 当前问题：HideCard 显示原始卡片

```
用户开启 cardBgHidden
  │
  ├─ Cell Hook 执行
  │   ├─ 设置 Cell backgroundColor = clearColor ✅
  │   ├─ 隐藏非 UIImageView 子视图（包括 MMUIButton）✅
  │   ├─ 设置 MMUIButton backgroundColor = clearColor ✅
  │   ├─ 设置 MMUIButton masksToBounds = NO ✅
  │   └─ ❌ 未清除 m_bgImageView → 微信在下次 layoutSubviews 恢复原始内容
  │
  ├─ 微信原始 layoutSubviews 执行（通过 orig 调用）
  │   ├─ 检测到 m_bgImageView != nil → 重新绘制头像和背景
  │   ├─ 恢复 MMUIButton 的 backgroundColor → 原始卡片背景色
  │   └─ 恢复 MMUIButton 的 masksToBounds → YES
  │
  └─ MMUIButton Hook 执行
      ├─ 检测到 HideCard=YES → 设置 clearColor ✅
      ├─ 设置 masksToBounds = NO ✅
      └─ ❌ 但微信原始 layoutSubviews 已经先执行了，恢复了内容
      └─ ❌ 未清除 m_bgImageView → 下次 layoutSubviews 又恢复

结果：微信原始卡片内容反复被恢复，HideCard 无效
```

### 修复后的预期链路

```
用户开启 cardBgHidden
  │
  ├─ Cell Hook 执行
  │   ├─ 清除 m_bgImageView = nil ★ 防止微信恢复
  │   ├─ 隐藏所有非自定义背景图内容 ★
  │   ├─ 设置 Cell backgroundColor = clearColor ✅
  │   ├─ MMUIButton: clearColor + masksToBounds = NO ✅
  │   ├─ 隐藏 MMUIButton 内部所有 ImageView ★
  │   └─ 给非 ImageView 子视图设置渐变遮罩色 ★
  │
  ├─ 微信原始 layoutSubviews 执行
  │   ├─ m_bgImageView == nil → 不绘制原始头像背景 ✅
  │   └─ 其他内容已被 hidden = YES → 不可见 ✅
  │
  └─ MMUIButton Hook 执行
      ├─ 检测到 HideCard=YES → 设置 clearColor ✅
      ├─ 清除 m_bgImageView = nil ★ 双重保险
      ├─ 隐藏所有子视图 ★
      └─ masksToBounds = NO ✅

结果：只显示自定义背景图 + 渐变遮罩，原始卡片内容完全隐藏
```

---

## 7️⃣ 修复优先级

| 优先级 | Bug | 影响 | 修复方式 |
|:------:|-----|------|---------|
| 🔴 P0 | 未清除 `m_bgImageView` | 微信恢复原始卡片，HideCard 无效 | Cell Hook + MMUIButton Hook 中清除 |
| 🔴 P0 | MMUIButton 内部 ImageView 未隐藏 | 头像等仍可见 | 递归隐藏 MMUIButton 子视图中的 ImageView |
| 🟡 P1 | MMUIButton Hook 中未隐藏子视图 | 文字等仍可见 | HideCard 分支中隐藏所有子视图 |

---

## 8️⃣ 验证步骤

修复后需要验证以下场景：

1. **cardBgEnabled=YES, cardBgHidden=YES, 有背景图**：只显示背景图+渐变遮罩，原始卡片内容完全隐藏
2. **cardBgEnabled=YES, cardBgHidden=YES, 无背景图**：显示空白/渐变遮罩，原始卡片内容完全隐藏
3. **cardBgEnabled=YES, cardBgHidden=NO**：背景图可见，卡片内容正常显示
4. **切换 HideCard 开关**：从隐藏切换到显示，内容正确恢复
5. **深色/浅色模式切换**：渐变遮罩颜色正确切换
6. **多次进出"我"页面**：HideCard 效果稳定，不被微信原始逻辑覆盖
