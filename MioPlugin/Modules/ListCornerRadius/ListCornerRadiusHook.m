#import "ListCornerRadiusHook.h"
#import "../../Config/PluginConfig.h"
#import "../../Core/LogManager.h"
#import "../ProfileCardBg/ProfileCardBgHook.h"
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

+ (CAShapeLayer *)wp_buildUnifiedBorderLayer:(CGRect)rect
                                 borderWidth:(CGFloat)borderWidth
                                borderColor:(UIColor *)borderColor
                                     radius:(CGFloat)radius
                                       type:(NSString *)type;

+ (BOOL)wp_isCurrentDarkMode;

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

// ★★★ 薄分发层：MMUIButton Hook ★★★
static void replaced_MMUIButton_layoutSubviews(id self, SEL _cmd) {
    // 先让微信完成原始布局
    if (_orig_MMUIButton_layoutSubviews) {
        ((void (*)(id, SEL))_orig_MMUIButton_layoutSubviews)(self, _cmd);
    }

    // ★ 方案H：改 button 高度 ★
    [ProfileCardBgHook handleButtonLayout:(UIView *)self];
}

// ★★★ Cell Hook：列表圆角 + 分发到资料卡透明化 ★★★
static void replaced_MMTableViewCell_layoutSubviews(id self, SEL _cmd) {
    // 懒注册 MMUIButton hook（如果还没注册的话）
    if (!_orig_MMUIButton_layoutSubviews) {
        Class MMUIButtonClass = objc_getClass("MMUIButton");
        if (MMUIButtonClass) {
            MSHookMessageEx(
                MMUIButtonClass,
                @selector(layoutSubviews),
                (IMP)replaced_MMUIButton_layoutSubviews,
                &_orig_MMUIButton_layoutSubviews
            );
        }
    }

    PluginConfig *config = [PluginConfig shared];

    // ★ 列表圆角入口守卫：只看自己的开关 ★
    if (!config.listCornerRadiusEnabled) {
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

    // ★ margin 代码（只在 listCornerRadiusEnabled 时执行，进入此处说明已开启）★
    CGFloat margin = config.listCellMargin;
    if (margin > 0) {
        CGFloat currentX = cellView.frame.origin.x;
        UIView *superview = cellView.superview;
        CGFloat superX = superview ? superview.frame.origin.x : 0;
        CGFloat targetX = (margin > superX) ? margin - superX : 0;
        CGFloat containerW = superview ? superview.bounds.size.width
                                       : [UIScreen mainScreen].bounds.size.width;
        CGFloat targetW = containerW - 2.0 * margin;
        CGFloat currentW = cellView.frame.size.width;
        // ★ 改造 A：浮点比较使用 fabs 阈值，精确匹配微信优化的整数运算行为
        if (fabs(currentX - targetX) > 0.5 || fabs(currentW - targetW) > 0.5) {
            CGRect f = cellView.frame;
            f.origin.x = targetX;
            f.size.width = targetW;
            cellView.frame = f;
        }
    }

    AFTER_MARGIN:  // ★ 改造 B：跳转标签

    // ★ orig ★
    if (_orig_MMTableViewCell_layoutSubviews) {
        ((void (*)(id, SEL))_orig_MMTableViewCell_layoutSubviews)(self, _cmd);
    }

    // ★ bgColor 设置 ★
    static NSSet *bgColorSkipList = nil;
    static dispatch_once_t onceBgToken;
    dispatch_once(&onceBgToken, ^{
        bgColorSkipList = [NSSet setWithObjects:
            @"WCTimeLineViewController", @"WCAccountLoginUsersViewController",
            @"SessionSelectController", @"WCListViewController",
            @"BrandNotificationListViewController", @"BrandNewSessionViewController",
            @"BaseMsgContentViewController", @"BraceletRankProfileViewController",
            @"BraceletRankViewController", @"WCRedEnvelopesRedEnvelopesDetailViewController",
            @"MsgRecordDetailViewController", @"ChatRoomInfoViewController",
            @"ContactInfoViewController", @"AddFriendEntryViewController",
            @"AddContactToChatRoomViewController", @"SayHelloViewController",
            @"FTSHomeViewController", @"MMFinderPivotLiveViewController",
            @"WCSearchController", nil];
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

    // ★ corner 圆角设置（不需要 if 守卫！进入这里一定是因为 listCornerRadiusEnabled==YES）★
    NSInteger cornerRadius = (NSInteger)config.listCellCornerRadius;
    if (cornerRadius == 0) cornerRadius = 18;

    BOOL isContacts = [className isEqualToString:@"ContactsViewController"];
    BOOL isFTSHome = [className isEqualToString:@"FTSHomeViewController"];

    UIView *parent = cellView.superview;
    UITableView *tableView = nil;
    while (parent) {
        if ([parent isKindOfClass:[UITableView class]]) {
            tableView = (UITableView *)parent; break;
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

    // ★ 非 MoreVC 资料卡 Cell 的正常收尾 ★
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

    [ProfileCardBgHook initCellHeightHook];
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
    NSInteger cornerType = 0;  // 用于 maskedCorners
    NSInteger borderType = 0;  // 用于 wp_applyBorderAndBg switch
    if (totalRows == 1) {
        cornerType = 3; borderType = 0;  // 全角 + 完整边框
    } else if (row == 0) {
        cornerType = 1; borderType = 1;  // 顶角 + 顶边框
    } else if (row == totalRows - 1) {
        cornerType = 2; borderType = 3;  // 底角 + 底边框

        // ★ 折叠置顶检测（仅聊天列表 section 1 的末行）★
        BOOL isNewMainFrame = [className isEqualToString:@"NewMainFrameViewController"];
        if (isNewMainFrame && indexPath.section == 1) {
            UIView *foldView = [ListCornerRadiusHook wp_findFoldViewInSubviews:tableView.subviews];
            if (foldView && [foldView respondsToSelector:@selector(isFolding)]) {
                BOOL folding = ((BOOL (*)(id, SEL))objc_msgSend)(foldView, @selector(isFolding));
                if (!folding) {
                    // 展开状态 → 无圆角 + 左右边框
                    cell.layer.cornerRadius = 0;
                    cell.layer.maskedCorners = 0;
                    [self wp_applyBorderAndBg:cell radius:0 position:2 isFTSHome:isFTSHome];
                    return;
                }
            }
        }
    } else {
        cornerType = 0; borderType = 2;  // 无角 + 左右边框
    }

    cell.layer.cornerRadius = configuredRadius;
    cell.layer.maskedCorners = 0;

    if (cornerType == 1) {
        cell.layer.maskedCorners = kCALayerMinXMinYCorner | kCALayerMaxXMinYCorner;
    } else if (cornerType == 2) {
        cell.layer.maskedCorners = kCALayerMinXMaxYCorner | kCALayerMaxXMaxYCorner;
    } else if (cornerType == 3) {
        cell.layer.maskedCorners = kCALayerMinXMinYCorner | kCALayerMaxXMinYCorner |
                                   kCALayerMinXMaxYCorner | kCALayerMaxXMaxYCorner;
    }

    [self wp_applyBorderAndBg:cell radius:configuredRadius position:borderType isFTSHome:isFTSHome];
}

+ (void)wp_applyCornerForContacts:(UIView *)cell
                        tableView:(UITableView *)tableView
                        indexPath:(NSIndexPath *)indexPath
                          section:(NSInteger)section
                              row:(NSInteger)row
                            total:(NSInteger)rowInThisSection
                     cornerRadius:(NSInteger)radius
                         isFTSHome:(BOOL)isFTSHome {
    NSInteger cornerType = 0;
    NSInteger borderType = 0;
    if (rowInThisSection == 1) {
        cornerType = 3; borderType = 0;
    } else if (row == 0) {
        cornerType = 1; borderType = 1;
    } else if (row == rowInThisSection - 1) {
        cornerType = 2; borderType = 3;
    } else {
        cornerType = 0; borderType = 2;
    }

    cell.layer.cornerRadius = radius;
    cell.layer.maskedCorners = 0;

    if (cornerType == 1) {
        cell.layer.maskedCorners = kCALayerMinXMinYCorner | kCALayerMaxXMinYCorner;
    } else if (cornerType == 2) {
        cell.layer.maskedCorners = kCALayerMinXMaxYCorner | kCALayerMaxXMaxYCorner;
    } else if (cornerType == 3) {
        cell.layer.maskedCorners = kCALayerMinXMinYCorner | kCALayerMaxXMinYCorner |
                                   kCALayerMinXMaxYCorner | kCALayerMaxXMaxYCorner;
    }

    [self wp_applyBorderAndBg:cell radius:radius position:borderType isFTSHome:isFTSHome];
}

+ (void)wp_applyBorderAndBg:(UIView *)cell
                     radius:(NSInteger)radius
                   position:(NSInteger)position
                  isFTSHome:(BOOL)isFTSHome {
    PluginConfig *config = [PluginConfig shared];

    static NSString *kBorderCacheKey = @"com.mio.cornerBorderCache";

    NSString *existingCacheKey = objc_getAssociatedObject(cell, (__bridge const void *)kBorderCacheKey);
    NSString *cacheKey = [NSString stringWithFormat:@"r%ld-p%ld-f%d-b%.1f",
                          (long)radius, (long)position, isFTSHome,
                          config.listCellBorderWidth];
    if ([existingCacheKey isEqualToString:cacheKey]) return;

    NSArray *oldSublayers = [cell.layer.sublayers copy];
    for (CALayer *sub in oldSublayers) {
        if ([sub.name isEqualToString:@"com.mio.cornerBorder"]) {
            [sub removeFromSuperlayer];
        }
    }

    if (!config.listCellBorder) {
        objc_setAssociatedObject(cell, (__bridge const void *)kBorderCacheKey, cacheKey,
            OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        return;
    }

    CGFloat borderWidth = config.listCellBorderWidth;
    if (borderWidth <= 0) borderWidth = 1.0;

    BOOL isDark = NO;
    if (@available(iOS 13.0, *)) {
        isDark = [ListCornerRadiusHook wp_isCurrentDarkMode];
    }

    UIColor *borderColor = [config colorFromHex:isDark
        ? config.listCellBorderDarkColor : config.listCellBorderLightColor];
    if (!borderColor) {
        borderColor = isDark
            ? [UIColor colorWithRed:0.25 green:0.25 blue:0.25 alpha:1.0]
            : [UIColor colorWithRed:0.9 green:0.9 blue:0.9 alpha:1.0];
    }

    switch (position) {
        case 0: {  // 完整边框（单独 cell / 全圆角 cell）
            CAShapeLayer *top = [self wp_buildUnifiedBorderLayer:cell.bounds
                                                      borderWidth:borderWidth
                                                     borderColor:borderColor
                                                          radius:radius
                                                            type:@"top"];
            CAShapeLayer *bottom = [self wp_buildUnifiedBorderLayer:cell.bounds
                                                         borderWidth:borderWidth
                                                        borderColor:borderColor
                                                             radius:radius
                                                               type:@"bottom"];
            [cell.layer addSublayer:top];
            [cell.layer addSublayer:bottom];
            break;
        }
        case 1: {  // 顶部边框（首行）
            CAShapeLayer *shape = [self wp_buildUnifiedBorderLayer:cell.bounds
                                                       borderWidth:borderWidth
                                                      borderColor:borderColor
                                                           radius:radius
                                                             type:@"top"];
            [cell.layer addSublayer:shape];
            break;
        }
        case 2: {  // 左右边框（中间行）
            CAShapeLayer *left = [self wp_buildUnifiedBorderLayer:cell.bounds
                                                      borderWidth:borderWidth
                                                     borderColor:borderColor
                                                          radius:radius
                                                            type:@"left"];
            CAShapeLayer *right = [self wp_buildUnifiedBorderLayer:cell.bounds
                                                       borderWidth:borderWidth
                                                      borderColor:borderColor
                                                           radius:radius
                                                             type:@"right"];
            [cell.layer addSublayer:left];
            [cell.layer addSublayer:right];
            break;
        }
        case 3: {  // 底部边框（末行）
            CAShapeLayer *shape = [self wp_buildUnifiedBorderLayer:cell.bounds
                                                       borderWidth:borderWidth
                                                      borderColor:borderColor
                                                           radius:radius
                                                             type:@"bottom"];
            [cell.layer addSublayer:shape];
            break;
        }
    }

    objc_setAssociatedObject(cell, (__bridge const void *)kBorderCacheKey, cacheKey,
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

@end
