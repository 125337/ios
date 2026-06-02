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

    // 只需要圆角不需要资料卡 → 快速处理
    if (!needsCardBg && needsCorner) {
        return;
    }

    // ════════════════════════════════════════════════════════
    // 以下 needsCardBg == YES
    // ════════════════════════════════════════════════════════

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
        CGRect btnBounds = ((UIView *)self).bounds;
        CGFloat imgW = btnBounds.size.width;
        CGFloat imgH = btnBounds.size.height;
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

    CGRect btnBounds = ((UIView *)self).bounds;
    CGFloat imgW = btnBounds.size.width;
    CGFloat imgH = btnBounds.size.height;
    CGFloat offsetX = isDark ? config.cardBgDarkOffsetX : config.cardBgLightOffsetX;
    CGFloat offsetY = isDark ? config.cardBgDarkOffsetY : config.cardBgLightOffsetY;
    btnBgImg.frame = CGRectMake(offsetX, offsetY, imgW, imgH);

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
            } else {
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
                objc_setAssociatedObject(finalSelf, kMioBgLoadedKey, @YES,
                                         OBJC_ASSOCIATION_RETAIN_NONATOMIC);
            }
        });
    });
    }

APPLY_CORNER:
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

    // ★★★ 绝招三：Cell Hook 不再处理资料卡 ★★★
    // 所有资料卡逻辑（bgImageView、HideCard、高度调整等）都在 MMUIButton Hook 中
    // Cell Hook 只处理通用圆角逻辑

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
    // ★★★ 不再用 wp_isProfileCard 判断（Race Condition：Cell Hook 时 MMHeadImageView 尚未创建）
    // MoreViewController 的资料卡识别完全由 MMUIButton Hook 的4层过滤负责
    // Cell Hook 只负责：MoreVC + cardBgEnabled 时做 Cell 层的透明化+高度+间距
    if (isMoreVC && config.cardBgEnabled) {
        if (_orig_MMTableViewCell_layoutSubviews) {
            ((void (*)(id, SEL))_orig_MMTableViewCell_layoutSubviews)(self, _cmd);
        }

        // Cell 透明化（让 MMUIButton 层的背景图可见）
        cellView.backgroundColor = [UIColor clearColor];
        cellView.layer.borderWidth = 0;
        cellView.layer.masksToBounds = NO;

        UIView *cv = [(UITableViewCell *)cellView contentView];
        if (cv) {
            cv.backgroundColor = [UIColor clearColor];
            cv.layer.masksToBounds = NO;
        }

        if ([cellView respondsToSelector:@selector(backgroundView)]) {
            UIView *bgv = [(id)cellView backgroundView];
            if (bgv) { bgv.backgroundColor = [UIColor clearColor]; bgv.hidden = YES; }
        }
        if ([cellView respondsToSelector:@selector(selectedBackgroundView)]) {
            UIView *sbgv = [(id)cellView selectedBackgroundView];
            if (sbgv) { sbgv.backgroundColor = [UIColor clearColor]; }
        }

        // ★★★ 不在 layoutSubviews 中修改 Cell 自身 frame（会触发 UIKit 反馈循环导致卡死）
        // cardBgHeight / cardBgListSpacing 需要在 tableView delegate 层面实现
        // 当前只做透明化，背景图由 MMUIButton Hook 处理
        // ★ 不 return，继续往下执行圆角和边距逻辑
    }

    if (_orig_MMTableViewCell_layoutSubviews) {
        ((void (*)(id, SEL))_orig_MMTableViewCell_layoutSubviews)(self, _cmd);
    }

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
        if (currentX != targetX || fabs(currentW - targetW) > 0.5) {
            CGRect f = cellView.frame;
            f.origin.x = targetX;
            f.size.width = targetW;
            cellView.frame = f;
        }
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
    PluginConfig *config = [PluginConfig shared];
    NSString *imagePath = isDark ? config.cardBgDarkImagePath
                                 : config.cardBgLightImagePath;

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
    }

    if (!imagePath || imagePath.length == 0) return nil;

    NSFileManager *fm = [NSFileManager defaultManager];
    if (![fm fileExistsAtPath:imagePath]) return nil;

    NSString *ext = imagePath.pathExtension.lowercaseString;

    if ([ext isEqualToString:@"gif"]) {
        NSData *gifData = [NSData dataWithContentsOfFile:imagePath];
        if (!gifData) return nil;

        CGImageSourceRef source = CGImageSourceCreateWithData(
            (__bridge CFDataRef)gifData, NULL);
        if (!source) return nil;

        size_t count = CGImageSourceGetCount(source);
        if (count < 2) {
            CGImageRef cgImg = CGImageSourceCreateImageAtIndex(source, 0, NULL);
            UIImage *result = cgImg ? [UIImage imageWithCGImage:cgImg] : nil;
            if (cgImg) CGImageRelease(cgImg);
            CFRelease(source);
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
            return [UIImage animatedImageWithImages:frames duration:totalDuration];
        }
        return nil;
    } else {
        return [UIImage imageWithContentsOfFile:imagePath];
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