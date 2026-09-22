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
    UITableView *tv = [[UITableView alloc] initWithFrame:vc.view.bounds style:UITableViewStyleGrouped];
    tv.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
    tv.backgroundColor = [UIColor clearColor];
    tv.separatorInset = UIEdgeInsetsZero;

    id mgr = nil;
    // init 签名探测：若本微信版本提供 initWithTableView:（hostTableView 关联），优先使用
    SEL initTV = NSSelectorFromString(@"initWithTableView:");
    if ([mgrCls instancesRespondToSelector:initTV]) {
        mgr = ((id (*)(id, SEL, id))objc_msgSend)([[mgrCls alloc] init], initTV, tv);
        WPLog(@"WCTable", @"[WCTable] WCTableViewManager 走 initWithTableView:");
    } else {
        mgr = [[mgrCls alloc] init];
        WPLog(@"WCTable", @"[WCTable] WCTableViewManager 走 plain init（无 initWithTableView:）");
    }
    if (!mgr) {
        WPLog(@"WCTable", @"[WCTable] manager 创建失败，回退旧引擎");
        return nil;
    }
    // 数据源能力校验：manager 必须自己实现 numberOfRows（即它就是 UITableViewDataSource）
    SEL nos = NSSelectorFromString(@"tableView:numberOfRowsInSection:");
    if (![mgr respondsToSelector:nos]) {
        WPLog(@"WCTable", @"[WCTable] manager 不响应 tableView:numberOfRowsInSection:，回退旧引擎");
        return nil;
    }
    tv.dataSource = mgr;
    tv.delegate = mgr; // delegate 方法可选，不响应也不崩

    WPWeChatTable *t = [[self alloc] init];
    t.wcManager = mgr;
    t.tableView = tv;
    WPLog(@"WCTable", @"[WCTable] 表+manager 就绪: mgr=%@ tv=%@", NSStringFromClass(object_getClass(mgr)), tv);
    return t;
}

- (id)addGroup {
    Class secCls = objc_getClass("WCTableViewSectionManager");
    if (!secCls || !self.wcManager) return nil;
    id sec = [[secCls alloc] init];
    if (!sec) return nil;

    // 优先走 getAllSections 数组直接追加（纯数据操作，零副作用；WCR reload 前建好全部 section 同款）
    NSMutableArray *all = ((id (*)(id, SEL))objc_msgSend)(self.wcManager, NSSelectorFromString(@"getAllSections"));
    if ([all isKindOfClass:[NSMutableArray class]]) {
        [all addObject:sec];
    } else {
        ((void (*)(id, SEL, id))objc_msgSend)(self.wcManager, NSSelectorFromString(@"addSection:"), sec);
        WPLog(@"WCTable", @"[WCTable] getAllSections 不可用，走 addSection:");
    }
    WPWGroup *g = [[WPWGroup alloc] init];
    g.sectionMgr = sec;
    return g;
}

- (void)reload {
    if (self.wcManager) {
        SEL s = NSSelectorFromString(@"reloadAllSections");
        if ([self.wcManager respondsToSelector:s]) {
            ((void (*)(id, SEL))objc_msgSend)(self.wcManager, s);
        }
    }
    [self.tableView reloadData];
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
    if (!cellMgr || !self.sectionMgr) return;
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
    Class cls = objc_getClass("WCTableViewCellManager");
    // accessoryType=1 = 右箭头（WCR 触发行/微信设置行同款）
    SEL s = NSSelectorFromString(@"normalCellForSel:target:title:rightValue:accessoryType:");
    if (cls && [cls respondsToSelector:s]) {
        return ((id (*)(id, SEL, SEL, id, id, id, long))objc_msgSend)(cls, s, sel, target, title, rightValue ?: @"", (long)1);
    }
    // 兜底：WCTableViewNormalCellManager init
    Class ncls = objc_getClass("WCTableViewNormalCellManager");
    SEL ni = NSSelectorFromString(@"initWithSel:target:title:rightValue:accessoryType:");
    if (ncls && [ncls instancesRespondToSelector:ni]) {
        return ((id (*)(id, SEL, SEL, id, id, id, long))objc_msgSend)([[ncls alloc] init], ni, sel, target, title, rightValue ?: @"", (long)1);
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
