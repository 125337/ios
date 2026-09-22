#import "WPWeChatTable.h"
#import <objc/message.h>
#import <objc/runtime.h>
#import "../../Core/LogManager.h"

static BOOL WPWCHasClass(NSString *name) {
    return objc_getClass(name.UTF8String) != nil;
}

// 一次性 dump 微信 cell 框架四大类的方法表（确认 init 签名 / 高度 / reload 等 API，供后续精化）
static void wpDumpClassMethods(Class cls, const char *clsName, BOOL meta) {
    if (!cls) {
        WPLog(@"WCTable", @"[WCDUMP] %@ = nil（本微信版本不存在）", [NSString stringWithUTF8String:clsName]);
        return;
    }
    Class target = meta ? object_getClass(cls) : cls;
    unsigned int count = 0;
    Method *list = class_copyMethodList(target, &count);
    NSMutableArray *names = [NSMutableArray array];
    for (unsigned int i = 0; i < count; i++) {
        NSString *n = NSStringFromSelector(method_getName(list[i]));
        // 过滤噪音：只留 init/section/cell/reload/height/header/footer/accessory/right/switch/normal 相关
        if ([n rangeOfString:@"init"].location == 0 ||
            [n rangeOfString:@"ection"].location != NSNotFound ||
            [n rangeOfString:@"ell"].location != NSNotFound ||
            [n rangeOfString:@"reload"].location != NSNotFound ||
            [n rangeOfString:@"eight"].location != NSNotFound ||
            [n rangeOfString:@"itle"].location != NSNotFound ||
            [n rangeOfString:@"ccessory"].location != NSNotFound ||
            [n rangeOfString:@"right"].location != NSNotFound ||
            [n rangeOfString:@"witch"].location != NSNotFound ||
            [n rangeOfString:@"ormal"].location != NSNotFound) {
            [names addObject:n];
        }
    }
    free(list);
    WPLog(@"WCTable", @"[WCDUMP] %@ (%u 个命中): %@", [NSString stringWithUTF8String:clsName], (unsigned)names.count, [names componentsJoinedByString:@" | "]);
}

@implementation WPWeChatTable

+ (BOOL)available {
    static dispatch_once_t onceToken;
    static BOOL ok = NO;
    dispatch_once(&onceToken, ^{
        ok = WPWCHasClass(@"WCTableViewManager")
          && WPWCHasClass(@"WCTableViewSectionManager")
          && WPWCHasClass(@"WCTableViewCellManager")
          && WPWCHasClass(@"WCTableViewNormalCellManager");
        WPLog(@"WCTable", @"[WCTable] 框架可用性: %d（Mgr=%d Sec=%d Cell=%d Normal=%d）",
              ok,
              WPWCHasClass(@"WCTableViewManager"), WPWCHasClass(@"WCTableViewSectionManager"),
              WPWCHasClass(@"WCTableViewCellManager"), WPWCHasClass(@"WCTableViewNormalCellManager"));
    });
    return ok;
}

+ (void)dumpFrameworkMethodsOnce {
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        WPLog(@"WCTable", @"[WCDUMP] === 微信 cell 框架方法表 ===");
        wpDumpClassMethods(objc_getClass("WCTableViewManager"), "WCTableViewManager", NO);
        wpDumpClassMethods(objc_getClass("WCTableViewSectionManager"), "WCTableViewSectionManager", NO);
        wpDumpClassMethods(objc_getClass("WCTableViewCellManager"), "WCTableViewCellManager", YES);   // 类方法
        wpDumpClassMethods(objc_getClass("WCTableViewNormalCellManager"), "WCTableViewNormalCellManager", YES);
    });
}

+ (instancetype)tableForVC:(UIViewController *)vc {
    if (![self available]) return nil;
    [self dumpFrameworkMethodsOnce];

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
    if ([tv isKindOfClass:[UITableView class]]) {
        // 顶栏偏移修复：MMUIViewController 的 view 是全屏布局，表必须从导航栏底部开始
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
        tv.frame = CGRectMake(0, top, vc.view.bounds.size.width, totalH);
        tv.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
        tv.backgroundColor = [UIColor clearColor];
        tv.separatorInset = UIEdgeInsetsZero;
        if (@available(iOS 11.0, *)) tv.contentInsetAdjustmentBehavior = UIScrollViewContentInsetAdjustmentNever;
        WPLog(@"WCTable", @"[WCTable] 取 manager 自建表成功: top=%.0f %@", top, tv);
    } else {
        // 兜底：manager 无 tableView getter（版本差异）→ 自建表外部接线（旧行为）
        tv = [[UITableView alloc] initWithFrame:vc.view.bounds style:UITableViewStyleGrouped];
        tv.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
        tv.backgroundColor = [UIColor clearColor];
        tv.separatorInset = UIEdgeInsetsZero;
        tv.dataSource = mgr;
        tv.delegate = mgr;
        WPLog(@"WCTable", @"[WCTable] manager 无自建表，兜底自建+接线: %@", tv);
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

    [self installCellClassProbeOnce];

    WPWeChatTable *t = [[self alloc] init];
    t.wcManager = mgr;
    t.tableView = tv;
    WPLog(@"WCTable", @"[WCTable] 表+manager 就绪: mgr=%@ tv=%@", NSStringFromClass(object_getClass(mgr)), tv);
    return t;
}

// 一次性 cell 类名探测：swizzle WCTableViewManager 的 willDisplayCell（方法表实证存在），
// 打印每行 cell 真实类名——定位 switch cell 是否 MMTableViewCell 子类（ListCornerRadius 圆角缺失嫌疑）
static IMP orig_WCTVM_willDisplay = NULL;
+ (void)installCellClassProbeOnce {
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        Class mgrCls = objc_getClass("WCTableViewManager");
        SEL s = NSSelectorFromString(@"tableView:willDisplayCell:forRowAtIndexPath:");
        Method m = mgrCls ? class_getInstanceMethod(mgrCls, s) : NULL;
        if (!m) {
            WPLog(@"WCTable", @"[WCCELL] WCTableViewManager 无 willDisplayCell，探测跳过");
            return;
        }
        orig_WCTVM_willDisplay = method_setImplementation(m, (IMP)probe_WCTVM_willDisplay);
        WPLog(@"WCTable", @"[WCCELL] cell 类名探测已安装（30 条配额）");
    });
}

static void probe_WCTVM_willDisplay(id self, SEL _cmd, UITableView *tv, UITableViewCell *cell, NSIndexPath *ip) {
    if (orig_WCTVM_willDisplay) {
        ((void (*)(id, SEL, id, id, id))orig_WCTVM_willDisplay)(self, _cmd, tv, cell, ip);
    }
    static NSInteger dumpCount = 0;
    if (dumpCount < 30) {
        dumpCount++;
        WPLog(@"WCTable", @"[WCCELL] sec=%ld row=%ld cell=%@ super=%@ frame=%@",
              (long)ip.section, (long)ip.row, NSStringFromClass([cell class]),
              NSStringFromClass([cell superclass]), NSStringFromCGRect(cell.frame));
        if (dumpCount >= 30) {
            // 配额用尽自动摘除，恢复原实现（零常驻开销）
            Class mgrCls = objc_getClass("WCTableViewManager");
            SEL s = NSSelectorFromString(@"tableView:willDisplayCell:forRowAtIndexPath:");
            Method m = class_getInstanceMethod(mgrCls, s);
            if (m && orig_WCTVM_willDisplay) {
                method_setImplementation(m, orig_WCTVM_willDisplay);
                orig_WCTVM_willDisplay = NULL;
                WPLog(@"WCTable", @"[WCCELL] 探测配额用尽，已摘除");
            }
        }
    }
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
    SEL cs = NSSelectorFromString(@"getSectionCount");
    if ([self.wcManager respondsToSelector:cs]) {
        unsigned long cnt = ((unsigned long (*)(id, SEL))objc_msgSend)(self.wcManager, cs);
        WPLog(@"WCTable", @"[WCTable] addGroup: sectionCount=%lu", cnt);
    }
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

// 顶栏双重避让修复：frame 已手动定位导航栏下方（tableForVC top），但微信基类 VC 会在
// push 完成周期内又把 adjustedContentInset.top 设为导航栏高度（(82).log 实证：建表时
// inset={0,0,0,0}，0.4s 后变 {97.67,0,34,0} → 内容被整体推下去一个导航栏高度，
// hero 卡悬空）。此处强制归一；微信可能多次回写，故 0/0.15/0.45s 三次兜底。
- (void)normalizeTopInset {
    [self wpApplyInsetFix];
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.15 * NSEC_PER_SEC)),
                   dispatch_get_main_queue(), ^{ [self wpApplyInsetFix]; });
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.45 * NSEC_PER_SEC)),
                   dispatch_get_main_queue(), ^{ [self wpApplyInsetFix]; });
}

- (void)wpApplyInsetFix {
    UITableView *tv = self.tableView;
    if (![tv isKindOfClass:[UITableView class]]) return;
    if (@available(iOS 11.0, *)) {
        if (tv.contentInsetAdjustmentBehavior != UIScrollViewContentInsetAdjustmentNever) {
            tv.contentInsetAdjustmentBehavior = UIScrollViewContentInsetAdjustmentNever;
        }
    }
    UIEdgeInsets inset = tv.contentInset;
    CGFloat offset = tv.contentOffset.y;
    // inset.top 被回写 / offset 为负（未滚动却被 inset 推下去）才修；用户滚动中（offset>0）不动
    if (fabs(inset.top) > 0.5 || offset < -0.5) {
        tv.contentInset = UIEdgeInsetsZero;
        if (tv.contentOffset.y < -0.5) tv.contentOffset = CGPointZero;
        WPLog(@"WCTable", @"[WCTable] [INSET] 顶栏 inset 归一: inset.top=%.2f→0 offset=%.2f→%.2f",
              inset.top, offset, tv.contentOffset.y);
    }
}

@end

@implementation WPWGroup

- (void)wpSetHeader:(NSString *)header footer:(NSString *)footer {
    if (!self.sectionMgr) return;
    if (header.length > 0) {
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
    SEL gc = NSSelectorFromString(@"getCellCount");
    if ([self.sectionMgr respondsToSelector:gc]) {
        WPLog(@"WCTable", @"[WCTable] addCell: cellCount=%lu", (unsigned long)((unsigned long (*)(id, SEL))objc_msgSend)(self.sectionMgr, gc));
    }
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
    // WCDUMP 实证：normalCellForSel:target:title:rightValue:accessoryType: 是
    // WCTableViewNormalCellManager 的类方法（WCTableViewCellManager 没有它）；
    // 旧实现找错类 → 永远返回 nil → rows=0 → contentSize 只有 21pt 空隙。
    Class ncls = objc_getClass("WCTableViewNormalCellManager");
    SEL s = NSSelectorFromString(@"normalCellForSel:target:title:rightValue:accessoryType:");
    if (ncls && [ncls respondsToSelector:s]) {
        return ((id (*)(id, SEL, SEL, id, id, id, long))objc_msgSend)(ncls, s, sel, target, title, rightValue ?: @"", (long)1);
    }
    // 兜底：WCTableViewCellManager 的无箭头版（WCDUMP 实证存在）
    Class cls = objc_getClass("WCTableViewCellManager");
    SEL s2 = NSSelectorFromString(@"normalCellForSel:target:title:rightValue:");
    if (cls && [cls respondsToSelector:s2]) {
        return ((id (*)(id, SEL, SEL, id, id, id))objc_msgSend)(cls, s2, sel, target, title, rightValue ?: @"");
    }
    return nil;
}

id WPWCViewCell(SEL sel, id target, NSString *title, UIView *view) {
    Class cls = objc_getClass("WCTableViewCellManager");
    // WCR 颜色行/滑杆行同款：rightView 挂自定义 UIView（sel 可传 0，点击由视图内部控件自理）
    SEL s = NSSelectorFromString(@"normalCellForSel:target:title:rightView:");
    if (!cls || ![cls respondsToSelector:s]) return nil;
    return ((id (*)(id, SEL, SEL, id, id, id))objc_msgSend)(cls, s, sel, target, title, view);
}
