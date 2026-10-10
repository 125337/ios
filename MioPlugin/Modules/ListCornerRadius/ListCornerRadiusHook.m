#import "ListCornerRadiusHook.h"
#import "ListCornerRadiusConfig.h"
#import "../../Core/WPUtility.h"
#import "../../Config/WPColorUtil.h"
#import "../../Core/LogManager.h"
#import "../../Core/Utils/CornerResponsibility/CornerResponsibility.h"
#import "../ProfileCardBg/ProfileCardBgHook.h"
#import <substrate.h>
#import <dlfcn.h>
#import <objc/runtime.h>
#import <objc/message.h>

static IMP orig_MMTableViewCell_layoutSubviews = NULL;
static IMP orig_WCSearchBar_layoutSubviews = NULL;

@interface ListCornerRadiusHook ()

// 行位判定 + 圆角/边框应用（indexPath 语义：首/中/末 + 通讯录半合并 + 折叠置顶特判）
+ (void)wp_applyStandardCorner:(UIView *)cell
                    tableView:(UITableView *)tableView
                      section:(NSInteger)section
                          row:(NSInteger)row
                        total:(NSInteger)totalRows
                 cornerRadius:(NSInteger)configuredRadius
                    className:(NSString *)className;

+ (void)wp_applyCornerForContacts:(UIView *)cell
                       tableView:(UITableView *)tableView
                         section:(NSInteger)section
                             row:(NSInteger)row
                           total:(NSInteger)rowInThisSection
                    cornerRadius:(NSInteger)radius;

// cell 内四段 CAShapeLayer 拼接边框（顶/底/左右/完整），结构签名幂等
+ (void)wp_applyBorderAndBg:(UIView *)cell
                     radius:(NSInteger)radius
                   position:(NSInteger)position;

// 按当前 trait 幂等刷新 cell 内边框层描边色（动态色，明暗切换零重建）
+ (void)wp_refreshBorderStroke:(UIView *)cell;

// 独立视图（FoldView）的自体描边：复用 cell 四段式几何（路径内缩半线宽），双向拆装
// folded 传 YES 独立卡画完整圆角轮廓；传 NO 时画方角顶线+左右竖线+底弧（顶线分隔置顶卡，竖线上接置顶卡）
+ (void)wp_paintViewSelfBorder:(UIView *)view radius:(NSInteger)radius folded:(BOOL)folded;

// FoldView 清洁态：还原涂装时登记的全部原值（圆角/masks/autoresizing/背景色/子视图底色/frame 全宽）
+ (void)wp_restoreFoldView:(UIView *)view;

@end

// hex/tag 比较：nil 安全，指针相同走快路径（调用点传同一 config 字符串，常态零成本命中）
static BOOL WPHexSame(NSString *a, NSString *b) {
    if (a == b) return YES;
    if (!a || !b) return NO;
    return [a isEqualToString:b];
}

// ★ WCR 同款动态背景色（FUN_007d44a8 实证方案）：明暗 hex 一次构建 colorWithDynamicProvider
//   并槽位缓存，明暗切换由 UIKit 按 trait 自动重取色——hook 内不再判暗。
//   兜底色与 Config 默认色同源（MioDefault* 常量）；tag 区分通道（用户色 / 默认底）。
//   ★ 单槽 + 指针快路径：命中零分配（替代每帧 stringWithFormat 拼 key 的热路径分配）
static UIColor *WPDynamicCellBgColor(NSString *lightHex, NSString *darkHex, NSString *tag) {
    static NSString *sTag = nil, *sLight = nil, *sDark = nil;
    static UIColor *sColor = nil;
    if (sColor && WPHexSame(tag, sTag) && WPHexSame(lightHex, sLight) && WPHexSame(darkHex, sDark)) {
        return sColor;
    }
    // 兜底色与 Config 默认色同源（MioDefault* 常量）：清空颜色与从未配置呈现一致
    static UIColor *fLight = nil, *fDark = nil;
    static dispatch_once_t fbOnce;
    dispatch_once(&fbOnce, ^{
        fLight = [WPColorUtil colorFromHexString:MioDefaultCellLightBgColor];
        fDark  = [WPColorUtil colorFromHexString:MioDefaultCellDarkBgColor];
    });
    UIColor *color = [WPColorUtil dynamicColorFromLightHex:lightHex
                                                   darkHex:darkHex
                                             lightFallback:fLight
                                              darkFallback:fDark];
    if (color) {
        sTag = tag; sLight = lightHex; sDark = darkHex; sColor = color;
    }
    return color;
}

// ★★★ 全局开关过滤 ★★★
static NSString * const kMyPageVCClassName        = @"MoreViewController";
static NSString * const kContactsVCClassName       = @"ContactsViewController";
static NSString * const kDiscoverVCClassName       = @"FindFriendEntryViewController";

// 分页面开关（className 由调用方传入，避免热路径重复 NSStringFromClass）
static BOOL shouldApplyGlobalCorner(NSString *vcName) {
    if (!vcName) return NO;

    ListCornerRadiusConfig *config = [ListCornerRadiusConfig shared];
    // 总开关由调用方短路，此处只管分页面开关

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

// Mio 自有页面判定（className 由调用方传入，避免热路径重复 NSStringFromClass）：
// MioPlugin*/WP* 前缀 + 设置页基类子类，
// 这些页面始终应用硬编码基线皮肤（圆角 15 + 默认底）
static BOOL WPVCIsMioOwn(UIViewController *vc, NSString *className) {
    static Class scCls = nil;
    static dispatch_once_t scOnceToken;
    dispatch_once(&scOnceToken, ^{ scCls = NSClassFromString(@"SettingCategoryController"); });
    return [className hasPrefix:@"MioPlugin"] || [className hasPrefix:@"WP"]
        || (scCls && [vc isKindOfClass:scCls]);
}

// 涂装标记：登记"被本模块动过的 cell/table/视图"，功能关后的清洁态只清理这些对象，避免误伤原生样式
static NSString * const kMioCornerPaintedKey = @"com.mio.cornerPainted";
// 清洁态原值口袋：首次涂装时保存原生样式，功能关后凭涂装标记还原
static NSString * const kMioSearchOrigRadiusKey = @"com.mio.searchOrigRadius";
static NSString * const kMioSearchOrigMasksKey  = @"com.mio.searchOrigMasks";
static NSString * const kMioViewOrigBgKey       = @"com.mio.viewOrigBg";

static void replaced_WCSearchBar_layoutSubviews(id self, SEL _cmd) {
    if (orig_WCSearchBar_layoutSubviews) {
        ((void (*)(id, SEL))orig_WCSearchBar_layoutSubviews)(self, _cmd);
    }

    ListCornerRadiusConfig *config = [ListCornerRadiusConfig shared];
    UIView *container = ((UIView *(*)(id, SEL))objc_msgSend)(self, @selector(searchBoxContainer));
    if (!container) return;

    BOOL featureOn = config.globalCornerRadiusEnabled && config.listSearchCornerRadius;
    BOOL painted = objc_getAssociatedObject(self, (__bridge const void *)kMioCornerPaintedKey) != nil;

    if (!featureOn) {
        // 清洁态：凭涂装标记还原原生圆角（涂装时已保存原值）
        if (painted) {
            NSNumber *r = objc_getAssociatedObject(container, (__bridge const void *)kMioSearchOrigRadiusKey);
            NSNumber *m = objc_getAssociatedObject(container, (__bridge const void *)kMioSearchOrigMasksKey);
            if (r && container.layer.cornerRadius != r.floatValue)
                container.layer.cornerRadius = r.floatValue;
            if (m && container.layer.masksToBounds != m.boolValue)
                container.layer.masksToBounds = m.boolValue;
            objc_setAssociatedObject(self, (__bridge const void *)kMioCornerPaintedKey, nil,
                OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        }
        return;
    }

    NSInteger radius = (NSInteger)config.listCellCornerRadius;  // ★ 复用 Cell 圆角半径
    if (radius <= 0) radius = 18;

    if (!painted) {
        // 首次涂装：登记原生圆角原值
        objc_setAssociatedObject(self, (__bridge const void *)kMioCornerPaintedKey, @YES,
            OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        objc_setAssociatedObject(container, (__bridge const void *)kMioSearchOrigRadiusKey,
            @(container.layer.cornerRadius), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        objc_setAssociatedObject(container, (__bridge const void *)kMioSearchOrigMasksKey,
            @(container.layer.masksToBounds), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    }
    // 幂等比对：避免每帧无效 setter 产生 CA 脏标记
    if (container.layer.cornerRadius != (CGFloat)radius)
        container.layer.cornerRadius = radius;
    if (!container.layer.masksToBounds)
        container.layer.masksToBounds = YES;
}

// ─── 共享常量与边框画布（cell 内四段 CAShapeLayer 拼接，01:12 版本方案） ───
static NSString * const kMioBorderLayerName = @"com.mio.cornerBorder";
static NSString * const kMioBorderStampKey = @"com.mio.borderStamp";
// （涂装标记 kMioCornerPaintedKey 与原值口袋已上移至文件头部，供 WCSearchBar 等早期函数使用）
static NSString * const kMioTablePaintedKey = @"com.mio.tablePainted";
// cell 边框缓存：结构签名（8 数值字段 memcmp）+ 明暗 hex 指针比较——每帧零分配，
// 任一渲染入参变化才重建（替代旧 9 字段 stringWithFormat 拼接的热路径分配）
static NSString * const kMioBorderSigKey   = @"com.mio.cornerBorderSig";
static NSString * const kMioBorderLightKey = @"com.mio.cornerBorderLightHex";
static NSString * const kMioBorderDarkKey  = @"com.mio.cornerBorderDarkHex";
typedef struct {
    NSInteger radius;
    NSInteger position;
    CGFloat   borderWidth;
    BOOL      borderOn;
    BOOL      globalOn;
    CGFloat   w;
    CGFloat   h;
} WPBorderSig;

// FoldView 清洁态原值口袋（背景色复用 kMioViewOrigBgKey，子视图同）
static NSString * const kMioFoldOrigRadiusKey     = @"com.mio.foldOrigRadius";
static NSString * const kMioFoldOrigMasksKey      = @"com.mio.foldOrigMasks";
static NSString * const kMioFoldOrigClipsKey      = @"com.mio.foldOrigClips";
static NSString * const kMioFoldOrigAutoresizingKey = @"com.mio.foldOrigAutoresizing";

// 边框动态色（WCR 同款）：明暗 hex 一次构建动态 UIColor 并槽位缓存，
// 明暗切换由 UIKit trait 自动重取色；兜底色与 Config 默认色同源（MioDefault* 常量）。
// ★ 槽位 + 指针快路径：命中零分配；计算结果为 nil 不占槽，下轮重算
static UIColor *WPDynamicBorderColor(NSString *lightHex, NSString *darkHex) {
    static NSString *sLight = nil, *sDark = nil;
    static UIColor *sColor = nil;
    if (sColor && WPHexSame(lightHex, sLight) && WPHexSame(darkHex, sDark)) {
        return sColor;
    }
    static UIColor *fLight = nil, *fDark = nil;
    static dispatch_once_t fbOnce;
    dispatch_once(&fbOnce, ^{
        fLight = [WPColorUtil colorFromHexString:MioDefaultBorderColorLight];
        fDark  = [WPColorUtil colorFromHexString:MioDefaultBorderColorDark];
    });
    UIColor *color = [WPColorUtil dynamicColorFromLightHex:lightHex
                                                   darkHex:darkHex
                                             lightFallback:fLight
                                              darkFallback:fDark];
    if (color) {
        sLight = lightHex; sDark = darkHex; sColor = color;
    }
    return color;
}

// 清洁态还原：回写涂装前保存的原背景色并清除涂装标记（幂等）
static void WPRestorePaintedBg(UIView *view) {
    UIColor *orig = objc_getAssociatedObject(view, (__bridge const void *)kMioViewOrigBgKey);
    if (![view.backgroundColor isEqual:orig]) view.backgroundColor = orig;
    objc_setAssociatedObject(view, (__bridge const void *)kMioCornerPaintedKey, nil,
        OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}

// 拆除 cell 内我们拼接的边框层（按 layer.name 识别，只动自己的）
static void WPStripBorderLayers(UIView *cell) {
    if (!cell) return;
    for (CALayer *sub in [cell.layer.sublayers copy]) {
        if ([sub isKindOfClass:[CAShapeLayer class]] && [sub.name isEqualToString:kMioBorderLayerName]) {
            [sub removeFromSuperlayer];
        }
    }
    objc_setAssociatedObject(cell, (__bridge const void *)kMioBorderSigKey, nil,
        OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    objc_setAssociatedObject(cell, (__bridge const void *)kMioBorderLightKey, nil,
        OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    objc_setAssociatedObject(cell, (__bridge const void *)kMioBorderDarkKey, nil,
        OBJC_ASSOCIATION_RETAIN_NONATOMIC);
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

    // ★ Mio 自有页面判定（共用函数）
    BOOL mioOwn = WPVCIsMioOwn(vc, className);

    // ★ 页面归属（01:12 版本方案）：CornerResponsibility 黑名单（44 VC + 4 前缀，默认归列表圆角）
    //   + 分页面开关（我的/通讯录/发现三页独立开关）
    BOOL featureOn = config.globalCornerRadiusEnabled
        && (mioOwn || ([CornerResponsibility isListCornerResponsibleFor:vc] && shouldApplyGlobalCorner(className)));

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

    // ★ bgColor 设置（动态色：功能开/Mio 基线两通道；清洁态不走这里，由下方 WPRestorePaintedBg 回写原值）
    {
        BOOL manageBg = featureOn || mioOwn;
        if (manageBg) {
            // ★ 页面跳过名单：仅搜索页——其列表圆角照做但保留原生底。
            //   01:12 名单其余 18 项（消息流/详情页等）均同时被 CornerResponsibility 圆角黑名单
            //   覆盖（featureOn 恒 NO，bg 段不执行），不可达，无需重复登记；将来若把某页从
            //   圆角黑名单移出，其背景判定自动回归这里的统一逻辑
            static NSSet *bgColorSkipList = nil;
            static dispatch_once_t bgOnceToken;
            dispatch_once(&bgOnceToken, ^{
                bgColorSkipList = [NSSet setWithObject:@"FTSHomeViewController"];
            });
            BOOL bgAllowed = [bgColorSkipList containsObject:className] ? NO : YES;

            // ★ 动态色语义：明暗跟随交给 UIKit 的 trait 系统，hook 内不再判暗。
            //   Mio 基线皮肤=默认底（不吃用户色）、微信页面功能开=用户色（两侧兜底默认底）
            // ★ 首次涂装登记原背景色（原值口袋），功能关后由 WPRestorePaintedBg 回写，
            //   不再赌微信重新 configure——静止不滚动的 cell 不透底
            if (objc_getAssociatedObject(cellView, (__bridge const void *)kMioViewOrigBgKey) == nil) {
                objc_setAssociatedObject(cellView, (__bridge const void *)kMioViewOrigBgKey,
                    cellView.backgroundColor, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
            }
            UIColor *targetBg = nil;
            if (mioOwn) {
                targetBg = featureOn
                    ? (bgAllowed ? WPDynamicCellBgColor(config.listCellLightBgColor, config.listCellDarkBgColor, @"cellUser") : nil)
                    : WPDynamicCellBgColor(nil, nil, @"cellDefault");
            } else if (featureOn) {
                targetBg = bgAllowed
                    ? WPDynamicCellBgColor(config.listCellLightBgColor, config.listCellDarkBgColor, @"cellUser")
                    : nil;
            }
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

    // ★ 清洁态（微信页面，功能关）：只清理涂装过的 cell——拆边框、回原生直角、回写原背景色；未涂装的零触碰
    if (!featureOn && !mioOwn) {
        if (objc_getAssociatedObject(self, (__bridge const void *)kMioCornerPaintedKey)) {
            WPStripBorderLayers(cellView);
            if (cellView.layer.cornerRadius != 0) cellView.layer.cornerRadius = 0;
            if (cellView.layer.maskedCorners != 0) cellView.layer.maskedCorners = 0;
            if (cellView.layer.masksToBounds) cellView.layer.masksToBounds = NO;
            WPRestorePaintedBg(cellView);  // 回写涂装前原 bg + 清涂装标记
        }
        return;
    }

    // ★ corner 圆角：Mio 页面写死 15（不读用户配置），微信页面走用户配置 ★
    NSInteger cornerRadius = mioOwn ? 15 : (NSInteger)config.listCellCornerRadius;
    if (!mioOwn && cornerRadius == 0) cornerRadius = 18;

    if (!tableView) return;

    // ★ 行位判定与分卡（01:12 版本方案）：indexPath 语义（首/中/末）；
    //   通讯录走半合并特例，其余页面走 standard（含折叠置顶特判）
    NSIndexPath *indexPath = [tableView indexPathForCell:(UITableViewCell *)self];
    if (!indexPath) return;
    NSInteger section = indexPath.section;
    NSInteger row = indexPath.row;
    NSInteger totalRows = [tableView numberOfRowsInSection:section];

    BOOL isContacts = [className isEqualToString:@"ContactsViewController"];

    if (isContacts) {
        [ListCornerRadiusHook wp_applyCornerForContacts:cellView
                                              tableView:tableView
                                                section:section
                                                    row:row
                                                  total:totalRows
                                           cornerRadius:cornerRadius];
    } else {
        [ListCornerRadiusHook wp_applyStandardCorner:cellView
                                            tableView:tableView
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
        UIView *selBg = tc.selectedBackgroundView;
        if (selBg) {
            selBg.backgroundColor = [UIColor clearColor];
            selBg.alpha = 0.0;
            selBg.hidden = YES;
        }
        CGFloat cr = cellView.layer.cornerRadius;
        NSUInteger mc = cellView.layer.maskedCorners;
        for (UIView *sub in cellView.subviews) {
            // 分隔线类 1px 小视图不参与切角：强设 r=15 圆角会把线两端削断
            if (CGRectGetHeight(sub.frame) <= 2.0 || CGRectGetWidth(sub.frame) <= 2.0) continue;
            // 幂等写入：先读后写，避免每帧无条件 set 产生 CA 脏标记
            if (sub.layer.cornerRadius != cr) sub.layer.cornerRadius = cr;
            if (sub.layer.maskedCorners != mc) sub.layer.maskedCorners = mc;
            if (!sub.layer.masksToBounds) sub.layer.masksToBounds = YES;
        }
    }
}

// ★★★ [WPAuxiliaryHooks] MFWebMMBtn background color ★★★
static void (*orig_MFWebMMBtn_layoutSubviews)(id, SEL);
static void _hooked_MFWebMMBtn_layoutSubviews(id self, SEL _cmd) {
    if (orig_MFWebMMBtn_layoutSubviews) orig_MFWebMMBtn_layoutSubviews(self, _cmd);

    ListCornerRadiusConfig *config = [ListCornerRadiusConfig shared];
    if (!config.globalCornerRadiusEnabled) {
        // 清洁态：凭涂装标记还原原背景色（painted 推迟到失效分支才读）
        if (objc_getAssociatedObject(self, (__bridge const void *)kMioCornerPaintedKey))
            WPRestorePaintedBg((UIView *)self);
        return;
    }

    UIViewController *vc = [WPUtility findParentViewController:(UIView *)self];
    if (!vc) return;
    if (![NSStringFromClass([vc class]) isEqualToString:@"NewMainFrameViewController"]) {
        if (objc_getAssociatedObject(self, (__bridge const void *)kMioCornerPaintedKey))
            WPRestorePaintedBg((UIView *)self);
        return;
    }

    UIView *btnView = (UIView *)self;
    if (!objc_getAssociatedObject(btnView, (__bridge const void *)kMioCornerPaintedKey)) {
        // 首次涂装：登记原背景色
        objc_setAssociatedObject(btnView, (__bridge const void *)kMioViewOrigBgKey,
            btnView.backgroundColor, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        objc_setAssociatedObject(btnView, (__bridge const void *)kMioCornerPaintedKey, @YES,
            OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    }
    // ★ 动态色：明暗跟随交给 UIKit trait 系统；指针幂等避免每轮 CA 脏标记
    UIColor *targetBg = WPDynamicCellBgColor(config.listCellLightBgColor, config.listCellDarkBgColor, @"cellUser");
    if (btnView.backgroundColor != targetBg) btnView.backgroundColor = targetBg;
}

// ★★★ [WPAuxiliaryHooks] MFBannerBtn background color ★★★
static void (*orig_MFBannerBtn_layoutSubviews)(id, SEL);
static void _hooked_MFBannerBtn_layoutSubviews(id self, SEL _cmd) {
    if (orig_MFBannerBtn_layoutSubviews) orig_MFBannerBtn_layoutSubviews(self, _cmd);

    ListCornerRadiusConfig *config = [ListCornerRadiusConfig shared];
    if (!config.globalCornerRadiusEnabled) {
        // 清洁态：凭涂装标记还原原背景色（painted 推迟到失效分支才读）
        if (objc_getAssociatedObject(self, (__bridge const void *)kMioCornerPaintedKey))
            WPRestorePaintedBg((UIView *)self);
        return;
    }

    UIViewController *vc = [WPUtility findParentViewController:(UIView *)self];
    if (!vc) return;
    if (![NSStringFromClass([vc class]) isEqualToString:@"NewMainFrameViewController"]) {
        if (objc_getAssociatedObject(self, (__bridge const void *)kMioCornerPaintedKey))
            WPRestorePaintedBg((UIView *)self);
        return;
    }

    UIView *btnView = (UIView *)self;
    if (!objc_getAssociatedObject(btnView, (__bridge const void *)kMioCornerPaintedKey)) {
        // 首次涂装：登记原背景色
        objc_setAssociatedObject(btnView, (__bridge const void *)kMioViewOrigBgKey,
            btnView.backgroundColor, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        objc_setAssociatedObject(btnView, (__bridge const void *)kMioCornerPaintedKey, @YES,
            OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    }
    // ★ 动态色：明暗跟随交给 UIKit trait 系统；指针幂等避免每轮 CA 脏标记
    UIColor *targetBg = WPDynamicCellBgColor(config.listCellLightBgColor, config.listCellDarkBgColor, @"cellUser");
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
        // ★ 功能总闸关：清洁态——拆自体边框 + 凭原值口袋还原涂装过的全部属性
        [ListCornerRadiusHook wp_paintViewSelfBorder:view radius:0 folded:YES];
        if (objc_getAssociatedObject(view, (__bridge const void *)kMioCornerPaintedKey)) {
            [ListCornerRadiusHook wp_restoreFoldView:view];
        }
        return;
    }
    NSInteger radius = (NSInteger)config.listCellCornerRadius;
    if (radius == 0) radius = 18;

    NSInteger margin = (NSInteger)config.listCellMargin;
    if (margin == 0) margin = 9;

    // ★ 首次涂装：登记原值口袋（圆角/masks/autoresizing/背景色），供清洁态还原
    if (!objc_getAssociatedObject(view, (__bridge const void *)kMioCornerPaintedKey)) {
        objc_setAssociatedObject(view, (__bridge const void *)kMioCornerPaintedKey, @YES,
            OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        objc_setAssociatedObject(view, (__bridge const void *)kMioFoldOrigRadiusKey,
            @(view.layer.cornerRadius), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        objc_setAssociatedObject(view, (__bridge const void *)kMioFoldOrigMasksKey,
            @(view.layer.maskedCorners), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        objc_setAssociatedObject(view, (__bridge const void *)kMioFoldOrigClipsKey,
            @(view.layer.masksToBounds), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        objc_setAssociatedObject(view, (__bridge const void *)kMioFoldOrigAutoresizingKey,
            @(view.autoresizingMask), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        objc_setAssociatedObject(view, (__bridge const void *)kMioViewOrigBgKey,
            view.backgroundColor, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    }

    CGRect frame = view.frame;
    CGFloat screenWidth = [UIScreen mainScreen].bounds.size.width;
    CGFloat newWidth = screenWidth - 2.0 * margin;
    if (frame.origin.x != (CGFloat)margin || frame.size.width != newWidth) {
        frame.origin.x = (CGFloat)margin;
        frame.size.width = newWidth;
        view.frame = frame;
    }
    view.autoresizingMask = UIViewAutoresizingNone;

    // 折叠态：独立卡四角全圆；展开态：顶部方角 + 底部圆角（六月版方案：顶边直线衔接上卡，
    // 底角圆弧压在置顶卡顶弧上）；isFolding 不可用时兜底独立卡
    BOOL folded = YES;
    if ([view respondsToSelector:@selector(isFolding)]) {
        folded = ((BOOL (*)(id, SEL))objc_msgSend)(view, @selector(isFolding));
    }
    // 幂等写入：先读后写，避免每帧无条件 set 产生 CA 脏标记
    if (view.layer.cornerRadius != (CGFloat)radius)
        view.layer.cornerRadius = (CGFloat)radius;
    NSUInteger foldCorners = folded
        ? (kCALayerMinXMinYCorner | kCALayerMaxXMinYCorner
         | kCALayerMinXMaxYCorner | kCALayerMaxXMaxYCorner)
        : (kCALayerMinXMaxYCorner | kCALayerMaxXMaxYCorner);
    if (view.layer.maskedCorners != foldCorners)
        view.layer.maskedCorners = foldCorners;

    view.layer.masksToBounds = YES;

    [ListCornerRadiusHook wp_paintViewSelfBorder:view radius:radius folded:folded];

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
                // 清透明前登记子视图原 bg（原值口袋挂在子视图上），清洁态逐个回写
                if (objc_getAssociatedObject(subview, (__bridge const void *)kMioViewOrigBgKey) == nil) {
                    objc_setAssociatedObject(subview, (__bridge const void *)kMioViewOrigBgKey,
                        subview.backgroundColor, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
                }
                if (![subview.backgroundColor isEqual:[UIColor clearColor]]) {
                    subview.backgroundColor = [UIColor clearColor];
                }
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
    // → 尺寸 → 父/祖是表类（O(1) 字符串比较）→ responder 链 + 名单（最贵，压轴）；
    //   painted 标记推迟到失效/首次涂装判定处才读——功能开且已涂装的多数帧免一次 assoc 读
    static Class g_nsViewCls;
    if (!g_nsViewCls) g_nsViewCls = objc_getClass("UIView");
    if ([self class] != g_nsViewCls) return;

    ListCornerRadiusConfig *config = [ListCornerRadiusConfig shared];
    UIView *view = (UIView *)self;

    if (!config.globalCornerRadiusEnabled) {
        // 清洁态：凭涂装标记还原原背景色
        if (objc_getAssociatedObject(view, (__bridge const void *)kMioCornerPaintedKey))
            WPRestorePaintedBg(view);
        return;
    }

    if (view.bounds.size.height < 1.0) return;

    UIView *parent = view.superview;
    if (!parent) {
        if (objc_getAssociatedObject(view, (__bridge const void *)kMioCornerPaintedKey))
            WPRestorePaintedBg(view);
        return;
    }
    BOOL parentIsTable = _wp_isTableViewClass(NSStringFromClass([parent class]));
    if (!parentIsTable) {
        UIView *gp = parent.superview;
        if (!(gp && _wp_isTableViewClass(NSStringFromClass([gp class])))) {
            if (objc_getAssociatedObject(view, (__bridge const void *)kMioCornerPaintedKey))
                WPRestorePaintedBg(view);
            return;
        }
    }

    UIViewController *vc = [WPUtility findParentViewController:view];
    if (!vc || !_wp_isAllowedVC(NSStringFromClass([vc class]))) {
        if (objc_getAssociatedObject(view, (__bridge const void *)kMioCornerPaintedKey))
            WPRestorePaintedBg(view);
        return;
    }

    if (!objc_getAssociatedObject(view, (__bridge const void *)kMioCornerPaintedKey)) {
        // 首次涂装：登记原背景色
        objc_setAssociatedObject(view, (__bridge const void *)kMioViewOrigBgKey,
            view.backgroundColor, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        objc_setAssociatedObject(view, (__bridge const void *)kMioCornerPaintedKey, @YES,
            OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    }
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

// ─── 行位判定与圆角/边框应用（01:12 版本方案，indexPath 语义） ───
// position 语义（wp_applyBorderAndBg 四段边框选择）：
//   0=完整边框（单行卡） 1=顶边框（首行） 2=左右边框（中行） 3=底边框（末行）

+ (void)wp_applyStandardCorner:(UIView *)cell
                     tableView:(UITableView *)tableView
                       section:(NSInteger)section
                           row:(NSInteger)row
                         total:(NSInteger)totalRows
                  cornerRadius:(NSInteger)configuredRadius
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
        if (isNewMainFrame && section == 1) {
            UIView *foldView = [ListCornerRadiusHook wp_findFoldViewInSubviews:tableView.subviews];
            if (foldView && [foldView respondsToSelector:@selector(isFolding)]) {
                BOOL folding = ((BOOL (*)(id, SEL))objc_msgSend)(foldView, @selector(isFolding));
                if (!folding) {
                    // 展开状态 → 无圆角 + 左右边框（幂等写）
                    if (cell.layer.cornerRadius != 0) cell.layer.cornerRadius = 0;
                    if (cell.layer.maskedCorners != 0) cell.layer.maskedCorners = 0;
                    [self wp_applyBorderAndBg:cell radius:0 position:2];
                    return;
                }
            }
        }
    } else {
        cornerType = 0; borderType = 2;  // 无角 + 左右边框
    }

    // 幂等写入：先读后写，避免每帧无条件 set 产生 CA 脏标记
    if (cell.layer.cornerRadius != (CGFloat)configuredRadius)
        cell.layer.cornerRadius = (CGFloat)configuredRadius;
    NSUInteger mc = 0;
    if (cornerType == 1) {
        mc = kCALayerMinXMinYCorner | kCALayerMaxXMinYCorner;
    } else if (cornerType == 2) {
        mc = kCALayerMinXMaxYCorner | kCALayerMaxXMaxYCorner;
    } else if (cornerType == 3) {
        mc = kCALayerMinXMinYCorner | kCALayerMaxXMinYCorner |
             kCALayerMinXMaxYCorner | kCALayerMaxXMaxYCorner;
    }
    if (cell.layer.maskedCorners != mc) cell.layer.maskedCorners = mc;

    [self wp_applyBorderAndBg:cell radius:configuredRadius position:borderType];
}

// 通讯录半合并特例（01:12 版本）：section 0-3 结构匹配时（sec0=3~4 行 + sec1/2/3 各 1 行）
// 连成一张卡；sec0 末行无角与后面单行相接，sec3 出底角；结构不符回退 standard
+ (void)wp_applyCornerForContacts:(UIView *)cell
                        tableView:(UITableView *)tableView
                          section:(NSInteger)section
                              row:(NSInteger)row
                            total:(NSInteger)rowInThisSection
                     cornerRadius:(NSInteger)radius {

    // ─── 结构取证：sec0 行数必须 3-4，sec1/2/3 各 1 行（不满足 → 回退 standard） ───
    NSInteger sec0Rows = 0, sec1Rows = 0, sec2Rows = 0, sec3Rows = 0;
    if ([tableView numberOfSections] > 0) sec0Rows = [tableView numberOfRowsInSection:0];
    if ([tableView numberOfSections] > 1) sec1Rows = [tableView numberOfRowsInSection:1];
    if ([tableView numberOfSections] > 2) sec2Rows = [tableView numberOfRowsInSection:2];
    if ([tableView numberOfSections] > 3) sec3Rows = [tableView numberOfRowsInSection:3];

    BOOL halfMerge = (sec0Rows >= 3 && sec0Rows <= 4)
                  && sec1Rows == 1 && sec2Rows == 1 && sec3Rows == 1;

    if (section > 3 || !halfMerge) {
        [self wp_applyStandardCorner:cell tableView:tableView
                              section:section row:row total:rowInThisSection
                         cornerRadius:radius className:@"ContactsViewController"];
        return;
    }

    // ─── 半合并模式：sec0 顶段（首行顶角、末行无角与后面单行相连），sec1/2 中段无角，sec3 底角 ───

    NSInteger ct = 0, bt = 2;  // cornerType / borderType

    if (section == 0) {
        if (row == 0) {
            ct = 1; bt = 1;  // 顶角
        } else {
            ct = 0; bt = 2;  // 无角（末行/中间行都一样）
        }
    } else if (section == 3) {
        ct = 2; bt = 3;      // 底角
    } else {
        ct = 0; bt = 2;      // 中间单行无角
    }

    // 应用圆角（幂等写：先读后写，避免每帧无条件 set 产生 CA 脏标记）
    CGFloat targetR = (ct == 0) ? 0 : (CGFloat)radius;
    if (cell.layer.cornerRadius != targetR) cell.layer.cornerRadius = targetR;
    NSUInteger mc = ct == 1 ? (kCALayerMinXMinYCorner|kCALayerMaxXMinYCorner)
                             : ct == 2 ? (kCALayerMinXMaxYCorner|kCALayerMaxXMaxYCorner)
                             : ct == 3 ? (kCALayerMinXMinYCorner|kCALayerMaxXMinYCorner|
                                          kCALayerMinXMaxYCorner|kCALayerMaxXMaxYCorner)
                             : 0;
    if (cell.layer.maskedCorners != mc) cell.layer.maskedCorners = mc;
    [self wp_applyBorderAndBg:cell radius:radius position:bt];
}

// cell 内四段 CAShapeLayer 拼接边框：结构签名（WPBorderSig 7 数值字段 memcmp）+ 明暗 hex 指针比较，
// 每帧零分配零重建；命中签名仅按 trait 幂等刷新描边色（动态色，明暗切换不走重建、不参与签名）；
// 签名失配才拆旧层重建；边框关/功能关时拆既有边框后登记签名即返回
+ (void)wp_applyBorderAndBg:(UIView *)cell
                     radius:(NSInteger)radius
                   position:(NSInteger)position {
    ListCornerRadiusConfig *config = [ListCornerRadiusConfig shared];
    CGRect cb = cell.bounds;

    WPBorderSig sig = {
        .radius = radius, .position = position,
        .borderWidth = config.listCellBorderWidth,
        .borderOn = (BOOL)config.listCellBorder,
        .globalOn = (BOOL)config.globalCornerRadiusEnabled,
        .w = cb.size.width, .h = cb.size.height
    };
    NSValue *sigVal = objc_getAssociatedObject(cell, (__bridge const void *)kMioBorderSigKey);
    if (sigVal) {
        WPBorderSig oldSig;
        [sigVal getValue:&oldSig];
        if (memcmp(&oldSig, &sig, sizeof(WPBorderSig)) == 0) {
            // 命中签名：几何/开关/宽高均未变。hex 未变也必须按 trait 幂等刷新描边色——
            // 描边是 trait 解析的 CGColor 快照，明暗切换不走重建，全靠这里逐轮跟随
            NSString *oldLight = objc_getAssociatedObject(cell, (__bridge const void *)kMioBorderLightKey);
            NSString *oldDark  = objc_getAssociatedObject(cell, (__bridge const void *)kMioBorderDarkKey);
            if (WPHexSame(oldLight, config.listCellBorderColor)
                && WPHexSame(oldDark, config.listCellBorderColorDarkHex)) {
                [self wp_refreshBorderStroke:cell];
                return;
            }
            objc_setAssociatedObject(cell, (__bridge const void *)kMioBorderLightKey, config.listCellBorderColor,
                OBJC_ASSOCIATION_RETAIN_NONATOMIC);
            objc_setAssociatedObject(cell, (__bridge const void *)kMioBorderDarkKey, config.listCellBorderColorDarkHex,
                OBJC_ASSOCIATION_RETAIN_NONATOMIC);
            if (config.listCellBorder && config.globalCornerRadiusEnabled)
                [self wp_refreshBorderStroke:cell];
            return;
        }
    }

    // 签名失配：拆旧层 + 登记新签名与 hex
    WPStripBorderLayers(cell);
    sigVal = [NSValue valueWithBytes:&sig objCType:@encode(WPBorderSig)];
    objc_setAssociatedObject(cell, (__bridge const void *)kMioBorderSigKey, sigVal,
        OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    objc_setAssociatedObject(cell, (__bridge const void *)kMioBorderLightKey, config.listCellBorderColor,
        OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    objc_setAssociatedObject(cell, (__bridge const void *)kMioBorderDarkKey, config.listCellBorderColorDarkHex,
        OBJC_ASSOCIATION_RETAIN_NONATOMIC);

    if (!config.listCellBorder || !config.globalCornerRadiusEnabled) return;

    CGFloat borderWidth = (config.listCellBorderWidth > 0) ? config.listCellBorderWidth : 1.0;
    UIColor *borderColor = WPDynamicBorderColor(config.listCellBorderColor, config.listCellBorderColorDarkHex);

    switch (position) {
        case 0: {  // 完整边框（单独 cell / 全圆角 cell）
            CAShapeLayer *top = [self wp_buildUnifiedBorderLayer:cell.bounds
                                                      borderWidth:borderWidth
                                                     borderColor:borderColor
                                                          radius:(CGFloat)radius
                                                            type:@"top"];
            CAShapeLayer *bottom = [self wp_buildUnifiedBorderLayer:cell.bounds
                                                         borderWidth:borderWidth
                                                        borderColor:borderColor
                                                             radius:(CGFloat)radius
                                                               type:@"bottom"];
            [cell.layer addSublayer:top];
            [cell.layer addSublayer:bottom];
            break;
        }
        case 1: {  // 顶部边框（首行）
            CAShapeLayer *shape = [self wp_buildUnifiedBorderLayer:cell.bounds
                                                       borderWidth:borderWidth
                                                      borderColor:borderColor
                                                           radius:(CGFloat)radius
                                                             type:@"top"];
            [cell.layer addSublayer:shape];
            break;
        }
        case 2: {  // 左右边框（中间行）
            CAShapeLayer *left = [self wp_buildUnifiedBorderLayer:cell.bounds
                                                      borderWidth:borderWidth
                                                     borderColor:borderColor
                                                          radius:(CGFloat)radius
                                                            type:@"left"];
            CAShapeLayer *right = [self wp_buildUnifiedBorderLayer:cell.bounds
                                                       borderWidth:borderWidth
                                                      borderColor:borderColor
                                                           radius:(CGFloat)radius
                                                             type:@"right"];
            [cell.layer addSublayer:left];
            [cell.layer addSublayer:right];
            break;
        }
        case 3: {  // 底部边框（末行）
            CAShapeLayer *shape = [self wp_buildUnifiedBorderLayer:cell.bounds
                                                       borderWidth:borderWidth
                                                      borderColor:borderColor
                                                           radius:(CGFloat)radius
                                                             type:@"bottom"];
            [cell.layer addSublayer:shape];
            break;
        }
    }

    [self wp_refreshBorderStroke:cell];
}

// 递归查找表内 FoldView（折叠置顶容器，供折叠置顶特判使用）
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

// 四段式整段边框路径（01:12 版本）：top/bottom 带圆角弧，left/right 直线
+ (CAShapeLayer *)wp_buildUnifiedBorderLayer:(CGRect)rect
                                 borderWidth:(CGFloat)borderWidth
                                borderColor:(UIColor *)borderColor
                                     radius:(CGFloat)radius
                                       type:(NSString *)type {
    CAShapeLayer *shape = [CAShapeLayer layer];
    shape.name = kMioBorderLayerName;
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
        } else {
            // ★ r=0（方角顶线）必须显式补顶边，否则左上直接连右下会画出对角线
            [path addLineToPoint:CGPointMake(w - hw, hw + r)];
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
        } else {
            // ★ r=0（方角底线）同理补底边，防对角线
            [path addLineToPoint:CGPointMake(w - hw, h - hw - r)];
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

#pragma mark - ★ 边框层查找与描边色（FoldView 自体描边共用）

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

// FoldView 自体描边：复用 cell 的 wp_buildUnifiedBorderLayer 四段式几何——路径统一内缩半线宽
// （侧线中线 x=hw / w-hw，与 cell 竖线 x=1/x=374 精确对齐），消除旧全宽矩形外扩 1pt 的错位。
// folded=NO（展开态）：方角顶线（分隔置顶卡）+ 左右竖线（上接置顶卡侧线，连续无断点）+ 底弧收口；
// folded=YES（折叠态，独立卡）：top+bottom 两段拼完整圆角轮廓（同 cell 首行+末行）。
// 动态色逐轮按 trait 解析写入（CGColor 幂等），样式戳幂等，双向拆装。
+ (void)wp_paintViewSelfBorder:(UIView *)view radius:(NSInteger)radius folded:(BOOL)folded {
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

    NSString *stamp = [NSString stringWithFormat:@"r%ld-f%d-bw%.1f-w%.0f-h%.0f",
                       (long)radius, (int)folded, borderWidth,
                       view.bounds.size.width, view.bounds.size.height];
    NSString *oldStamp = objc_getAssociatedObject(view, (__bridge const void *)kMioBorderStampKey);
    if (![stamp isEqualToString:oldStamp]) {
        // 段数固定 2 段，但顶段圆角随 folded 变化（方角 0 ↔ 圆角 radius），重建前先拆干净
        for (CALayer *sub in [view.layer.sublayers copy]) {
            if ([sub isKindOfClass:[CAShapeLayer class]] && [sub.name isEqualToString:kMioBorderLayerName]) {
                [sub removeFromSuperlayer];
            }
        }
        // 顶段：折叠态=圆角顶弧；展开态=方角顶线（r=0，顶线分隔置顶卡且竖线穿过与其相连）
        [view.layer addSublayer:[self wp_buildUnifiedBorderLayer:view.bounds
                                                      borderWidth:borderWidth
                                                     borderColor:borderColor
                                                              radius:folded ? (CGFloat)radius : 0
                                                            type:@"top"]];
        [view.layer addSublayer:[self wp_buildUnifiedBorderLayer:view.bounds
                                                      borderWidth:borderWidth
                                                     borderColor:borderColor
                                                          radius:(CGFloat)radius
                                                            type:@"bottom"]];
        objc_setAssociatedObject(view, (__bridge const void *)kMioBorderStampKey, stamp,
            OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    }

    // 明暗切换不走重建：对全部边框层按当前 trait 解析动态色写入
    for (CALayer *sub in view.layer.sublayers) {
        if ([sub isKindOfClass:[CAShapeLayer class]] && [sub.name isEqualToString:kMioBorderLayerName]) {
            [self wp_applyStrokeColor:(CAShapeLayer *)sub dynamicColor:borderColor
                                trait:view.traitCollection];
        }
    }
}

// 按当前 trait 幂等刷新 cell 内边框层描边色：hex 存在 cell 的口袋上，
// 动态色命中槽位零分配，CGColor 幂等比对后才写——明暗切换零重建
+ (void)wp_refreshBorderStroke:(UIView *)cell {
    NSString *lightHex = objc_getAssociatedObject(cell, (__bridge const void *)kMioBorderLightKey);
    NSString *darkHex  = objc_getAssociatedObject(cell, (__bridge const void *)kMioBorderDarkKey);
    UIColor *color = WPDynamicBorderColor(lightHex, darkHex);
    if (!color) return;
    for (CALayer *sub in cell.layer.sublayers) {
        if ([sub isKindOfClass:[CAShapeLayer class]] && [sub.name isEqualToString:kMioBorderLayerName]) {
            [self wp_applyStrokeColor:(CAShapeLayer *)sub dynamicColor:color trait:cell.traitCollection];
        }
    }
}

// FoldView 清洁态：还原涂装时登记的全部原值——圆角/maskedCorners/masksToBounds/autoresizingMask、
// 自身与子视图背景色（原值口袋）、frame 回全宽（与 cell 清洁态同语义）；拆自体边框由调用方负责
+ (void)wp_restoreFoldView:(UIView *)view {
    NSNumber *r = objc_getAssociatedObject(view, (__bridge const void *)kMioFoldOrigRadiusKey);
    if (r && view.layer.cornerRadius != r.floatValue)
        view.layer.cornerRadius = r.floatValue;
    NSNumber *mc = objc_getAssociatedObject(view, (__bridge const void *)kMioFoldOrigMasksKey);
    if (mc && view.layer.maskedCorners != mc.unsignedIntegerValue)
        view.layer.maskedCorners = mc.unsignedIntegerValue;
    NSNumber *mk = objc_getAssociatedObject(view, (__bridge const void *)kMioFoldOrigClipsKey);
    if (mk && view.layer.masksToBounds != mk.boolValue)
        view.layer.masksToBounds = mk.boolValue;
    NSNumber *ar = objc_getAssociatedObject(view, (__bridge const void *)kMioFoldOrigAutoresizingKey);
    if (ar && view.autoresizingMask != ar.unsignedIntegerValue)
        view.autoresizingMask = ar.unsignedIntegerValue;

    // frame 回全宽：x=0、宽=父视图宽（涂装时按 margin 内缩的反向还原）
    UIView *superview = view.superview;
    CGFloat containerW = superview ? superview.bounds.size.width
                                   : [UIScreen mainScreen].bounds.size.width;
    CGRect f = view.frame;
    if (fabs(f.origin.x) > 0.5 || fabs(f.size.width - containerW) > 0.5) {
        f.origin.x = 0;
        f.size.width = containerW;
        view.frame = f;
    }

    // 自身背景色回写 + 清涂装标记
    WPRestorePaintedBg(view);

    // 子视图背景色回写（涂装时清透明的那些；口袋为 nil 的子视图原本就是透明底，无需还原）
    for (UIView *subview in view.subviews) {
        UIColor *origSub = objc_getAssociatedObject(subview, (__bridge const void *)kMioViewOrigBgKey);
        if (origSub && ![subview.backgroundColor isEqual:origSub])
            subview.backgroundColor = origSub;
    }
}

+ (void)install {
    [self initListCornerRadiusHook];
}

@end
