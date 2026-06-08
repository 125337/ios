#import "ListCornerRadiusHook.h"
#import "../../Config/PluginConfig.h"
#import "../../Core/LogManager.h"
#import "../ProfileCardBg/ProfileCardBgHook.h"
#import "../CornerResponsibility/CornerResponsibility.h"
#import <substrate.h>
#import <objc/runtime.h>
#import <objc/message.h>

static IMP _orig_MMTableViewCell_layoutSubviews = NULL;
static IMP _orig_WCSearchBar_layoutSubviews = NULL;

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

// ★★★ 全局开关过滤 ★★★
static NSString * const kMyPageVCClassName        = @"MoreViewController";
static NSString * const kContactsVCClassName       = @"ContactsViewController";
static NSString * const kDiscoverVCClassName       = @"FindFriendEntryViewController";

static BOOL shouldApplyGlobalCorner(UIViewController *vc) {
    if (!vc) return NO;

    PluginConfig *config = [PluginConfig shared];

    if (!config.globalCornerRadiusEnabled) return NO;

    NSString *vcName = NSStringFromClass([vc class]);

    if ([vcName isEqualToString:kMyPageVCClassName]) {
        return config.globalCornerMyPageEnabled;
    }
    if ([vcName isEqualToString:kContactsVCClassName]) {
        return config.globalCornerContactsPageEnabled;
    }
    if ([vcName isEqualToString:kDiscoverVCClassName]) {
        return config.globalCornerDiscoverPageEnabled;
    }

    return YES;
}

static void replaced_WCSearchBar_layoutSubviews(id self, SEL _cmd) {
    if (_orig_WCSearchBar_layoutSubviews) {
        ((void (*)(id, SEL))_orig_WCSearchBar_layoutSubviews)(self, _cmd);
    }

    PluginConfig *config = [PluginConfig shared];
    if (!config.globalCornerRadiusEnabled || !config.listSearchCornerRadius) return;

    NSInteger radius = (NSInteger)config.listCellCornerRadius;  // ★ 复用 Cell 圆角半径
    if (radius <= 0) radius = 18;

    UIView *container = ((UIView *(*)(id, SEL))objc_msgSend)(self, @selector(searchBoxContainer));
    if (container) {
        container.layer.cornerRadius = radius;
        container.layer.masksToBounds = YES;
    }
}

// ★★★ Cell Hook：列表圆角 + 分发到资料卡透明化 ★★★
static void replaced_MMTableViewCell_layoutSubviews(id self, SEL _cmd) {
    PluginConfig *config = [PluginConfig shared];

    // ★ 列表圆角入口守卫：只看自己的开关 ★
    if (!config.globalCornerRadiusEnabled) {
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

    // ★ 模块责任查询：不属于列表圆角则跳过 ★
    if (![CornerResponsibility isListCornerResponsibleFor:vc]) {
        if (_orig_MMTableViewCell_layoutSubviews) {
            ((void (*)(id, SEL))_orig_MMTableViewCell_layoutSubviews)(self, _cmd);
        }
        return;
    }

    // ★★★ 全局开关过滤 ★★★
    if (!shouldApplyGlobalCorner(vc)) {
        if (_orig_MMTableViewCell_layoutSubviews) {
            ((void (*)(id, SEL))_orig_MMTableViewCell_layoutSubviews)(self, _cmd);
        }
        return;
    }

    UIView *cellView = (UIView *)self;

    // ★ margin 代码（进入此处说明 globalCornerRadiusEnabled 已开启）★
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
        UIColor *customBg = [config colorFromHex:config.listCellBgColor];
        ((UIView *)self).backgroundColor = customBg ?: wp_cellDefaultBgColor(isDark);
    }

    // ★ corner 圆角设置（不需要 if 守卫！进入这里一定是因为 globalCornerRadiusEnabled==YES）★
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

// ★★★ [WPAuxiliaryHooks] MFWebMMBtn background color ★★★
static void (*_orig_MFWebMMBtn_layoutSubviews)(id, SEL);
static void _hooked_MFWebMMBtn_layoutSubviews(id self, SEL _cmd) {
    _orig_MFWebMMBtn_layoutSubviews(self, _cmd);

    PluginConfig *config = [PluginConfig shared];
    if (!config.globalCornerRadiusEnabled) return;

    UIViewController *vc = findParentViewController((UIView *)self);
    if (!vc) return;
    if (![NSStringFromClass([vc class]) isEqualToString:@"NewMainFrameViewController"]) return;

    BOOL isDark = NO;
    if (@available(iOS 13.0, *)) {
        isDark = (vc.traitCollection.userInterfaceStyle == UIUserInterfaceStyleDark);
    }

    UIColor *targetBg = [config colorFromHex:config.listCellBgColor];
    if (!targetBg) {
        targetBg = isDark
            ? [UIColor colorWithRed:0.125 green:0.125 blue:0.125 alpha:1.0]
            : [UIColor whiteColor];
    }
    ((UIView *)self).backgroundColor = targetBg;
}

// ★★★ [WPAuxiliaryHooks] MFBannerBtn background color ★★★
static void (*_orig_MFBannerBtn_layoutSubviews)(id, SEL);
static void _hooked_MFBannerBtn_layoutSubviews(id self, SEL _cmd) {
    _orig_MFBannerBtn_layoutSubviews(self, _cmd);

    PluginConfig *config = [PluginConfig shared];
    if (!config.globalCornerRadiusEnabled) return;

    UIViewController *vc = findParentViewController((UIView *)self);
    if (!vc) return;
    if (![NSStringFromClass([vc class]) isEqualToString:@"NewMainFrameViewController"]) return;

    BOOL isDark = NO;
    if (@available(iOS 13.0, *)) {
        isDark = (vc.traitCollection.userInterfaceStyle == UIUserInterfaceStyleDark);
    }

    UIColor *targetBg = [config colorFromHex:config.listCellBgColor];
    if (!targetBg) {
        targetBg = isDark
            ? [UIColor colorWithRed:0.125 green:0.125 blue:0.125 alpha:1.0]
            : [UIColor whiteColor];
    }
    ((UIView *)self).backgroundColor = targetBg;
}

// ★★★ [WPAuxiliaryHooks] MainFrameSectionFoldView ★★★
static void (*_orig_FoldView_layoutSubviews)(id, SEL);
static void _hooked_FoldView_layoutSubviews(id self, SEL _cmd) {
    _orig_FoldView_layoutSubviews(self, _cmd);

    UIViewController *vc = findParentViewController((UIView *)self);
    if (!vc) return;
    if (![NSStringFromClass([vc class]) isEqualToString:@"NewMainFrameViewController"]) return;

    PluginConfig *config = [PluginConfig shared];
    if (!config.globalCornerRadiusEnabled) return;

    UIView *view = (UIView *)self;
    NSInteger radius = (NSInteger)config.listCellCornerRadius;
    if (radius == 0) radius = 18;

    NSInteger margin = (NSInteger)config.listCellMargin;
    if (margin == 0) margin = 9;

    CGRect frame = view.frame;
    CGFloat screenWidth = [UIScreen mainScreen].bounds.size.width;
    CGFloat newWidth = screenWidth - 2.0 * margin;
    if (frame.origin.x != (CGFloat)margin || frame.size.width != newWidth) {
        frame.origin.x = (CGFloat)margin;
        frame.size.width = newWidth;
        view.frame = frame;
    }
    view.autoresizingMask = UIViewAutoresizingNone;

    if ([view respondsToSelector:@selector(isFolding)]) {
        BOOL folding = ((BOOL (*)(id, SEL))objc_msgSend)(view, @selector(isFolding));
        if (folding) {
            view.layer.cornerRadius = radius;
            view.layer.maskedCorners = kCALayerMinXMinYCorner | kCALayerMaxXMinYCorner
                                     | kCALayerMinXMaxYCorner | kCALayerMaxXMaxYCorner;
        } else {
            view.layer.cornerRadius = radius;
            view.layer.maskedCorners = kCALayerMinXMaxYCorner | kCALayerMaxXMaxYCorner;
        }
    } else {
        view.layer.cornerRadius = radius;
        view.layer.maskedCorners = kCALayerMinXMinYCorner | kCALayerMaxXMinYCorner
                                 | kCALayerMinXMaxYCorner | kCALayerMaxXMaxYCorner;
    }

    view.layer.masksToBounds = YES;

    [ListCornerRadiusHook applyBorderToView:view radius:radius position:0 isFTSHome:NO];

    BOOL isDark = NO;
    if (@available(iOS 13.0, *)) {
        isDark = (vc.traitCollection.userInterfaceStyle == UIUserInterfaceStyleDark);
    }
    UIColor *targetBg = [config colorFromHex:config.listCellBgColor];
    if (!targetBg) {
        targetBg = isDark
            ? [UIColor colorWithRed:0.125 green:0.125 blue:0.125 alpha:1.0]
            : [UIColor whiteColor];
    }
    view.backgroundColor = targetBg;

    for (UIView *subview in view.subviews) {
        if ([NSStringFromClass([subview class]) isEqualToString:@"UIView"]) {
            BOOL hasLabel = NO;
            for (UIView *child in subview.subviews) {
                if ([child isKindOfClass:[UILabel class]]) {
                    hasLabel = YES;
                    break;
                }
            }
            if (!hasLabel) {
                subview.backgroundColor = [UIColor clearColor];
            }
        }
    }
}

// ★★★ [WPAuxiliaryHooks] MMUIButton list media corner ★★★
static void (*_orig_MMUIButton_layoutSubviews)(id, SEL);
static void _hooked_MMUIButton_layoutSubviews(id self, SEL _cmd) {
    _orig_MMUIButton_layoutSubviews(self, _cmd);

    PluginConfig *config = [PluginConfig shared];
    if (!config.globalCornerRadiusEnabled) return;

    UIViewController *vc = findParentViewController((UIView *)self);
    if (!vc) return;
    if (![NSStringFromClass([vc class]) isEqualToString:@"NewMainFrameViewController"]) return;

    if (config.listMediaCornerEnabled) {
        UIView *view = (UIView *)self;
        NSInteger radius = (NSInteger)config.listCellCornerRadius;
        if (radius == 0) radius = 18;
        view.layer.cornerRadius = radius;
        view.layer.masksToBounds = YES;
    }

    if (config.listDisableLabelWidthAdjustment) {
        UIView *view = (UIView *)self;
        for (UIView *subview in view.subviews) {
            if ([subview isKindOfClass:[UILabel class]]) {
                UILabel *label = (UILabel *)subview;
                [label sizeToFit];
            }
        }
    }
}

// ★★★ [WPSessionSpacingHook] NewMainFrameVC header height ★★★
static CGFloat (*_orig_NMFVC_heightForHeader)(id, SEL, id, NSInteger);
static CGFloat _hooked_NMFVC_heightForHeader(id self, SEL _cmd, id tableView, NSInteger section) {
    CGFloat height = _orig_NMFVC_heightForHeader(self, _cmd, tableView, section);

    PluginConfig *config = [PluginConfig shared];
    if (!config.globalCornerRadiusEnabled) return height;

    if (section == 1) {
        NSInteger spacing = (NSInteger)config.listPinnedSessionTopSpacing;
        height += (spacing > 0) ? spacing : 15;
    } else if (section >= 2) {
        NSInteger spacing = (NSInteger)config.listNormalSessionSpacing;
        height += (spacing > 0) ? spacing : 15;
    }
    return height;
}

static id (*_orig_NMFVC_viewForHeader)(id, SEL, id, NSInteger);
static id _hooked_NMFVC_viewForHeader(id self, SEL _cmd, id tableView, NSInteger section) {
    PluginConfig *config = [PluginConfig shared];
    if (config.globalCornerRadiusEnabled && section > 0) {
        return [[UIView alloc] initWithFrame:CGRectZero];
    }
    return _orig_NMFVC_viewForHeader(self, _cmd, tableView, section);
}

static void (*_orig_setBgImageView)(id, SEL, id);
static void _hooked_setBgImageView(id self, SEL _cmd, id imageView) {
    PluginConfig *config = [PluginConfig shared];
    if (!config.globalCornerRadiusEnabled) {
        _orig_setBgImageView(self, _cmd, imageView);
        return;
    }

    // ★ 检查是否在通讯录中 → 透明化 Section Header
    UIViewController *vc = findParentViewController((UIView *)self);
    if (vc && [NSStringFromClass([vc class]) isEqualToString:@"ContactsViewController"]) {
        // 通讯录中 → 不设置背景图片 → Header 透明
        return;
    }

    // 其他页面 → 正常设置背景
    _orig_setBgImageView(self, _cmd, imageView);
}

static BOOL _wp_isTableViewClass(NSString *name) {
    return [name isEqualToString:@"MMTableView"] ||
           [name isEqualToString:@"MMMainTableView"] ||
           [name isEqualToString:@"MainFrameTableView"] ||
           [name isEqualToString:@"TextStateProfileTableView"];
}

static BOOL _wp_isAllowedVC(NSString *name) {
    return [name isEqualToString:@"NewMainFrameViewController"] ||
           [name isEqualToString:@"BrandSessionViewController"] ||
           [name isEqualToString:@"ChatBoxSessionListViewController"] ||
           [name isEqualToString:@"OpenIMBrandContactListViewController"] ||
           [name isEqualToString:@"ContactTagNewDetailViewController"] ||
           [name isEqualToString:@"ChatRoomListViewController"] ||
           [name isEqualToString:@"BrandServiceContactsViewController"];
}

static void (*_orig_UIView_layoutSubviews)(id, SEL);
static void _hooked_UIView_layoutSubviews(id self, SEL _cmd) {
    _orig_UIView_layoutSubviews(self, _cmd);

    PluginConfig *config = [PluginConfig shared];
    if (!config.globalCornerRadiusEnabled) return;

    if (![NSStringFromClass([self class]) isEqualToString:@"UIView"]) return;

    UIView *view = (UIView *)self;

    if (view.bounds.size.height < 1.0) return;

    UIViewController *vc = findParentViewController(view);
    if (!vc || !_wp_isAllowedVC(NSStringFromClass([vc class]))) return;

    UIView *parent = view.superview;
    if (!parent) return;

    if (_wp_isTableViewClass(NSStringFromClass([parent class]))) {
        view.backgroundColor = [UIColor clearColor];
        return;
    }

    UIView *gp = parent.superview;
    if (gp && _wp_isTableViewClass(NSStringFromClass([gp class]))) {
        view.backgroundColor = [UIColor clearColor];
    }
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

    // ★ WPAuxiliaryHooks Hooks — MFWebMMBtn, MFBannerBtn, FoldView, MMUIButton media corner
    Class c1 = objc_getClass("MFWebMMBtn");
    if (c1) {
        MSHookMessageEx(c1, @selector(layoutSubviews),
            (IMP)_hooked_MFWebMMBtn_layoutSubviews, (IMP *)&_orig_MFWebMMBtn_layoutSubviews);
    }

    Class c2 = objc_getClass("MFBannerBtn");
    if (c2) {
        MSHookMessageEx(c2, @selector(layoutSubviews),
            (IMP)_hooked_MFBannerBtn_layoutSubviews, (IMP *)&_orig_MFBannerBtn_layoutSubviews);
    }

    Class c3 = objc_getClass("MainFrameSectionFoldView");
    if (c3) {
        MSHookMessageEx(c3, @selector(layoutSubviews),
            (IMP)_hooked_FoldView_layoutSubviews, (IMP *)&_orig_FoldView_layoutSubviews);
    }

    // ★ MMUIButton Hook — 仅保留列表媒体圆角
    Class c4 = objc_getClass("MMUIButton");
    if (c4) {
        MSHookMessageEx(c4, @selector(layoutSubviews),
            (IMP)_hooked_MMUIButton_layoutSubviews, (IMP *)&_orig_MMUIButton_layoutSubviews);
    }

    // ★ WPSessionSpacingHook Hooks — UIView, NewMainFrameVC, MMTableSectionHeader
    Class uiView = objc_getClass("UIView");
    if (uiView) {
        MSHookMessageEx(uiView, @selector(layoutSubviews),
            (IMP)_hooked_UIView_layoutSubviews, (IMP *)&_orig_UIView_layoutSubviews);
    }
    Class nmfvc = objc_getClass("NewMainFrameViewController");
    if (nmfvc) {
        MSHookMessageEx(nmfvc, @selector(tableView:heightForHeaderInSection:),
            (IMP)_hooked_NMFVC_heightForHeader, (IMP *)&_orig_NMFVC_heightForHeader);
        MSHookMessageEx(nmfvc, @selector(tableView:viewForHeaderInSection:),
            (IMP)_hooked_NMFVC_viewForHeader, (IMP *)&_orig_NMFVC_viewForHeader);
    }
    Class header = objc_getClass("MMTableSectionHeaderView");
    if (header) {
        MSHookMessageEx(header, @selector(setBackgroundImageView:),
            (IMP)_hooked_setBgImageView, (IMP *)&_orig_setBgImageView);
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

    // ★★★ 排查日志：打印通讯录 Section 结构 ★★★
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        WPLog(@"ListCornerRadius", @"=== 通讯录 Section 结构排查 ===");
        NSInteger totalSecs = [tableView numberOfSections];
        WPLog(@"ListCornerRadius", @"总 Section 数: %ld", (long)totalSecs);
        for (NSInteger s = 0; s < MIN(10, totalSecs); s++) {
            NSInteger rows = [tableView numberOfRowsInSection:s];
            NSString *headerTitle = nil;
            if ([tableView respondsToSelector:@selector(titleForHeaderInSection:)]) {
                headerTitle = [tableView tableView:tableView titleForHeaderInSection:s];
            }
            WPLog(@"ListCornerRadius", @"Section %ld: %ld 行, Header: %@", (long)s, (long)rows, headerTitle ?: @"(无)");
        }
        WPLog(@"ListCornerRadius", @"=== 排查结束 ===");
    });

    // ─── 分支 A：section > 3 → 标准 per-section ───
    if (section > 3) {
        [self wp_applyStandardCorner:cell
                          tableView:tableView
                          indexPath:indexPath
                            section:section
                                row:row
                              total:rowInThisSection
                       cornerRadius:radius
                          isFTSHome:isFTSHome
                          className:@"ContactsViewController"];
        return;
    }

    // ─── 分支 B：section <= 3 → 特殊算法 ───

    // Step 1: 收集 Section 0-3 的行数
    NSInteger totalSections = [tableView numberOfSections];
    NSMutableArray *rowCounts = [NSMutableArray array];
    for (NSInteger s = 0; s < MIN(4, totalSections); s++) {
        [rowCounts addObject:@([tableView numberOfRowsInSection:s])];
    }
    // 不足 4 个 section 的补 0
    while (rowCounts.count < 4) {
        [rowCounts addObject:@0];
    }

    // Step 2: 检查 Section 0 行数（必须是 3 或 4 行）
    NSInteger section0Rows = [rowCounts[0] integerValue];
    if (section0Rows < 3 || section0Rows > 4) {
        [self wp_applyStandardCorner:cell
                          tableView:tableView
                          indexPath:indexPath
                            section:section
                                row:row
                              total:rowInThisSection
                       cornerRadius:radius
                          isFTSHome:isFTSHome
                          className:@"ContactsViewController"];
        return;
    }

    // ★ Step 2.5: 检查 Section 0 和 Section 1 是否需要合并 ★
    NSInteger section1Rows = [rowCounts[1] integerValue];
    if (section0Rows == 4 && section1Rows == 3) {
        // 合并 Section 0 和 Section 1
        NSInteger ct = 0, bt = 2;

        if (section == 0) {
            if (row == 0) {
                ct = 1; bt = 1;  // 顶角
            } else if (row == rowInThisSection - 1) {
                ct = 0; bt = 2;  // 末行 → 无角（和 Section 1 连在一起）
            } else {
                ct = 0; bt = 2;  // 中间行
            }
        }
        else if (section == 1) {
            if (row == 0) {
                ct = 0; bt = 2;  // 首行 → 无角（和 Section 0 连在一起）
            } else if (row == rowInThisSection - 1) {
                ct = 2; bt = 3;  // 底角
            } else {
                ct = 0; bt = 2;  // 中间行
            }
        }
        else {
            // Section 2+ → 标准 per-section
            [self wp_applyStandardCorner:cell
                              tableView:tableView
                              indexPath:indexPath
                                section:section
                                    row:row
                                  total:rowInThisSection
                           cornerRadius:radius
                              isFTSHome:isFTSHome
                              className:@"ContactsViewController"];
            return;
        }

        cell.layer.cornerRadius = (ct == 0) ? 0 : radius;
        cell.layer.maskedCorners = ct == 1 ? (kCALayerMinXMinYCorner|kCALayerMaxXMinYCorner)
                                     : ct == 2 ? (kCALayerMinXMaxYCorner|kCALayerMaxXMaxYCorner)
                                     : ct == 3 ? (kCALayerMinXMinYCorner|kCALayerMaxXMinYCorner|
                                                  kCALayerMinXMaxYCorner|kCALayerMaxXMaxYCorner)
                                     : 0;
        [self wp_applyBorderAndBg:cell radius:radius position:bt isFTSHome:isFTSHome];
        return;
    }

    // Step 3: bVar1 检测 - section 1/2/3 是否都是 1 行
    BOOL bVar1 = ([rowCounts[1] integerValue] == 1 &&
                  [rowCounts[2] integerValue] == 1 &&
                  [rowCounts[3] integerValue] == 1);

    if (!bVar1) {
        // 不满足条件 → 标准 per-section
        [self wp_applyStandardCorner:cell
                          tableView:tableView
                          indexPath:indexPath
                            section:section
                                row:row
                              total:rowInThisSection
                       cornerRadius:radius
                          isFTSHome:isFTSHome
                          className:@"ContactsViewController"];
        return;
    }

    // Step 4: 半合并模式
    // 找到最后一个单行 section（从后扫描）
    NSInteger lastOneRowSection = 3;  // section 3 肯定是 1 行
    for (NSInteger s = 3; s >= 1; s--) {
        if ([rowCounts[s] integerValue] == 1) {
            lastOneRowSection = s;
            break;
        }
    }

    NSInteger ct = 0, bt = 2;  // ct = cornerType, bt = borderType

    if (section == 0) {
        // Section 0 → per-section（首行顶角，末行底角）
        if (rowInThisSection == 1) {
            ct = 3; bt = 0;  // 全角
        } else if (row == 0) {
            ct = 1; bt = 1;  // 顶角
        } else if (row == rowInThisSection - 1) {
            ct = 2; bt = 3;  // 底角
        } else {
            ct = 0; bt = 2;  // 无角
        }
    } else if (section == lastOneRowSection) {
        // 最后一个单行 section → 底角
        ct = 2; bt = 3;
    } else {
        // 中间单行 section → 无角
        ct = 0; bt = 2;
    }

    // Step 5: 应用圆角和边框
    cell.layer.cornerRadius = (ct == 0) ? 0 : radius;
    cell.layer.maskedCorners = ct == 1 ? (kCALayerMinXMinYCorner|kCALayerMaxXMinYCorner)
                                 : ct == 2 ? (kCALayerMinXMaxYCorner|kCALayerMaxXMaxYCorner)
                                 : ct == 3 ? (kCALayerMinXMinYCorner|kCALayerMaxXMinYCorner|
                                              kCALayerMinXMaxYCorner|kCALayerMaxXMaxYCorner)
                                 : 0;
    [self wp_applyBorderAndBg:cell radius:radius position:bt isFTSHome:isFTSHome];
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

    UIColor *borderColor = [config colorFromHex:config.listCellBorderColor];
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

+ (void)install {
    [self initListCornerRadiusHook];
}

@end
