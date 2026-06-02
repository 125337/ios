#import "ListCornerRadiusHook.h"
#import "../../Config/PluginConfig.h"
#import "../../Core/LogManager.h"
#import <substrate.h>
#import <objc/runtime.h>
#import <objc/message.h>

static IMP _orig_MMTableViewCell_layoutSubviews = NULL;
static IMP _orig_WCSearchBar_layoutSubviews = NULL;
static IMP _orig_MMUIButton_layoutSubviews = NULL;

static UIViewController *findParentViewController(UIView *view) {
    UIResponder *responder = view;
    while (responder) {
        if ([responder isKindOfClass:[UIViewController class]]) {
            return (UIViewController *)responder;
        }
        responder = [responder nextResponder];
    }
    return nil;
}

@interface ListCornerRadiusHook ()

+ (void)wp_applyStandardCorner:(UIView *)cell
                     tableView:(UITableView *)tableView
                     indexPath:(NSIndexPath *)indexPath
                       section:(NSInteger)section
                           row:(NSInteger)row
                         total:(NSInteger)totalRows
                  cornerRadius:(NSInteger)configuredRadius
                     isFTSHome:(BOOL)isFTSHome
                     className:(NSString *)className;

+ (void)wp_applyCornerForContacts:(UIView *)cell
                        tableView:(UITableView *)tableView
                        indexPath:(NSIndexPath *)indexPath
                          section:(NSInteger)section
                              row:(NSInteger)row
                            total:(NSInteger)rowInThisSection
                     cornerRadius:(NSInteger)radius
                         isFTSHome:(BOOL)isFTSHome;

+ (void)wp_applyBorderAndBg:(UIView *)cell
                     radius:(NSInteger)radius
                   position:(NSInteger)position
                  isFTSHome:(BOOL)isFTSHome;

+ (UIView *)wp_findFoldViewInSubviews:(NSArray<UIView *> *)subviews;

+ (BOOL)wp_isProfileCard:(UIView *)cell;

+ (BOOL)wp_findMMHeadImageViewInSubviews:(NSArray<UIView *> *)subviews;

+ (void)wp_applyProfileCardCorner:(UIView *)cell
                      cornerRadius:(NSInteger)radius
                           isDark:(BOOL)isDark;

+ (void)wp_hideQRButtonInCell:(UIView *)cell;

+ (void)wp_hideQRButtonInSubviews:(NSArray<UIView *> *)subviews;

+ (CAShapeLayer *)wp_buildUnifiedBorderLayer:(CGRect)rect
                                 borderWidth:(CGFloat)borderWidth
                                borderColor:(UIColor *)borderColor
                                     radius:(CGFloat)radius
                                       type:(NSString *)type;

+ (BOOL)wp_isCurrentDarkMode;

+ (void)wp_loadBackgroundImageForImageView:(UIImageView *)imageView isDark:(BOOL)isDark;

+ (UIImage *)wp_loadBackgroundImageSync:(BOOL)isDark;

+ (NSString *)wp_cardBackgroundDirectory;

@end

static UIColor *wp_cellDefaultBgColor(BOOL isDark) {
    if (@available(iOS 13.0, *)) {
        if (isDark) {
            return [UIColor colorWithRed:0.125 green:0.125 blue:0.125 alpha:1.0];
        }
    }
    return [UIColor whiteColor];
}

static BOOL shouldSkipCorner(UIViewController *vc) {
    if (!vc) return YES;
    NSString *vcName = NSStringFromClass([vc class]);
    static NSSet *skipSet = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        skipSet = [NSSet setWithObjects:
            @"WCTimeLineViewController",
            @"WCAccountLoginUsersViewController",
            @"SessionSelectController",
            @"WCListViewController",
            @"BrandNotificationListViewController",
            @"BrandNewSessionViewController",
            @"BaseMsgContentViewController",
            @"BraceletRankProfileViewController",
            @"BraceletRankViewController",
            @"WCRedEnvelopesRedEnvelopesDetailViewController",
            @"MsgRecordDetailViewController",
            @"ChatRoomInfoViewController",
            @"ContactInfoViewController",
            @"AddFriendEntryViewController",
            @"AddContactToChatRoomViewController",
            @"SayHelloViewController",
            @"MMFinderPivotLiveViewController",
            @"WCSearchController",
            @"WCPluginsViewController",
            @"AccountDetailViewController",
            @"SpecificPageLockViewController",
            @"ThemeExchangeViewController",
            @"RepeatEnhanceViewController",
            @"NewHBALLSettingController",
            @"DisableWeChatController",
            @"TheMessageController",
            @"TheVoiceController",
            @"VoiceCenterSettingController",
            @"TheGroupController",
            @"TheTimeLineController",
            @"AutoChangeWallpaperController",
            @"TheAutoMationController",
            @"TheSpecialController",
            @"KeyBoardMainController",
            @"WCAvatarFrameMainController",
            @"ChatFunctionsinfoController",
            @"WCEhanceViewController",
            @"WCUIBeautifyController",
            @"WCCustomNameController",
            @"WCHideToolController",
            @"WCVersionFakeController",
            @"WCEnhanceToolController",
            @"WCAboutController",
            nil];
    });
    if ([skipSet containsObject:vcName]) return YES;

    static NSArray *prefixBlacklist = nil;
    static dispatch_once_t prefixOnce;
    dispatch_once(&prefixOnce, ^{
        prefixBlacklist = @[
            @"WCRefine",
            @"WCPulse",
            @"Themebox",
            @"BubbleBox",
        ];
    });
    for (NSString *prefix in prefixBlacklist) {
        if ([vcName hasPrefix:prefix]) return YES;
    }

    return NO;
}

static void replaced_WCSearchBar_layoutSubviews(id self, SEL _cmd) {
    if (_orig_WCSearchBar_layoutSubviews) {
        ((void (*)(id, SEL))_orig_WCSearchBar_layoutSubviews)(self, _cmd);
    }

    PluginConfig *config = [PluginConfig shared];
    if (!config.listCornerRadiusEnabled || !config.listSearchCornerRadius) return;

    NSInteger radius = config.listSearchBoxCornerRadius;
    if (radius <= 0) radius = 18;

    UIView *container = ((UIView *(*)(id, SEL))objc_msgSend)(self, @selector(searchBoxContainer));
    if (container) {
        container.layer.cornerRadius = radius;
        container.layer.masksToBounds = YES;
    }
}

static void replaced_MMUIButton_layoutSubviews(id self, SEL _cmd) {
    PluginConfig *config = [PluginConfig shared];

    // ════════════════════════════════════════════════════════
    // ★★★ 绝招一：极速拒绝链 ★★★
    // ════════════════════════════════════════════════════════

    // 第1关：功能开关（最早退出）
    BOOL needsCardBg = config.cardBgEnabled;
    BOOL needsCorner = config.listCornerRadiusEnabled;

    if (!needsCardBg && !needsCorner) {
        if (_orig_MMUIButton_layoutSubviews) {
            ((void (*)(id, SEL))_orig_MMUIButton_layoutSubviews)(self, _cmd);
        }
        return;
    }

    // 先调 orig（让微信完成原始布局）
    if (_orig_MMUIButton_layoutSubviews) {
        ((void (*)(id, SEL))_orig_MMUIButton_layoutSubviews)(self, _cmd);
    }

    // ★ 已删除原来的 early return (!needsCardBg && needsCorner → return)
    // 该 return 导致只开圆角不开背景图时，MMUIButton 的圆角逻辑无法执行
    // 现在让后续的 VC/HeadImage 过滤和 APPLY_CORNER 统一处理

    // 第2关：VC 类型
    UIViewController *vc = nil;
    UIResponder *responder = (UIResponder *)self;
    while (responder) {
        if ([responder isKindOfClass:[UIViewController class]]) {
            vc = (UIViewController *)responder;
            break;
        }
        responder = [responder nextResponder];
    }
    if (!vc || ![NSStringFromClass([vc class]) isEqualToString:@"MoreViewController"]) {
        return;
    }

    // 第3关：MMHeadImageView 存在（只搜直接子视图）
    BOOL foundHead = NO;
    for (UIView *sub in ((UIView *)self).subviews) {
        if ([sub isKindOfClass:NSClassFromString(@"MMHeadImageView")]) {
            foundHead = YES;
            break;
        }
    }
    if (!foundHead) return;

    // 第4关：高度过滤
    CGFloat selfHeight = ((UIView *)self).frame.size.height;
    if (selfHeight <= 50.0) return;

    // ════════════════════════════════════════════════════════
    // ★★★ 通过所有4关 → 业务逻辑 ★★★
    // ════════════════════════════════════════════════════════

    BOOL isDark = NO;
    if (@available(iOS 13.0, *)) {
        isDark = (vc.traitCollection.userInterfaceStyle == UIUserInterfaceStyleDark);
    }

    // ★ needsFullCardBg: 是否需要完整卡片背景功能（背景图/隐藏卡片）
    // 圆角逻辑在 APPLY_CORNER 处始终执行，不依赖此标志
    BOOL needsFullCardBg = needsCardBg;

    // ════════════════════════════════════════════════════════
    // ★★★ 卡片背景专属操作（只在 cardBgEnabled 时执行）★★★
    // ════════════════════════════════════════════════════════
    if (needsFullCardBg) {

    // ── HideCard 分支 ──
    if (config.cardBgHidden) {
        ((UIView *)self).backgroundColor = [UIColor clearColor];
        ((UIView *)self).layer.masksToBounds = NO;
        ((UIView *)self).layer.cornerRadius = 0;
        ((UIView *)self).layer.borderWidth = 0;

        Ivar bgIvar = class_getInstanceVariable([(id)self class], "m_bgImageView");
        if (bgIvar) {
            id bgImgView = object_getIvar((id)self, bgIvar);
            if (bgImgView && [bgImgView isKindOfClass:[UIImageView class]]) {
                [(UIImageView *)bgImgView setImage:nil];
                [(UIImageView *)bgImgView setBackgroundColor:[UIColor clearColor]];
                [(UIImageView *)bgImgView setHidden:YES];
            }
            object_setIvar((id)self, bgIvar, nil);
        }

        for (UIView *sub in ((UIView *)self).subviews) {
            sub.hidden = YES;
        }

        if (config.listHideRightQRCode) {
            [ListCornerRadiusHook wp_hideQRButtonInCell:(UIView *)self];
        }
        return;
    }

    // ── 背景图分支 ──
    ((UIView *)self).backgroundColor = [UIColor clearColor];

    // 清除微信原生 m_bgImageView
    Ivar bgIvar = class_getInstanceVariable([(id)self class], "m_bgImageView");
    if (bgIvar) {
        id bgImgView = object_getIvar((id)self, bgIvar);
        if (bgImgView && [bgImgView isKindOfClass:[UIImageView class]]) {
            [(UIImageView *)bgImgView setImage:nil];
            [(UIImageView *)bgImgView setBackgroundColor:[UIColor clearColor]];
            [(UIImageView *)bgImgView setHidden:YES];
        }
        object_setIvar((id)self, bgIvar, nil);
    }

    // ════════════════════════════════════════════════════════
    // ★★★ 微信优化做法：遍历子视图，隐藏白色背景UIView等不需要的视图 ★★★
    // 根因B：MMUIButton.subviews[1] 是白色 UIView (UIDynamicProviderColor)
    //        frame=(0,-722,393,852) 完全遮挡 bgImageView
    // ════════════════════════════════════════════════════════
    {
        static const NSInteger kMioBgImageTag_local = 999902;
        for (NSInteger i = ((UIView *)self).subviews.count - 1; i >= 0; i--) {
            UIView *sub = ((UIView *)self).subviews[i];

            // 保留我们的 bgImageView
            if (sub.tag == kMioBgImageTag_local) continue;
            // 保留头像
            if ([sub isKindOfClass:NSClassFromString(@"MMHeadImageView")]) continue;
            // 保留文字标签
            if ([sub isKindOfClass:[UILabel class]]) continue;
            if ([NSStringFromClass([sub class]) isEqualToString:@"MMCPLabel"]) continue;
            if ([NSStringFromClass([sub class]) isEqualToString:@"MMUILabel"]) continue;
            // 保留状态入口按钮
            if ([NSStringFromClass([sub class]) isEqualToString:@"TextStatePublishEntryButton"]) continue;
            if ([NSStringFromClass([sub class]) isEqualToString:@"TextStateFriendTopicButton"]) continue;
            // 保留 UIImageView（箭头等小图标）
            if ([sub isKindOfClass:[UIImageView class]] && sub.tag != 0) continue;

            // 检查是否是白色/动态白色背景视图（需要隐藏）
            UIColor *subBg = sub.backgroundColor;
            BOOL shouldHide = NO;

            if (subBg) {
                // 检查 UIDynamicProviderColor（浅色模式=白色的动态色）
                NSString *bgClassName = NSStringFromClass([subBg class]);
                if ([bgClassName containsString:@"DynamicProvider"] ||
                    [bgClassName containsString:@"UIDynamic"]) {
                    shouldHide = YES;
                }
                // 检查纯白色
                else if ([subBg isEqual:[UIColor whiteColor]]) {
                    shouldHide = YES;
                }
                // 检查接近白色
                else {
                    CGFloat r = 0, g = 0, b = 0, a = 0;
                    if ([subBg getRed:&r green:&g blue:&b alpha:&a]) {
                        if (r > 0.95 && g > 0.95 && b > 0.95 && a > 0.95) {
                            shouldHide = YES;
                        }
                    }
                }
            }

            // 普通 UIView（非标签/非按钮/非头像）且有背景色 → 大概率是微信的背景板
            if ([NSStringFromClass([sub class]) isEqualToString:@"UIView"] && subBg) {
                shouldHide = YES;
            }

            if (shouldHide) {
                sub.hidden = YES;
                WPLog(@"CardBg-Diag", @"[FIX-WHITE] Hidden subview[%ld]: class=%@, bg=%@, frame=(%.0f,%.0f,%.0f,%.0f)",
                      (long)i, NSStringFromClass([sub class]), subBg,
                      sub.frame.origin.x, sub.frame.origin.y,
                      sub.frame.size.width, sub.frame.size.height);
            }
        }
    }

    // ════════════════════════════════════════════════════════
    // ★★★ 绝招二：单次创建 + 去重 + 异步加载 ★★★
    // ════════════════════════════════════════════════════════

    static const NSInteger kMioBgImageTag = 999902;
    static const void *kMioBgLoadedKey = &kMioBgLoadedKey;

    UIImageView *existingBgImg = nil;
    BOOL alreadyLoaded = [objc_getAssociatedObject(self, kMioBgLoadedKey) boolValue];

    for (UIView *sub in ((UIView *)self).subviews) {
        if (sub.tag == kMioBgImageTag && [sub isKindOfClass:[UIImageView class]]) {
            existingBgImg = (UIImageView *)sub;
            break;
        }
    }

    // 分支A：已存在且已加载 → 只更新 frame（零开销路径）
    if (existingBgImg != nil && alreadyLoaded) {
        // 从 Cell 的 bounds 推导 bgImageView 尺寸（Cell 已被 margin 逻辑缩小）
        UIView *parentCell = nil;
        UIView *p = ((UIView *)self).superview;  // MMUIButton → contentView
        if (p) parentCell = p.superview;          // contentView → Cell
        CGRect cellBounds = parentCell ? parentCell.bounds : ((UIView *)self).bounds;
        CGFloat imgW = cellBounds.size.width;
        CGFloat imgH = cellBounds.size.height;
        CGFloat offsetX = isDark ? config.cardBgDarkOffsetX : config.cardBgLightOffsetX;
        CGFloat offsetY = isDark ? config.cardBgDarkOffsetY : config.cardBgLightOffsetY;
        existingBgImg.frame = CGRectMake(offsetX, offsetY, imgW, imgH);

        NSInteger layerPos = isDark ? config.cardBgDarkLayer : config.cardBgLightLayer;
        if (layerPos == 1) {
            [((UIView *)self) bringSubviewToFront:existingBgImg];
        }

        goto APPLY_CORNER;
    }

    // 分支B：不存在或未加载 → 创建（仅首次）
    if (existingBgImg != nil) {
        [existingBgImg removeFromSuperview];
    }

    {
    UIImageView *btnBgImg = [[UIImageView alloc] init];
    btnBgImg.tag = kMioBgImageTag;
    btnBgImg.clipsToBounds = YES;
    btnBgImg.userInteractionEnabled = NO;

    NSInteger fillMode = config.cardBgFillMode;
    switch (fillMode) {
        case 1: btnBgImg.contentMode = UIViewContentModeScaleAspectFit; break;
        case 2: btnBgImg.contentMode = UIViewContentModeScaleAspectFill; break;
        default: btnBgImg.contentMode = UIViewContentModeScaleToFill; break;
    }

    [((UIView *)self) insertSubview:btnBgImg atIndex:0];

    // 从 Cell 的 bounds 推导 bgImageView 尺寸（Cell 已被 margin 逻辑缩小）
    UIView *parentCell = nil;
    UIView *p = ((UIView *)self).superview;  // MMUIButton → contentView
    if (p) parentCell = p.superview;          // contentView → Cell
    CGRect cellBounds = parentCell ? parentCell.bounds : ((UIView *)self).bounds;
    CGFloat imgW = cellBounds.size.width;
    CGFloat imgH = cellBounds.size.height;
    CGFloat offsetX = isDark ? config.cardBgDarkOffsetX : config.cardBgLightOffsetX;
    CGFloat offsetY = isDark ? config.cardBgDarkOffsetY : config.cardBgLightOffsetY;
    btnBgImg.frame = CGRectMake(offsetX, offsetY, imgW, imgH);

    WPLog(@"CardBg-Diag", @"[BGIMG-CREATE] tag=%ld, frame=(%.0f,%.0f,%.0f,%.0f), cellBounds=(%.0f,%.0f,%.0f,%.0f), superview=%@, subviewIndex=%ld",
          (long)btnBgImg.tag,
          btnBgImg.frame.origin.x, btnBgImg.frame.origin.y,
          btnBgImg.frame.size.width, btnBgImg.frame.size.height,
          cellBounds.origin.x, cellBounds.origin.y,
          cellBounds.size.width, cellBounds.size.height,
          NSStringFromClass([btnBgImg.superview class]),
          (long)[((UIView *)self).subviews indexOfObject:btnBgImg]);

    NSInteger layerPos = isDark ? config.cardBgDarkLayer : config.cardBgLightLayer;
    if (layerPos == 1) {
        [((UIView *)self) bringSubviewToFront:btnBgImg];
    }

    objc_setAssociatedObject(self, kMioBgLoadedKey, @NO,
                             OBJC_ASSOCIATION_RETAIN_NONATOMIC);

    // 异步加载图片（文件 I/O 和解码全在后台）
    __weak UIImageView *weakBgImg = btnBgImg;
    __weak UIView *weakSelf = (UIView *)self;
    BOOL capturedIsDark = isDark;

    dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), ^{
        __strong UIImageView *strongBgImg = weakBgImg;
        __strong UIView *strongSelf = weakSelf;
        if (!strongBgImg || !strongSelf) return;

        UIImage *resultImage = [ListCornerRadiusHook wp_loadBackgroundImageSync:capturedIsDark];

        dispatch_async(dispatch_get_main_queue(), ^{
            __strong UIImageView *finalImg = weakBgImg;
            __strong UIView *finalSelf = weakSelf;
            if (!finalImg || !finalSelf) return;

            if (resultImage) {
                finalImg.image = resultImage;
                finalImg.alpha = 1.0;
                finalImg.hidden = NO;
                objc_setAssociatedObject(finalSelf, kMioBgLoadedKey, @YES,
                                         OBJC_ASSOCIATION_RETAIN_NONATOMIC);
                WPLog(@"CardBg-Diag", @"[BGIMG-SET] image=SET, size=%.0fx%.0f, frame=(%.0f,%.0f,%.0f,%.0f), hidden=%d, alpha=%.2f, tag=%ld",
                      resultImage.size.width, resultImage.size.height,
                      finalImg.frame.origin.x, finalImg.frame.origin.y,
                      finalImg.frame.size.width, finalImg.frame.size.height,
                      finalImg.isHidden, finalImg.alpha, (long)finalImg.tag);
            } else {
                WPLog(@"CardBg-Diag", @"[BGIMG-SET] image=NIL, tag=%ld, finalImg=%@", (long)finalImg.tag, finalImg ? @"exists" : @"nil");
                BOOL dark = NO;
                if (@available(iOS 13.0, *)) {
                    UIViewController *vCtrl = nil;
                    UIResponder *resp = finalSelf.nextResponder;
                    while (resp) {
                        if ([resp isKindOfClass:[UIViewController class]]) {
                            vCtrl = (UIViewController *)resp;
                            break;
                        }
                        resp = resp.nextResponder;
                    }
                    if (vCtrl) {
                        dark = (vCtrl.traitCollection.userInterfaceStyle == UIUserInterfaceStyleDark);
                    }
                }
                PluginConfig *cfg = [PluginConfig shared];
                UIColor *cardBg = [cfg colorFromHex:dark
                    ? cfg.listCardDarkBgColor : cfg.listCardLightBgColor];
                if (cardBg) {
                    finalSelf.backgroundColor = cardBg;
                }
                WPLog(@"CardBg-Diag", @"[IMG-CB] FALLBACK: set bg=%@, dark=%d", cardBg ?: @"(nil)", dark);
                objc_setAssociatedObject(finalSelf, kMioBgLoadedKey, @YES,
                                         OBJC_ASSOCIATION_RETAIN_NONATOMIC);
            }
        });
    });
    }

    } // end needsFullCardBg

APPLY_CORNER:
    // ════════════════════════════════════════════════════════
    // ★★★ 诊断：Dump MMUIButton 视图层级 ★★★
    // ════════════════════════════════════════════════════════
    {
        CALayer *selfLayer = ((UIView *)self).layer;
        WPLog(@"CardBg-Diag", @"[DUMP-MMUI] bg=%@, alpha=%.2f, sublayers=%zu, subviews=%zu",
              ((UIView *)self).backgroundColor,
              selfLayer.opacity,
              selfLayer.sublayers.count,
              ((UIView *)self).subviews.count);

        // Dump 所有 sublayer
        for (NSInteger i = 0; i < (NSInteger)selfLayer.sublayers.count; i++) {
            CALayer *sub = selfLayer.sublayers[i];
            WPLog(@"CardBg-Diag", @"[DUMP-LAYER[%ld]] class=%@, bg=%@, frame=(%.0f,%.0f,%.0f,%.0f), name=%@",
                  (long)i,
                  NSStringFromClass([sub class]),
                  sub.backgroundColor ? [UIColor colorWithCGColor:sub.backgroundColor] : @"(nil)",
                  sub.frame.origin.x, sub.frame.origin.y,
                  sub.frame.size.width, sub.frame.size.height,
                  sub.name ?: @"(nil)");
        }

        // Dump 所有 subview
        for (NSInteger i = 0; i < (NSInteger)((UIView *)self).subviews.count; i++) {
            UIView *sub = ((UIView *)self).subviews[i];
            WPLog(@"CardBg-Diag", @"[DUMP-SUB[%ld]] class=%@, tag=%ld, bg=%@, hidden=%d, alpha=%.2f, frame=(%.0f,%.0f,%.0f,%.0f)",
                  (long)i,
                  NSStringFromClass([sub class]),
                  (long)sub.tag,
                  sub.backgroundColor,
                  sub.isHidden,
                  sub.alpha,
                  sub.frame.origin.x, sub.frame.origin.y,
                  sub.frame.size.width, sub.frame.size.height);
        }

        // Dump Cell 层级
        UIView *cellView = (UIView *)self;
        while (cellView && ![NSStringFromClass([cellView class]) containsString:@"Cell"]) {
            cellView = cellView.superview;
        }
        if (cellView) {
            WPLog(@"CardBg-Diag", @"[DUMP-CELL] class=%@, bg=%@, masks=%d, subviews=%zu",
                  NSStringFromClass([cellView class]),
                  cellView.backgroundColor,
                  cellView.layer.masksToBounds,
                  cellView.subviews.count);

            for (NSInteger i = 0; i < (NSInteger)cellView.subviews.count; i++) {
                UIView *sub = cellView.subviews[i];
                WPLog(@"CardBg-Diag", @"[DUMP-CELL-SUB[%ld]] class=%@, bg=%@, hidden=%d, alpha=%.2f, frame=(%.0f,%.0f,%.0f,%.0f)",
                      (long)i,
                      NSStringFromClass([sub class]),
                      sub.backgroundColor,
                      sub.isHidden,
                      sub.alpha,
                      sub.frame.origin.x, sub.frame.origin.y,
                      sub.frame.size.width, sub.frame.size.height);
            }

            // Dump Cell 的 contentView
            UIView *cv = [(id)cellView respondsToSelector:@selector(contentView)]
                ? [(id)cellView contentView] : nil;
            if (cv) {
                WPLog(@"CardBg-Diag", @"[DUMP-CONTENTVIEW] bg=%@, masks=%d, subviews=%zu",
                      cv.backgroundColor, cv.layer.masksToBounds, cv.subviews.count);
                for (NSInteger i = 0; i < (NSInteger)cv.subviews.count; i++) {
                    UIView *sub = cv.subviews[i];
                    WPLog(@"CardBg-Diag", @"[DUMP-CV-SUB[%ld]] class=%@, bg=%@, hidden=%d, alpha=%.2f, frame=(%.0f,%.0f,%.0f,%.0f)",
                          (long)i,
                          NSStringFromClass([sub class]),
                          sub.backgroundColor,
                          sub.isHidden,
                          sub.alpha,
                          sub.frame.origin.x, sub.frame.origin.y,
                          sub.frame.size.width, sub.frame.size.height);
                }
            }

            // Dump Cell 的 layer sublayers
            WPLog(@"CardBg-Diag", @"[DUMP-CELL-LAYERS] sublayers=%zu", cellView.layer.sublayers.count);
            for (NSInteger i = 0; i < (NSInteger)cellView.layer.sublayers.count; i++) {
                CALayer *sub = cellView.layer.sublayers[i];
                WPLog(@"CardBg-Diag", @"[DUMP-CELL-LAYER[%ld]] class=%@, bg=%@, frame=(%.0f,%.0f,%.0f,%.0f), name=%@",
                      (long)i,
                      NSStringFromClass([sub class]),
                      sub.backgroundColor ? [UIColor colorWithCGColor:sub.backgroundColor] : @"(nil)",
                      sub.frame.origin.x, sub.frame.origin.y,
                      sub.frame.size.width, sub.frame.size.height,
                      sub.name ?: @"(nil)");
            }
        }
    }

    // ── 圆角 + 边框 + QR码隐藏 ──
    {
    NSInteger radius = (NSInteger)config.listCellCornerRadius;
    if (radius == 0) radius = 18;

    [ListCornerRadiusHook wp_applyProfileCardCorner:(UIView *)self
                                       cornerRadius:radius
                                            isDark:isDark];

    if (config.listHideRightQRCode) {
        [ListCornerRadiusHook wp_hideQRButtonInCell:(UIView *)self];
    }

    BOOL skipMasksToBounds = (config.cardBgFillMode == 3);
    if (!skipMasksToBounds) {
        ((UIView *)self).layer.masksToBounds = YES;
    } else {
        ((UIView *)self).layer.masksToBounds = NO;
    }
    }
}

static void replaced_MMTableViewCell_layoutSubviews(id self, SEL _cmd) {
    if (!_orig_MMUIButton_layoutSubviews) {
        Class MMUIButtonClass = objc_getClass("MMUIButton");
        if (MMUIButtonClass) {
            MSHookMessageEx(
                MMUIButtonClass,
                @selector(layoutSubviews),
                (IMP)replaced_MMUIButton_layoutSubviews,
                &_orig_MMUIButton_layoutSubviews
            );
            WPLog(@"ListCornerRadius", @"[OK] MMUIButton::layoutSubviews (lazy registered)");
        }
    }

    PluginConfig *config = [PluginConfig shared];

    if (!config.listCornerRadiusEnabled && !config.cardBgEnabled) {
        if (_orig_MMTableViewCell_layoutSubviews) {
            ((void (*)(id, SEL))_orig_MMTableViewCell_layoutSubviews)(self, _cmd);
        }
        return;
    }

    UIViewController *vc = findParentViewController((UIView *)self);
    if (!vc) {
        if (_orig_MMTableViewCell_layoutSubviews) {
            ((void (*)(id, SEL))_orig_MMTableViewCell_layoutSubviews)(self, _cmd);
        }
        return;
    }
    NSString *className = NSStringFromClass([vc class]);

    if (shouldSkipCorner(vc)) {
        if (_orig_MMTableViewCell_layoutSubviews) {
            ((void (*)(id, SEL))_orig_MMTableViewCell_layoutSubviews)(self, _cmd);
        }
        return;
    }

    UIView *cellView = (UIView *)self;
    BOOL isMoreVC = [className isEqualToString:@"MoreViewController"];

    // ★★★ 记录标志位：MoreVC + cardBgEnabled 时需要透明化 ★★★
    // 透明化必须在函数末尾执行（所有 orig + margin + bgColor + corner 之后）
    BOOL isProfileCardCell = [ListCornerRadiusHook wp_isProfileCard:cellView];
    BOOL needsCardBgTransparency = (isMoreVC && config.cardBgEnabled && isProfileCardCell);

    // ★★★ margin 前置：先改 Cell 的 x/width，再调 orig ★★★
    // 这样 orig 内部触发的 MMUIButton Hook 能读到缩小后的 Cell.bounds
    CGFloat margin = config.listCellMargin;
    if (margin > 0 && config.listCornerRadiusEnabled) {
        CGFloat currentX = cellView.frame.origin.x;
        UIView *superview = cellView.superview;
        CGFloat superX = superview ? superview.frame.origin.x : 0;
        CGFloat targetX = (margin > superX) ? margin - superX : 0;
        CGFloat containerW = superview ? superview.bounds.size.width
                                       : [UIScreen mainScreen].bounds.size.width;
        CGFloat targetW = containerW - 2.0 * margin;
        CGFloat currentW = cellView.frame.size.width;
        WPLog(@"CardBg-Diag", @"[MARGIN] margin=%.0f, currentFrame=(%.0f,%.0f,%.0f,%.0f), targetX=%.0f, targetW=%.0f, containerW=%.0f, isMoreVC=%d",
              margin,
              cellView.frame.origin.x, cellView.frame.origin.y,
              cellView.frame.size.width, cellView.frame.size.height,
              targetX, targetW, containerW, isMoreVC);
        if (currentX != targetX || fabs(currentW - targetW) > 0.5) {
            CGRect f = cellView.frame;
            f.origin.x = targetX;
            f.size.width = targetW;
            cellView.frame = f;
            WPLog(@"CardBg-Diag", @"[MARGIN] Applied: newFrame=(%.0f,%.0f,%.0f,%.0f)",
                  f.origin.x, f.origin.y, f.size.width, f.size.height);
        } else {
            WPLog(@"CardBg-Diag", @"[MARGIN] Skipped: already correct");
        }
    }

    // ★★★ orig（margin 已生效，MMUIButton Hook 读到正确的 Cell.bounds）★★★
    if (_orig_MMTableViewCell_layoutSubviews) {
        ((void (*)(id, SEL))_orig_MMTableViewCell_layoutSubviews)(self, _cmd);
    }

    static NSSet *bgColorSkipList = nil;
    static dispatch_once_t onceBgToken;
    dispatch_once(&onceBgToken, ^{
        bgColorSkipList = [NSSet setWithObjects:
            @"WCTimeLineViewController",
            @"WCAccountLoginUsersViewController",
            @"SessionSelectController",
            @"WCListViewController",
            @"BrandNotificationListViewController",
            @"BrandNewSessionViewController",
            @"BaseMsgContentViewController",
            @"BraceletRankProfileViewController",
            @"BraceletRankViewController",
            @"WCRedEnvelopesRedEnvelopesDetailViewController",
            @"MsgRecordDetailViewController",
            @"ChatRoomInfoViewController",
            @"ContactInfoViewController",
            @"AddFriendEntryViewController",
            @"AddContactToChatRoomViewController",
            @"SayHelloViewController",
            @"FTSHomeViewController",
            @"MMFinderPivotLiveViewController",
            @"WCSearchController",
            nil];
    });

    if (![bgColorSkipList containsObject:className]) {
        BOOL isDark = NO;
        if (@available(iOS 13.0, *)) {
            isDark = (vc.traitCollection.userInterfaceStyle == UIUserInterfaceStyleDark);
        }
        UIColor *customBg = [config colorFromHex:isDark
            ? config.listCellDarkBgColor : config.listCellLightBgColor];
        ((UIView *)self).backgroundColor = customBg ?: wp_cellDefaultBgColor(isDark);
    }

    NSInteger cornerRadius = (NSInteger)config.listCellCornerRadius;
    if (cornerRadius == 0) cornerRadius = 18;

    BOOL isContacts = [className isEqualToString:@"ContactsViewController"];
    BOOL isFTSHome = [className isEqualToString:@"FTSHomeViewController"];

    UIView *parent = cellView.superview;
    UITableView *tableView = nil;
    while (parent) {
        if ([parent isKindOfClass:[UITableView class]]) {
            tableView = (UITableView *)parent;
            break;
        }
        parent = parent.superview;
    }
    if (!tableView) return;

    NSIndexPath *indexPath = [tableView indexPathForCell:(UITableViewCell *)self];
    if (!indexPath) return;

    NSInteger section = indexPath.section;
    NSInteger row = indexPath.row;
    NSInteger totalRows = [tableView numberOfRowsInSection:section];

    if (isContacts) {
        [ListCornerRadiusHook wp_applyCornerForContacts:cellView
                                             tableView:tableView
                                             indexPath:indexPath
                                               section:section
                                                   row:row
                                                 total:totalRows
                                          cornerRadius:cornerRadius
                                              isFTSHome:isFTSHome];
    } else {
        [ListCornerRadiusHook wp_applyStandardCorner:cellView
                                          tableView:tableView
                                          indexPath:indexPath
                                            section:section
                                                row:row
                                              total:totalRows
                                       cornerRadius:cornerRadius
                                          isFTSHome:isFTSHome
                                          className:className];
    }

    // ════════════════════════════════════════════════════════
    // ★★★ 最后：资料卡透明化（在所有 orig + margin + bgColor + corner 之后！）★★★
    // ════════════════════════════════════════════════════════
    if (needsCardBgTransparency) {
        WPLog(@"CardBg-Diag", @"[CELL-TRANSPARENCY] Before: cellBg=%@, cellMasks=%d, cellBorder=%.1f",
              cellView.backgroundColor, cellView.layer.masksToBounds, cellView.layer.borderWidth);
        cellView.backgroundColor = [UIColor clearColor];
        cellView.layer.borderWidth = 0;
        cellView.layer.masksToBounds = NO;  // Cell 层不裁剪，由 MMUIButton 层负责

        UIView *cv = [(UITableViewCell *)cellView contentView];
        if (cv) {
            WPLog(@"CardBg-Diag", @"[CELL-TRANSPARENCY] contentView: bg=%@, masks=%d", cv.backgroundColor, cv.layer.masksToBounds);
            cv.backgroundColor = [UIColor clearColor];
            cv.layer.masksToBounds = NO;
        }

        if ([cellView respondsToSelector:@selector(backgroundView)]) {
            UIView *bgv = [(id)cellView backgroundView];
            if (bgv) {
                WPLog(@"CardBg-Diag", @"[CELL-TRANSPARENCY] backgroundView: class=%@, bg=%@, hidden=%d",
                      NSStringFromClass([bgv class]), bgv.backgroundColor, bgv.isHidden);
                bgv.backgroundColor = [UIColor clearColor]; bgv.hidden = YES;
            }
        }
        if ([cellView respondsToSelector:@selector(selectedBackgroundView)]) {
            UIView *sbgv = [(id)cellView selectedBackgroundView];
            if (sbgv) {
                WPLog(@"CardBg-Diag", @"[CELL-TRANSPARENCY] selectedBgView: class=%@, bg=%@",
                      NSStringFromClass([sbgv class]), sbgv.backgroundColor);
                sbgv.backgroundColor = [UIColor clearColor];
            }
        }

        WPLog(@"CardBg-Diag", @"[CELL-TRANSPARENCY] After: cellBg=%@, cellMasks=%d, cvBg=%@",
              cellView.backgroundColor, cellView.layer.masksToBounds,
              cv ? cv.backgroundColor : @"(nil)");

        // ★ 不设 masksToBounds=YES（让 MMUIButton 层负责裁剪）
        return;
    }

    cellView.layer.masksToBounds = YES;

}

@implementation ListCornerRadiusHook

+ (void)initListCornerRadiusHook {
    WPLog(@"ListCornerRadius", @"[INIT] Initializing ListCornerRadius hook...");
    Class MMTableViewCellClass = objc_getClass("MMTableViewCell");
    if (MMTableViewCellClass) {
        MSHookMessageEx(
            MMTableViewCellClass,
            @selector(layoutSubviews),
            (IMP)replaced_MMTableViewCell_layoutSubviews,
            &_orig_MMTableViewCell_layoutSubviews
        );
        WPLog(@"ListCornerRadius", @"[OK] MMTableViewCell::layoutSubviews");
    } else {
        WPLog(@"ListCornerRadius", @"[WARN] MMTableViewCell class not found!");
    }

    Class WCSearchBarClass = objc_getClass("WCSearchBar");
    if (WCSearchBarClass) {
        MSHookMessageEx(
            WCSearchBarClass,
            @selector(layoutSubviews),
            (IMP)replaced_WCSearchBar_layoutSubviews,
            &_orig_WCSearchBar_layoutSubviews
        );
        WPLog(@"ListCornerRadius", @"[OK] WCSearchBar::layoutSubviews");
    } else {
        WPLog(@"ListCornerRadius", @"[WARN] WCSearchBar class not found!");
    }

    WPLog(@"ListCornerRadius", @"[DEBUG] About to register MMUIButton hook...");
    Class MMUIButtonClass = objc_getClass("MMUIButton");
    WPLog(@"ListCornerRadius", @"[DEBUG] MMUIButton class = %@", MMUIButtonClass);
    if (MMUIButtonClass) {
        MSHookMessageEx(
            MMUIButtonClass,
            @selector(layoutSubviews),
            (IMP)replaced_MMUIButton_layoutSubviews,
            &_orig_MMUIButton_layoutSubviews
        );
        WPLog(@"ListCornerRadius", @"[OK] MMUIButton::layoutSubviews (ProfileCard)");
    } else {
        MMUIButtonClass = objc_lookUpClass("MMUIButton");
        WPLog(@"ListCornerRadius", @"[DEBUG] objc_lookUpClass result = %@", MMUIButtonClass);
        if (MMUIButtonClass) {
            MSHookMessageEx(
                MMUIButtonClass,
                @selector(layoutSubviews),
                (IMP)replaced_MMUIButton_layoutSubviews,
                &_orig_MMUIButton_layoutSubviews
            );
            WPLog(@"ListCornerRadius", @"[OK] MMUIButton::layoutSubviews (ProfileCard, via lookUp)");
        } else {
            WPLog(@"ListCornerRadius", @"[WARN] MMUIButton class not found! Will retry on first MMTableViewCell layoutSubviews");
        }
    }
}

+ (void)wp_applyStandardCorner:(UIView *)cell
                     tableView:(UITableView *)tableView
                     indexPath:(NSIndexPath *)indexPath
                       section:(NSInteger)section
                           row:(NSInteger)row
                         total:(NSInteger)totalRows
                  cornerRadius:(NSInteger)configuredRadius
                     isFTSHome:(BOOL)isFTSHome
                     className:(NSString *)className {

    BOOL isNewMainFrame = [className isEqualToString:@"NewMainFrameViewController"];
    NSInteger indexSection = indexPath.section;

    if (totalRows == 1) {
        cell.layer.cornerRadius = configuredRadius;
        cell.layer.maskedCorners = kCALayerMinXMinYCorner | kCALayerMaxXMinYCorner
                                 | kCALayerMinXMaxYCorner | kCALayerMaxXMaxYCorner;
        [self wp_applyBorderAndBg:cell radius:configuredRadius position:0 isFTSHome:isFTSHome];
        return;
    }

    if (row == 0) {
        cell.layer.cornerRadius = configuredRadius;
        cell.layer.maskedCorners = kCALayerMinXMinYCorner | kCALayerMaxXMinYCorner;
        [self wp_applyBorderAndBg:cell radius:configuredRadius position:1 isFTSHome:isFTSHome];
        return;
    }

    if (row != totalRows - 1) {
        cell.layer.cornerRadius = 0;
        cell.layer.maskedCorners = 0;
        [self wp_applyBorderAndBg:cell radius:0 position:2 isFTSHome:isFTSHome];
        return;
    }

    if (isNewMainFrame && indexSection == 1) {
        UIView *foldView = [self wp_findFoldViewInSubviews:tableView.subviews];
        if (foldView) {
            if ([foldView respondsToSelector:@selector(isFolding)]) {
                BOOL folding = ((BOOL (*)(id, SEL))objc_msgSend)(foldView, @selector(isFolding));
                if (!folding) {
                    cell.layer.cornerRadius = 0;
                    cell.layer.maskedCorners = 0;
                    [self wp_applyBorderAndBg:cell radius:0 position:2 isFTSHome:isFTSHome];
                    return;
                }
            }
        }
    }

    cell.layer.cornerRadius = configuredRadius;
    cell.layer.maskedCorners = kCALayerMinXMaxYCorner | kCALayerMaxXMaxYCorner;
    [self wp_applyBorderAndBg:cell radius:configuredRadius position:3 isFTSHome:isFTSHome];
}

+ (void)wp_applyCornerForContacts:(UIView *)cell
                        tableView:(UITableView *)tableView
                        indexPath:(NSIndexPath *)indexPath
                          section:(NSInteger)section
                              row:(NSInteger)row
                            total:(NSInteger)rowInThisSection
                     cornerRadius:(NSInteger)radius
                         isFTSHome:(BOOL)isFTSHome {

    if (section > 3) {
        [self wp_applyStandardCornerPerSection:cell
                                            row:row
                                          total:rowInThisSection
                                   cornerRadius:radius
                                      isFTSHome:isFTSHome];
        return;
    }

    NSMutableArray<NSNumber *> *sectionRowCounts = [NSMutableArray array];
    NSInteger sectionCount = [tableView numberOfSections];
    NSInteger maxSections = MIN(sectionCount, 4);
    for (NSInteger i = 0; i < maxSections; i++) {
        NSInteger rows = [tableView numberOfRowsInSection:i];
        [sectionRowCounts addObject:@(rows)];
    }

    NSInteger firstNonEmptySection = -1;
    for (NSInteger i = 0; i < (NSInteger)sectionRowCounts.count; i++) {
        if ([sectionRowCounts[i] integerValue] > 0) {
            firstNonEmptySection = i;
            break;
        }
    }

    NSInteger lastNonEmptySection = -1;
    for (NSInteger i = (NSInteger)sectionRowCounts.count - 1; i >= 0; i--) {
        if ([sectionRowCounts[i] integerValue] > 0) {
            lastNonEmptySection = i;
            break;
        }
    }

    NSInteger sectionCount_effective = (NSInteger)sectionRowCounts.count;
    NSInteger firstSectionFirstRowCount = (firstNonEmptySection >= 0)
        ? [sectionRowCounts[firstNonEmptySection] integerValue] : 0;

    if (sectionCount_effective == 1 && firstSectionFirstRowCount == 1) {
        cell.layer.cornerRadius = radius;
        cell.layer.maskedCorners = (kCALayerMinXMinYCorner | kCALayerMaxXMinYCorner
                                  | kCALayerMinXMaxYCorner | kCALayerMaxXMaxYCorner);
        [self wp_applyBorderAndBg:cell radius:radius position:0 isFTSHome:isFTSHome];
    } else if (section == firstNonEmptySection && row == 0) {
        cell.layer.cornerRadius = radius;
        cell.layer.maskedCorners = kCALayerMinXMinYCorner | kCALayerMaxXMinYCorner;
        [self wp_applyBorderAndBg:cell radius:radius position:1 isFTSHome:isFTSHome];
    } else if (section == lastNonEmptySection
               && row == [sectionRowCounts[lastNonEmptySection] integerValue] - 1) {
        cell.layer.cornerRadius = radius;
        cell.layer.maskedCorners = kCALayerMinXMaxYCorner | kCALayerMaxXMaxYCorner;
        [self wp_applyBorderAndBg:cell radius:radius position:3 isFTSHome:isFTSHome];
    } else {
        cell.layer.cornerRadius = 0;
        cell.layer.maskedCorners = 0;
        [self wp_applyBorderAndBg:cell radius:0 position:2 isFTSHome:isFTSHome];
    }
}

+ (void)wp_applyStandardCornerPerSection:(UIView *)cell
                                     row:(NSInteger)row
                                   total:(NSInteger)totalRows
                            cornerRadius:(NSInteger)radius
                               isFTSHome:(BOOL)isFTSHome {
    if (totalRows == 1) {
        cell.layer.cornerRadius = radius;
        cell.layer.maskedCorners = (kCALayerMinXMinYCorner | kCALayerMaxXMinYCorner
                                  | kCALayerMinXMaxYCorner | kCALayerMaxXMaxYCorner);
        [self wp_applyBorderAndBg:cell radius:radius position:0 isFTSHome:isFTSHome];
    } else if (row == 0) {
        cell.layer.cornerRadius = radius;
        cell.layer.maskedCorners = kCALayerMinXMinYCorner | kCALayerMaxXMinYCorner;
        [self wp_applyBorderAndBg:cell radius:radius position:1 isFTSHome:isFTSHome];
    } else if (row == totalRows - 1) {
        cell.layer.cornerRadius = radius;
        cell.layer.maskedCorners = kCALayerMinXMaxYCorner | kCALayerMaxXMaxYCorner;
        [self wp_applyBorderAndBg:cell radius:radius position:3 isFTSHome:isFTSHome];
    } else {
        cell.layer.cornerRadius = 0;
        cell.layer.maskedCorners = 0;
        [self wp_applyBorderAndBg:cell radius:0 position:2 isFTSHome:isFTSHome];
    }
}

+ (void)wp_applyBorderAndBg:(UIView *)cell
                     radius:(NSInteger)radius
                   position:(NSInteger)position
                  isFTSHome:(BOOL)isFTSHome {

    PluginConfig *config = [PluginConfig shared];
    if (!config.listCellBorder || isFTSHome) {
        return;
    }

    static void *const kBorderCacheKey = &kBorderCacheKey;
    BOOL isDark = config.isDarkMode;
    NSString *cacheKey = [NSString stringWithFormat:@"%ld_%.0f_%.0f_%ld_%.1f_%d",
        (long)position, cell.bounds.size.width, cell.bounds.size.height,
        (long)radius, config.listCellBorderWidth,
        (int)isDark];
    NSString *lastCache = objc_getAssociatedObject(cell, kBorderCacheKey);
    if ([lastCache isEqualToString:cacheKey]) {
        return;
    }

    cell.layer.borderWidth = 0;
    cell.layer.borderColor = nil;

    CGFloat borderWidth = config.listCellBorderWidth;
    if (borderWidth == 0) borderWidth = 2.0;

    UIColor *borderColor = [config colorFromHex:isDark ? config.listCellBorderDarkColor : config.listCellBorderLightColor];
    if (!borderColor) {
        borderColor = isDark
            ? [UIColor colorWithRed:0.25 green:0.25 blue:0.25 alpha:1.0]
            : [UIColor colorWithRed:0.9 green:0.9 blue:0.9 alpha:1.0];
    }

    NSArray *sublayers = [cell.layer.sublayers copy];
    for (CALayer *layer in sublayers) {
        if ([layer.name isEqualToString:@"com.mio.cornerBorder"]) {
            [layer removeFromSuperlayer];
        }
    }

    switch (position) {
        case 0: {
            cell.layer.borderColor = borderColor.CGColor;
            cell.layer.borderWidth = borderWidth;
            break;
        }
        case 1: {
            CAShapeLayer *shape = [self wp_buildUnifiedBorderLayer:cell.bounds
                                                       borderWidth:borderWidth
                                                      borderColor:borderColor
                                                           radius:radius
                                                             type:@"top"];
            [cell.layer addSublayer:shape];
            break;
        }
        case 2: {
            CAShapeLayer *left = [self wp_buildUnifiedBorderLayer:cell.bounds
                                                      borderWidth:borderWidth
                                                     borderColor:borderColor
                                                          radius:0
                                                            type:@"left"];
            CAShapeLayer *right = [self wp_buildUnifiedBorderLayer:cell.bounds
                                                       borderWidth:borderWidth
                                                      borderColor:borderColor
                                                           radius:0
                                                             type:@"right"];
            [cell.layer addSublayer:left];
            [cell.layer addSublayer:right];
            break;
        }
        case 3: {
            CAShapeLayer *shape = [self wp_buildUnifiedBorderLayer:cell.bounds
                                                       borderWidth:borderWidth
                                                      borderColor:borderColor
                                                           radius:radius
                                                             type:@"bottom"];
            [cell.layer addSublayer:shape];
            break;
        }
    }

    objc_setAssociatedObject(cell, kBorderCacheKey, cacheKey,
        OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}

+ (void)applyBorderToView:(UIView *)view radius:(NSInteger)radius position:(NSInteger)position isFTSHome:(BOOL)isFTSHome {
    [self wp_applyBorderAndBg:view radius:radius position:position isFTSHome:isFTSHome];
}

+ (UIView *)wp_findFoldViewInSubviews:(NSArray<UIView *> *)subviews {
    for (UIView *subview in subviews) {
        if ([NSStringFromClass([subview class]) containsString:@"MainFrameSectionFoldView"]) {
            return subview;
        }
        UIView *found = [self wp_findFoldViewInSubviews:subview.subviews];
        if (found) return found;
    }
    return nil;
}

+ (BOOL)wp_isProfileCard:(UIView *)cell {
    return [self wp_findMMHeadImageViewInSubviews:cell.subviews];
}

+ (BOOL)wp_findMMHeadImageViewInSubviews:(NSArray<UIView *> *)subviews {
    for (UIView *sub in subviews) {
        NSString *cn = NSStringFromClass([sub class]);
        if ([cn isEqualToString:@"MMHeadImageView"]) {
            return YES;
        }
        if ([self wp_findMMHeadImageViewInSubviews:sub.subviews]) {
            return YES;
        }
    }
    return NO;
}

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

+ (void)wp_hideQRButtonInCell:(UIView *)cell {
    for (UIView *sub in cell.subviews) {
        NSString *cn = NSStringFromClass([sub class]);
        if ([cn containsString:@"Button"]) {
            CGFloat x = sub.frame.origin.x;
            if (x > sub.superview.bounds.size.width * 0.7) {
                sub.hidden = YES;
            }
        }
        [self wp_hideQRButtonInSubviews:sub.subviews];
    }
}

+ (void)wp_hideQRButtonInSubviews:(NSArray<UIView *> *)subviews {
    for (UIView *sub in subviews) {
        NSString *cn = NSStringFromClass([sub class]);
        if ([cn containsString:@"Button"]) {
            CGFloat x = sub.frame.origin.x;
            if (x > sub.superview.bounds.size.width * 0.7) {
                sub.hidden = YES;
            }
        }
        [self wp_hideQRButtonInSubviews:sub.subviews];
    }
}

+ (CAShapeLayer *)wp_buildUnifiedBorderLayer:(CGRect)rect
                                 borderWidth:(CGFloat)borderWidth
                                borderColor:(UIColor *)borderColor
                                     radius:(CGFloat)radius
                                       type:(NSString *)type {
    CAShapeLayer *shape = [CAShapeLayer layer];
    shape.name = @"com.mio.cornerBorder";
    shape.strokeColor = borderColor.CGColor;
    shape.fillColor = [UIColor clearColor].CGColor;
    shape.lineWidth = borderWidth;
    shape.lineJoin = kCALineJoinRound;

    CGFloat hw = borderWidth / 2.0;
    CGFloat w = rect.size.width;
    CGFloat h = rect.size.height;
    CGFloat r = (radius > 0) ? radius : 0;

    UIBezierPath *path = [UIBezierPath bezierPath];

    if ([type isEqualToString:@"top"]) {
        [path moveToPoint:CGPointMake(hw, h)];
        [path addLineToPoint:CGPointMake(hw, hw + r)];
        if (r > 0) {
            [path addArcWithCenter:CGPointMake(hw + r, hw + r)
                            radius:r
                        startAngle:M_PI
                          endAngle:M_PI * 1.5
                         clockwise:YES];
            [path addArcWithCenter:CGPointMake(w - hw - r, hw + r)
                            radius:r
                        startAngle:M_PI * 1.5
                          endAngle:0
                         clockwise:YES];
        }
        [path addLineToPoint:CGPointMake(w - hw, h)];
    } else if ([type isEqualToString:@"bottom"]) {
        [path moveToPoint:CGPointMake(hw, 0)];
        [path addLineToPoint:CGPointMake(hw, h - hw - r)];
        if (r > 0) {
            [path addArcWithCenter:CGPointMake(hw + r, h - hw - r)
                            radius:r
                        startAngle:M_PI
                          endAngle:M_PI * 0.5
                         clockwise:NO];
            [path addArcWithCenter:CGPointMake(w - hw - r, h - hw - r)
                            radius:r
                        startAngle:M_PI * 0.5
                          endAngle:0
                         clockwise:NO];
        }
        [path addLineToPoint:CGPointMake(w - hw, 0)];
    } else if ([type isEqualToString:@"left"]) {
        [path moveToPoint:CGPointMake(hw, 0)];
        [path addLineToPoint:CGPointMake(hw, h)];
    } else if ([type isEqualToString:@"right"]) {
        [path moveToPoint:CGPointMake(w - hw, 0)];
        [path addLineToPoint:CGPointMake(w - hw, h)];
    }

    shape.path = path.CGPath;
    shape.frame = rect;

    return shape;
}

+ (BOOL)wp_isCurrentDarkMode {
    if (@available(iOS 13.0, *)) {
        UIApplication *app = [UIApplication sharedApplication];
        for (UIScene *scene in app.connectedScenes) {
            if ([scene isKindOfClass:[UIWindowScene class]]) {
                UIWindowScene *ws = (UIWindowScene *)scene;
                for (UIWindow *window in ws.windows) {
                    if (window.isKeyWindow) {
                        return window.traitCollection.userInterfaceStyle == UIUserInterfaceStyleDark;
                    }
                }
            }
        }
    }
    return NO;
}

+ (UIImage *)wp_loadBackgroundImageSync:(BOOL)isDark {
    WPLog(@"CardBg-Diag", @"[IMG-LOAD] Start: isDark=%d", isDark);
    PluginConfig *config = [PluginConfig shared];
    NSString *imagePath = isDark ? config.cardBgDarkImagePath
                                 : config.cardBgLightImagePath;
    WPLog(@"CardBg-Diag", @"[IMG-LOAD] configPath=%@", imagePath ?: @"(nil)");

    if (!imagePath || imagePath.length == 0) {
        NSString *bgDir = [ListCornerRadiusHook wp_cardBackgroundDirectory];
        NSFileManager *fm = [NSFileManager defaultManager];

        NSString *gifPath = [bgDir stringByAppendingPathComponent:
            isDark ? @"MioCardBgDark.gif" : @"MioCardBgLight.gif"];
        NSString *pngPath = [bgDir stringByAppendingPathComponent:
            isDark ? @"MioCardBgDark.png" : @"MioCardBgLight.png"];

        if ([fm fileExistsAtPath:gifPath]) {
            imagePath = gifPath;
        } else if ([fm fileExistsAtPath:pngPath]) {
            imagePath = pngPath;
        }
        WPLog(@"CardBg-Diag", @"[IMG-LOAD] resolvedPath=%@", imagePath ?: @"(nil)");
    }

    if (!imagePath || imagePath.length == 0) {
        WPLog(@"CardBg-Diag", @"[IMG-LOAD] Result: NIL (no path)");
        return nil;
    }

    NSFileManager *fm = [NSFileManager defaultManager];
    if (![fm fileExistsAtPath:imagePath]) {
        WPLog(@"CardBg-Diag", @"[IMG-LOAD] Result: NIL (file not exists at %@)", imagePath);
        return nil;
    }
    WPLog(@"CardBg-Diag", @"[IMG-LOAD] fileExists=YES, ext=%@", imagePath.pathExtension.lowercaseString);

    NSString *ext = imagePath.pathExtension.lowercaseString;

    if ([ext isEqualToString:@"gif"]) {
        NSData *gifData = [NSData dataWithContentsOfFile:imagePath];
        if (!gifData) {
            WPLog(@"CardBg-Diag", @"[IMG-LOAD] Result: NIL (gifData nil for %@)", imagePath);
            return nil;
        }

        CGImageSourceRef source = CGImageSourceCreateWithData(
            (__bridge CFDataRef)gifData, NULL);
        if (!source) {
            WPLog(@"CardBg-Diag", @"[IMG-LOAD] Result: NIL (CGImageSourceCreateWithData failed)");
            return nil;
        }

        size_t count = CGImageSourceGetCount(source);
        WPLog(@"CardBg-Diag", @"[IMG-LOAD] GIF frameCount=%zu", count);
        if (count < 2) {
            CGImageRef cgImg = CGImageSourceCreateImageAtIndex(source, 0, NULL);
            UIImage *result = cgImg ? [UIImage imageWithCGImage:cgImg] : nil;
            if (cgImg) CGImageRelease(cgImg);
            CFRelease(source);
            WPLog(@"CardBg-Diag", @"[IMG-LOAD] Result: %@ (single-frame GIF, size=%.0fx%.0f)",
                  result ? @"SUCCESS" : @"NIL", result.size.width, result.size.height);
            return result;
        }

        NSMutableArray<UIImage *> *frames = [NSMutableArray array];
        NSTimeInterval totalDuration = 0;
        for (size_t i = 0; i < count; i++) {
            CGImageRef frameImg = CGImageSourceCreateImageAtIndex(source, i, NULL);
            if (frameImg) {
                [frames addObject:[UIImage imageWithCGImage:frameImg]];
                CGImageRelease(frameImg);

                CFDictionaryRef props =
                    CGImageSourceCopyPropertiesAtIndex(source, i, NULL);
                if (props) {
                    CFDictionaryRef gifDict = CFDictionaryGetValue(
                        props, kCGImagePropertyGIFDictionary);
                    if (gifDict) {
                        CFNumberRef delayRef = CFDictionaryGetValue(
                            gifDict, kCGImagePropertyGIFDelayTime);
                        if (!delayRef) {
                            delayRef = CFDictionaryGetValue(
                                gifDict, kCGImagePropertyGIFUnclampedDelayTime);
                        }
                        NSTimeInterval delay = 0.1;
                        if (delayRef) {
                            CFNumberGetValue(delayRef, kCFNumberFloatType, &delay);
                            if (delay < 0.02) delay = 0.1;
                        }
                        totalDuration += delay;
                    }
                    CFRelease(props);
                }
            }
        }
        CFRelease(source);

        if (frames.count > 0) {
            UIImage *result = [UIImage animatedImageWithImages:frames duration:totalDuration];
            WPLog(@"CardBg-Diag", @"[IMG-LOAD] Result: %@ (animated GIF, %lu frames, dur=%.2f, size=%.0fx%.0f)",
                  result ? @"SUCCESS" : @"NIL", (unsigned long)frames.count, totalDuration,
                  result.size.width, result.size.height);
            return result;
        }
        WPLog(@"CardBg-Diag", @"[IMG-LOAD] Result: NIL (GIF frames empty)");
        return nil;
    } else {
        UIImage *result = [UIImage imageWithContentsOfFile:imagePath];
        WPLog(@"CardBg-Diag", @"[IMG-LOAD] Result: %@ (static image, size=%.0fx%.0f)",
              result ? @"SUCCESS" : @"NIL", result.size.width, result.size.height);
        return result;
    }
}

+ (NSString *)wp_cardBackgroundDirectory {
    static NSString *dir = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        NSString *docsDir = [NSSearchPathForDirectoriesInDomains(
            NSDocumentDirectory, NSUserDomainMask, YES) firstObject];
        dir = [docsDir stringByAppendingPathComponent:@"MioCardBackground"];

        NSFileManager *fm = [NSFileManager defaultManager];
        BOOL isDir = NO;
        BOOL exists = [fm fileExistsAtPath:dir isDirectory:&isDir];
        if (!exists) {
            [fm createDirectoryAtPath:dir
           withIntermediateDirectories:YES
                            attributes:nil
                                 error:nil];
        } else if (!isDir) {
            [fm removeItemAtPath:dir error:nil];
            [fm createDirectoryAtPath:dir
           withIntermediateDirectories:YES
                            attributes:nil
                                 error:nil];
        }
    });
    return dir;
}

+ (void)wp_loadBackgroundImageForImageView:(UIImageView *)imageView isDark:(BOOL)isDark {
    dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), ^{
        PluginConfig *config = [PluginConfig shared];
        NSString *imagePath = isDark ? config.cardBgDarkImagePath
                                     : config.cardBgLightImagePath;

        if (!imagePath || imagePath.length == 0) {
            NSString *bgDir = [[ListCornerRadiusHook wp_cardBackgroundDirectory] copy];
            NSFileManager *fm = [NSFileManager defaultManager];

            NSString *gifPath = [bgDir stringByAppendingPathComponent:
                isDark ? @"MioCardBgDark.gif" : @"MioCardBgLight.gif"];
            NSString *pngPath = [bgDir stringByAppendingPathComponent:
                isDark ? @"MioCardBgDark.png" : @"MioCardBgLight.png"];

            if ([fm fileExistsAtPath:gifPath]) {
                imagePath = gifPath;
            } else if ([fm fileExistsAtPath:pngPath]) {
                imagePath = pngPath;
            }
        }

        if (!imagePath || imagePath.length == 0) return;

        NSFileManager *fm = [NSFileManager defaultManager];
        if (![fm fileExistsAtPath:imagePath]) return;

        UIImage *resultImage = nil;
        NSString *ext = imagePath.pathExtension.lowercaseString;

        if ([ext isEqualToString:@"gif"]) {
            NSData *gifData = [NSData dataWithContentsOfFile:imagePath];
            if (gifData) {
                CGImageSourceRef source = CGImageSourceCreateWithData(
                    (__bridge CFDataRef)gifData, NULL);
                if (source) {
                    size_t count = CGImageSourceGetCount(source);
                    if (count < 2) {
                        CGImageRef cgImg = CGImageSourceCreateImageAtIndex(source, 0, NULL);
                        resultImage = [UIImage imageWithCGImage:cgImg];
                        CGImageRelease(cgImg);
                        CFRelease(source);
                    } else {
                        NSMutableArray<UIImage *> *frames = [NSMutableArray array];
                        NSTimeInterval totalDuration = 0;
                        for (size_t i = 0; i < count; i++) {
                            CGImageRef frameImg = CGImageSourceCreateImageAtIndex(source, i, NULL);
                            if (frameImg) {
                                [frames addObject:[UIImage imageWithCGImage:frameImg]];
                                CGImageRelease(frameImg);

                                CFDictionaryRef props =
                                    CGImageSourceCopyPropertiesAtIndex(source, i, NULL);
                                if (props) {
                                    CFDictionaryRef gifDict = CFDictionaryGetValue(
                                        props, kCGImagePropertyGIFDictionary);
                                    if (gifDict) {
                                        CFNumberRef delayRef = CFDictionaryGetValue(
                                            gifDict, kCGImagePropertyGIFDelayTime);
                                        if (!delayRef) {
                                            delayRef = CFDictionaryGetValue(
                                                gifDict,
                                                kCGImagePropertyGIFUnclampedDelayTime);
                                        }
                                        NSTimeInterval delay = 0.1;
                                        if (delayRef) {
                                            CFNumberGetValue(delayRef,
                                                kCFNumberFloatType, &delay);
                                            if (delay < 0.02) delay = 0.1;
                                        }
                                        totalDuration += delay;
                                    }
                                    CFRelease(props);
                                }
                            }
                        }
                        CFRelease(source);
                        if (frames.count > 0) {
                            resultImage = [UIImage animatedImageWithImages:frames
                                                            duration:totalDuration];
                        }
                    }
                }
            }
        } else {
            resultImage = [UIImage imageWithContentsOfFile:imagePath];
        }

        if (resultImage && imageView) {
            dispatch_async(dispatch_get_main_queue(), ^{
                imageView.image = resultImage;
                imageView.alpha = 1.0;
                imageView.hidden = NO;
            });
        }
    });
}

@end