# MioPlugin 资料卡背景功能 Bug 修复文档

> **更新日期**: 2026-06-02 (v6 — 终极根因版)
> **当前状态**: 隐藏信息卡片 ✅ 已修复 | 背景图不显示 ❌ 待修复
> **终极根因**: Cell 的 contentView 和其他系统子视图有不透明背景，遮挡了 bgImageView

---

## 1️⃣ 终极根因

**Cell 的 `contentView`（或类似系统子视图）有不透明背景色，完全遮挡了 `sendSubviewToBack:` 放到最底层的 bgImageView。**

### 为什么 HideCard 能工作

HideCard 模式下，代码遍历 Cell 的所有子视图，**非 UIImageView 的子视图全部 `hidden=YES`**（[第446行](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m#L446)）：

```objc
} else {
    sub.hidden = YES;  // ← contentView 也被隐藏了！
}
```

contentView 被 hidden 后，bgImageView 就可见了。

### 为什么非 HideCard 不工作

非 HideCard 模式下，contentView **没有被隐藏**，也没有设置 `backgroundColor = clearColor`。contentView 的不透明背景覆盖了 bgImageView。

### 微信优化为什么能工作

微信优化反编译代码中，Cell Hook 的关键操作（[反编译分析文档第165行](file:///www/wwwroot/ios/微信优化资料卡背景功能反编译深度分析.md#L165)）：

```c
[self setAlpha:0]         ← FUN_000ca3e0  // Cell 自身 alpha=0！
[self setBorderWidth:0]   ← FUN_000caa60
[self setCornerRadius:0]  ← FUN_000cb180
[self setMasksToBounds:NO]← FUN_000cc8c0
```

**微信优化将 Cell 的 `alpha` 设为 0**！这让 Cell 自身完全透明，包括 contentView 和所有系统子视图。然后背景图和内容通过其他方式重新显示。

此外，微信优化使用 `insertSubview:atIndex:(subviews.count - 8)` 插入背景图（[反编译第6607行](file:///www/wwwroot/ios/插件/微信优化反编译最新/123456.c#L6607)），而不是 `sendSubviewToBack:`。这个位置在 contentView 之上、MMUIButton 之下，确保背景图不被 contentView 遮挡。

---

## 2️⃣ 视图层级真相

```
MMTableViewCell (Cell)
 ├── [0] 系统子视图 (backgroundView 等)
 ├── [1] contentView ← ★ 有不透明背景！遮挡 bgImageView！
 │    └── MMUIButton
 │         ├── [m_bgImageView 的 UIImageView]
 │         ├── MMHeadImageView (头像)
 │         └── Labels
 ├── ... 其他系统子视图
 └── bgImageView (tag=999901) ← sendSubviewToBack 放到 index 0，被 contentView 遮挡！
```

**MioPlugin 的 `sendSubviewToBack:` 把 bgImageView 放到 index 0（最底层），contentView 在上面遮挡了它。**

**微信优化用 `insertSubview:atIndex:(count-8)` 把背景图放在 contentView 之上、MMUIButton 之下。**

---

## 3️⃣ 修复方案

### 方案 A：设置 contentView 背景透明（最简单）

在 Cell Hook 的非 HideCard 分支中，设置 contentView 的背景为透明：

**位置**: [第483-498行](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m#L483-498) 之后

```objc
        } else {
            // ★ 非 HideCard 时也设置透明背景
            cellViewCard.backgroundColor = [UIColor clearColor];

            // ★★★ 关键修复：设置 contentView 背景透明 ★★★
            UIView *contentView = [(UITableViewCell *)cellViewCard contentView];
            if (contentView) {
                contentView.backgroundColor = [UIColor clearColor];
                contentView.layer.masksToBounds = NO;
            }

            // ★ 清除 MMUIButton 内部的 m_bgImageView
            for (UIView *sub in cellViewCard.subviews) {
                if ([sub isKindOfClass:NSClassFromString(@"MMUIButton")]) {
                    Ivar bgIvar = class_getInstanceVariable([sub class], "m_bgImageView");
                    if (bgIvar) {
                        id bgImgView = object_getIvar(sub, bgIvar);
                        if (bgImgView && [bgImgView isKindOfClass:[UIImageView class]]) {
                            [(UIImageView *)bgImgView setImage:nil];
                            [(UIImageView *)bgImgView setBackgroundColor:[UIColor clearColor]];
                            [(UIImageView *)bgImgView setHidden:YES];
                        }
                        object_setIvar(sub, bgIvar, nil);
                    }
                }
            }
        }
```

### 方案 B：同时设置 Cell 所有非 MMUIButton 子视图背景透明（更彻底）

```objc
        } else {
            cellViewCard.backgroundColor = [UIColor clearColor];

            // ★★★ 关键修复：所有 Cell 子视图背景透明 ★★★
            for (UIView *sub in cellViewCard.subviews) {
                if (sub.tag != kBgImageTagCard) {
                    sub.backgroundColor = [UIColor clearColor];
                }
            }

            // contentView 也需要处理
            UIView *contentView = [(UITableViewCell *)cellViewCard contentView];
            if (contentView) {
                contentView.backgroundColor = [UIColor clearColor];
                contentView.layer.masksToBounds = NO;
                // contentView 的子视图也设置透明（排除 MMUIButton 内的内容）
                for (UIView *cvSub in contentView.subviews) {
                    if (![cvSub isKindOfClass:NSClassFromString(@"MMUIButton")]) {
                        cvSub.backgroundColor = [UIColor clearColor];
                    }
                }
            }

            // 清除 MMUIButton 的 m_bgImageView
            // ... (同上)
        }
```

### 方案 C：改用微信优化的插入位置（最接近微信优化）

替换 `sendSubviewToBack:` 为 `insertSubview:atIndex:`，将 bgImageView 插入到 contentView 之上：

**位置**: [第554-559行](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m#L554-559)

将：
```objc
NSInteger layerPos = isDark ? config.cardBgDarkLayer : config.cardBgLightLayer;
if (layerPos == 1) {
    [cellViewCard bringSubviewToFront:bgImageView];
} else {
    [cellViewCard sendSubviewToBack:bgImageView];
}
```

替换为：
```objc
NSInteger layerPos = isDark ? config.cardBgDarkLayer : config.cardBgLightLayer;
if (layerPos == 1) {
    [cellViewCard bringSubviewToFront:bgImageView];
} else {
    // ★ 参照微信优化：insertSubview:atIndex: 而不是 sendSubviewToBack:
    // 插入到 contentView 之上、MMUIButton 之下
    NSInteger insertIndex = MAX(0, (NSInteger)cellViewCard.subviews.count - 8);
    if (insertIndex < cellViewCard.subviews.count) {
        [cellViewCard insertSubview:bgImageView atIndex:insertIndex];
    }
    // 如果插入失败（index 越界），降级为 addSubview
    if (bgImageView.superview != cellViewCard) {
        [cellViewCard addSubview:bgImageView];
    }
}
```

---

## 4️⃣ 推荐修复：方案 A + 方案 C 组合

同时做两件事：
1. 设置 contentView 背景透明（确保不被遮挡）
2. 使用 insertSubview:atIndex: 插入到正确位置（与微信优化一致）

### 完整修复代码

#### 4.1 Cell Hook 非 HideCard 分支（第483行之后）

```objc
        } else {
            cellViewCard.backgroundColor = [UIColor clearColor];

            // ★ 关键修复：contentView 背景透明
            UIView *contentView = [(UITableViewCell *)cellViewCard contentView];
            if (contentView) {
                contentView.backgroundColor = [UIColor clearColor];
                contentView.layer.masksToBounds = NO;
            }

            // ★ 所有 Cell 直接子视图背景透明（排除 bgImageView）
            for (UIView *sub in cellViewCard.subviews) {
                if (sub.tag != kBgImageTagCard) {
                    sub.backgroundColor = [UIColor clearColor];
                }
            }

            // 清除 MMUIButton 的 m_bgImageView
            for (UIView *sub in cellViewCard.subviews) {
                if ([sub isKindOfClass:NSClassFromString(@"MMUIButton")]) {
                    Ivar bgIvar = class_getInstanceVariable([sub class], "m_bgImageView");
                    if (bgIvar) {
                        id bgImgView = object_getIvar(sub, bgIvar);
                        if (bgImgView && [bgImgView isKindOfClass:[UIImageView class]]) {
                            [(UIImageView *)bgImgView setImage:nil];
                            [(UIImageView *)bgImgView setBackgroundColor:[UIColor clearColor]];
                            [(UIImageView *)bgImgView setHidden:YES];
                        }
                        object_setIvar(sub, bgIvar, nil);
                    }
                }
            }
        }
```

#### 4.2 Cell Hook 图层排序（第554行之后）

```objc
        NSInteger layerPos = isDark ? config.cardBgDarkLayer : config.cardBgLightLayer;
        if (layerPos == 1) {
            [cellViewCard bringSubviewToFront:bgImageView];
        } else {
            // ★ 参照微信优化：插入到 contentView 之上
            NSInteger insertIndex = MAX(0, (NSInteger)cellViewCard.subviews.count - 8);
            [cellViewCard insertSubview:bgImageView atIndex:insertIndex];
        }
```

#### 4.3 HideCard 分支也设置 contentView 透明（第450行之后）

在 HideCard 分支中，虽然子视图被 hidden 了，但为了一致性，也设置 contentView 透明：

```objc
            cellViewCard.backgroundColor = [UIColor clearColor];

            // ★ HideCard 时也设置 contentView 透明
            UIView *contentView = [(UITableViewCell *)cellViewCard contentView];
            if (contentView) {
                contentView.backgroundColor = [UIColor clearColor];
            }
```

#### 4.4 修复 bgImageView 被误隐藏 + 异步回调

**第501-511行**，排除 bgImageView：
```objc
if (imgView.tag == kBgImageTagCard) continue;
```

**第1292-1296行**，添加 `hidden=NO`：
```objc
imageView.hidden = NO;
```

---

## 5️⃣ 修复优先级

| 优先级 | Bug | 影响 | 修复方式 |
|:------:|-----|------|---------|
| 🔴 P0 | contentView 不透明背景遮挡 bgImageView | 背景图完全不可见 | contentView.backgroundColor = clearColor |
| 🔴 P0 | sendSubviewToBack 放到最底层被遮挡 | 同上 | insertSubview:atIndex: |
| 🔴 P0 | bgImageView 被误隐藏 + 回调不恢复 | 即使遮挡修复也不可见 | 排除 tag + hidden=NO |

---

## 6️⃣ 为什么之前的修复都没用

| 修复尝试 | 为什么没用 |
|---------|----------|
| MMUIButton.backgroundColor = clearColor | MMUIButton 透明了，但 **contentView 仍然不透明**，遮挡 bgImageView |
| wp_applyProfileCardCorner 跳过背景色 | 只影响 MMUIButton，**不影响 contentView** |
| object_setIvar(m_bgImageView, nil) | 清除了 ivar 但视图仍在渲染，而且**根本不是 m_bgImageView 遮挡的，是 contentView** |
| setImage:nil + setHidden:YES | 处理了 m_bgImageView 的 UIImageView，但**contentView 仍然遮挡** |

**所有之前的修复都在处理 MMUIButton 层的问题，但真正的遮挡发生在更上层的 contentView！**

---

## 7️⃣ 验证步骤

1. **cardBgEnabled=YES, 有背景图, cardBgHidden=NO** → 背景图可见
2. **cardBgEnabled=YES, listCornerRadiusEnabled=NO** → 背景图可见
3. **cardBgEnabled=YES, cardBgHidden=YES** → 只显示背景图+遮罩
4. **快速进出"我"页面** → 背景图稳定显示
5. **GIF 动图** → 动画播放正常
6. **深色/浅色切换** → 背景图正确切换
