#import "ListCornerRadiusHook.h"
#import "ListCornerRadiusConfig.h"
#import "../../Core/WPUtility.h"
#import "../../Config/WPColorUtil.h"
#import "../../Core/LogManager.h"
#import "../ProfileCardBg/ProfileCardBgHook.h"
#import "../../Core/Utils/CornerResponsibility/CornerResponsibility.h"
#import <substrate.h>
#import <objc/runtime.h>
#import <objc/message.h>

static IMP orig_MMTableViewCell_layoutSubviews = NULL;
static IMP orig_WCSearchBar_layoutSubviews = NULL;

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

    ListCornerRadiusConfig *config = [ListCornerRadiusConfig shared];

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
    WPHeatTick("WCSearchBar.layoutSubviews");
    if (orig_WCSearchBar_layoutSubviews) {
        ((void (*)(id, SEL))orig_WCSearchBar_layoutSubviews)(self, _cmd);
    }

    ListCornerRadiusConfig *config = [ListCornerRadiusConfig shared];
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
    WPHeatTick("MMTableViewCell.layoutSubviews");
    ListCornerRadiusConfig *config = [ListCornerRadiusConfig shared];

    UIViewController *vc = [WPUtility findParentViewController:(UIView *)self];
    if (!vc) {
        if (orig_MMTableViewCell_layoutSubviews) {
            ((void (*)(id, SEL))orig_MMTableViewCell_layoutSubviews)(self, _cmd);
        }
        return;
    }
    NSString *className = NSStringFromClass([vc class]);

    // ★ Mio 自己的设置页强制圆角：微信引擎迁移后 cell 是微信原生直角样式，
    //   而 globalCornerRadiusEnabled 默认关——Mio 页面（MioPlugin*/WP*/SettingCategoryController 子类）
    //   绕过下方三道守卫，微信原生页面行为不变
    static Class scCls = nil;
    static dispatch_once_t scOnceToken;
    dispatch_once(&scOnceToken, ^{ scCls = NSClassFromString(@"SettingCategoryController"); });
    BOOL mioOwn = [className hasPrefix:@"MioPlugin"] || [className hasPrefix:@"WP"]
                  || (scCls && [vc isKindOfClass:scCls]);

    // ★ 列表圆角入口守卫：只看自己的开关（Mio 页面除外）
    if (!mioOwn && !config.globalCornerRadiusEnabled) {
        if (orig_MMTableViewCell_layoutSubviews) {
            ((void (*)(id, SEL))orig_MMTableViewCell_layoutSubviews)(self, _cmd);
        }
        return;
    }

    // ★ 模块责任查询：不属于列表圆角则跳过（Mio 页面除外）
    if (!mioOwn && ![CornerResponsibility isListCornerResponsibleFor:vc]) {
        if (orig_MMTableViewCell_layoutSubviews) {
            ((void (*)(id, SEL))orig_MMTableViewCell_layoutSubviews)(self, _cmd);
        }
        return;
    }

    // ★★★ 全局开关过滤（Mio 页面除外）★★★
    if (!mioOwn && !shouldApplyGlobalCorner(vc)) {
        if (orig_MMTableViewCell_layoutSubviews) {
            ((void (*)(id, SEL))orig_MMTableViewCell_layoutSubviews)(self, _cmd);
        }
        return;
    }

    UIView *cellView = (UIView *)self;

    // ★ margin：Mio 页面写死 15（不读用户配置），微信页面走用户配置 ★
    CGFloat margin = mioOwn ? 15.0 : config.listCellMargin;
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
    if (orig_MMTableViewCell_layoutSubviews) {
        ((void (*)(id, SEL))orig_MMTableViewCell_layoutSubviews)(self, _cmd);
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
        BOOL isDark = [WPUtility isDarkModeForViewController:vc];
        UIColor *customBg = isDark
            ? [WPColorUtil colorFromHexString:config.listCellDarkBgColor]
            : [WPColorUtil colorFromHexString:config.listCellLightBgColor];
        ((UIView *)self).backgroundColor = customBg ?: wp_cellDefaultBgColor(isDark);
    }

    // ★ corner 圆角：Mio 页面写死 15（不读用户配置），微信页面走用户配置 ★
    NSInteger cornerRadius = mioOwn ? 15 : (NSInteger)config.listCellCornerRadius;
    if (!mioOwn && cornerRadius == 0) cornerRadius = 18;

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

    // ★ WCR 同款增强（仅 Mio 页面启用，微信原生页面行为不变）：
    //   ① selectedBackgroundView 清透明——WCR FUN_000bfc1c 实证，防止点击时直角高亮破相
    //   ② 子视图 layer 同步切角——WCR FUN_00797918 实证，遍历 cell.subviews 逐个设
    //      cornerRadius/maskedCorners/masksToBounds，防内部直角背景盖住圆角
    if (mioOwn) {
        UITableViewCell *tc = (UITableViewCell *)self;
        if ([tc respondsToSelector:@selector(selectedBackgroundView)]) {
            UIView *selBg = tc.selectedBackgroundView;
            if (selBg) {
                selBg.backgroundColor = [UIColor clearColor];
                selBg.alpha = 0.0;
                selBg.hidden = YES;
            }
        }
        CGFloat cr = cellView.layer.cornerRadius;
        NSUInteger mc = cellView.layer.maskedCorners;
        for (UIView *sub in cellView.subviews) {
            // 分隔线类 1px 小视图不参与切角：强设 r=15 圆角会把线两端削断
            if (CGRectGetHeight(sub.frame) <= 2.0 || CGRectGetWidth(sub.frame) <= 2.0) continue;
            sub.layer.cornerRadius = cr;
            sub.layer.maskedCorners = mc;
            sub.layer.masksToBounds = YES;
        }
    }
}

// ★★★ [WPAuxiliaryHooks] MFWebMMBtn background color ★★★
static void (*orig_MFWebMMBtn_layoutSubviews)(id, SEL);
static void _hooked_MFWebMMBtn_layoutSubviews(id self, SEL _cmd) {
    WPHeatTick("MFWebMMBtn.layoutSubviews");
    orig_MFWebMMBtn_layoutSubviews(self, _cmd);

    ListCornerRadiusConfig *config = [ListCornerRadiusConfig shared];
    if (!config.globalCornerRadiusEnabled) return;

    UIViewController *vc = [WPUtility findParentViewController:(UIView *)self];
    if (!vc) return;
    if (![NSStringFromClass([vc class]) isEqualToString:@"NewMainFrameViewController"]) return;

    BOOL isDark = [WPUtility isDarkModeForViewController:vc];

    UIColor *targetBg = isDark
            ? [WPColorUtil colorFromHexString:config.listCellDarkBgColor]
            : [WPColorUtil colorFromHexString:config.listCellLightBgColor];
    if (!targetBg) {
        targetBg = isDark
            ? [UIColor colorWithRed:0.125 green:0.125 blue:0.125 alpha:1.0]
            : [UIColor whiteColor];
    }
    ((UIView *)self).backgroundColor = targetBg;
}

// ★★★ [WPAuxiliaryHooks] MFBannerBtn background color ★★★
static void (*orig_MFBannerBtn_layoutSubviews)(id, SEL);
static void _hooked_MFBannerBtn_layoutSubviews(id self, SEL _cmd) {
    WPHeatTick("MFBannerBtn.layoutSubviews");
    orig_MFBannerBtn_layoutSubviews(self, _cmd);

    ListCornerRadiusConfig *config = [ListCornerRadiusConfig shared];
    if (!config.globalCornerRadiusEnabled) return;

    UIViewController *vc = [WPUtility findParentViewController:(UIView *)self];
    if (!vc) return;
    if (![NSStringFromClass([vc class]) isEqualToString:@"NewMainFrameViewController"]) return;

    BOOL isDark = [WPUtility isDarkModeForViewController:vc];

    UIColor *targetBg = isDark
            ? [WPColorUtil colorFromHexString:config.listCellDarkBgColor]
            : [WPColorUtil colorFromHexString:config.listCellLightBgColor];
    if (!targetBg) {
        targetBg = isDark
            ? [UIColor colorWithRed:0.125 green:0.125 blue:0.125 alpha:1.0]
            : [UIColor whiteColor];
    }
    ((UIView *)self).backgroundColor = targetBg;
}

// ★★★ [WPAuxiliaryHooks] MainFrameSectionFoldView ★★★
static void (*orig_FoldView_layoutSubviews)(id, SEL);
static void _hooked_FoldView_layoutSubviews(id self, SEL _cmd) {
    WPHeatTick("FoldView.layoutSubviews");
    orig_FoldView_layoutSubviews(self, _cmd);

    UIViewController *vc = [WPUtility findParentViewController:(UIView *)self];
    if (!vc) return;
    if (![NSStringFromClass([vc class]) isEqualToString:@"NewMainFrameViewController"]) return;

    ListCornerRadiusConfig *config = [ListCornerRadiusConfig shared];
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

    BOOL isDark = [WPUtility isDarkModeForViewController:vc];
    UIColor *targetBg = isDark
            ? [WPColorUtil colorFromHexString:config.listCellDarkBgColor]
            : [WPColorUtil colorFromHexString:config.listCellLightBgColor];
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



static id (*orig_NMFVC_viewForHeader)(id, SEL, id, NSInteger);
static id _hooked_NMFVC_viewForHeader(id self, SEL _cmd, id tableView, NSInteger section) {
    ListCornerRadiusConfig *config = [ListCornerRadiusConfig shared];
    if (config.globalCornerRadiusEnabled && section > 0) {
        return [[UIView alloc] initWithFrame:CGRectZero];
    }
    return orig_NMFVC_viewForHeader(self, _cmd, tableView, section);
}

static void (*orig_setBgImageView)(id, SEL, id);
static void _hooked_setBgImageView(id self, SEL _cmd, id imageView) {
    ListCornerRadiusConfig *config = [ListCornerRadiusConfig shared];
    if (!config.globalCornerRadiusEnabled) {
        orig_setBgImageView(self, _cmd, imageView);
    }
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

static void (*orig_UIView_layoutSubviews)(id, SEL);
static void _hooked_UIView_layoutSubviews(id self, SEL _cmd) {
    WPHeatTick("UIView.layoutSubviews(base-hook)");
    orig_UIView_layoutSubviews(self, _cmd);

    ListCornerRadiusConfig *config = [ListCornerRadiusConfig shared];
    if (!config.globalCornerRadiusEnabled) return;

    // wakeups 优化（原实现每次布局都 NSStringFromClass 字符串分配）：指针比对零分配，语义不变（精确匹配 UIView 基类）
    static Class g_nsViewCls;
    if (!g_nsViewCls) g_nsViewCls = objc_getClass("UIView");
    if ([self class] != g_nsViewCls) return;

    UIView *view = (UIView *)self;

    if (view.bounds.size.height < 1.0) return;

    UIViewController *vc = [WPUtility findParentViewController:view];
    if (!vc || !_wp_isAllowedVC(NSStringFromClass([vc class]))) return;

    UIView *parent = view.superview;
    if (!parent) return;

    // wakeups 优化：幂等赋值——backgroundColor 赋值即 CA 脏标记，布局期内反复赋同值会搅动提交循环
    if (_wp_isTableViewClass(NSStringFromClass([parent class]))) {
        if (![view.backgroundColor isEqual:[UIColor clearColor]])
            view.backgroundColor = [UIColor clearColor];
        return;
    }

    UIView *gp = parent.superview;
    if (gp && _wp_isTableViewClass(NSStringFromClass([gp class]))) {
        if (![view.backgroundColor isEqual:[UIColor clearColor]])
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
            &orig_MMTableViewCell_layoutSubviews
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
            &orig_WCSearchBar_layoutSubviews
        );
        WPLog(@"ListCornerRadius", @"[OK] WCSearchBar::layoutSubviews");
    } else {
        WPLog(@"ListCornerRadius", @"[WARN] WCSearchBar class not found!");
    }

    // ★ WPAuxiliaryHooks Hooks — MFWebMMBtn, MFBannerBtn, FoldView, MMUIButton media corner
    Class c1 = objc_getClass("MFWebMMBtn");
    if (c1) {
        MSHookMessageEx(c1, @selector(layoutSubviews),
            (IMP)_hooked_MFWebMMBtn_layoutSubviews, (IMP *)&orig_MFWebMMBtn_layoutSubviews);
    }

    Class c2 = objc_getClass("MFBannerBtn");
    if (c2) {
        MSHookMessageEx(c2, @selector(layoutSubviews),
            (IMP)_hooked_MFBannerBtn_layoutSubviews, (IMP *)&orig_MFBannerBtn_layoutSubviews);
    }

    Class c3 = objc_getClass("MainFrameSectionFoldView");
    if (c3) {
        MSHookMessageEx(c3, @selector(layoutSubviews),
            (IMP)_hooked_FoldView_layoutSubviews, (IMP *)&orig_FoldView_layoutSubviews);
    }

    // ★ WPSessionSpacingHook Hooks — UIView, NewMainFrameVC, MMTableSectionHeader
    Class uiView = objc_getClass("UIView");
    if (uiView) {
        MSHookMessageEx(uiView, @selector(layoutSubviews),
            (IMP)_hooked_UIView_layoutSubviews, (IMP *)&orig_UIView_layoutSubviews);
    }
    Class nmfvc = objc_getClass("NewMainFrameViewController");
    if (nmfvc) {
        MSHookMessageEx(nmfvc, @selector(tableView:viewForHeaderInSection:),
            (IMP)_hooked_NMFVC_viewForHeader, (IMP *)&orig_NMFVC_viewForHeader);
    }
    Class header = objc_getClass("MMTableSectionHeaderView");
    if (header) {
        MSHookMessageEx(header, @selector(setBackgroundImageView:),
            (IMP)_hooked_setBgImageView, (IMP *)&orig_setBgImageView);
    }

    // ★ 已移交给 ProfileCardBgHook.install 自行管理，消除跨模块耦合
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

    // ─── 分支 A：section > 3 → per-section ───
    if (section > 3) {
        [self wp_applyStandardCorner:cell tableView:tableView indexPath:indexPath
                              section:section row:row total:rowInThisSection
                         cornerRadius:radius isFTSHome:isFTSHome
                            className:@"ContactsViewController"];
        return;
    }

    // ─── 分支 B：section 0-3 特殊算法 ───

    // 收集 Section 0-3 行数（不足补 0）
    NSMutableArray *rowCounts = [NSMutableArray array];
    for (NSInteger s = 0; s < 4; s++) {
        [rowCounts addObject:@(s < [tableView numberOfSections]
                              ? [tableView numberOfRowsInSection:s] : 0)];
    }

    // Section 0 行数必须 3-4 行
    if ([rowCounts[0] integerValue] < 3 || [rowCounts[0] integerValue] > 4) {
        [self wp_applyStandardCorner:cell tableView:tableView indexPath:indexPath
                              section:section row:row total:rowInThisSection
                         cornerRadius:radius isFTSHome:isFTSHome
                            className:@"ContactsViewController"];
        return;
    }

    // bVar1：section 1/2/3 是否都是 1 行
    BOOL bVar1 = ([rowCounts[1] integerValue] == 1 &&
                  [rowCounts[2] integerValue] == 1 &&
                  [rowCounts[3] integerValue] == 1);

    if (!bVar1) {
        [self wp_applyStandardCorner:cell tableView:tableView indexPath:indexPath
                              section:section row:row total:rowInThisSection
                         cornerRadius:radius isFTSHome:isFTSHome
                            className:@"ContactsViewController"];
        return;
    }

    // ─── 半合并模式（bVar1=true） ───

    NSInteger ct = 0, bt = 2;  // cornerType / borderType

    if (section == 0) {
        // Section 0：首行顶角，末行无角（和后面单行连一起）
        if (row == 0) {
            ct = 1; bt = 1;  // 顶角
        } else {
            ct = 0; bt = 2;  // 无角（末行/中间行都一样）
        }
    } else if (section == 3) {
        // Section 3：最后一个单行 → 底角
        ct = 2; bt = 3;
    } else {
        // Section 1/2：中间单行 → 无角
        ct = 0; bt = 2;
    }

    // 应用圆角
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
    ListCornerRadiusConfig *config = [ListCornerRadiusConfig shared];

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

    BOOL isDark = [WPUtility isDarkModeForView:cell];

    UIColor *borderColor = [WPColorUtil colorFromHexString:isDark ? config.listCellBorderColorDarkHex : config.listCellBorderColor];
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

+ (void)install {
    [self initListCornerRadiusHook];
}

@end
