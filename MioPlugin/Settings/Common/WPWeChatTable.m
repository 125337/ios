#import "WPWeChatTable.h"
#import <objc/message.h>
#import <objc/runtime.h>
#import "../../Core/LogManager.h"

// 构建版本标记：随启动日志输出，用于鉴别真机装的包。Mach-O 段按 16KB 对齐，小改动可能
// 不改变 dylib 字节数（曾出现两版同为 865,680），字节数鉴别法在小版本间会失灵，以日志为准
#define MIO_BUILD_TAG @"build-0924-plock"

static BOOL WPWCHasClass(NSString *name) {
    return objc_getClass(name.UTF8String) != nil;
}

// KVO 观察者保活锚点：观察者不产生 retain，本对象必须由外部持有才能活着收回调
static char kWPWTableOwnerKey;

@interface WPWeChatTable ()
@property (nonatomic, assign) BOOL wpInsetWatchInstalled;   // adjustedContentInset KVO 已挂
@end

static void *kWPInsetKVOContext = &kWPInsetKVOContext;

@implementation WPWeChatTable

+ (BOOL)available {
    static dispatch_once_t onceToken;
    static BOOL ok = NO;
    dispatch_once(&onceToken, ^{
        ok = WPWCHasClass(@"WCTableViewManager")
          && WPWCHasClass(@"WCTableViewSectionManager")
          && WPWCHasClass(@"WCTableViewCellManager")
          && WPWCHasClass(@"WCTableViewNormalCellManager");
        WPLog(@"WCTable", @"[WCTable] 框架可用性: %d build=%@（Mgr=%d Sec=%d Cell=%d Normal=%d）",
              ok, MIO_BUILD_TAG,
              WPWCHasClass(@"WCTableViewManager"), WPWCHasClass(@"WCTableViewSectionManager"),
              WPWCHasClass(@"WCTableViewCellManager"), WPWCHasClass(@"WCTableViewNormalCellManager"));
    });
    return ok;
}

// WCR 同款容器布局（pluginPageTableWithFrame_style_ + buildPluginPageForGroup_ 反编译实证）：
// 表不直接挂 VC.view，装进容器内 y=0，容器 setFrame 到导航栏下方。
// 注意（(88).log 定论）：容器并不能免疫微信 inset 回写——加载期 [INSET] 在容器就绪后照样触发，
// 回写会穿透容器打在内层表；容器的价值是几何定位（表 y=0 + 容器 y=top），inset 对抗靠
// normalizeTopInset 的 KVO 安全网（主防线）
static void wpLayoutInContainer(UITableView *tv, UIViewController *vc, UIView **outContainer) {
    // 顶栏偏移：MMUIViewController 的 view 是全屏布局，容器必须从导航栏底部开始
    CGFloat top = 0;
    UINavigationController *nav = vc.navigationController;
    if (nav && !nav.navigationBarHidden && nav.navigationBar.superview) {
        CGRect nf = nav.navigationBar.frame;
        top = nf.origin.y + nf.size.height;
    } else {
        if (@available(iOS 11.0, *)) top = vc.view.safeAreaInsets.top;
    }
    if (top < 1) top = 64; // view 未挂 window 时 safeArea 为 0，兜底导航栏高度
    CGFloat totalH = vc.view.bounds.size.height - top;
    if (totalH < 100) totalH = vc.view.bounds.size.height;

    UIView *container = [[UIView alloc] initWithFrame:CGRectMake(0, top, vc.view.bounds.size.width, totalH)];
    container.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
    container.backgroundColor = [UIColor clearColor];
    tv.frame = CGRectMake(0, 0, vc.view.bounds.size.width, totalH);
    tv.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
    tv.backgroundColor = [UIColor clearColor];
    tv.separatorInset = UIEdgeInsetsZero;
    if (@available(iOS 11.0, *)) tv.contentInsetAdjustmentBehavior = UIScrollViewContentInsetAdjustmentNever;
    [container addSubview:tv];
    if (outContainer) *outContainer = container;
    WPLog(@"WCTable", @"[WCTable] 容器结构就绪（WCR 同款）: top=%.0f tv=%@", top, tv);
}

+ (instancetype)tableForVC:(UIViewController *)vc {
    if (![self available]) return nil;

    Class mgrCls = objc_getClass("WCTableViewManager");
    id mgr = nil;
    UITableView *tv = nil;

    // === WCR 实证（buildPluginPageForGroup_ 反编译还原）===
    // manager 不是被动 dataSource：WCR 用 initWithFrame:style: 初始化 manager（内部自建 UITableView
    // 并持有），再通过 tableView getter 取表、setFrame、最后 addSubview。
    // 旧实现（自建表 + 外部 tv.dataSource=mgr）manager 内部状态缺失 → numberOfSections 恒 0 → 空白页。
    SEL ifs = NSSelectorFromString(@"initWithFrame:style:");
    if ([mgrCls instancesRespondToSelector:ifs]) {
        id alloced = ((id (*)(id, SEL))objc_msgSend)(mgrCls, NSSelectorFromString(@"alloc"));
        mgr = ((id (*)(id, SEL, CGRect, long))objc_msgSend)(alloced, ifs, CGRectZero, (long)UITableViewStyleGrouped);
        WPLog(@"WCTable", @"[WCTable] manager 走 initWithFrame:style:（WCR 同款，内部自建表）");
    } else {
        mgr = [[mgrCls alloc] init];
        WPLog(@"WCTable", @"[WCTable] manager 走 plain init（无 initWithFrame:style:）");
    }
    if (!mgr) {
        WPLog(@"WCTable", @"[WCTable] manager 创建失败，回退旧引擎");
        return nil;
    }

    // WCR 实证：tableView getter 取 manager 自建的表
    SEL tvg = NSSelectorFromString(@"tableView");
    if ([mgr respondsToSelector:tvg]) {
        tv = ((id (*)(id, SEL))objc_msgSend)(mgr, tvg);
    }
    UIView *container = nil;
    if ([tv isKindOfClass:[UITableView class]]) {
        wpLayoutInContainer(tv, vc, &container);
    } else {
        // 兜底：manager 无 tableView getter（版本差异）→ 自建表外部接线（旧行为）
        tv = [[UITableView alloc] initWithFrame:vc.view.bounds style:UITableViewStyleGrouped];
        tv.dataSource = mgr;
        tv.delegate = mgr;
        WPLog(@"WCTable", @"[WCTable] manager 无自建表，兜底自建+接线: %@", tv);
        wpLayoutInContainer(tv, vc, &container);
    }

    // 数据源能力校验
    SEL nos = NSSelectorFromString(@"tableView:numberOfRowsInSection:");
    if (![mgr respondsToSelector:nos]) {
        WPLog(@"WCTable", @"[WCTable] manager 不响应 tableView:numberOfRowsInSection:，回退旧引擎");
        return nil;
    }
    // manager 自建表路径也保险设一遍（幂等）
    if (tv.dataSource != mgr) tv.dataSource = mgr;
    if (tv.delegate != mgr) tv.delegate = mgr;

    WPWeChatTable *t = [[self alloc] init];
    t.wcManager = mgr;
    t.tableView = tv;
    t.containerView = container;
    // 生命周期保活（(88).log 定论）：入口页挂载方是局部变量，无人强持有本对象 → reloadAsync 的
    // dispatch_after 尾巴（0.45s）跑完即 dealloc → KVO 观察者随 dealloc 摘除 → 后台切回的晚到
    // inset 回写无人纠正，hero 被推下一个导航栏高。关联到 containerView：容器挂在 VC.view 上活
    // 多久，安全网活多久（基类 self.wcTable 强持有路径此处为双保险，无副作用）
    objc_setAssociatedObject(container, &kWPWTableOwnerKey, t, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    WPLog(@"WCTable", @"[WCTable] 表+manager 就绪: mgr=%@ tv=%@", NSStringFromClass(object_getClass(mgr)), tv);
    return t;
}

- (id)addGroup {
    Class secCls = objc_getClass("WCTableViewSectionManager");
    if (!secCls || !self.wcManager) return nil;
    id sec = [[secCls alloc] init];
    if (!sec) return nil;

    // WCR 实证正道：无条件走 addSection:。
    // 教训：getAllSections 返回的是内部数组副本/不同步视图，addObject 不进 manager 状态
    // （contentSize{0,0} 空白页实证），addSection: 才是 WCR 反编译 addSectionTo_ 同款。
    ((void (*)(id, SEL, id))objc_msgSend)(self.wcManager, NSSelectorFromString(@"addSection:"), sec);
    WPWGroup *g = [[WPWGroup alloc] init];
    g.sectionMgr = sec;
    return g;
}

- (void)reload {
    if (self.wcManager) {
        // 方法表实证：WCTableViewManager 是 reloadTableView（不存在 reloadAllSections）
        SEL s = NSSelectorFromString(@"reloadTableView");
        if ([self.wcManager respondsToSelector:s]) {
            ((void (*)(id, SEL))objc_msgSend)(self.wcManager, s);
        }
    }
    [self.tableView reloadData];
}

// 延迟 reload：排到当前 runloop 之后执行（buildUI/addGroup 与建表同步连续，
// async 必然排在数据填充完成后），连刷两次覆盖 heightFor 布局陈旧
- (void)reloadAsync {
    dispatch_async(dispatch_get_main_queue(), ^{
        [self reload];
        dispatch_async(dispatch_get_main_queue(), ^{
            [self reload];
            [self normalizeTopInset];
        });
    });
}

// inset 安全网（主防线，(88).log 定论）：容器结构挡不住微信回写——加载期 [INSET] 在容器就绪后
// 照样触发，实锤回写穿透容器打在内层表。此方法幂等无害，靠 KVO 持续对抗任意时机的晚到回写
- (void)normalizeTopInset {
    [self wpInstallInsetWatch];
    [self wpApplyInsetFixFromKVO:NO];
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.15 * NSEC_PER_SEC)),
                   dispatch_get_main_queue(), ^{ [self wpApplyInsetFixFromKVO:NO]; });
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.45 * NSEC_PER_SEC)),
                   dispatch_get_main_queue(), ^{ [self wpApplyInsetFixFromKVO:NO]; });
}

// KVO 持续兜底：微信回写 inset 的时机不定（push 完成周期、后台切回、safeArea 变化都可能），
// 时序兜底（0/0.15/0.45s）覆盖不到「去别的 APP 几分钟再回来」这种晚到的回写。表 frame 为
// 手动定位，任何非 0 top inset 都是多余避让，故监听 inset 一变就归一。
// 双 keyPath：contentInset=微信直接写 inset 的路径；(88).log 加载期回写伴随 offset=-97.67，
// 两个属性都可能是回写入口，任一变化都触发归一（幂等收敛：归一后不再写 → 不再触发，不会循环）。
// 注意：观察者不产生 retain，本对象必须活着才能收回调——生命周期由 tableForVC 里的
// containerView 关联保证（曾因入口页局部变量无人持有，0.45s 后 dealloc 静默摘除观察者）
- (void)wpInstallInsetWatch {
    if (self.wpInsetWatchInstalled) return;
    UITableView *tv = self.tableView;
    if (![tv isKindOfClass:[UITableView class]]) return;
    @try {
        [tv addObserver:self forKeyPath:@"contentInset" options:NSKeyValueObservingOptionNew context:kWPInsetKVOContext];
        if (@available(iOS 11.0, *)) {
            [tv addObserver:self forKeyPath:@"adjustedContentInset" options:NSKeyValueObservingOptionNew context:kWPInsetKVOContext];
        }
        self.wpInsetWatchInstalled = YES;
    } @catch (NSException *e) {
        WPLog(@"WCTable", @"[WCTable] [INSET] KVO 挂载失败: %@", e);
    }
}

- (void)observeValueForKeyPath:(NSString *)keyPath ofObject:(id)object change:(NSDictionary<NSKeyValueChangeKey, id> *)change context:(void *)context {
    if (context == kWPInsetKVOContext) {
        // 排到下个 runloop 再修：避免在微信布局周期内改 scrollView 属性
        dispatch_async(dispatch_get_main_queue(), ^{ [self wpApplyInsetFixFromKVO:YES]; });
        return;
    }
    [super observeValueForKeyPath:keyPath ofObject:object change:change context:context];
}

- (void)dealloc {
    if (self.wpInsetWatchInstalled) {
        UITableView *tv = self.tableView;
        @try {
            [tv removeObserver:self forKeyPath:@"contentInset" context:kWPInsetKVOContext];
        } @catch (NSException *e) {}
        if (@available(iOS 11.0, *)) {
            @try {
                [tv removeObserver:self forKeyPath:@"adjustedContentInset" context:kWPInsetKVOContext];
            } @catch (NSException *e) {}
        }
    }
}

- (void)wpApplyInsetFixFromKVO:(BOOL)fromKVO {
    UITableView *tv = self.tableView;
    if (![tv isKindOfClass:[UITableView class]]) return;
    if (@available(iOS 11.0, *)) {
        if (tv.contentInsetAdjustmentBehavior != UIScrollViewContentInsetAdjustmentNever) {
            tv.contentInsetAdjustmentBehavior = UIScrollViewContentInsetAdjustmentNever;
        }
        // 条件读 adjustedContentInset 而非 contentInset：前者是真实下推量（含 behavior/safeArea
        // 贡献），两条回写路径都能命中；修正动作写 contentInset（adjusted 为只读）
        UIEdgeInsets inset = tv.adjustedContentInset;
        CGFloat offset = tv.contentOffset.y;
        // inset.top 被回写 / offset 为负（未滚动却被 inset 推下去）才修；用户滚动中（offset>0）不动
        if (fabs(inset.top) > 0.5 || offset < -0.5) {
            tv.contentInset = UIEdgeInsetsZero;
            if (tv.contentOffset.y < -0.5) tv.contentOffset = CGPointZero;
            WPLog(@"WCTable", @"[WCTable] [INSET%@] 顶栏 inset 归一: inset.top=%.2f→0 offset=%.2f→%.2f",
                  fromKVO ? @"-KVO" : @"",
                  inset.top, offset, tv.contentOffset.y);
        }
    }
}

@end

@implementation WPWGroup

- (void)wpSetHeader:(NSString *)header footer:(NSString *)footer {
    if (!self.sectionMgr) return;
    if (header.length > 0) {
        // 卡片标题统一前补两空格（视觉上不贴左，全站生效；footer 不受影响）
        header = [@"  " stringByAppendingString:header];
        ((void (*)(id, SEL, id))objc_msgSend)(self.sectionMgr, NSSelectorFromString(@"setHeaderTitle:"), header);
    }
    if (footer.length > 0) {
        ((void (*)(id, SEL, id))objc_msgSend)(self.sectionMgr, NSSelectorFromString(@"setFooterTitle:"), footer);
    }
}

- (void)addCell:(id)cellMgr {
    if (!cellMgr || !self.sectionMgr) {
        WPLog(@"WCTable", @"[WCTable] addCell 跳过: cell=%@ sec=%@", cellMgr ? @"ok" : @"nil", self.sectionMgr ? @"ok" : @"nil");
        return;
    }
    ((void (*)(id, SEL, id))objc_msgSend)(self.sectionMgr, NSSelectorFromString(@"addCell:"), cellMgr);
}

@end

#pragma mark - 行构造 C 函数

id WPWCSwitchCell(SEL sel, id target, NSString *title, BOOL on) {
    Class cls = objc_getClass("WCTableViewCellManager");
    SEL s = NSSelectorFromString(@"switchCellForSel:target:title:on:");
    if (!cls || ![cls respondsToSelector:s]) return nil;
    return ((id (*)(id, SEL, SEL, id, id, BOOL))objc_msgSend)(cls, s, sel, target, title, on);
}

id WPWCNavCell(SEL sel, id target, NSString *title, NSString *rightValue) {
    // 方法表实证：normalCellForSel:target:title:rightValue:accessoryType: 是
    // WCTableViewNormalCellManager 的类方法（WCTableViewCellManager 没有它）；
    // 旧实现找错类 → 永远返回 nil → rows=0 → contentSize 只有 21pt 空隙。
    Class ncls = objc_getClass("WCTableViewNormalCellManager");
    SEL s = NSSelectorFromString(@"normalCellForSel:target:title:rightValue:accessoryType:");
    if (!ncls || ![ncls respondsToSelector:s]) return nil;
    return ((id (*)(id, SEL, SEL, id, id, id, long))objc_msgSend)(ncls, s, sel, target, title, rightValue ?: @"", (long)1);
}

id WPWCViewCell(SEL sel, id target, NSString *title, UIView *view) {
    Class cls = objc_getClass("WCTableViewCellManager");
    // WCR 颜色行/滑杆行同款：rightView 挂自定义 UIView（sel 可传 0，点击由视图内部控件自理）
    SEL s = NSSelectorFromString(@"normalCellForSel:target:title:rightView:");
    if (!cls || ![cls respondsToSelector:s]) return nil;
    return ((id (*)(id, SEL, SEL, id, id, id))objc_msgSend)(cls, s, sel, target, title, view);
}
