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
                     className:(NSString *)className;

+ (void)wp_applyCornerForContacts:(UIView *)cell
                        tableView:(UITableView *)tableView
                        indexPath:(NSIndexPath *)indexPath
                          section:(NSInteger)section
                              row:(NSInteger)row
                            total:(NSInteger)rowInThisSection
                     cornerRadius:(NSInteger)radius;

// 表格级边框（WCR 同款）：每 section 一条覆盖视图 + 整段圆角描边，挂 tableView 本体；
// 需在 cell hook 清洁态 return 之前调用，保证功能关时覆盖视图也被拆除
+ (void)wp_paintTableBorders:(UITableView *)tableView
                   className:(NSString *)className
                   featureOn:(BOOL)featureOn
                      mioOwn:(BOOL)mioOwn;

// 独立视图（FoldView）的自体整段描边，双向拆装
+ (void)wp_paintViewSelfBorder:(UIView *)view radius:(NSInteger)radius;

+ (UIView *)wp_findFoldViewInSubviews:(NSArray<UIView *> *)subviews;

@end

// ★ WCR 同款动态背景色（FUN_007d44a8 实证方案）：明暗 hex 一次构建 colorWithDynamicProvider
//   并按 config 值惰性静态缓存，明暗切换由 UIKit 按 trait 自动重取色——hook 内不再判暗。
//   两侧兜底与原 wp_cellDefaultBgColor 语义一致：浅色白 / 深色 #202020；
//   tag 区分缓存槽（用户色通道 / 默认底通道）
static UIColor *WPDynamicCellBgColor(NSString *lightHex, NSString *darkHex, NSString *tag) {
    static NSMutableDictionary *cache = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{ cache = [NSMutableDictionary dictionary]; });
    NSString *key = [tag stringByAppendingFormat:@"|%@|%@", lightHex ?: @"", darkHex ?: @""];
    UIColor *cached = cache[key];
    if (!cached) {
        cached = [WPColorUtil dynamicColorFromLightHex:lightHex
                                                darkHex:darkHex
                                          lightFallback:[UIColor whiteColor]
                                           darkFallback:[UIColor colorWithRed:0.125 green:0.125 blue:0.125 alpha:1.0]];
        if (cached) cache[key] = cached;
    }
    return cached;
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

// ─── 共享常量与边框画布（WCR 同款：section 覆盖视图 + 整段描边，FUN_007c79c8 实证方案） ───
static NSString * const kMioBorderLayerName = @"com.mio.cornerBorder";
static NSString * const kMioBorderStampKey = @"com.mio.borderStamp";
// 涂装标记：登记"被本模块动过的 cell/table/视图"，功能关后的清洁态只清理这些对象，避免误伤原生样式
static NSString * const kMioCornerPaintedKey = @"com.mio.cornerPainted";
static NSString * const kMioTablePaintedKey = @"com.mio.tablePainted";
// section 边框覆盖视图 tag 段：tag = 基数 + sectionIndex，覆盖视图挂在 tableView 本体上，免疫 cell 复用
static NSInteger const kMioBorderTagBase = 0x4D494F;  // 'MIO'
static NSInteger const kMioBorderTagRange = 1000;

// 边框动态色（WCR 同款）：明暗 hex 一次构建动态 UIColor 并按 config 值静态缓存，
// 明暗切换由 UIKit trait 自动重取色；两侧兜底与原二元兜底语义一致（浅 0.9 灰 / 深 0.25 灰）
static UIColor *WPDynamicBorderColor(NSString *lightHex, NSString *darkHex) {
    static NSString *cacheKey = nil;
    static UIColor *cached = nil;
    NSString *key = [NSString stringWithFormat:@"%@|%@", lightHex ?: @"", darkHex ?: @""];
    if (![key isEqualToString:cacheKey]) {
        cached = [WPColorUtil dynamicColorFromLightHex:lightHex
                                                darkHex:darkHex
                                          lightFallback:[UIColor colorWithRed:0.9 green:0.9 blue:0.9 alpha:1.0]
                                           darkFallback:[UIColor colorWithRed:0.25 green:0.25 blue:0.25 alpha:1.0]];
        cacheKey = key;
    }
    return cached;
}

// 移除 table 上全部边框覆盖视图（tag 段识别，只动我们自己的）
static void WPStripTableOverlays(UITableView *tableView) {
    NSMutableArray *stale = [NSMutableArray array];
    for (UIView *sub in tableView.subviews) {
        if (sub.tag >= kMioBorderTagBase && sub.tag < kMioBorderTagBase + kMioBorderTagRange) {
            [stale addObject:sub];
        }
    }
    [stale makeObjectsPerformSelector:@selector(removeFromSuperview)];
}

// ★★★ Cell Hook：列表圆角 + 分发到资料卡透明化 ★★★
static void replaced_MMTableViewCell_layoutSubviews(id self, SEL _cmd) {
    ListCornerRadiusConfig *config = [ListCornerRadiusConfig shared];

    UIViewController *vc = [WPUtility findParentViewController:(UIView *)self];
    if (!vc) {
        if (orig_MMTableViewCell_layoutSubviews) {
            ((void (*)(id, SEL))orig_MMTableViewCell_layoutSubviews)(self, _cmd);
        }
        return;
    }
    NSString *className = NSStringFromClass([vc class]);

    // ★ Mio 自己的设置页基线皮肤（保留原意图）：微信引擎迁移后 cell 是微信原生直角样式，
    //   Mio 页面（MioPlugin*/WP*/SettingCategoryController 子类）始终应用硬编码基线
    //   （圆角 15 + 默认底），微信原生页面行为不变
    static Class scCls = nil;
    static dispatch_once_t scOnceToken;
    dispatch_once(&scOnceToken, ^{ scCls = NSClassFromString(@"SettingCategoryController"); });
    BOOL mioOwn = [className hasPrefix:@"MioPlugin"] || [className hasPrefix:@"WP"]
                  || (scCls && [vc isKindOfClass:scCls]);

    // ★ 功能效果总闸：三道守卫从"提前 return"改为合并计算——用户颜色/边框/圆角配置
    //   这层"功能效果"随开关走（Mio 页面只看总开关）；关功能时走下方清洁态主动复原，
    //   而不是放任残留
    BOOL featureOn = config.globalCornerRadiusEnabled
        && (mioOwn
            || ([CornerResponsibility isListCornerResponsibleFor:vc] && shouldApplyGlobalCorner(vc)));

    UIView *cellView = (UIView *)self;

    // ★ margin：Mio 页面写死 15（不读用户配置）；微信页面功能开走用户配置、功能关复原原生全宽 ★
    CGFloat margin = mioOwn ? 15.0 : (featureOn ? config.listCellMargin : 0.0);
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
    } else if (!mioOwn && objc_getAssociatedObject(self, (__bridge const void *)kMioCornerPaintedKey)) {
        // 清洁态复原：仅对被我们内缩过的 cell 回原生全宽
        UIView *superview = cellView.superview;
        CGFloat containerW = superview ? superview.bounds.size.width
                                       : [UIScreen mainScreen].bounds.size.width;
        CGFloat currentX = cellView.frame.origin.x;
        CGFloat currentW = cellView.frame.size.width;
        if (fabs(currentX) > 0.5 || fabs(currentW - containerW) > 0.5) {
            CGRect f = cellView.frame;
            f.origin.x = 0;
            f.size.width = containerW;
            cellView.frame = f;
        }
    }

    // ★ orig ★
    if (orig_MMTableViewCell_layoutSubviews) {
        ((void (*)(id, SEL))orig_MMTableViewCell_layoutSubviews)(self, _cmd);
    }

    // 涂装标记：功能开即登记，供功能关后的清洁态识别"我们动过的 cell"
    if (featureOn) {
        objc_setAssociatedObject(self, (__bridge const void *)kMioCornerPaintedKey, @YES,
            OBJC_ASSOCIATION_RETAIN_NONATOMIC);
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
        BOOL manageBg = featureOn || mioOwn
            || objc_getAssociatedObject(self, (__bridge const void *)kMioCornerPaintedKey) != nil;
        if (manageBg) {
            // ★ 动态色语义：明暗跟随交给 UIKit 的 trait 系统，hook 内不再判暗。
            //   Mio 基线皮肤=默认底（不吃用户色）、微信页面功能开=用户色（两侧兜底默认底）、
            //   清洁态=nil 回微信原生底——三条通道与原语义逐字一致
            UIColor *targetBg = nil;
            if (mioOwn) {
                targetBg = featureOn
                    ? WPDynamicCellBgColor(config.listCellLightBgColor, config.listCellDarkBgColor, @"cellUser")
                    : WPDynamicCellBgColor(nil, nil, @"cellDefault");
            } else if (featureOn) {
                targetBg = WPDynamicCellBgColor(config.listCellLightBgColor, config.listCellDarkBgColor, @"cellUser");
            }
            // else：清洁态 targetBg 保持 nil（回微信原生底）
            // 幂等：指针相同（共享动态色对象）或 isEqual 才跳过，避免每轮产生 CA 脏标记
            BOOL sameBg = (targetBg == nil)
                ? (cellView.backgroundColor == nil)
                : (cellView.backgroundColor == targetBg
                   || [targetBg isEqual:cellView.backgroundColor]);
            if (!sameBg) {
                cellView.backgroundColor = targetBg;
            }
        }
    }

    // ★ WCR 同款表格级边框（需在清洁态 return 之前调用，保证功能关时覆盖视图也被拆除）：
    //   每 section 一条覆盖视图 + 整段圆角描边，挂 tableView 本体（tag 管理），免疫 cell 复用
    UIView *parent = cellView.superview;
    UITableView *tableView = nil;
    while (parent) {
        if ([parent isKindOfClass:[UITableView class]]) {
            tableView = (UITableView *)parent; break;
        }
        parent = parent.superview;
    }
    if (tableView) {
        [ListCornerRadiusHook wp_paintTableBorders:tableView
                                         className:className
                                         featureOn:featureOn
                                            mioOwn:mioOwn];
    }

    // ★ 清洁态（微信页面，功能关）：只清理涂装过的 cell——回原生直角；未涂装的零触碰
    if (!featureOn && !mioOwn) {
        if (objc_getAssociatedObject(self, (__bridge const void *)kMioCornerPaintedKey)) {
            if (cellView.layer.cornerRadius != 0) cellView.layer.cornerRadius = 0;
            if (cellView.layer.maskedCorners != 0) cellView.layer.maskedCorners = 0;
            if (cellView.layer.masksToBounds) cellView.layer.masksToBounds = NO;
            objc_setAssociatedObject(self, (__bridge const void *)kMioCornerPaintedKey, nil,
                OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        }
        return;
    }

    // ★ corner 圆角：Mio 页面写死 15（不读用户配置），微信页面走用户配置 ★
    NSInteger cornerRadius = mioOwn ? 15 : (NSInteger)config.listCellCornerRadius;
    if (!mioOwn && cornerRadius == 0) cornerRadius = 18;

    BOOL isContacts = [className isEqualToString:@"ContactsViewController"];

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
                                          cornerRadius:cornerRadius];
    } else {
        [ListCornerRadiusHook wp_applyStandardCorner:cellView
                                          tableView:tableView
                                          indexPath:indexPath
                                            section:section
                                                row:row
                                              total:totalRows
                                       cornerRadius:cornerRadius
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
    orig_MFWebMMBtn_layoutSubviews(self, _cmd);

    ListCornerRadiusConfig *config = [ListCornerRadiusConfig shared];
    if (!config.globalCornerRadiusEnabled) return;

    UIViewController *vc = [WPUtility findParentViewController:(UIView *)self];
    if (!vc) return;
    if (![NSStringFromClass([vc class]) isEqualToString:@"NewMainFrameViewController"]) return;

    // ★ 动态色：明暗跟随交给 UIKit trait 系统；指针幂等避免每轮 CA 脏标记
    UIColor *targetBg = WPDynamicCellBgColor(config.listCellLightBgColor, config.listCellDarkBgColor, @"cellUser");
    UIView *btnView = (UIView *)self;
    if (btnView.backgroundColor != targetBg) btnView.backgroundColor = targetBg;
}

// ★★★ [WPAuxiliaryHooks] MFBannerBtn background color ★★★
static void (*orig_MFBannerBtn_layoutSubviews)(id, SEL);
static void _hooked_MFBannerBtn_layoutSubviews(id self, SEL _cmd) {
    orig_MFBannerBtn_layoutSubviews(self, _cmd);

    ListCornerRadiusConfig *config = [ListCornerRadiusConfig shared];
    if (!config.globalCornerRadiusEnabled) return;

    UIViewController *vc = [WPUtility findParentViewController:(UIView *)self];
    if (!vc) return;
    if (![NSStringFromClass([vc class]) isEqualToString:@"NewMainFrameViewController"]) return;

    // ★ 动态色：明暗跟随交给 UIKit trait 系统；指针幂等避免每轮 CA 脏标记
    UIColor *targetBg = WPDynamicCellBgColor(config.listCellLightBgColor, config.listCellDarkBgColor, @"cellUser");
    UIView *btnView = (UIView *)self;
    if (btnView.backgroundColor != targetBg) btnView.backgroundColor = targetBg;
}

// ★★★ [WPAuxiliaryHooks] MainFrameSectionFoldView ★★★
static void (*orig_FoldView_layoutSubviews)(id, SEL);
static void _hooked_FoldView_layoutSubviews(id self, SEL _cmd) {
    orig_FoldView_layoutSubviews(self, _cmd);

    UIViewController *vc = [WPUtility findParentViewController:(UIView *)self];
    if (!vc) return;
    if (![NSStringFromClass([vc class]) isEqualToString:@"NewMainFrameViewController"]) return;

    ListCornerRadiusConfig *config = [ListCornerRadiusConfig shared];
    UIView *view = (UIView *)self;
    if (!config.globalCornerRadiusEnabled) {
        // ★ 功能总闸关：仅拆除自体边框（双向清洁），几何/底色不碰
        [ListCornerRadiusHook wp_paintViewSelfBorder:view radius:0];
        return;
    }
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

    [ListCornerRadiusHook wp_paintViewSelfBorder:view radius:radius];

    // ★ 动态色：明暗跟随交给 UIKit trait 系统；指针幂等避免每轮 CA 脏标记
    UIColor *targetBg = WPDynamicCellBgColor(config.listCellLightBgColor, config.listCellDarkBgColor, @"cellUser");
    if (view.backgroundColor != targetBg) view.backgroundColor = targetBg;

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
                     className:(NSString *)className {
    NSInteger cornerType = 0;  // 用于 maskedCorners（边框已移交表格级整段描边）
    if (totalRows == 1) {
        cornerType = 3;  // 全角
    } else if (row == 0) {
        cornerType = 1;  // 顶角
    } else if (row == totalRows - 1) {
        cornerType = 2;  // 底角

        // ★ 折叠置顶检测（仅聊天列表 section 1 的末行）★
        BOOL isNewMainFrame = [className isEqualToString:@"NewMainFrameViewController"];
        if (isNewMainFrame && indexPath.section == 1) {
            UIView *foldView = [ListCornerRadiusHook wp_findFoldViewInSubviews:tableView.subviews];
            if (foldView && [foldView respondsToSelector:@selector(isFolding)]) {
                BOOL folding = ((BOOL (*)(id, SEL))objc_msgSend)(foldView, @selector(isFolding));
                if (!folding) {
                    // 展开状态 → 无圆角（边框不封底由 wp_paintTableBorders 处理）
                    cell.layer.cornerRadius = 0;
                    cell.layer.maskedCorners = 0;
                    return;
                }
            }
        }
    } else {
        cornerType = 0;  // 无角
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
}

+ (void)wp_applyCornerForContacts:(UIView *)cell
                        tableView:(UITableView *)tableView
                        indexPath:(NSIndexPath *)indexPath
                          section:(NSInteger)section
                              row:(NSInteger)row
                            total:(NSInteger)rowInThisSection
                     cornerRadius:(NSInteger)radius {

    // ─── 分支 A：section > 3 → per-section ───
    if (section > 3) {
        [self wp_applyStandardCorner:cell tableView:tableView indexPath:indexPath
                              section:section row:row total:rowInThisSection
                         cornerRadius:radius
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
                         cornerRadius:radius
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
                         cornerRadius:radius
                            className:@"ContactsViewController"];
        return;
    }

    // ─── 半合并模式（bVar1=true，边框整块由 wp_paintTableBorders 的合并组处理） ───

    NSInteger ct = 0;  // cornerType

    if (section == 0) {
        // Section 0：首行顶角，末行无角（和后面单行连一起）
        ct = (row == 0) ? 1 : 0;
    } else if (section == 3) {
        // Section 3：最后一个单行 → 底角
        ct = 2;
    } else {
        // Section 1/2：中间单行 → 无角
        ct = 0;
    }

    // 应用圆角
    cell.layer.cornerRadius = (ct == 0) ? 0 : radius;
    cell.layer.maskedCorners = ct == 1 ? (kCALayerMinXMinYCorner|kCALayerMaxXMinYCorner)
                             : ct == 2 ? (kCALayerMinXMaxYCorner|kCALayerMaxXMaxYCorner)
                             : ct == 3 ? (kCALayerMinXMinYCorner|kCALayerMaxXMinYCorner|
                                          kCALayerMinXMaxYCorner|kCALayerMaxXMaxYCorner)
                             : 0;
}

#pragma mark - ★ 表格级边框（WCR 同款：section 覆盖视图 + 整段圆角描边）

// 在视图子层中查找本模块的边框 CAShapeLayer（按 name 识别）
+ (CAShapeLayer *)wp_findBorderShapeInView:(UIView *)view {
    for (CALayer *sub in view.layer.sublayers) {
        if ([sub isKindOfClass:[CAShapeLayer class]] && [sub.name isEqualToString:kMioBorderLayerName]) {
            return (CAShapeLayer *)sub;
        }
    }
    return nil;
}

// 描边色写入：动态色按当前 trait 解析，CGColor 幂等比对后才写（明暗切换由 UIKit 自动跟随）
+ (void)wp_applyStrokeColor:(CAShapeLayer *)shape
               dynamicColor:(UIColor *)color
                      trait:(UITraitCollection *)trait {
    UIColor *resolved = color;
    if (@available(iOS 13.0, *)) {
        resolved = [color resolvedColorWithTraitCollection:trait];
    }
    CGColorRef cg = resolved.CGColor;
    if (!shape.strokeColor || !CFEqual(shape.strokeColor, cg)) {
        shape.strokeColor = cg;
    }
}

// 组描边路径：openBottom=NO → 一条整段圆角矩形（首末行圆角天然完成，无需逐行拼段）；
// openBottom=YES → 顶角圆角 + 左右边、不封底（聊天列表 section 1 折叠展开态）
+ (UIBezierPath *)wp_sectionBorderPathForBounds:(CGRect)bounds
                                         radius:(CGFloat)radius
                                     openBottom:(BOOL)openBottom {
    CGFloat w = bounds.size.width;
    CGFloat h = bounds.size.height;
    CGFloat r = (radius > 0) ? radius : 0;
    if (!openBottom) {
        return [UIBezierPath bezierPathWithRoundedRect:bounds cornerRadius:r];
    }
    UIBezierPath *path = [UIBezierPath bezierPath];
    [path moveToPoint:CGPointMake(0, h)];
    [path addLineToPoint:CGPointMake(0, r)];
    if (r > 0) {
        [path addArcWithCenter:CGPointMake(r, r) radius:r
                    startAngle:M_PI endAngle:M_PI * 1.5 clockwise:YES];
        [path addArcWithCenter:CGPointMake(w - r, r) radius:r
                    startAngle:M_PI * 1.5 endAngle:0 clockwise:YES];
    }
    [path addLineToPoint:CGPointMake(w, h)];
    return path;
}

// 表格级边框：每 section 一条透明覆盖视图（tag 管理、挂 tableView 本体，免疫 cell 复用），
// 内含一条 CAShapeLayer 整段描边；样式戳 + frame 双幂等，功能/边框关时主动拆除
+ (void)wp_paintTableBorders:(UITableView *)tableView
                   className:(NSString *)className
                   featureOn:(BOOL)featureOn
                      mioOwn:(BOOL)mioOwn {
    ListCornerRadiusConfig *config = [ListCornerRadiusConfig shared];
    BOOL painted = objc_getAssociatedObject(tableView, (__bridge const void *)kMioTablePaintedKey) != nil;

    // ★ 双向清洁：功能关或边框关 → 拆除本模块覆盖视图（涂装标记保证只动我们自己的 table）
    if (!featureOn || !config.listCellBorder) {
        if (painted) {
            WPStripTableOverlays(tableView);
            objc_setAssociatedObject(tableView, (__bridge const void *)kMioTablePaintedKey, nil,
                OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        }
        return;
    }

    objc_setAssociatedObject(tableView, (__bridge const void *)kMioTablePaintedKey, @YES,
        OBJC_ASSOCIATION_RETAIN_NONATOMIC);

    CGFloat margin = mioOwn ? 15.0 : (CGFloat)config.listCellMargin;
    NSInteger radius = mioOwn ? 15 : (NSInteger)config.listCellCornerRadius;
    if (!mioOwn && radius == 0) radius = 18;
    CGFloat borderWidth = config.listCellBorderWidth;
    if (borderWidth <= 0) borderWidth = 1.0;
    UIColor *borderColor = WPDynamicBorderColor(config.listCellBorderColor, config.listCellBorderColorDarkHex);
    if (!borderColor) return;

    CGFloat tableW = tableView.bounds.size.width;
    CGFloat overlayW = tableW - 2.0 * margin;
    if (overlayW <= 0) return;

    NSInteger nSections = [tableView numberOfSections];

    // 分组规则：通讯录 section 0-3 半合并块（0 号 3-4 行 + 三个单行）→ 一条整段描边；其余每 section 一组
    BOOL contactsMerged = NO;
    if ([className isEqualToString:@"ContactsViewController"] && nSections > 3
        && [tableView numberOfRowsInSection:0] >= 3 && [tableView numberOfRowsInSection:0] <= 4
        && [tableView numberOfRowsInSection:1] == 1
        && [tableView numberOfRowsInSection:2] == 1
        && [tableView numberOfRowsInSection:3] == 1) {
        contactsMerged = YES;
    }

    // 折叠置顶展开态：聊天列表 section 1 末 cell 无底角 → 该组边框不封底
    BOOL openBottomSection1 = NO;
    if ([className isEqualToString:@"NewMainFrameViewController"] && nSections > 1) {
        UIView *foldView = [self wp_findFoldViewInSubviews:tableView.subviews];
        if (foldView && [foldView respondsToSelector:@selector(isFolding)]) {
            BOOL folding = ((BOOL (*)(id, SEL))objc_msgSend)(foldView, @selector(isFolding));
            openBottomSection1 = !folding;
        }
    }

    for (NSInteger s = 0; s < nSections; s++) {
        UIView *overlay = [tableView viewWithTag:kMioBorderTagBase + s];

        BOOL hide = NO;
        BOOL openBottom = NO;
        CGRect groupRect = CGRectZero;
        if (contactsMerged && s >= 0 && s <= 3) {
            if (s == 0) {
                // 合并块：0-3 号 section 首末行 rect 并集，一条描边整块包住
                CGRect first = [tableView rectForRowAtIndexPath:[NSIndexPath indexPathForRow:0 inSection:0]];
                CGRect last = [tableView rectForRowAtIndexPath:[NSIndexPath indexPathForRow:0 inSection:3]];
                groupRect = CGRectUnion(first, last);
            } else {
                hide = YES;  // 合并块成员：只由首 section 覆盖视图整段描边
            }
        } else {
            NSInteger rows = [tableView numberOfRowsInSection:s];
            if (rows <= 0) {
                hide = YES;
            } else {
                CGRect first = [tableView rectForRowAtIndexPath:[NSIndexPath indexPathForRow:0 inSection:s]];
                CGRect last = [tableView rectForRowAtIndexPath:[NSIndexPath indexPathForRow:rows - 1 inSection:s]];
                groupRect = CGRectUnion(first, last);
                openBottom = (s == 1 && openBottomSection1);
            }
        }

        if (hide) {
            if (overlay && !overlay.hidden) overlay.hidden = YES;
            continue;
        }

        if (!overlay) {
            overlay = [[UIView alloc] initWithFrame:CGRectZero];
            overlay.tag = kMioBorderTagBase + s;
            overlay.userInteractionEnabled = NO;
            overlay.backgroundColor = [UIColor clearColor];
            [tableView addSubview:overlay];
        }
        if (overlay.hidden) overlay.hidden = NO;
        [tableView bringSubviewToFront:overlay];

        // 几何：横向 = cell 内缩后的范围（table 内容坐标），纵向 = 组内首末行 rect 并集
        CGRect target = CGRectMake(margin, groupRect.origin.y, overlayW, groupRect.size.height);
        if (fabs(overlay.frame.origin.x - target.origin.x) > 0.5
            || fabs(overlay.frame.origin.y - target.origin.y) > 0.5
            || fabs(overlay.frame.size.width - target.size.width) > 0.5
            || fabs(overlay.frame.size.height - target.size.height) > 0.5) {
            overlay.frame = target;
        }

        CAShapeLayer *shape = [self wp_findBorderShapeInView:overlay];
        if (!shape) {
            shape = [CAShapeLayer layer];
            shape.name = kMioBorderLayerName;
            shape.fillColor = [UIColor clearColor].CGColor;
            shape.lineJoin = kCALineJoinRound;
            [overlay.layer addSublayer:shape];
        }

        // 样式戳：radius/线宽/封底状态任一变化才重建 path
        NSString *stamp = [NSString stringWithFormat:@"r%ld-bw%.1f-ob%d",
                           (long)radius, borderWidth, (int)openBottom];
        NSString *oldStamp = objc_getAssociatedObject(overlay, (__bridge const void *)kMioBorderStampKey);
        if (![stamp isEqualToString:oldStamp] || !CGRectEqualToRect(shape.frame, overlay.bounds)) {
            shape.frame = overlay.bounds;
            shape.lineWidth = borderWidth;
            shape.path = [self wp_sectionBorderPathForBounds:overlay.bounds
                                                      radius:(CGFloat)radius
                                                  openBottom:openBottom].CGPath;
            objc_setAssociatedObject(overlay, (__bridge const void *)kMioBorderStampKey, stamp,
                OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        }

        [self wp_applyStrokeColor:shape dynamicColor:borderColor trait:tableView.traitCollection];
    }

    // 收尾：section 数收缩时隐藏历史覆盖视图（tag 段内、超出当前 section 数的）
    for (UIView *sub in tableView.subviews) {
        NSInteger idx = sub.tag - kMioBorderTagBase;
        if (idx >= nSections && idx < kMioBorderTagRange && !sub.hidden) {
            sub.hidden = YES;
        }
    }
}

// FoldView 等独立视图的自体整段描边（原 position 0 全边框语义）：动态色 + 样式戳幂等，双向拆装
+ (void)wp_paintViewSelfBorder:(UIView *)view radius:(NSInteger)radius {
    ListCornerRadiusConfig *config = [ListCornerRadiusConfig shared];
    BOOL painted = objc_getAssociatedObject(view, (__bridge const void *)kMioTablePaintedKey) != nil;

    if (!config.globalCornerRadiusEnabled || !config.listCellBorder) {
        if (painted) {
            for (CALayer *sub in [view.layer.sublayers copy]) {
                if ([sub isKindOfClass:[CAShapeLayer class]] && [sub.name isEqualToString:kMioBorderLayerName]) {
                    [sub removeFromSuperlayer];
                }
            }
            objc_setAssociatedObject(view, (__bridge const void *)kMioTablePaintedKey, nil,
                OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        }
        return;
    }

    objc_setAssociatedObject(view, (__bridge const void *)kMioTablePaintedKey, @YES,
        OBJC_ASSOCIATION_RETAIN_NONATOMIC);

    CGFloat borderWidth = config.listCellBorderWidth;
    if (borderWidth <= 0) borderWidth = 1.0;
    UIColor *borderColor = WPDynamicBorderColor(config.listCellBorderColor, config.listCellBorderColorDarkHex);
    if (!borderColor) return;

    CAShapeLayer *shape = [self wp_findBorderShapeInView:view];
    if (!shape) {
        shape = [CAShapeLayer layer];
        shape.name = kMioBorderLayerName;
        shape.fillColor = [UIColor clearColor].CGColor;
        shape.lineJoin = kCALineJoinRound;
        [view.layer addSublayer:shape];
    }

    NSString *stamp = [NSString stringWithFormat:@"r%ld-bw%.1f-w%.0f-h%.0f",
                       (long)radius, borderWidth, view.bounds.size.width, view.bounds.size.height];
    NSString *oldStamp = objc_getAssociatedObject(view, (__bridge const void *)kMioBorderStampKey);
    if (![stamp isEqualToString:oldStamp]) {
        shape.frame = view.bounds;
        shape.lineWidth = borderWidth;
        shape.path = [UIBezierPath bezierPathWithRoundedRect:view.bounds
                                                cornerRadius:(CGFloat)radius].CGPath;
        objc_setAssociatedObject(view, (__bridge const void *)kMioBorderStampKey, stamp,
            OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    }

    [self wp_applyStrokeColor:shape dynamicColor:borderColor trait:view.traitCollection];
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

+ (void)install {
    [self initListCornerRadiusHook];
}

@end
