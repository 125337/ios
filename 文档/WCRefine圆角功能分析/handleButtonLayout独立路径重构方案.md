# handleButtonLayout 独立路径重构方案 — 详细改造文档

## ⚠️ 重要提示：代码已部分演进

本文档的部分步骤已在代码中实施，部分尚未实施。以下标注每个步骤的实际状态。

**已实施**：
- ✅ `handleHeightAdjustment` 独立方法（[第654行](file:///www/wwwroot/ios/MioPlugin/Modules/ProfileCardBg/ProfileCardBgHook.m#L654)）
- ✅ `handleMarginAdjustment` 独立方法（[第690行](file:///www/wwwroot/ios/MioPlugin/Modules/ProfileCardBg/ProfileCardBgHook.m#L690)）
- ✅ `hasMaterial` 守卫 bg 创建代码（[第427行](file:///www/wwwroot/ios/MioPlugin/Modules/ProfileCardBg/ProfileCardBgHook.m#L427)）
- ✅ `hasMaterial` 保护清理 m_bgImageView（[第756行](file:///www/wwwroot/ios/MioPlugin/Modules/ProfileCardBg/ProfileCardBgHook.m#L756) `if (hasMaterial)`）

**未实施**：
- ❌ OR 聚合入口
- ❌ 通用辅助方法提取
- ❌ 背景素材生命周期方法提取
- ❌ 隐藏/可见路径独立
- ❌ handleCornerAndQR 提取

---

## 一、现状全景分析

### 1.1 当前 `handleButtonLayout` 完整代码流（实际状态）

```
handleButtonLayout(button):
  │  入口守卫: if (!cardBgBeautifyEnabled) return;
  │
  ├─ 守卫 A: 查找 MoreViewController
  ├─ 守卫 B: 查找 MMHeadImageView 子视图
  ├─ 守卫 C: 高度 <= 50 跳过
  ├─ 变量: isDark, needsNewCardBg, hasMaterial, isHidden
  │
  ├─ ★ 嵌套块: if (needsNewCardBg) {
  │    │
  │    ├─ ★★ 嵌套层2: if (hasMaterial) {  ← 已有守卫
  │    │    │   ── 遍历 button.subviews 查找 tag=999902 的 bgImgView
  │    │    │   ── 分支 A: 已存在 → 更新 frame
  │    │    │   │   └─ fillMode/alignment/offset 计算
  │    │    │   ── 分支 B: 不存在 → 创建新 bgImgView
  │    │    │   │   └─ 异步加载图片 + frame 计算
  │    │    │   ── button.backgroundColor = clearColor
  │    │    │   ── 清理原生 m_bgImageView（class_getInstanceVariable）
  │    │    }
  │    │
  │    ├─ handleCardHiddenInButton(isHidden, hasMaterial) ← 独立方法
  │    │   ├─ !isHidden → button.hidden=NO, hasMaterial时清理 m_bgImageView, return NO
  │    │   ├─ isHidden+!hasMaterial → Scene B: 完全隐藏, return YES → 调用方 return
  │    │   └─ isHidden+hasMaterial → Scene A: 隐藏内容保留bg, return NO
  │    │
  │    ├─ FIX-WHITE: if (isHidden) { 遍历子视图隐藏白色背景 }
  │    }
  │
  ├─ handleHeightAdjustment: ← 已独立
  ├─ handleMarginAdjustment: ← 已独立
  │
  ├─ Corner + QR: if (cornerEnabled) applyProfileCardCorner
  │               if (listHideRightQRCode) hideQRButtonInCell
```

### 1.2 涉及的全部配置项（21 个）— 不变

| 配置项 | 类型 | 归属功能 | 当前用途 |
|--------|------|---------|---------|
| `cardBgBeautifyEnabled` | BOOL | 总开关+美化 | 入口守卫 + needsNewCardBg |
| `cardBgMaterialEnabled` | BOOL | 素材 | 背景图加载/更新 |
| `cardBgHidden` | BOOL | 隐藏 | 隐藏信息卡片 |
| `cardBgCornerEnabled` | BOOL | 圆角 | 圆角开关 |
| `cardBgCornerUseGlobal` | BOOL | 圆角 | 是否使用全局配置 |
| `cardBgCornerRadius` | CGFloat | 圆角 | 圆角大小 |
| `cardBgCornerMargin` | CGFloat | 圆角 | 边距 |
| `cardBgCornerBgColor` | NSString | 圆角 | 浅色背景色 hex |
| `cardBgCornerDarkBgColor` | NSString | 圆角 | 深色背景色 hex |
| `cardBgStrokeWidth` | CGFloat | 圆角 | 描边宽度 |
| `cardBgHeight` | CGFloat | 高度 | 资料卡高度 |
| `cardBgListSpacing` | CGFloat | 间距 | 列表间距 |
| `cardBgImagePath` | NSString | 素材 | 背景图路径 |
| `cardBgFillMode` | NSInteger | 素材 | 填充模式 |
| `cardBgAlignment` | NSInteger | 素材 | 图片对齐 |
| `cardBgLayer` | NSInteger | 素材 | 图层位置 |
| `cardBgOffsetX` | CGFloat | 素材 | X偏移 |
| `cardBgOffsetY` | CGFloat | 素材 | Y偏移 |
| `listHideRightQRCode` | BOOL | QR | 隐藏右边QR码 |
| `listCardLightBgColor` | NSString | 回退 | 浅色卡片背景色 hex |
| `listCardDarkBgColor` | NSString | 回退 | 深色卡片背景色 hex |

### 1.3 当前问题清单（已更新）

**问题 1：4 层条件嵌套导致状态泄漏**
```
第1层 needsNewCardBg
  └─ 第2层 hasMaterial（清理 m_bgImageView + 设 clearColor）
    └─ 第3层 handleCardHiddenInButton
      └─ 第4层 FIX-WHITE
```
- `clearColor` 在 hasMaterial 块中设置，但影响了后续所有代码
- `m_bgImageView` 清理在 hasMaterial 和 handleCardHidden 中都做，逻辑重复

**问题 2：`cardBgBeautifyEnabled` 承担两个角色**
- 既是"入口守卫"（决定是否执行任何代码）
- 又是"嵌套块条件"（`needsNewCardBg = cardBgBeautifyEnabled`）
- 导致 `cardBgCornerEnabled` 被它间接阻塞（不能单独开圆角）

**问题 3：FIX-WHITE 的逻辑位置不对**
- FIX-WHITE 是 Scene A 的配套逻辑，但代码放在 `needsNewCardBg` 块的最外层
- 虽然加了 `if (isHidden)` 修复，但它在架构上属于"隐藏路径"的事

**问题 4：Scene B 的 return 分两步**
- `handleCardHiddenInButton` 返回 `YES` → 调用方 `return`
- 这种"两跳" return 增加了心智负担

**问题 5：删除代码分散在各处**
- 查找 VC、查找头像、暗色模式判断的代码在每个方法里重复写
- `m_bgImageView` 清理代码在 hasMaterial 块和 handleCardHidden 中写了两遍

---

## 二、目标架构（不变）

### 2.1 改造后的完整结构

```
handleButtonLayout(button):
  │  ★ 入口守卫: OR 聚合各子功能开关
  │  anyEnabled = beautify || hidden || corner
  │  if (!anyEnabled) return;
  │
  ├─ 通用守卫（提取为辅助方法）
  │   ├─ vc = findMoreViewController(button)
  │   ├─ if (foundHeadImageView(button)) return;
  │   ├─ if (button.frame.size.height <= 50) return;
  │   └─ isDark = isDarkMode(vc)
  │
  ├─ ★ 场景路由（核心改造）
  │  if (cardBgHidden) {
  │      handleHiddenPath(button, isDark);        ← 完整隐藏路径
  │  } else if (cardBgMaterialEnabled || cardBgCornerEnabled) {
  │      handleVisiblePath(button, isDark);       ← 完整美化路径
  │  }
  │
  ├─ 独立功能 A: handleHeightAdjustment(button);
  ├─ 独立功能 B: handleCornerAndQR(button, isDark);
```

### 2.2 路径职责（不变）

| 路径 | 方法 | 何时运行 | 做什么 | 不做什么 |
|------|------|---------|--------|---------|
| 隐藏路径 | `handleHiddenPath` | `cardBgHidden=YES` | 加载背景、隐藏子视图、FIX-WHITE | 不执行美化路径的代码 |
| 美化路径 | `handleVisiblePath` | `cardBgHidden=NO` 且 `material/corner` 有开 | 加载背景、清理原生 bg | 不设 clearColor（除非有素材）、不隐藏子视图 |
| 高度调整 | `handleHeightAdjustment` | 独立调用 | 修改 button frame | 不依赖其他功能 |
| 圆角+QR | `handleCornerAndQR` | 独立调用 | 圆角 + 隐藏 QR | 不依赖其他功能 |

---

## 三、改造步骤（已执行/待执行标注）

### 第 1 步：提取通用辅助方法 ❌ 全部未执行

这一步是"纯无害提取"——不对代码做任何逻辑改动，只是把重复代码移到独立方法中。

#### 1a. 提取 `findMoreViewController:` ❌

**当前代码位置**：[第382-391行](file:///www/wwwroot/ios/MioPlugin/Modules/ProfileCardBg/ProfileCardBgHook.m#L382-L391)（handleButtonLayout）+ [第20-31行](file:///www/wwwroot/ios/MioPlugin/Modules/ProfileCardBg/ProfileCardBgHook.m#L20-L31)（_hooked_heightForHeader）

**当前重复写法**：
```objc
// handleButtonLayout 中：
UIViewController *vc = nil;
UIResponder *responder = button.nextResponder;
// ...12行重复代码...

// _hooked_heightForHeader 中：
UIResponder *responder = [tableView nextResponder];
// ...12行重复代码...
```

**提取为**：
```objc
+ (UIViewController *)findMoreViewController:(UIView *)view {
    UIResponder *responder = view.nextResponder;
    while (responder) {
        if ([responder isKindOfClass:[UIViewController class]]) {
            NSString *className = NSStringFromClass([(UIViewController *)responder class]);
            if ([className isEqualToString:@"MoreViewController"]) {
                return (UIViewController *)responder;
            }
        }
        responder = responder.nextResponder;
    }
    return nil;
}
```

**收益**：`handleButtonLayout` 减少 10 行，`_hooked_heightForHeader` 减少 10 行。

---

#### 1b. 提取 `hasHeadImageViewInView:` ❌

**当前代码位置**：[第394-400行](file:///www/wwwroot/ios/MioPlugin/Modules/ProfileCardBg/ProfileCardBgHook.m#L394-L400)

```objc
+ (BOOL)hasHeadImageViewInView:(UIView *)view {
    for (UIView *sub in view.subviews) {
        if ([sub isKindOfClass:NSClassFromString(@"MMHeadImageView")]) {
            return YES;
        }
    }
    return NO;
}
```

---

#### 1c. 提取 `isDarkModeForVc:` ❌

**当前代码位置**：[第406-409行](file:///www/wwwroot/ios/MioPlugin/Modules/ProfileCardBg/ProfileCardBgHook.m#L406-L409)

```objc
+ (BOOL)isDarkModeForVc:(UIViewController *)vc {
    if (@available(iOS 13.0, *)) {
        return vc.traitCollection.userInterfaceStyle == UIUserInterfaceStyleDark;
    }
    return NO;
}
```

---

#### 1d. 提取 `cleanNativeBgImageView:` ❌（当前内联出现 2 处）

**当前代码位置**：[第562-572行](file:///www/wwwroot/ios/MioPlugin/Modules/ProfileCardBg/ProfileCardBgHook.m#L562-L572)（hasMaterial 块内）+ [第756-766行](file:///www/wwwroot/ios/MioPlugin/Modules/ProfileCardBg/ProfileCardBgHook.m#L756-L766)（handleCardHidden 非隐藏态）+ [第780-790行](file:///www/wwwroot/ios/MioPlugin/Modules/ProfileCardBg/ProfileCardBgHook.m#L780-L790)（handleCardHidden 隐藏态 = 3 处重复）

```objc
+ (void)cleanNativeBgImageView:(UIView *)button {
    Ivar bgIvar = class_getInstanceVariable([button class], "m_bgImageView");
    if (!bgIvar) return;
    id bgImgView = object_getIvar(button, bgIvar);
    if (bgImgView && [bgImgView isKindOfClass:[UIImageView class]]) {
        [(UIImageView *)bgImgView setImage:nil];
        [(UIImageView *)bgImgView setBackgroundColor:[UIColor clearColor]];
        [(UIImageView *)bgImgView setHidden:YES];
    }
    // ★ 保留 ivar：不清 nil，只清内容（防止"微信用户"bug）
    // object_setIvar(button, bgIvar, nil);
}
```

**收益**：消除 3 处重复，后续只需调用 `[self cleanNativeBgImageView:button]`。

---

#### 1e. 提取 `isEssentialSubview:` ❌

```objc
+ (BOOL)isEssentialSubview:(UIView *)sub {
    NSString *cn = NSStringFromClass([sub class]);
    if ([sub isKindOfClass:NSClassFromString(@"MMHeadImageView")]) return YES;
    if ([sub isKindOfClass:[UILabel class]]) return YES;
    if ([cn isEqualToString:@"MMCPLabel"]) return YES;
    if ([cn isEqualToString:@"MMUILabel"]) return YES;
    if ([cn isEqualToString:@"TextStatePublishEntryButton"]) return YES;
    if ([cn isEqualToString:@"TextStateFriendTopicButton"]) return YES;
    if ([sub isKindOfClass:[UIImageView class]] && sub.tag != 0) return YES;
    return NO;
}
```

---

#### 1f. 提取 `isWhiteOrDynamicBackground:` ❌

```objc
+ (BOOL)isWhiteOrDynamicBackground:(UIView *)sub {
    UIColor *bg = sub.backgroundColor;
    if (!bg) return NO;
    NSString *cn = NSStringFromClass([bg class]);
    if ([cn containsString:@"DynamicProvider"] || [cn containsString:@"UIDynamic"]) return YES;
    if ([bg isEqual:[UIColor whiteColor]]) return YES;
    CGFloat r=0,g=0,b=0,a=0;
    if ([bg getRed:&r green:&g blue:&b alpha:&a]) {
        if (r>0.95 && g>0.95 && b>0.95 && a>0.95) return YES;
    }
    if ([NSStringFromClass([sub class]) isEqualToString:@"UIView"] && bg) return YES;
    return NO;
}
```

---

### 第 2 步：提取背景素材相关方法 ❌ 全部未执行

这一部分涉及当前 [第427-573行](file:///www/wwwroot/ios/MioPlugin/Modules/ProfileCardBg/ProfileCardBgHook.m#L427-L573) 的 `if (hasMaterial)` 块内的逻辑。

#### 2a. `findBackgroundImageViewInButton:` 

遍历 button.subviews 查找 tag = kProfileCardBgImageTag 的 UIImageView：

```objc
+ (UIImageView *)findBackgroundImageViewInButton:(UIView *)button {
    for (UIView *sub in button.subviews) {
        if (sub.tag == kProfileCardBgImageTag && [sub isKindOfClass:[UIImageView class]]) {
            return (UIImageView *)sub;
        }
    }
    return nil;
}
```

#### 2b. `calcImageAlignmentOffsetWithImageSize:inView:` 

根据 fillMode、alignment 和图片尺寸计算垂直偏移：

```objc
+ (CGFloat)calcImageAlignmentOffsetWithImageSize:(CGSize)imageSize
                                          inView:(UIView *)view {
    PluginConfig *config = [PluginConfig shared];
    NSInteger fillMode = config.cardBgFillMode;
    NSInteger alignment = config.cardBgAlignment;

    // 只在 aspectFill(fillMode=0) 或 fillMode=3 时计算
    if (fillMode != 0 && fillMode != 3) return 0;
    if (imageSize.width <= 0) return 0;

    CGFloat viewW = view.bounds.size.width;
    CGFloat viewH = view.bounds.size.height;
    CGFloat scale = viewW / imageSize.width;
    CGFloat renderedH = imageSize.height * scale;
    CGFloat overflow = renderedH - viewH;

    if (overflow <= 0) return 0;

    switch (alignment) {
        case 0:  return -overflow / 2.0;  // center
        case 2:  return  overflow / 2.0;  // bottom
        default: return 0;                // top
    }
}
```

#### 2c. `createBackgroundImageViewInButton:` 

创建新的 bgImageView 并设置初始 frame 和 contentMode：

```objc
+ (UIImageView *)createBackgroundImageViewInButton:(UIView *)button {
    PluginConfig *config = [PluginConfig shared];

    UIImageView *newBg = [[UIImageView alloc] init];
    newBg.tag = kProfileCardBgImageTag;
    newBg.clipsToBounds = NO;
    newBg.userInteractionEnabled = NO;

    NSInteger fillMode = config.cardBgFillMode;
    switch (fillMode) {
        case 1: newBg.contentMode = UIViewContentModeScaleAspectFit; break;
        case 2: newBg.contentMode = UIViewContentModeScaleToFill; break;
        default: newBg.contentMode = UIViewContentModeScaleAspectFill; break;
    }

    CGFloat ox = config.cardBgOffsetX;
    CGFloat oy = config.cardBgOffsetY;
    newBg.frame = CGRectMake(ox, oy,
                             button.bounds.size.width,
                             button.bounds.size.height);

    if (config.cardBgLayer == 1) {
        [button addSubview:newBg];
        [button bringSubviewToFront:newBg];
    } else {
        [button insertSubview:newBg atIndex:0];
    }

    return newBg;
}
```

#### 2d. `loadImageAsyncForImageView:button:isDark:` 

异步加载图片到 bgImageView，加载完成后调整对齐和 fallback 背景色：

```objc
+ (void)loadImageAsyncForImageView:(UIImageView *)imageView
                            button:(UIView *)button
                            isDark:(BOOL)isDark {
    __weak UIImageView *weakBg = imageView;
    __weak UIView *weakButton = button;

    dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), ^{
        UIImage *resultImage = [ProfileCardBgHook loadBackgroundImageSync];

        dispatch_async(dispatch_get_main_queue(), ^{
            __strong UIImageView *strongBg = weakBg;
            __strong UIView *strongButton = weakButton;
            if (!strongBg || !strongButton) return;

            if (resultImage) {
                strongBg.image = resultImage;
                strongBg.alpha = 1.0;
                strongBg.hidden = NO;

                // 异步加载后重新计算对齐偏移（图片尺寸现在已知）
                CGFloat alignOffset = [ProfileCardBgHook
                    calcImageAlignmentOffsetWithImageSize:resultImage.size
                                                   inView:strongButton];
                if (fabs(alignOffset) > 0.5) {
                    PluginConfig *cfg = [PluginConfig shared];
                    CGRect f = strongBg.frame;
                    f.origin.y = cfg.cardBgOffsetY + alignOffset;
                    strongBg.frame = f;
                }
            } else {
                // fallback：无图片时设置背景色
                PluginConfig *cfg = [PluginConfig shared];
                UIColor *cardBg = [cfg colorFromHex:isDark
                    ? cfg.listCardDarkBgColor : cfg.listCardLightBgColor];
                if (cardBg) strongButton.backgroundColor = cardBg;
            }
        });
    });
}
```

#### 2e. `setupBackgroundMaterialInButton:isDark:`（完整入口）

整合 2a-2d，是 handleButtonLayout 中 `if (hasMaterial)` 块的直接替代：

```objc
+ (void)setupBackgroundMaterialInButton:(UIView *)button
                                 isDark:(BOOL)isDark {
    PluginConfig *config = [PluginConfig shared];

    // ── 查找已有 bg ──
    UIImageView *bgImgView = [ProfileCardBgHook findBackgroundImageViewInButton:button];

    CGFloat bgW = button.bounds.size.width;
    CGFloat bgH = button.bounds.size.height;
    CGFloat ox = config.cardBgOffsetX;
    CGFloat oy = config.cardBgOffsetY;

    if (bgImgView) {
        // ── 分支 A：已存在 → 更新 frame ──
        NSInteger fillMode = config.cardBgFillMode;
        switch (fillMode) {
            case 1: bgImgView.contentMode = UIViewContentModeScaleAspectFit; break;
            case 2: bgImgView.contentMode = UIViewContentModeScaleToFill; break;
            default: bgImgView.contentMode = UIViewContentModeScaleAspectFill; break;
        }

        CGFloat alignOffset = 0;
        if (bgImgView.image && bgImgView.image.size.width > 0) {
            alignOffset = [ProfileCardBgHook
                calcImageAlignmentOffsetWithImageSize:bgImgView.image.size
                                               inView:button];
        }

        bgImgView.frame = CGRectMake(ox, oy + alignOffset, bgW, bgH);

        if (config.cardBgLayer == 1) [button bringSubviewToFront:bgImgView];
    } else {
        // ── 分支 B：不存在 → 创建新 bg ──
        bgImgView = [ProfileCardBgHook createBackgroundImageViewInButton:button];
        [ProfileCardBgHook loadImageAsyncForImageView:bgImgView
                                               button:button
                                               isDark:isDark];
    }

    // ── bg 存在时清 button 背景色让 bg 透出 ──
    button.backgroundColor = [UIColor clearColor];

    // ── 清微信原生 m_bgImageView ──
    [ProfileCardBgHook cleanNativeBgImageView:button];
}
```

**收益**：handleButtonLayout 中 ~150 行的 hasMaterial 块 → 1 行调用 `[self setupBackgroundMaterialInButton:button isDark:isDark]`。

---

### 第 3 步：提取高度调整方法 ✅ 已执行

[第654-686行](file:///www/wwwroot/ios/MioPlugin/Modules/ProfileCardBg/ProfileCardBgHook.m#L654-L686)

已独立为 `handleHeightAdjustment:`。建议新增 `cardBgMaterialEnabled` 守卫以保持语义一致（当前方法依赖于 `cardBgBeautifyEnabled` 总开关）。

---

### 第 4 步：提取圆角 + QR 码隐藏方法 ❌ 未执行

当前代码内联于 [第641-649行](file:///www/wwwroot/ios/MioPlugin/Modules/ProfileCardBg/ProfileCardBgHook.m#L641-L649)：

```objc
+ (void)handleCornerAndQR:(UIView *)button isDark:(BOOL)isDark {
    PluginConfig *config = [PluginConfig shared];
    if (config.cardBgCornerEnabled) {
        [ProfileCardBgHook applyProfileCardCorner:button isDark:isDark];
    }
    if (config.listHideRightQRCode) {
        [ProfileCardBgHook hideQRButtonInCell:button];
    }
}
```

---

### 第 5 步：创建完整的隐藏路径 ❌ 未执行

新建 `handleHiddenPath:isDark:` 方法，整合 Scene B 早返 + Scene A + FIX-WHITE：

```objc
+ (void)handleHiddenPath:(UIView *)button isDark:(BOOL)isDark {
    PluginConfig *config = [PluginConfig shared];
    BOOL hasMaterial = config.cardBgMaterialEnabled;

    // ── 共有清除：button 背景色 + 原生 bg ──
    button.backgroundColor = [UIColor clearColor];
    button.layer.backgroundColor = [UIColor clearColor].CGColor;
    button.layer.masksToBounds = NO;
    button.layer.cornerRadius = 0;
    button.layer.borderWidth = 0;

    [ProfileCardBgHook cleanNativeBgImageView:button];

    // ══════════════════════════════════════════
    // Scene B：隐藏 + 无素材 → 完全隐藏，直接 return
    // ══════════════════════════════════════════
    if (!hasMaterial) {
        for (UIView *sub in button.subviews) {
            sub.hidden = YES;
        }

        if (config.listHideRightQRCode) {
            [ProfileCardBgHook hideQRButtonInCell:button];
        }
        return;  // ← 直接 return，不进入背景段
    }

    // ══════════════════════════════════════════
    // Scene A：隐藏 + 有素材 → 加载背景，隐藏内容保留背景
    // ══════════════════════════════════════════

    // 1. 设置背景素材
    [ProfileCardBgHook setupBackgroundMaterialInButton:button isDark:isDark];

    // 2. 隐藏子视图，豁免 bg + 关键子视图
    for (UIView *sub in button.subviews) {
        // 豁免：背景图
        if ([sub isKindOfClass:[UIImageView class]] &&
            sub.tag == kProfileCardBgImageTag) {
            continue;
        }
        // 豁免：头像、标签等关键子视图
        if ([ProfileCardBgHook isEssentialSubview:sub]) continue;

        sub.hidden = YES;
    }

    // 3. FIX-WHITE：隐藏白色/动态背景视图
    for (NSInteger i = button.subviews.count - 1; i >= 0; i--) {
        UIView *sub = button.subviews[i];
        if (sub.tag == kProfileCardBgImageTag) continue;
        if ([ProfileCardBgHook isEssentialSubview:sub]) continue;
        if ([ProfileCardBgHook isWhiteOrDynamicBackground:sub]) {
            sub.hidden = YES;
        }
    }

    // 4. 二维码隐藏
    if (config.listHideRightQRCode) {
        [ProfileCardBgHook hideQRButtonInCell:button];
    }
}
```

**收益**：消除两跳 return（handleCardHiddenInButton 返回 YES → 调用方 return 变成直接 return），将 Scene B + Scene A + FIX-WHITE 整合到一处。

---

### 第 6 步：创建可见态美化路径 ❌ 未执行

新建 `handleVisiblePath:isDark:` 方法，整合 hasMaterial 背景创建 + 非隐藏态清理：

```objc
+ (void)handleVisiblePath:(UIView *)button isDark:(BOOL)isDark {
    PluginConfig *config = [PluginConfig shared];
    BOOL hasMaterial = config.cardBgMaterialEnabled;

    // 确保可见
    button.hidden = NO;

    // ══════════════════════════════════════════
    // 有素材：设置背景
    // ══════════════════════════════════════════
    if (hasMaterial) {
        [ProfileCardBgHook setupBackgroundMaterialInButton:button isDark:isDark];
    } else {
        // ══════════════════════════════════════════
        // 无素材：不做任何背景操作
        // 不动 button.backgroundColor，保持原生导航栏白色
        // 不动 m_bgImageView，避免破坏昵称显示导致"微信用户"
        // ══════════════════════════════════════════
    }

    // ★ 圆角 + 边框在外部由 handleCornerAndQR 统一处理
}
```

**行为说明**：

| hasMaterial | 做什么 | 不做什么 |
|------------|--------|---------|
| YES | 创建/更新背景图，设 clearColor，清理原生 m_bgImageView | 不隐藏子视图 |
| NO | 什么都不做 | 不动 button.backgroundColor，不动 m_bgImageView（防止"微信用户"bug） |

当前等效逻辑分散在：
- `hasMaterial` 块（[第427-573行](file:///www/wwwroot/ios/MioPlugin/Modules/ProfileCardBg/ProfileCardBgHook.m#L427-L573)）的 bg 创建 + clearColor + 清理原生 bg
- `handleCardHiddenInButton`（[第751-768行](file:///www/wwwroot/ios/MioPlugin/Modules/ProfileCardBg/ProfileCardBgHook.m#L751-L768)）的 `!isHidden` 分支（确保可见 + hasMaterial 时清理原生 bg）

---

### 第 7 步：重写 `handleButtonLayout` 入口 ❌ 未执行

**当前入口**：[第375-649行](file:///www/wwwroot/ios/MioPlugin/Modules/ProfileCardBg/ProfileCardBgHook.m#L375-L649)（~275行）

**改造后入口**（~30行）：

```objc
+ (void)handleButtonLayout:(UIView *)button {
    // ★ 入口守卫：OR 聚合
    PluginConfig *config = [PluginConfig shared];
    BOOL anyFeatureEnabled = config.cardBgBeautifyEnabled
                          || config.cardBgHidden
                          || config.cardBgCornerEnabled;
    if (!anyFeatureEnabled) return;

    // 通用守卫（提取为辅助方法）
    UIViewController *vc = [ProfileCardBgHook findMoreViewController:button];
    if (!vc) return;
    if (![ProfileCardBgHook hasHeadImageViewInView:button]) return;
    if (button.frame.size.height <= 50.0) return;
    BOOL isDark = [ProfileCardBgHook isDarkModeForVc:vc];

    // ★ 场景路由：隐藏 vs 可见
    if (config.cardBgHidden) {
        [ProfileCardBgHook handleHiddenPath:button isDark:isDark];
    } else if (config.cardBgMaterialEnabled || config.cardBgCornerEnabled) {
        [ProfileCardBgHook handleVisiblePath:button isDark:isDark];
    }

    // 独立功能
    [ProfileCardBgHook handleHeightAdjustment:button];
    [ProfileCardBgHook handleCornerAndQR:button isDark:isDark];
}
```

---

### 第 8 步：精简 `handleCardHiddenInButton`

改造后此方法不再需要，其逻辑已分散到 `handleHiddenPath` 和 `handleVisiblePath` 中。确认无外部调用者后可删除。

---

### 第 9 步：同步更新 `_hooked_heightForHeader`

[第20-31行](file:///www/wwwroot/ios/MioPlugin/Modules/ProfileCardBg/ProfileCardBgHook.m#L20-L31) 的 VC 查找替换为 `findMoreViewController:`。

---

### 第 10 步：同步更新 `ProfileCardBgHook.h`

新增所有提取方法的方法声明。

---

## 四、已完成 vs 未完成总表

| 步骤 | 内容 | 状态 | 当前行号 |
|------|------|------|---------|
| 1a | findMoreViewController | ❌ 未做 | 重复在 L382-391 + L20-31 |
| 1b | hasHeadImageViewInView | ❌ 未做 | L394-400 |
| 1c | isDarkModeForVc | ❌ 未做 | L406-409 |
| 1d | cleanNativeBgImageView | ❌ 未做 | 重复3处：L562, L756, L780 |
| 1e | isEssentialSubview | ❌ 未做 | L594-600 |
| 1f | isWhiteOrDynamicBackground | ❌ 未做 | L602-620 |
| 2a-2e | 背景素材方法 | ❌ 未做 | L427-573 |
| **3** | **handleHeightAdjustment** | **✅ 已做** | **L654-686** |
| **4** | **handleMarginAdjustment** | **✅ 已做** | **L690-740** |
| 4b | handleCornerAndQR | ❌ 未做 | L641-649（内联） |
| 5 | handleHiddenPath | ❌ 未做 | 分散在 L578 + L588 |
| 6 | handleVisiblePath | ❌ 未做 | 分散在 L427 + L751 |
| **7** | OR聚合入口 | ❌ 未做 | L379 `!beautify` guard |
| 8 | 清理handleCardHiddenInButton | ❌ 未做 | L744-823（~80行） |
| 9 | _hooked_heightForHeader 优化 | ❌ 未做 | L20-31 |
| 10 | ProfileCardBgHook.h | ❌ 未做 | - |

**合计**：15 步中已完成 2 步（高度、边距），剩余 13 步待实施。

---

## 五、场景验证（不变）

### 所有场景覆盖

| # | beautify | hidden | material | corner | 执行路径 | 预期结果 |
|---|----------|--------|----------|--------|---------|---------|
| 1 | ON | OFF | OFF | OFF | 入口放行→场景路由跳过→高度→圆角 | 保持原生，无变化 |
| 2 | ON | OFF | ON | ON | 更路径→setupBackground+清理→高度→圆角 | 背景图 + 圆角 ✅ |
| 3 | OFF | ON | OFF | OFF | handleHiddenPath（Scene B→完全隐藏）→高度→圆角 | 完全隐藏 ✅ |
| 4 | OFF | ON | ON | ON | handleHiddenPath（Scene A→留背景+FIX-WHITE）→高度→圆角 | 背景图 + 隐藏 + 圆角 ✅ |
| 5 | OFF | OFF | OFF | ON | **入口OR聚合放行**→场景路由跳过→高度→圆角 | **仅圆角生效** ✅ |
| 6 | OFF | OFF | ON | OFF | 入口放行→handleVisiblePath→高度→圆角 | 背景图 + 圆角 ✅ |
| 7 | ON | ON | OFF | OFF | handleHiddenPath（Scene B→完全隐藏）→高度→圆角 | 完全隐藏 ✅ |
| 8 | ON | ON | ON | ON | handleHiddenPath（Scene A→留背景+FIX-WHITE）→高度→圆角 | 背景图 + 隐藏 + 圆角 ✅ |

**场景 5 是改造后的独特能力**——只开圆角不开美化也能生效。

### 与当前架构的差异

| 场景 | 当前架构行为 | 新架构行为 | 差异 |
|------|------------|-----------|------|
| 仅 corner=ON | 被 beautify 卡住，不生效 | OR 聚合放行，**生效** | ✅ 新能力 |
| 仅 hidden=ON | 被 beautify 卡住，不生效 | OR 聚合放行，**生效** | ✅ 新能力 |
| beautify=ON, 全关 | 进入 needsNewCardBg 空跑 | 入口 OR 放行→场景路由跳过 | 行为一致 |
| 全关 | 入口 return | 入口 return | 一致 |

---

## 六、建议实施顺序

```
第1步（无害） ─→ 提取通用辅助方法（1a-1f）
  │                ✅ 不改变任何行为，可直接编译验证
  │
第2步（无害） ─→ 提取背景素材相关方法（2a-2e）
  │               ✅ 不改变行为，可直接编译验证
  │
第3步 ✅ 已有 ─→ handleHeightAdjustment 已提取
  │
第4步（无害） ─→ 提取 handleCornerAndQR（从内联代码提取）
  │               ✅ 纯提取，不改变行为
  │
第5步（新建） ─→ 创建 handleHiddenPath
  │               整合 Scene B 早返 + Scene A + FIX-WHITE
  │
第6步（新建） ─→ 创建 handleVisiblePath（调用 setupBackgroundMaterialInButton）
  │
第7步（改造） ─→ 重写 handleButtonLayout 入口
  │               改为 OR 聚合 + 场景路由
  │               ⚠️ 关键改动，需重点验证
  │
第8步（清理） ─→ 删除 handleCardHiddenInButton（80行）
  │
第9步（无害） ─→ _hooked_heightForHeader 替换为 findMoreViewController
  │
第10步（清理）─→ 同步更新 ProfileCardBgHook.h
```

### 验证清单

- [ ] 场景 1-8 全部通过
- [ ] 圆角可单独开启（不需 beautify）
- [ ] 隐藏可单独开启（不需 beautify）
- [ ] 非隐藏态 + 无素材 → 导航栏白色（不透明）
- [ ] Scene A（隐藏 + 有素材）→ FIX-WHITE 正常执行
- [ ] Scene B（隐藏 + 无素材）→ 完全隐藏
- [ ] 高度调整 + 圆角 在所有场景下都生效