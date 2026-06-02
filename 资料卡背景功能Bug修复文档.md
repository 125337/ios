# MioPlugin 资料卡背景功能 Bug 修复文档

> **更新日期**: 2026-06-02 (v3)
> **当前状态**: 隐藏信息卡片 ✅ 已修复 | 背景图不显示 ❌ 待修复
> **参考**: 微信优化反编译代码 (`123456.c`) 深度分析

---

## 1️⃣ 当前 Bug 现象

开启 `cardBgEnabled` 并设置了背景图后，资料卡**完全看不到背景图**，显示的是微信原始卡片外观（白色/浅灰背景 + 圆角 + 边框），与未开启功能时一模一样。

---

## 2️⃣ 已应用的修复（确认有效）

| 修复项 | 状态 | 位置 |
|--------|:----:|------|
| `wp_applyProfileCardCorner` 中 `cardBgEnabled` 时跳过背景色设置 | ✅ 已改 | [第1004行](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m#L1004) |
| MMUIButton Hook 中有背景图时设 `clearColor` | ✅ 已改 | [第324行](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m#L324) |
| HideCard 时清除 `m_bgImageView` | ✅ 已改 | [第241行](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m#L241) |
| Cell 样式清理（borderWidth/cornerRadius/masksToBounds） | ✅ 已改 | [第401行](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m#L401) |

---

## 3️⃣ 🔴 根因：MMUIButton 内部的 `m_bgImageView` 未被清除（非 HideCard 模式）

### 3.1 视图层级真相

```
MMTableViewCell (Cell) — backgroundColor = clearColor ✅
 ├── UIImageView (tag=999901, 自定义背景图) ← 在这里，但被遮挡
 └── MMUIButton — backgroundColor = clearColor ✅ 已修复
      ├── m_bgImageView (微信内部背景图) ← ❌❌❌ 这里！仍然在渲染！
      │   └── 显示微信原始的白色/渐变背景（完全不透明）
      ├── MMHeadImageView (头像)
      ├── MMCPLabel / MMUILabel (昵称、微信号等)
      └── 其他子视图
```

**问题本质**：我们设置了 `MMUIButton.backgroundColor = clearColor`，但这**只影响 MMUIButton 自身的背景色属性**。而微信的 MMUIButton 内部有一个实例变量 `m_bgImageView`（类型 `UIImageView *`），它是一个**独立的子视图**，负责渲染卡片的视觉背景。`backgroundColor = clearColor` 完全不会影响 `m_bgImageView` 的渲染！

### 3.2 为什么 HideCard 能工作但背景图不行？

对比两种模式：

| 操作 | HideCard 模式 | 非 HideCard（背景图）模式 |
|------|:------------:|:------------------------:|
| 清除 `m_bgImageView` | ✅ 第241-245行做了 | ❌ **没做！** |
| 设置 `backgroundColor = clearColor` | ✅ 第236行 | ✅ 第324行 |
| 隐藏子视图 | ✅ 第248-250行 | ❌ 不隐藏（要显示内容） |
| 结果 | 背景图可见 | **m_bgImageView 遮住背景图** |

**HideCard 能工作的原因**：代码在第241-245行显式清除了 `m_bgImageView`：
```objc
Ivar bgIvar = class_getInstanceVariable([(id)self class], "m_bgImageView");
if (bgIvar) {
    object_setIvar((id)self, bgIvar, nil);  // ← 清除了！
}
```

**背景图不工作的原因**：同样的清除操作只在 HideCard 分支中（第234-256行），非 HideCard 分支（第258行之后）**完全没有处理 `m_bgImageView`**。

### 3.3 微信优化的做法验证

微信优化反编译代码 (`FUN_00007b4c`) 中，`m_bgImageView` 的清除是在 **HideCard 的 if 分支内**做的（第6385行）。但关键区别是：

**微信优化的 MMUIButton Hook (`FUN_0000d898`) 使用了半透明渐变色作为 MMUIButton 背景**：

```c
// 反编译第9673-9681行：只有非 HideCard 才设置背景色
if (ProfileCardHideCard == NO) {
    color = getGradientColor(cfg, 1);  // ← colorWithDynamicProvider 半透明渐变
    [self setBackgroundColor:color];    // ← 半透明，可以透过去看到背景图
}
```

微信优化不需要清除 `m_bgImageView`，因为它的 MMUIButton 背景色是**半透明渐变**，即使 `m_bgImageView` 渲染了什么，半透明的 MMUIButton 背景也能让 Cell 层的背景图透过来。

而 MioPlugin 设置的是 **`clearColor`（完全透明）**，按理说应该也能看到背景图才对... **除非 `m_bgImageView` 不是通过 backgroundColor 渲染的，而是作为一个独立 UIImageView 子视图直接绘制图片内容**。

### 3.4 `m_bgImageView` 到底渲染了什么？

`m_bgImageView` 是微信 MMUIButton 的私有实例变量（Ivar），类型为 `UIImageView *`。它很可能：

1. **显示了一张内置的卡片背景图片/颜色块** — 这是最可能的情况。微信用它来给资料卡提供白色或渐变的视觉效果。
2. **作为 MMUIButton 的实际视觉背景** — 而 `backgroundColor` 只是底层颜色，`m_bgImageView` 叠加在上面。

当 `m_bgImageView` 存在且未被清除时：
- 它作为一个 UIImageView 子视图，渲染在 MMUIButton 内部
- 它位于自定义 bgImageView 之上（因为 MMUIButton 本身在 Cell 的 subview 栈中位于 bgImageView 之后/之上）
- 它的内容是不透明的 → **完全遮住了 Cell 层的 bgImageView**

---

## 4️⃣ 修复方案

### 核心：在非 HideCard 但有背景图时，也清除/隐藏 `m_bgImageView`

修改 `replaced_MMUIButton_layoutSubviews`，将第 308-333 行的背景色逻辑替换为同时处理 `m_bgImageView`：

```objc
    // ★ 资料卡背景功能：有背景图时清除 m_bgImageView + 透明背景
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

        // ★★★ 关键修复：清除微信内部的 m_bgImageView ★★★
        if (hasBgImage) {
            ((UIView *)self).backgroundColor = [UIColor clearColor];

            Ivar bgIvar = class_getInstanceVariable([(id)self class], "m_bgImageView");
            if (bgIvar) {
                id bgImgView = object_getIvar((id)self, bgIvar);
                if (bgImgView && [bgImgView isKindOfClass:[UIImageView class]]) {
                    // 方案A：直接设为 nil（彻底清除）
                    object_setIvar((id)self, bgIvar, nil);
                    // 或者方案B：只隐藏和清空图片（保留对象）
                    // [(UIImageView *)bgImgView setImage:nil];
                    // [(UIImageView *)bgImgView setHidden:YES];
                }
            }

            // ★ 额外保险：遍历 MMUIButton 子视图，找到可能是背景的 ImageView 并隐藏
            for (UIView *sub in ((UIView *)self).subviews) {
                if ([sub isKindOfClass:[UIImageView class]]) {
                    UIImageView *iv = (UIImageView *)sub;
                    // 排除头像视图
                    if (![NSStringFromClass([iv class]) isEqualToString:@"MMHeadImageView"]) {
                        // 如果这个 ImageView 的尺寸接近 MMUIButton 的尺寸，
                        // 很可能就是背景图
                        if (iv.frame.size.width > ((UIView *)self).frame.size.width * 0.8 &&
                            iv.frame.size.height > ((UIView *)self).frame.size.height * 0.5) {
                            iv.hidden = YES;
                        }
                    }
                }
            }
        } else {
            UIColor *cardBg = [config colorFromHex:isDark
                ? config.listCardDarkBgColor : config.listCardLightBgColor];
            if (cardBg) {
                ((UIView *)self).backgroundColor = cardBg;
            }
        }
    }
```

### 同时在 Cell Hook 中也增加防御性处理

在 `replaced_MMTableViewCell_layoutSubviews` 的非 HideCard 分支（第461行之后）也清除 `m_bgImageView`：

```objc
        } else {
            // ★ 非 HideCard 时也设置透明背景
            cellViewCard.backgroundColor = [UIColor clearColor];

            // ★ 清除 MMUIButton 内部的 m_bgImageView（双重保险）
            for (UIView *sub in cellViewCard.subviews) {
                if ([sub isKindOfClass:NSClassFromString(@"MMUIButton")]) {
                    Ivar bgIvar = class_getInstanceVariable([sub class], "m_bgImageView");
                    if (bgIvar) {
                        id bgImgView = object_getIvar(sub, bgIvar);
                        if (bgImgView && [bgImgView isKindOfClass:[UIImageView class]]) {
                            object_setIvar(sub, bgIvar, nil);
                        }
                    }
                }
            }
        }
```

---

## 5️⃣ 完整执行流程图（修复前后对比）

### 修复前 — 背景图被遮挡

```
Cell Hook (replaced_MMUITableViewCell_layoutSubviews)
  ├─ orig 调用 → 触发 MMUIButton Hook
  │   └─ MMUIButton Hook
  │       ├─ orig → 微信原始 layoutSubviews
  │       │   └─ 创建/恢复 m_bgImageView（微信原始背景）❋
  │       ├─ hasBgImage → backgroundColor = clearColor ✅
  │       ├─ wp_applyProfileCardCorner → 跳过背景色 ✅
  │       └─ masksToBounds = YES ✅
  │   ← 返回 Cell Hook
  ├─ Cell.backgroundColor = clearColor ✅
  ├─ 创建 bgImageView，添加到 Cell ✅
  ├─ 计算 frame ✅
  └─ 异步加载图片 ✅

最终视图层级：
  Cell (clearColor)
  ├── bgImageView (背景图) ← 在下层
  └── MMUIButton (clearColor) ← 在上层
       └── m_bgImageView (微信原始白底) ← ❌❌❌ 仍渲染！遮住一切！
            └── 头像、文字等内容在其上
```

### 修复后 — 背景图可见

```
Cell Hook
  ├─ orig → 触发 MMUIButton Hook
  │   └─ MMUIButton Hook
  │       ├─ orig → 微信创建 m_bgImageView ❋
  │       ├─ hasBgImage → backgroundColor = clearColor ✅
  │       ├─ ★ object_setIvar(self, bgIvar, nil) ← 清除 m_bgImageView! ★
  │       ├─ ★ 遍历隐藏大尺寸子 ImageView ★
  │       └─ wp_applyProfileCardCorner → 跳过背景色 ✅
  ├─ Cell.backgroundColor = clearColor ✅
  ├─ 创建 bgImageView ✅
  └─ ★ Cell Hook 也清除 m_bgImageView（双重保险）★

最终视图层级：
  Cell (clearColor)
  ├── bgImageView (背景图) ← 可见了！✅
  └── MMUIButton (clearColor, 无 m_bgImageView)
       ├── 头像 ✅
       ├── 昵称 ✅
       └── 微信号 ✅
```

---

## 6️⃣ 修复优先级

| 优先级 | Bug | 影响 | 修复位置 |
|:------:|-----|------|---------|
| 🔴 P0 | `m_bgImageView` 未清除，渲染微信原始背景 | 背景图完全不可见 | MMUIButton Hook 第308行后 |
| 🟡 P1 | Cell Hook 无防御性清除 | MMUIButton Hook 未触发时的遗漏 | Cell Hook 第461行后 |

---

## 7️⃣ 验证步骤

修复后需验证：

1. **cardBgEnabled=YES, 有背景图, cardBgHidden=NO** → 背景图可见，头像昵称正常显示在背景图上
2. **cardBgEnabled=YES, 有背景图, cardBgHidden=YES** → 只显示背景图+遮罩，内容隐藏
3. **cardBgEnabled=YES, 无背景图** → 显示配置的卡片背景色（降级）
4. **cardBgEnabled=NO** → 圆角功能正常，不受影响
5. **深色/浅色切换** → 背景图正确切换
6. **GIF 动图** → 动画播放正常
7. **图层=顶层** → 背景图覆盖内容
8. **图层=底层** → 内容覆盖在背景图上
