#import "ListCornerRadiusHook.h"
#import "ListCornerRadiusConfig.h"
#import "../../Core/WPUtility.h"
#import "../../Config/WPColorUtil.h"
#import "../../Core/LogManager.h"
#import "../ProfileCardBg/ProfileCardBgHook.h"
#import <substrate.h>
#import <objc/runtime.h>
#import <objc/message.h>

static IMP orig_MMTableViewCell_layoutSubviews = NULL;
static IMP orig_WCSearchBar_layoutSubviews = NULL;

@interface ListCornerRadiusHook ()

+ (void)wp_applyGeometricCorner:(UIView *)cell
                   cornerRadius:(NSInteger)configuredRadius
                       hasAbove:(BOOL)hasAbove
                       hasBelow:(BOOL)hasBelow;

// 表格级边框（WCR 同款）：几何连续的行区段合并为一组，每组一条覆盖视图 + 整段圆角描边，
// 挂 tableView 本体；需在 cell hook 清洁态 return 之前调用，保证功能关时覆盖视图也被拆除
+ (void)wp_paintTableBorders:(UITableView *)tableView
                   featureOn:(BOOL)featureOn
                      mioOwn:(BOOL)mioOwn;

// 单组覆盖视图的查找/创建 + 整段圆角描边（幂等）
+ (void)wp_paintGroupOverlay:(UITableView *)tableView
                         tag:(NSInteger)tag
                      target:(CGRect)target
                      radius:(NSInteger)radius
                  borderWidth:(CGFloat)borderWidth
                  borderColor:(UIColor *)borderColor;

// 独立视图（FoldView）的自体整段描边，双向拆装
+ (void)wp_paintViewSelfBorder:(UIView *)view radius:(NSInteger)radius;

@end

// hex/tag 比较：nil 安全，指针相同走快路径（调用点传同一 config 字符串，常态零成本命中）
static BOOL WPHexSame(NSString *a, NSString *b) {
    if (a == b) return YES;
    if (!a || !b) return NO;
    return [a isEqualToString:b];
}

// ★ WCR 同款动态背景色（FUN_007d44a8 实证方案）：明暗 hex 一次构建 colorWithDynamicProvider
//   并槽位缓存，明暗切换由 UIKit 按 trait 自动重取色——hook 内不再判暗。
//   两侧兜底语义：浅色白 / 深色 #202020；tag 区分通道（用户色 / 默认底）。
//   ★ 单槽 + 指针快路径：命中零分配（替代每帧 stringWithFormat 拼 key 的热路径分配）
static UIColor *WPDynamicCellBgColor(NSString *lightHex, NSString *darkHex, NSString *tag) {
    static NSString *sTag = nil, *sLight = nil, *sDark = nil;
    static UIColor *sColor = nil;
    if (sColor && WPHexSame(tag, sTag) && WPHexSame(lightHex, sLight) && WPHexSame(darkHex, sDark)) {
        return sColor;
    }
    UIColor *color = [WPColorUtil dynamicColorFromLightHex:lightHex
                                                   darkHex:darkHex
                                             lightFallback:[UIColor whiteColor]
                                              darkFallback:[UIColor colorWithRed:0.125 green:0.125 blue:0.125 alpha:1.0]];
    if (color) {
        sTag = tag; sLight = lightHex; sDark = darkHex; sColor = color;
    }
    return color;
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
        // 幂等比对：避免每帧无效 setter 产生 CA 脏标记
        if (container.layer.cornerRadius != (CGFloat)radius)
            container.layer.cornerRadius = radius;
        if (!container.layer.masksToBounds)
            container.layer.masksToBounds = YES;
    }
}

// ─── 共享常量与边框画布（WCR 同款：section 覆盖视图 + 整段描边，FUN_007c79c8 实证方案） ───
static NSString * const kMioBorderLayerName = @"com.mio.cornerBorder";
static NSString * const kMioBorderStampKey = @"com.mio.borderStamp";
// 涂装标记：登记"被本模块动过的 cell/table/视图"，功能关后的清洁态只清理这些对象，避免误伤原生样式
static NSString * const kMioCornerPaintedKey = @"com.mio.cornerPainted";
static NSString * const kMioTablePaintedKey = @"com.mio.tablePainted";
// 边框结构戳：编码边框重绘的全部结构性/配置性输入（整数哈希），戳相同则跳过全表分组（节流）
static NSString * const kMioBorderStructKey = @"com.mio.borderStruct";
// 行带缓存：全表 section 行带一次构建 2s 内共享（cell 圆角邻接 + 边框分组两个消费者）
static NSString * const kMioBandsCacheKey = @"com.mio.bandsCache";
// section 边框覆盖视图 tag 段：tag = 基数 + sectionIndex，覆盖视图挂在 tableView 本体上，免疫 cell 复用
static NSInteger const kMioBorderTagBase = 0x4D494F;  // 'MIO'
static NSInteger const kMioBorderTagRange = 1000;

// 边框动态色（WCR 同款）：明暗 hex 一次构建动态 UIColor 并槽位缓存，
// 明暗切换由 UIKit trait 自动重取色；两侧兜底语义一致（浅 0.9 灰 / 深 0.25 灰）。
// ★ 槽位 + 指针快路径：命中零分配；计算结果为 nil 不占槽，下轮重算
static UIColor *WPDynamicBorderColor(NSString *lightHex, NSString *darkHex) {
    static NSString *sLight = nil, *sDark = nil;
    static UIColor *sColor = nil;
    if (sColor && WPHexSame(lightHex, sLight) && WPHexSame(darkHex, sDark)) {
        return sColor;
    }
    UIColor *color = [WPColorUtil dynamicColorFromLightHex:lightHex
                                                   darkHex:darkHex
                                             lightFallback:[UIColor colorWithRed:0.9 green:0.9 blue:0.9 alpha:1.0]
                                              darkFallback:[UIColor colorWithRed:0.25 green:0.25 blue:0.25 alpha:1.0]];
    if (color) {
        sLight = lightHex; sDark = darkHex; sColor = color;
    }
    return color;
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

// 取 section 行带（首末行 rect 并集，table 内容坐标）；@try 兜底 reload/插入动画窗口中
// numberOfRows（实时问数据源）与 rectForRow（读内部几何缓存）短暂不一致导致的越界异常
static BOOL WPSectionBand(UITableView *tableView, NSInteger s, CGFloat *outTop, CGFloat *outBottom) {
    NSInteger rows = [tableView numberOfRowsInSection:s];
    if (rows <= 0) return NO;
    CGRect first, last;
    @try {
        first = [tableView rectForRowAtIndexPath:[NSIndexPath indexPathForRow:0 inSection:s]];
        last = [tableView rectForRowAtIndexPath:[NSIndexPath indexPathForRow:rows - 1 inSection:s]];
    } @catch (NSException *e) {
        return NO;
    }
    *outTop = first.origin.y;
    *outBottom = last.origin.y + last.size.height;
    return YES;
}

// section 行带（table 内容坐标）
typedef struct { CGFloat top, bottom; } WPBand;

// 行带缓存：全表 section 行带一次构建（WPSectionBand @try 兜底），2s 内所有消费者
// （cell 圆角邻接判定 / 边框分组）直接读内存数组，热点路径零 rectForRow 调用；
// 2s 时间桶兜底动态行高等几何漂移自愈。旋转/结构变化 → 结构戳失配 + 桶过期双重触发重建
static NSArray *WPBandsForTable(UITableView *tableView) {
    NSDictionary *cache = objc_getAssociatedObject(tableView, (__bridge const void *)kMioBandsCacheKey);
    CFAbsoluteTime now = CFAbsoluteTimeGetCurrent();
    if (cache && now - [cache[@"t"] doubleValue] < 2.0) return cache[@"b"];

    NSMutableArray *bands = [NSMutableArray array];
    NSInteger nSections = [tableView numberOfSections];
    for (NSInteger s = 0; s < nSections; s++) {
        CGFloat top = 0, bottom = 0;
        if (!WPSectionBand(tableView, s, &top, &bottom)) continue;
        WPBand b = { top, bottom };
        [bands addObject:[NSValue valueWithBytes:&b objCType:@encode(WPBand)]];
    }
    objc_setAssociatedObject(tableView, (__bridge const void *)kMioBandsCacheKey,
        @{@"t": @(now), @"b": bands}, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    return bands;
}

// ★ 几何相邻行位判定（WCR 同款，Frida 实证）：cell 上下是否有紧贴（间隙 ≤ 0.5pt）的行。
//   遍历行带缓存与 cell 矩形做垂直邻接比对，与 indexPath/section 完全无关——
//   跨 section 几何连续的行自然连成一张卡。热点路径：1 次 assoc 读 + 内存遍历
static void WPRowNeighbors(UITableView *tableView, CGRect cellRect, BOOL *hasAbove, BOOL *hasBelow) {
    *hasAbove = NO;
    *hasBelow = NO;
    CGFloat cellTop = cellRect.origin.y;
    CGFloat cellBottom = cellRect.origin.y + cellRect.size.height;

    for (NSValue *v in WPBandsForTable(tableView)) {
        WPBand b;
        [v getValue:&b];
        if (b.bottom <= cellTop + 0.5) {
            // 行带整体在上方：底边紧贴 cell 顶边 → 上邻
            if (fabs(b.bottom - cellTop) <= 0.5) *hasAbove = YES;
        } else if (b.top >= cellBottom - 0.5) {
            // 行带整体在下方：顶边紧贴 cell 底边 → 下邻
            if (fabs(b.top - cellBottom) <= 0.5) *hasBelow = YES;
        } else {
            // 行带与 cell 垂直重叠（同 section）：带内是否还有更高/更低的行
            if (cellTop - b.top > 0.5) *hasAbove = YES;
            if (b.bottom - cellBottom > 0.5) *hasBelow = YES;
        }
        if (*hasAbove && *hasBelow) break;  // 中行：早退
    }
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

    // ★ 功能效果总闸：总开关 + （Mio 页面 || 分页面开关）；无黑名单，全部页面统一 WCR 式处理
    BOOL featureOn = config.globalCornerRadiusEnabled
        && (mioOwn || shouldApplyGlobalCorner(vc));

    UIView *cellView = (UIView *)self;

    // ★ 查一次 tableView（margin 宽度基准 + 边框画布 + 圆角判定三处共用，禁止重复上溯）
    UIView *parent = cellView.superview;
    UITableView *tableView = nil;
    while (parent) {
        if ([parent isKindOfClass:[UITableView class]]) {
            tableView = (UITableView *)parent; break;
        }
        parent = parent.superview;
    }

    // ★ margin：Mio 页面写死 15（不读用户配置）；微信页面功能开走用户配置、功能关复原原生全宽 ★
    CGFloat margin = mioOwn ? 15.0 : (featureOn ? config.listCellMargin : 0.0);
    if (margin > 0) {
        CGFloat currentX = cellView.frame.origin.x;
        UIView *superview = cellView.superview;
        CGFloat superX = superview ? superview.frame.origin.x : 0;
        // ★ 宽度基准 = UITableView 表坐标系，Frida 实证修复：
        //   部分页面 cell 的直接父视图是内缩容器（如插件页 wrapper 宽 361、x=16），
        //   按容器宽减 margin 会左右不对称（左 20/右 52）；WCR 语义 = 永远 表宽 - 2*margin
        CGFloat containerW = tableView ? tableView.bounds.size.width
            : (superview ? superview.bounds.size.width : [UIScreen mainScreen].bounds.size.width);
        CGFloat targetX = margin - superX;  // 表坐标 x=margin（不钳位，wrapper 有偏移时可为负）
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

    // ★ bgColor 设置（无 VC 黑名单，三态全覆盖：功能开/Mio 基线/清洁态复原）
    {
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
    //   几何连续行区段合并为一组，每组一条覆盖视图 + 整段圆角描边，挂 tableView 本体（tag 管理）
    if (tableView) {
        [ListCornerRadiusHook wp_paintTableBorders:tableView
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

    if (!tableView) return;

    // ★ 几何行位判定（WCR 同款，Frida 实证）：不查 indexPath，按上下是否紧贴其他行定首/中/末——
    //   跨 section 几何连续的行自动并入同一张卡（如通讯录公众号/服务号/企微联系人）
    CGRect cellRect = [tableView convertRect:cellView.bounds fromView:cellView];
    BOOL hasAbove = NO, hasBelow = NO;
    WPRowNeighbors(tableView, cellRect, &hasAbove, &hasBelow);

    [ListCornerRadiusHook wp_applyGeometricCorner:cellView
                                     cornerRadius:cornerRadius
                                         hasAbove:hasAbove
                                         hasBelow:hasBelow];

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
    if (orig_MFWebMMBtn_layoutSubviews) orig_MFWebMMBtn_layoutSubviews(self, _cmd);

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
    if (orig_MFBannerBtn_layoutSubviews) orig_MFBannerBtn_layoutSubviews(self, _cmd);

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
    if (orig_FoldView_layoutSubviews) orig_FoldView_layoutSubviews(self, _cmd);

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

    // wakeups 优化：class 指针比对零分配（精确匹配 UIView 基类，替代 NSStringFromClass 文本比较）
    static Class gUIViewCls;
    if (!gUIViewCls) gUIViewCls = objc_getClass("UIView");
    for (UIView *subview in view.subviews) {
        if ([subview class] == gUIViewCls) {
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
    if (orig_NMFVC_viewForHeader) return orig_NMFVC_viewForHeader(self, _cmd, tableView, section);
    return nil;
}

static void (*orig_setBgImageView)(id, SEL, id);
static void _hooked_setBgImageView(id self, SEL _cmd, id imageView) {
    ListCornerRadiusConfig *config = [ListCornerRadiusConfig shared];
    if (!config.globalCornerRadiusEnabled) {
        if (orig_setBgImageView) orig_setBgImageView(self, _cmd, imageView);
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
    if (orig_UIView_layoutSubviews) orig_UIView_layoutSubviews(self, _cmd);

    // 顺序即性能（全 App 每个 UIView 每次布局都进这里）：class 指针比对（O(1) 零分配）
    // → 总开关 → 尺寸 → 父/祖是表类（O(1) 字符串比较）→ responder 链找 VC + 名单（最贵，压轴）
    static Class g_nsViewCls;
    if (!g_nsViewCls) g_nsViewCls = objc_getClass("UIView");
    if ([self class] != g_nsViewCls) return;

    ListCornerRadiusConfig *config = [ListCornerRadiusConfig shared];
    if (!config.globalCornerRadiusEnabled) return;

    UIView *view = (UIView *)self;
    if (view.bounds.size.height < 1.0) return;

    UIView *parent = view.superview;
    if (!parent) return;
    BOOL parentIsTable = _wp_isTableViewClass(NSStringFromClass([parent class]));
    if (!parentIsTable) {
        UIView *gp = parent.superview;
        if (!(gp && _wp_isTableViewClass(NSStringFromClass([gp class])))) return;
    }

    UIViewController *vc = [WPUtility findParentViewController:view];
    if (!vc || !_wp_isAllowedVC(NSStringFromClass([vc class]))) return;

    // wakeups 优化：幂等赋值——backgroundColor 赋值即 CA 脏标记，布局期内反复赋同值会搅动提交循环
    if (![view.backgroundColor isEqual:[UIColor clearColor]])
        view.backgroundColor = [UIColor clearColor];
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

// 行位掩码写入（几何三态）：幂等比对后才写，避免每轮产生 CA 脏标记
+ (void)wp_applyGeometricCorner:(UIView *)cell
                   cornerRadius:(NSInteger)configuredRadius
                       hasAbove:(BOOL)hasAbove
                       hasBelow:(BOOL)hasBelow {
    NSUInteger mc = 0;
    if (hasAbove && hasBelow) {
        mc = 0;                                                 // 中行：无角
    } else if (hasAbove) {
        mc = kCALayerMinXMaxYCorner | kCALayerMaxXMaxYCorner;   // 仅下方悬空：底角
    } else if (hasBelow) {
        mc = kCALayerMinXMinYCorner | kCALayerMaxXMinYCorner;   // 仅上方悬空：顶角
    } else {
        mc = kCALayerMinXMinYCorner | kCALayerMaxXMinYCorner |
             kCALayerMinXMaxYCorner | kCALayerMaxXMaxYCorner;   // 双向悬空：全角（单行）
    }

    if (cell.layer.cornerRadius != (CGFloat)configuredRadius) {
        cell.layer.cornerRadius = (CGFloat)configuredRadius;
    }
    if (cell.layer.maskedCorners != mc) {
        cell.layer.maskedCorners = mc;
    }
}

#pragma mark - ★ 表格级边框（WCR 同款：几何分组覆盖视图 + 整段圆角描边）

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

// 表格级边框：几何连续的行区段合并为一组，每组一条透明覆盖视图（tag 管理、挂 tableView 本体，
// 免疫 cell 复用）内含一条 CAShapeLayer 整段描边；样式戳 + frame 双幂等，功能/边框关时主动拆除
+ (void)wp_paintTableBorders:(UITableView *)tableView
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

    // ★ 结构戳节流（整数哈希，零分配）：边框重绘的全部输入（开关/参数/边框色/表宽）都是
    //   结构性或配置性的——rectForRow 返回内容坐标，滚动不变，无需按帧重算全表分组。
    //   哈希相同直接返回（每帧 O(1)，替代 2N 次 rectForRow + 分组 + subviews 遍历）；
    //   旋转/配置变更/改色 → 哈希失配立即重跑；2s 时间桶兜底动态行高漂移自愈
    NSUInteger h = 2166136261u;
#define WPMIX(x) do { h ^= (NSUInteger)(x); h *= 16777619u; } while (0)
    WPMIX(featureOn);
    WPMIX((BOOL)config.listCellBorder);
    WPMIX((NSUInteger)(margin * 10.0));
    WPMIX((NSUInteger)radius);
    WPMIX((NSUInteger)(borderWidth * 10.0));
    WPMIX(borderColor);
    NSUInteger twBits;
    memcpy(&twBits, &tableW, sizeof(twBits));
    WPMIX(twBits);
    WPMIX((NSUInteger)(CFAbsoluteTimeGetCurrent() * 0.5));  // 2s 时间桶
#undef WPMIX
    NSNumber *stamp = objc_getAssociatedObject(tableView, (__bridge const void *)kMioBorderStructKey);
    if (stamp && stamp.unsignedIntegerValue == h) return;
    objc_setAssociatedObject(tableView, (__bridge const void *)kMioBorderStructKey, @(h),
        OBJC_ASSOCIATION_RETAIN_NONATOMIC);

    // ★ WCR 同款几何分组合并（Frida 实证）：相邻 section 的行带垂直连续（间隙 ≤ 0.5pt）
    //   即并入同一组，共享一张覆盖视图 + 一条整段圆角路径——与 indexPath/section 无关
    NSMutableArray<NSNumber *> *groupTags = [NSMutableArray array];
    CGFloat prevBottom = 0, groupTop = 0, groupBottom = 0;
    NSInteger groupFirstSection = -1;
    BOOL groupOpen = NO;

    for (NSValue *v in WPBandsForTable(tableView)) {
        WPBand b;
        [v getValue:&b];
        CGFloat bandTop = b.top, bandBottom = b.bottom;

        if (groupOpen && bandTop - prevBottom <= 0.5) {
            // 与当前组垂直连续：扩组
            groupBottom = bandBottom;
            prevBottom = bandBottom;
            continue;
        }

        // 与当前组断开：收口旧组，开新组
        if (groupOpen) {
            NSInteger tag = kMioBorderTagBase + groupFirstSection;
            [self wp_paintGroupOverlay:tableView tag:tag
                                target:CGRectMake(margin, groupTop, overlayW, groupBottom - groupTop)
                                radius:radius borderWidth:borderWidth borderColor:borderColor];
            [groupTags addObject:@(tag)];
        }
        groupFirstSection = s;
        groupTop = bandTop;
        groupBottom = bandBottom;
        prevBottom = bandBottom;
        groupOpen = YES;
    }
    if (groupOpen) {
        NSInteger tag = kMioBorderTagBase + groupFirstSection;
        [self wp_paintGroupOverlay:tableView tag:tag
                            target:CGRectMake(margin, groupTop, overlayW, groupBottom - groupTop)
                            radius:radius borderWidth:borderWidth borderColor:borderColor];
        [groupTags addObject:@(tag)];
    }

    // 收尾：tag 不在当前组集合内的历史覆盖视图（分组变化/section 收缩产生）一律隐藏
    for (UIView *sub in tableView.subviews) {
        NSInteger idx = sub.tag - kMioBorderTagBase;
        if (idx >= 0 && idx < kMioBorderTagRange
            && ![groupTags containsObject:@(sub.tag)] && !sub.hidden) {
            sub.hidden = YES;
        }
    }
}

// 单组覆盖视图：查找/创建（tag 定位）+ frame 幂等 + 整段圆角描边（样式戳幂等）
+ (void)wp_paintGroupOverlay:(UITableView *)tableView
                         tag:(NSInteger)tag
                      target:(CGRect)target
                      radius:(NSInteger)radius
                  borderWidth:(CGFloat)borderWidth
                  borderColor:(UIColor *)borderColor {
    UIView *overlay = [tableView viewWithTag:tag];
    if (!overlay) {
        overlay = [[UIView alloc] initWithFrame:CGRectZero];
        overlay.tag = tag;
        overlay.userInteractionEnabled = NO;
        overlay.backgroundColor = [UIColor clearColor];
        [tableView addSubview:overlay];
    }
    if (overlay.hidden) overlay.hidden = NO;
    [tableView bringSubviewToFront:overlay];

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

    // 样式戳：radius/线宽任一变化才重建 path（frame 变化由 shape.frame 比对兜底触发）
    NSString *stamp = [NSString stringWithFormat:@"r%ld-bw%.1f", (long)radius, borderWidth];
    NSString *oldStamp = objc_getAssociatedObject(overlay, (__bridge const void *)kMioBorderStampKey);
    if (![stamp isEqualToString:oldStamp] || !CGRectEqualToRect(shape.frame, overlay.bounds)) {
        shape.frame = overlay.bounds;
        shape.lineWidth = borderWidth;
        shape.path = [UIBezierPath bezierPathWithRoundedRect:overlay.bounds
                                                cornerRadius:(CGFloat)radius].CGPath;
        objc_setAssociatedObject(overlay, (__bridge const void *)kMioBorderStampKey, stamp,
            OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    }

    [self wp_applyStrokeColor:shape dynamicColor:borderColor trait:tableView.traitCollection];
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

+ (void)install {
    [self initListCornerRadiusHook];
}

@end
