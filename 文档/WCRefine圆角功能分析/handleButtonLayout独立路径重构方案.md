# handleButtonLayout 独立路径重构方案 — 详细改造文档

## 一、现状全景分析

### 1.1 当前 `handleButtonLayout` 完整代码流

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
  │    ├─ ★★ 嵌套层2: if (hasMaterial) {
  │    │    │   ── 遍历 button.subviews 查找 tag=999902 的 bgImgView
  │    │    │   ── 分支 A: 已存在 → 更新 frame
  │    │    │   │   └─ fillMode/alignment/offset 计算
  │    │    │   ── 分支 B: 不存在 → 创建新 bgImgView
  │    │    │   │   └─ 异步加载图片 + frame 计算
  │    │    │   ── button.backgroundColor = clearColor
  │    │    │   ── 清理原生 m_bgImageView（class_getInstanceVariable）
  │    │    }
  │    │
  │    ├─ handleCardHiddenInButton(isHidden, hasMaterial)
  │    │   ├─ !isHidden → button.hidden=NO, 清理 m_bgImageView, return NO
  │    │   ├─ isHidden+!hasMaterial → Scene B: 完全隐藏, return YES
  │    │   └─ isHidden+hasMaterial → Scene A: 隐藏内容保留bg, return NO
  │    │
  │    ├─ FIX-WHITE: if (isHidden) { 遍历子视图隐藏白色背景 }
  │    }
  │
  ├─ 高度调整块
  │   ├─ if cardBgHeight <= 0 → goto DO_CORNER
  │   ├─ 查找 TextStateProfileTableView
  │   ├─ 查找 MMUIButton 容器
  │   ├─ 修改 button frame (height+margin)
  │   └─ Label sizeToFit
  │
  ├─ DO_CORNER:
  │   ├─ if cornerEnabled → applyProfileCardCorner
  │   └─ if listHideRightQRCode → hideQRButtonInCell
```

### 1.2 涉及的全部配置项（21 个）

从 [PluginConfig.h](file:///www/wwwroot/ios/MioPlugin/Config/PluginConfig.h) 中整理：

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
| `cardBgFillMode` | NSInteger | 素材 | 填充模式 (0=AspectFill,1=Fit,2=Fill) |
| `cardBgAlignment` | NSInteger | 素材 | 图片对齐 (0=居中,1=顶部,2=底部) |
| `cardBgLayer` | NSInteger | 素材 | 图层位置 (0=底层,1=顶层) |
| `cardBgOffsetX` | CGFloat | 素材 | X偏移 |
| `cardBgOffsetY` | CGFloat | 素材 | Y偏移 |
| `listHideRightQRCode` | BOOL | QR | 隐藏右边QR码 |
| `listCardLightBgColor` | NSString | 回退 | 浅色卡片背景色 hex |
| `listCardDarkBgColor` | NSString | 回退 | 深色卡片背景色 hex |

### 1.3 当前问题清单

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

**问题 4：`goto DO_CORNER` 是旧架构的历史遗留**
- 高度调整块用 `goto` 跳过，是因为当初代码耦合太深无法用 return/if-else 解决
- 改造后独立方法就不需要了

**问题 5：删除代码分散在各处**
- 查找 VC、查找头像、暗色模式判断的代码在每个方法里重复写
- `m_bgImageView` 清理代码在 hasMaterial 块和 handleCardHidden 中写了两遍

---

## 二、目标架构

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

### 2.2 路径职责

| 路径 | 方法 | 何时运行 | 做什么 | 不做什么 |
|------|------|---------|--------|---------|
| 隐藏路径 | `handleHiddenPath` | `cardBgHidden=YES` | 加载背景、隐藏子视图、FIX-WHITE | 不执行美化路径的代码 |
| 美化路径 | `handleVisiblePath` | `cardBgHidden=NO` 且 `material/corner` 有开 | 加载背景、清理原生 bg | 不设 clearColor（除非有素材）、不隐藏子视图 |
| 高度调整 | `handleHeightAdjustment` | 独立调用 | 修改 button frame | 不依赖其他功能 |
| 圆角+QR | `handleCornerAndQR` | 独立调用 | 圆角 + 隐藏 QR | 不依赖其他功能 |

---

## 三、改造步骤

### 第 1 步：提取通用辅助方法

这一步是"纯无害提取"——不对代码做任何逻辑改动，只是把重复代码移到独立方法中。

#### 1a. 提取 `findMoreViewController:`

**当前代码位置**：第 382-391 行（handleButtonLayout）+ 第 22-31 行（_hooked_heightForHeader）

**当前重复写法**：
```objc
// handleButtonLayout 中：
UIViewController *vc = nil;
UIResponder *responder = button.nextResponder;
while (responder) {
    if ([responder isKindOfClass:[UIViewController class]]) {
        vc = (UIViewController *)responder;
        break;
    }
    responder = responder.nextResponder;
}
if (!vc || ![NSStringFromClass([vc class]) isEqualToString:@"MoreViewController"]) return;

// _hooked_heightForHeader 中：
UIResponder *responder = [tableView nextResponder];
UIViewController *vc = nil;
while (responder) {
    if ([responder isKindOfClass:[UIViewController class]]) {
        vc = (UIViewController *)responder;
        break;
    }
    responder = [responder nextResponder];
}
if (!vc || ![NSStringFromClass([vc class]) isEqualToString:@"MoreViewController"]) {
    return result;
}
```

**提取为**：
```objc
/// 从任意 view 向上查找 MoreViewController
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

#### 1b. 提取 `foundHeadImageView:`

**当前代码位置**：第 394-400 行

**当前写法**：
```objc
BOOL foundHead = NO;
for (UIView *sub in button.subviews) {
    if ([sub isKindOfClass:NSClassFromString(@"MMHeadImageView")]) {
        foundHead = YES; break;
    }
}
if (!foundHead) return;
```

**提取为**：
```objc
/// 检查 button 中是否存在 MMHeadImageView（确定这是资料卡按钮）
+ (BOOL)hasHeadImageViewInView:(UIView *)view {
    for (UIView *sub in view.subviews) {
        if ([sub isKindOfClass:NSClassFromString(@"MMHeadImageView")]) {
            return YES;
        }
    }
    return NO;
}
```

**收益**：减少 7 行，语义更清晰。

---

#### 1c. 提取 `isDarkModeForVc:`

**当前代码位置**：第 406-409 行

**当前写法**（重复出现 2 次：handleButtonLayout + applyProfileCardCorner）：
```objc
BOOL isDark = NO;
if (@available(iOS 13.0, *)) {
    isDark = (vc.traitCollection.userInterfaceStyle == UIUserInterfaceStyleDark);
}
```

**提取为**：
```objc
/// 判断当前是否为暗色模式
+ (BOOL)isDarkModeForVc:(UIViewController *)vc {
    if (@available(iOS 13.0, *)) {
        return vc.traitCollection.userInterfaceStyle == UIUserInterfaceStyleDark;
    }
    return NO;
}
```

---

#### 1d. 提取 `cleanNativeBgImageView:`

**当前代码位置**：第 562-571 行（hasMaterial 块内）+ 第 718-728 行（handleCardHidden 非隐藏态）+ 第 742-751 行（handleCardHidden 隐藏态）

**当前写法**（写了 **3 遍**）：
```objc
Ivar bgIvar = class_getInstanceVariable([button class], "m_bgImageView");
if (bgIvar) {
    id bgImgView = object_getIvar(button, bgIvar);
    if (bgImgView && [bgImgView isKindOfClass:[UIImageView class]]) {
        [(UIImageView *)bgImgView setImage:nil];
        [(UIImageView *)bgImgView setBackgroundColor:[UIColor clearColor]];
        [(UIImageView *)bgImgView setHidden:YES];
    }
    object_setIvar(button, bgIvar, nil);
}
```

**提取为**：
```objc
/// 清理微信原生的 m_bgImageView，防止灰色装饰残留
+ (void)cleanNativeBgImageView:(UIView *)button {
    Ivar bgIvar = class_getInstanceVariable([button class], "m_bgImageView");
    if (!bgIvar) return;
    id bgImgView = object_getIvar(button, bgIvar);
    if (bgImgView && [bgImgView isKindOfClass:[UIImageView class]]) {
        [(UIImageView *)bgImgView setImage:nil];
        [(UIImageView *)bgImgView setBackgroundColor:[UIColor clearColor]];
        [(UIImageView *)bgImgView setHidden:YES];
    }
    object_setIvar(button, bgIvar, nil);
}
```

**收益**：消除 3 处重复，后续只需调用 `[self cleanNativeBgImageView:button]`。

---

#### 1e. 提取 `isEssentialSubview:`（FIX-WHITE 豁免判断）

**当前代码位置**：第 591-599 行

**当前写法**：
```objc
if (sub.tag == kProfileCardBgImageTag) continue;
if ([sub isKindOfClass:NSClassFromString(@"MMHeadImageView")]) continue;
if ([sub isKindOfClass:[UILabel class]]) continue;
if ([NSStringFromClass([sub class]) isEqualToString:@"MMCPLabel"]) continue;
if ([NSStringFromClass([sub class]) isEqualToString:@"MMUILabel"]) continue;
if ([NSStringFromClass([sub class]) isEqualToString:@"TextStatePublishEntryButton"]) continue;
if ([NSStringFromClass([sub class]) isEqualToString:@"TextStateFriendTopicButton"]) continue;
if ([sub isKindOfClass:[UIImageView class]] && sub.tag != 0) continue;
```

**提取为**：
```objc
/// 判断子视图是否为关键 UI（FIX-WHITE 时应豁免隐藏）
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

#### 1f. 提取 `isWhiteOrDynamicBackground:`

**当前代码位置**：第 601-619 行

**当前写法**：
```objc
UIColor *subBg = sub.backgroundColor;
BOOL shouldHide = NO;
if (subBg) {
    NSString *bgClassName = NSStringFromClass([subBg class]);
    if ([bgClassName containsString:@"DynamicProvider"] ||
        [bgClassName containsString:@"UIDynamic"]) {
        shouldHide = YES;
    } else if ([subBg isEqual:[UIColor whiteColor]]) {
        shouldHide = YES;
    } else {
        CGFloat r=0,g=0,b=0,a=0;
        if ([subBg getRed:&r green:&g blue:&b alpha:&a]) {
            if (r>0.95 && g>0.95 && b>0.95 && a>0.95) shouldHide=YES;
        }
    }
}
if ([NSStringFromClass([sub class]) isEqualToString:@"UIView"] && subBg) {
    shouldHide = YES;
}
```

**提取为**：
```objc
/// 判断子视图是否有白色/动态背景（应被 FIX-WHITE 隐藏）
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

### 第 2 步：提取背景素材相关方法

这一部分涉及当前第 428-571 行的 `if (hasMaterial)` 块内的逻辑。

#### 2a. 提取 `findBackgroundImageViewInButton:`

**用途**：从 button.subviews 中查找已有的背景图

```objc
/// 查找 button 中已有的背景 ImageView（通过 tag 识别）
+ (UIImageView *)findBackgroundImageViewInButton:(UIView *)button {
    for (UIView *sub in button.subviews) {
        if (sub.tag == kProfileCardBgImageTag && [sub isKindOfClass:[UIImageView class]]) {
            return (UIImageView *)sub;
        }
    }
    return nil;
}
```

#### 2b. 提取 `calcImageAlignmentOffsetWithImageSize:buttonWidth:buttonHeight:fillMode:alignment:`

**用途**：计算图片的垂直对齐偏移量

**当前代码位置**：第 454-469 行、第 520-542 行（重复计算了 2 次）

```objc
/// 计算背景图在 button 中的垂直对齐偏移
+ (CGFloat)calcImageAlignmentOffsetWithImageSize:(CGSize)imageSize
                                     buttonWidth:(CGFloat)buttonWidth
                                    buttonHeight:(CGFloat)buttonHeight
                                        fillMode:(NSInteger)fillMode
                                       alignment:(NSInteger)alignment {
    if (fillMode != 0 && fillMode != 3) return 0;
    if (imageSize.width <= 0) return 0;
    
    CGFloat scale = buttonWidth / imageSize.width;
    CGFloat renderedH = imageSize.height * scale;
    CGFloat overflow = renderedH - buttonHeight;
    if (overflow <= 0) return 0;
    
    switch (alignment) {
        case 0:  return -overflow / 2.0;  // 居中
        case 2:  return  overflow / 2.0;  // 底部
        default: return 0;                 // 顶部
    }
}
```

#### 2c. 提取 `createBackgroundImageViewInButton:frame:fillMode:`

**用途**：创建新的背景 ImageView 并插入到 button 中

**当前代码位置**：第 478-497 行

```objc
/// 在 button 中创建新的背景 ImageView
+ (UIImageView *)createBackgroundImageViewInButton:(UIView *)button
                                             frame:(CGRect)frame
                                          fillMode:(NSInteger)fillMode {
    UIImageView *newBg = [[UIImageView alloc] init];
    newBg.tag = kProfileCardBgImageTag;
    newBg.clipsToBounds = NO;
    newBg.userInteractionEnabled = NO;
    
    switch (fillMode) {
        case 1: newBg.contentMode = UIViewContentModeScaleAspectFit; break;
        case 2: newBg.contentMode = UIViewContentModeScaleToFill; break;
        default: newBg.contentMode = UIViewContentModeScaleAspectFill; break;
    }
    newBg.frame = frame;
    
    PluginConfig *config = [PluginConfig shared];
    if (config.cardBgLayer == 1) {
        [button addSubview:newBg];
        [button bringSubviewToFront:newBg];
    } else {
        [button insertSubview:newBg atIndex:0];
    }
    return newBg;
}
```

#### 2d. 提取 `loadImageAsyncWithCompletion:`

**用途**：异步加载图片 + 回调设置 ImageView

**当前代码位置**：第 500-556 行

```objc
/// 异步加载背景图并设置到 ImageView 上
+ (void)loadImageAsyncForImageView:(UIImageView *)imageView
                            button:(UIView *)button
                            isDark:(BOOL)isDark {
    if (!imageView) return;
    __weak UIImageView *weakImgView = imageView;
    __weak UIView *weakButton = button;
    
    dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), ^{
        __strong UIImageView *strongImgView = weakImgView;
        if (!strongImgView) return;
        
        UIImage *resultImage = [ProfileCardBgHook loadBackgroundImageSync];
        
        dispatch_async(dispatch_get_main_queue(), ^{
            __strong UIImageView *finalImgView = weakImgView;
            __strong UIView *finalButton = weakButton;
            if (!finalImgView || !finalButton) return;
            
            if (resultImage) {
                finalImgView.image = resultImage;
                finalImgView.alpha = 1.0;
                finalImgView.hidden = NO;
                
                // 重新计算对齐偏移
                PluginConfig *cfg = [PluginConfig shared];
                CGFloat alignOff = [ProfileCardBgHook
                    calcImageAlignmentOffsetWithImageSize:resultImage.size
                                              buttonWidth:finalButton.bounds.size.width
                                             buttonHeight:finalButton.bounds.size.height
                                                 fillMode:cfg.cardBgFillMode
                                                alignment:cfg.cardBgAlignment];
                if (alignOff != 0) {
                    CGRect f = finalImgView.frame;
                    f.origin.y = cfg.cardBgOffsetY + alignOff;
                    finalImgView.frame = f;
                }
            } else {
                // 回退到纯色背景
                PluginConfig *cfg = [PluginConfig shared];
                UIColor *cardBg = [cfg colorFromHex:isDark
                    ? cfg.listCardDarkBgColor : cfg.listCardLightBgColor];
                if (cardBg) finalButton.backgroundColor = cardBg;
            }
        });
    });
}
```

#### 2e. 提取 `setupBackgroundMaterialInButton:isDark:`

**用途**：素材方法的完整入口——查找/创建/更新背景图

**当前代码位置**：第 429-571 行（整个 hasMaterial 块）

```objc
/// 完整处理背景素材生命周期（查找/创建/更新）
+ (void)setupBackgroundMaterialInButton:(UIView *)button isDark:(BOOL)isDark {
    PluginConfig *config = [PluginConfig shared];
    
    // 1. 查找已有 bg
    UIImageView *bgImgView = [ProfileCardBgHook findBackgroundImageViewInButton:button];
    
    CGFloat bgW = button.bounds.size.width;
    CGFloat bgH = button.bounds.size.height;
    CGFloat bgX = 0, bgY = 0;
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
        
        CGFloat alignOff = 0;
        if ((fillMode == 0 || fillMode == 3) && bgImgView.image &&
            bgImgView.image.size.width > 0) {
            alignOff = [ProfileCardBgHook
                calcImageAlignmentOffsetWithImageSize:bgImgView.image.size
                                          buttonWidth:bgW buttonHeight:bgH
                                             fillMode:fillMode
                                            alignment:config.cardBgAlignment];
        }
        bgImgView.frame = CGRectMake(bgX + ox, bgY + oy + alignOff, bgW, bgH);
        if (config.cardBgLayer == 1) [button bringSubviewToFront:bgImgView];
    } else {
        // ── 分支 B：不存在 → 创建 ──
        CGRect frame = CGRectMake(bgX + ox, bgY + oy, bgW, bgH);
        UIImageView *newBg = [ProfileCardBgHook
            createBackgroundImageViewInButton:button frame:frame
                                    fillMode:config.cardBgFillMode];
        [ProfileCardBgHook loadImageAsyncForImageView:newBg button:button isDark:isDark];
    }
    
    // 2. 清 button 背景色让 bg 透出
    button.backgroundColor = [UIColor clearColor];
    
    // 3. 清理原生 m_bgImageView
    [ProfileCardBgHook cleanNativeBgImageView:button];
}
```

---

### 第 3 步：提取高度调整方法

**当前代码位置**：第 633-688 行

```objc
/// 调整资料卡高度（使用全局/独立边距配置）
+ (void)handleHeightAdjustment:(UIView *)button {
    PluginConfig *config = [PluginConfig shared];
    CGFloat targetH = config.cardBgHeight;
    if (targetH <= 0 || button.frame.size.height >= targetH) return;
    
    // 查找 TextStateProfileTableView
    UIView *tableView = button.superview;
    if (!tableView || ![NSStringFromClass([tableView class]) isEqualToString:@"TextStateProfileTableView"]) return;
    
    // 查找 MMUIButton 容器
    UIView *container = tableView.superview;
    if (!container || ![container isKindOfClass:NSClassFromString(@"MMUIButton")]) return;
    
    // 改 button 高度 + 左右边距
    CGRect bf = button.frame;
    CGFloat oldH = bf.size.height;
    bf.size.height = targetH;
    
    CGFloat margin = config.cardBgCornerUseGlobal
        ? config.listCellMargin
        : (config.cardBgCornerMargin > 0 ? config.cardBgCornerMargin : 9.0);
    if (margin > 0) {
        bf.origin.x += margin;
        bf.size.width -= margin * 2;
    }
    button.frame = bf;
    
    // Label sizeToFit
    if (margin > 0) {
        for (UIView *sub in button.subviews) {
            if ([sub isKindOfClass:[UILabel class]]) {
                UILabel *label = (UILabel *)sub;
                if (label.text && label.text.length > 0) {
                    [label sizeToFit];
                }
            }
        }
    }
}
```

**注意**：
- 这个方法独立于 `needsNewCardBg`，不依赖任何美化状态
- 去掉了 `goto DO_CORNER`，用 `return` 替代

---

### 第 4 步：提取圆角 + QR 码隐藏方法

**当前代码位置**：第 692-702 行

```objc
/// 独立处理资料卡圆角 + QR 码隐藏
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

### 第 5 步：创建完整的隐藏路径

隐藏路径对应 WCRefine 的 `profileHideEnabled == YES` 分支。

**场景**：`cardBgHidden = YES`

**子场景**：

| 子场景 | 条件 | 行为 |
|--------|------|------|
| Scene B | `hidden + !hasMaterial` | 完全隐藏，全部子视图 hidden |
| Scene A | `hidden + hasMaterial` | 保留背景图，隐藏其他内容 + FIX-WHITE |

```objc
/// 隐藏态完整路径（cardBgHidden = YES）
+ (void)handleHiddenPath:(UIView *)button isDark:(BOOL)isDark {
    PluginConfig *config = [PluginConfig shared];
    BOOL hasMaterial = config.cardBgMaterialEnabled;
    
    // ── 共通：清理原生状态 ──
    button.backgroundColor = [UIColor clearColor];
    button.layer.backgroundColor = [UIColor clearColor].CGColor;
    button.layer.masksToBounds = NO;
    button.layer.cornerRadius = 0;
    button.layer.borderWidth = 0;
    [ProfileCardBgHook cleanNativeBgImageView:button];
    
    if (hasMaterial) {
        // ── Scene A：隐藏 + 有素材 ──
        // 加载背景图（会设置 clearColor + 清理 m_bgImageView）
        [ProfileCardBgHook setupBackgroundMaterialInButton:button isDark:isDark];
        
        // 隐藏非背景子视图
        for (UIView *sub in button.subviews) {
            if ([sub isKindOfClass:[UIImageView class]] &&
                sub.tag == kProfileCardBgImageTag) {
                continue;  // 豁免背景图
            }
            sub.hidden = YES;
        }
        
        // FIX-WHITE：隐藏白色/动态背景视图（只在 Scene A 执行）
        for (NSInteger i = button.subviews.count - 1; i >= 0; i--) {
            UIView *sub = button.subviews[i];
            if (sub.tag == kProfileCardBgImageTag) continue;
            if ([ProfileCardBgHook isEssentialSubview:sub]) continue;
            if ([ProfileCardBgHook isWhiteOrDynamicBackground:sub]) {
                sub.hidden = YES;
            }
        }
    } else {
        // ── Scene B：隐藏 + 无素材 → 完全隐藏 ──
        for (UIView *sub in button.subviews) {
            sub.hidden = YES;
        }
    }
    
    // QR 码隐藏（条件守卫在 hideQRIfNeeded 内部）
    if (config.listHideRightQRCode) {
        [ProfileCardBgHook hideQRButtonInCell:button];
    }
}
```

---

### 第 6 步：创建可见态美化路径

可见态对应 WCRefine 的 `profileHideEnabled == NO + profileCornerEnabled` 分支。

**场景**：`cardBgHidden = NO`

```objc
/// 可见态美化路径（cardBgHidden = NO）
+ (void)handleVisiblePath:(UIView *)button isDark:(BOOL)isDark {
    PluginConfig *config = [PluginConfig shared];
    BOOL hasMaterial = config.cardBgMaterialEnabled;
    
    if (hasMaterial) {
        // ── 有素材：加载背景图 + 清理原生 ──
        [ProfileCardBgHook setupBackgroundMaterialInButton:button isDark:isDark];
        // setupBackgroundMaterialInButton 内部已经做了：
        //   - button.backgroundColor = clearColor
        //   - cleanNativeBgImageView
    }
    // ★★ 无素材时：不碰 button 背景色，不碰 m_bgImageView，不隐藏子视图 ★★
    // 这就是 WCRefine 的做法——保持原生状态，什么都不改
}
```

---

### 第 7 步：重写 `handleButtonLayout` 入口

**改造前代码**：
```objc
+ (void)handleButtonLayout:(UIView *)button {
    PluginConfig *config = [PluginConfig shared];
    if (!config.cardBgBeautifyEnabled) return;

    UIViewController *vc = nil;
    UIResponder *responder = button.nextResponder;
    while (responder) {
        if ([responder isKindOfClass:[UIViewController class]]) {
            vc = (UIViewController *)responder;
            break;
        }
        responder = responder.nextResponder;
    }
    if (!vc || ![NSStringFromClass([vc class]) isEqualToString:@"MoreViewController"]) return;

    BOOL foundHead = NO;
    for (UIView *sub in button.subviews) {
        if ([sub isKindOfClass:NSClassFromString(@"MMHeadImageView")]) {
            foundHead = YES; break;
        }
    }
    if (!foundHead) return;

    CGFloat selfHeight = button.frame.size.height;
    if (selfHeight <= 50.0) return;

    BOOL isDark = NO;
    if (@available(iOS 13.0, *)) {
        isDark = (vc.traitCollection.userInterfaceStyle == UIUserInterfaceStyleDark);
    }

    BOOL needsNewCardBg = config.cardBgBeautifyEnabled;
    BOOL hasMaterial = config.cardBgMaterialEnabled;
    BOOL isHidden = config.cardBgHidden;

    if (needsNewCardBg) {
        // 250 行的嵌套块
        if (hasMaterial) { /* bg 生命周期 */ }
        if ([ProfileCardBgHook handleCardHiddenInButton:...
                                                isHidden:isHidden
                                             hasMaterial:hasMaterial]) return;
        if (isHidden) { /* FIX-WHITE */ }
    }

    // 高度调整（含 goto DO_CORNER）
    {
        // ... 60 行高度调整代码 ...
    }

DO_CORNER:
    {
        if (config.cardBgCornerEnabled) { /* 圆角 */ }
        if (config.listHideRightQRCode) { /* 隐藏 QR */ }
    }
}
```

**改造后代码**：
```objc
+ (void)handleButtonLayout:(UIView *)button {
    // ══════════════════════════════════════════
    // ★ 入口守卫：OR 聚合（等效于 WCRefine 的 OR 聚合）
    // 所有子功能平级，无层级关系
    // ══════════════════════════════════════════
    PluginConfig *config = [PluginConfig shared];
    BOOL anyFeatureEnabled = config.cardBgBeautifyEnabled
                          || config.cardBgHidden
                          || config.cardBgCornerEnabled;
    if (!anyFeatureEnabled) return;

    // ══════════════════════════════════════════
    // 通用守卫（提取为辅助方法）
    // ══════════════════════════════════════════
    UIViewController *vc = [ProfileCardBgHook findMoreViewController:button];
    if (!vc) return;

    if (![ProfileCardBgHook hasHeadImageViewInView:button]) return;

    if (button.frame.size.height <= 50.0) return;

    BOOL isDark = [ProfileCardBgHook isDarkModeForVc:vc];

    // ══════════════════════════════════════════
    // ★ 场景路由：隐藏 vs 可见（两个独立路径）
    // ══════════════════════════════════════════
    if (config.cardBgHidden) {
        [ProfileCardBgHook handleHiddenPath:button isDark:isDark];
    } else if (config.cardBgMaterialEnabled || config.cardBgCornerEnabled) {
        [ProfileCardBgHook handleVisiblePath:button isDark:isDark];
    }

    // ══════════════════════════════════════════
    // 独立功能（不依赖上方路径的执行结果）
    // ══════════════════════════════════════════
    [ProfileCardBgHook handleHeightAdjustment:button];
    [ProfileCardBgHook handleCornerAndQR:button isDark:isDark];
}
```

---

### 第 8 步：精简 `handleCardHiddenInButton`

改造后 `handleCardHiddenInButton` 不再需要，因为其逻辑已经分散到了 `handleHiddenPath` 和 `handleVisiblePath` 中。

**但为了最小改动**，可以选择保留它但精简：

```objc
/// 隐藏信息卡片（保留兼容，以防其他调用者）
/// 注意：handleButtonLayout 已不再使用此方法
+ (BOOL)handleCardHiddenInButton:(UIView *)button
                       isHidden:(BOOL)isHidden
                    hasMaterial:(BOOL)hasMaterial {
    if (!isHidden) {
        button.hidden = NO;
        [ProfileCardBgHook cleanNativeBgImageView:button];
        return NO;
    }
    
    button.backgroundColor = [UIColor clearColor];
    button.layer.backgroundColor = [UIColor clearColor].CGColor;
    button.layer.masksToBounds = NO;
    button.layer.cornerRadius = 0;
    button.layer.borderWidth = 0;
    [ProfileCardBgHook cleanNativeBgImageView:button];
    
    PluginConfig *config = [PluginConfig shared];
    
    if (!hasMaterial) {
        // Scene B
        for (UIView *sub in button.subviews) {
            sub.hidden = YES;
        }
        if (config.listHideRightQRCode) {
            [ProfileCardBgHook hideQRButtonInCell:button];
        }
        return YES;
    }
    
    // Scene A
    for (UIView *sub in button.subviews) {
        if ([sub isKindOfClass:[UIImageView class]] &&
            sub.tag == kProfileCardBgImageTag) {
            continue;
        }
        sub.hidden = YES;
    }
    if (config.listHideRightQRCode) {
        [ProfileCardBgHook hideQRButtonInCell:button];
    }
    return NO;
}
```

如果确认没有其他调用者，可以直接删除此方法。

---

### 第 9 步：同步更新 `_hooked_heightForHeader`

把第 20-31 行的 VC 查找替换为 `findMoreViewController:`

```objc
static double _hooked_heightForHeader(id self, SEL _cmd, id tableView, long long section) {
    double result = _orig_heightForHeader(self, _cmd, tableView, section);

    PluginConfig *config = [PluginConfig shared];
    if (!config.cardBgBeautifyEnabled) return result;

    if (section != 1) return result;

    UIViewController *vc = [ProfileCardBgHook findMoreViewController:(UIView *)tableView];
    if (!vc) return result;

    // ★ 追加间距
    CGFloat spacing = config.cardBgListSpacing;
    if (spacing > 0) {
        result += spacing;
    }

    WPLog(@"CardBg-Diag", @"[HEIGHT-FOR-HEADER] section=%lld, result=%.1f, spacing=%.1f",
          section, result, spacing);

    return result;
}
```

---

### 第 10 步：同步更新 `ProfileCardBgHook.h`

新增方法声明：

```objc
@interface ProfileCardBgHook : NSObject

// 唯一入口方法
+ (void)handleButtonLayout:(UIView *)button;

// ★ 新增：通用辅助方法
+ (UIViewController *)findMoreViewController:(UIView *)view;
+ (BOOL)hasHeadImageViewInView:(UIView *)view;
+ (BOOL)isDarkModeForVc:(UIViewController *)vc;
+ (void)cleanNativeBgImageView:(UIView *)button;
+ (BOOL)isEssentialSubview:(UIView *)sub;
+ (BOOL)isWhiteOrDynamicBackground:(UIView *)sub;

// ★ 新增：背景素材方法
+ (UIImageView *)findBackgroundImageViewInButton:(UIView *)button;
+ (CGFloat)calcImageAlignmentOffsetWithImageSize:(CGSize)imageSize
                                    buttonWidth:(CGFloat)buttonWidth
                                   buttonHeight:(CGFloat)buttonHeight
                                       fillMode:(NSInteger)fillMode
                                      alignment:(NSInteger)alignment;
+ (UIImageView *)createBackgroundImageViewInButton:(UIView *)button
                                             frame:(CGRect)frame
                                          fillMode:(NSInteger)fillMode;
+ (void)loadImageAsyncForImageView:(UIImageView *)imageView
                            button:(UIView *)button
                            isDark:(BOOL)isDark;
+ (void)setupBackgroundMaterialInButton:(UIView *)button isDark:(BOOL)isDark;

// ★ 新增：独立功能路径
+ (void)handleHiddenPath:(UIView *)button isDark:(BOOL)isDark;
+ (void)handleVisiblePath:(UIView *)button isDark:(BOOL)isDark;
+ (void)handleHeightAdjustment:(UIView *)button;
+ (void)handleCornerAndQR:(UIView *)button isDark:(BOOL)isDark;

// 原有方法（保留）
+ (void)applyProfileCardCorner:(UIView *)cell isDark:(BOOL)isDark;
+ (void)hideQRButtonInCell:(UIView *)cell;
+ (void)hideQRButtonInSubviews:(NSArray<UIView *> *)subviews;
+ (UIImage *)loadBackgroundImageSync;
+ (void)loadBackgroundImageForImageView:(UIImageView *)imageView;
+ (NSString *)cardBackgroundDirectory;
+ (BOOL)handleCardHiddenInButton:(UIView *)button
                       isHidden:(BOOL)isHidden
                    hasMaterial:(BOOL)hasMaterial;
+ (void)initCellHeightHook;

@end
```

---

## 四、完整改造后的代码结构

### 4.1 方法调用关系图

```
handleButtonLayout(button)                         ← 入口（约 30 行）
  │
  ├─ findMoreViewController:                       ← 第1步提取（约 12 行）
  ├─ hasHeadImageViewInView:                       ← 第1步提取（约 6 行）
  ├─ isDarkModeForVc:                              ← 第1步提取（约 4 行）
  │
  ├─ handleHiddenPath:                             ← 第5步新建（约 50 行）
  │   ├─ cleanNativeBgImageView:                   ← 第1步提取（约 10 行）
  │   ├─ setupBackgroundMaterialInButton:          ← 第2步提取（约 40 行）
  │   │   ├─ findBackgroundImageViewInButton:      ← 第2a步提取（约 6 行）
  │   │   ├─ calcImageAlignmentOffsetWithImageSize: ← 第2b步提取（约 12 行）
  │   │   ├─ createBackgroundImageViewInButton:    ← 第2c步提取（约 20 行）
  │   │   ├─ loadImageAsyncForImageView:           ← 第2d步提取（约 45 行）
  │   │   │   └─ loadBackgroundImageSync           ← 已有方法（保留）
  │   │   └─ cleanNativeBgImageView:               ← 第1步提取（复用）
  │   ├─ isEssentialSubview:                       ← 第1步提取（约 10 行）
  │   ├─ isWhiteOrDynamicBackground:               ← 第1步提取（约 15 行）
  │   └─ hideQRButtonInCell                        ← 已有方法（保留）
  │
  ├─ handleVisiblePath:                            ← 第6步新建（约 8 行）
  │   └─ setupBackgroundMaterialInButton:          ← 第2步提取（复用）
  │
  ├─ handleHeightAdjustment:                       ← 第3步提取（约 35 行）
  └─ handleCornerAndQR:                            ← 第4步提取（约 8 行）
      ├─ applyProfileCardCorner                    ← 已有方法（保留）
      └─ hideQRButtonInCell                        ← 已有方法（保留）
```

### 4.2 文件改动摘要

| 文件 | 改动类型 | 说明 |
|------|---------|------|
| ProfileCardBgHook.h | 新增声明 | 新增 12 个方法声明 |
| ProfileCardBgHook.m | 修改 | 重写 handleButtonLayout + 新增 12 个方法 + 保留原有方法 |
| ProfileCardBgHook.m | 修改 | _hooked_heightForHeader 使用 findMoreViewController 替换重复代码 |
| PluginConfig.h | 不改 | 配置项无需改动 |

### 4.3 代码行数变化

| 部分 | 改造前（行数） | 改造后（行数） | 变化 |
|------|---------------|---------------|------|
| handleButtonLayout 入口 | 约 330 行 | 约 30 行 | **-300 行** |
| 辅助方法 | 散落在各处，重复 | 集中提取，可复用 | +70 行 |
| handleHiddenPath | 分散在嵌套块中 | 独立方法 50 行 | 0 |
| handleVisiblePath | 混合在嵌套块中 | 独立方法 8 行 | 0 |
| 高度调整 | 60 行（含 goto） | 35 行（无 goto） | -25 行 |
| 圆角+QR | 10 行（需等 DO_CORNER） | 8 行（独立调用） | -2 行 |
| **总计** | **约 400 行** | **约 200 行** | **-50%** |

---

## 五、场景验证

### 5.1 所有场景覆盖

| # | beautify | hidden | material | corner | 执行路径 | 预期结果 |
|---|----------|--------|----------|--------|---------|---------|
| 1 | ON | OFF | OFF | OFF | handleVisiblePath（无素材→跳过）→ 高度→圆角 | 保持原生，无变化 |
| 2 | ON | OFF | ON | ON | handleVisiblePath（有素材→加载背景+清理）→ 高度→圆角 | 背景图 + 圆角 ✅ |
| 3 | OFF | ON | OFF | OFF | handleHiddenPath（Scene B→完全隐藏）→ 高度→圆角 | 完全隐藏 ✅ |
| 4 | OFF | ON | ON | ON | handleHiddenPath（Scene A→留背景）→ 高度→圆角 | 背景图 + 内容隐藏 + 圆角 ✅ |
| 5 | OFF | OFF | OFF | ON | 入口OR聚合通过→handleVisiblePath（无素材→跳过）→ 高度→圆角 | **仅圆角生效** ✅ |
| 6 | OFF | OFF | ON | OFF | 入口OR聚合通过→handleVisiblePath（有素材→加载背景）→ 高度→圆角 | 背景图 + 圆角 ✅ |
| 7 | ON | ON | OFF | OFF | handleHiddenPath（Scene B→完全隐藏）→ 高度→圆角 | 完全隐藏 ✅ |
| 8 | ON | ON | ON | ON | handleHiddenPath（Scene A→留背景+FIX-WHITE）→ 高度→圆角 | 背景图 + 隐藏 + 圆角 ✅ |

**场景 5 是新架构独有的能力**——只开圆角不开美化也能生效（WCRefine 模式）。

### 5.2 与当前架构的差异

| 场景 | 当前架构行为 | 新架构行为 | 差异 |
|------|------------|-----------|------|
| 仅 corner=ON | 被 beautify 卡住，不生效 | OR 聚合放行，**生效** | ✅ 新能力 |
| 仅 hidden=ON | 被 beautify 卡住，不生效 | OR 聚合放行，**生效** | ✅ 新能力 |
| beautify=ON, 全关 | 进入 needsNewCardBg 空跑 | 入口 OR 聚合放行→handleVisiblePath 跳过 | 行为一致 |
| 全关 | 入口 return | 入口 return | 一致 |

---

## 六、执行步骤汇总

### 建议实施顺序

```
第1步（无害） ─→ 提取通用辅助方法
  │               1a findMoreViewController
  │               1b hasHeadImageViewInView
  │               1c isDarkModeForVc
  │               1d cleanNativeBgImageView
  │               1e isEssentialSubview
  │               1f isWhiteOrDynamicBackground
  │               ✅ 不改变任何行为，可直接编译验证
  │
第2步（无害） ─→ 提取背景素材相关方法
  │               2a findBackgroundImageViewInButton
  │               2b calcImageAlignmentOffsetWithImageSize
  │               2c createBackgroundImageViewInButton
  │               2d loadImageAsyncForImageView
  │               2e setupBackgroundMaterialInButton
  │               ✅ 不改变行为，可直接编译验证
  │
第3步（无害） ─→ 提取高度调整方法
  │               handleHeightAdjustment
  │               ✅ 去掉 goto，改用 return
  │
第4步（无害） ─→ 提取圆角+QR 方法
  │               handleCornerAndQR
  │               ✅ 纯提取，不改变行为
  │
第5步（新建） ─→ 创建 handleHiddenPath
  │               ✅ 新方法，原 handleCardHiddenInButton 保留作为兼容
  │
第6步（新建） ─→ 创建 handleVisiblePath
  │               ✅ 新方法
  │
第7步（改造） ─→ 重写 handleButtonLayout 入口
  │               改为 OR 聚合 + 场景路由
  │               ⚠️ 关键改动，需重点验证
  │
第8步（清理） ─→ 更新 _hooked_heightForHeader
  │               替换为 findMoreViewController
  │               ✅ 无害优化
  │
第9步（清理） ─→ 同步更新 ProfileCardBgHook.h
  │               新增方法声明
  │
第10步（可选）→ 删除 handleCardHiddenInButton（如果确认无外部调用）
```

### 验证清单

- [ ] 场景 1-8 全部通过
- [ ] 圆角可单独开启（不需 beautify）
- [ ] 隐藏可单独开启（不需 beautify）
- [ ] 非隐藏态 + 无素材 → 导航栏白色（不透明）
- [ ] Scene A（隐藏 + 有素材）→ FIX-WHITE 正常执行
- [ ] Scene B（隐藏 + 无素材）→ 完全隐藏
- [ ] 高度调整 + 圆角 在所有场景下都生效