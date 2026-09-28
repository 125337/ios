#import "MomentsHook.h"
#import <UIKit/UIKit.h>
#import <objc/runtime.h>
#import <objc/message.h>
#import "../../Core/LogManager.h"
#import "MomentsConfig.h"

#pragma mark - 便捷朋友圈（WCR 同款机制，触发词 pyq）

// 防重入标志：触发后置位，500ms 后主线程清零（WCR FUN_017a7970 同款防抖窗口）
static volatile BOOL gPyqHandling = NO;
static IMP orig_pyq_didChange = NULL;    // textViewDidChange:（MMGrowTextView 主探测）
static IMP orig_pyq_selChange = NULL;    // textViewDidChangeSelection:
static IMP orig_tv_setDelegate = NULL;   // UITextView setDelegate:（动态挂载器）
static IMP orig_pyq_dyn1 = NULL;         // 动态 delegate 类的 textViewDidChange: 原实现
static IMP orig_pyq_dyn2 = NULL;
static Class gDynCls1 = NULL, gDynCls2 = NULL;
static int gPyqLogCount = 0;    // 取证日志：仅前 3 次
static int gSelLogCount = 0;    // SelectionChange 探测：仅前 3 次
static int gDelLogCount = 0;    // delegate 探针：仅前 10 次

// 判断方法是否为类自身实现（非父类继承），替代 method_getClass（CI SDK 无声明）
static BOOL MioClassOwnsMethod(Class cls, SEL sel) {
    unsigned int count = 0;
    Method *list = class_copyMethodList(cls, &count);
    BOOL owns = NO;
    for (unsigned int i = 0; i < count; i++) {
        if (method_getName(list[i]) == sel) { owns = YES; break; }
    }
    free(list);
    return owns;
}

// 半屏弹出朋友圈（WCR WCRefineClearSessionHook::mainFrameViewController +
// FUN_01e4a928 halfScreen 分支同款，全部 respondsToSelector 守卫）
static void MioOpenMomentsHalfScreen(UIViewController *host) {
    // 1. 取现成 NewMainFrameViewController（微信主 tab 结构维护的实例，绝不 alloc init）
    id mvc = nil;
    Class appCls = objc_getClass("MicroMessengerAppDelegate");
    SEL giSel = NSSelectorFromString(@"GlobalInstance");
    if (appCls && [(id)appCls respondsToSelector:giSel]) {
        id app = ((id(*)(id, SEL))objc_msgSend)((id)appCls, giSel);
        if ([app respondsToSelector:@selector(valueForKey:)]) {
            id mgr = ((id(*)(id, SEL, id))objc_msgSend)(app, @selector(valueForKey:), @"m_appViewControllerMgr");
            SEL gnmSel = NSSelectorFromString(@"getNewMainFrameViewController");
            if (mgr && [mgr respondsToSelector:gnmSel]) {
                mvc = ((id(*)(id, SEL))objc_msgSend)(mgr, gnmSel);
            }
        }
    }
    if (![mvc isKindOfClass:[UIViewController class]]) {
        WPLog(@"Moments", @"[Pyq] NewMainFrameViewController NOT available");
        return;
    }

    // 2. 包 Nav + PageSheet 半屏 present（WCR FUN_01e4a928 halfScreen=1 同款）
    @try {
        UINavigationController *nav = [[UINavigationController alloc] initWithRootViewController:mvc];
        nav.modalPresentationStyle = UIModalPresentationPageSheet;
        if (@available(iOS 15.0, *)) {
            UISheetPresentationController *sheet = nav.sheetPresentationController;
            if (sheet) {
                sheet.detents = @[UISheetPresentationControllerDetent.largeDetent];
                sheet.prefersGrabberVisible = YES;
            }
        }
        // 左上角关闭按钮（present 出来的 nav 无返回键，WCR 同款补关闭途径）
        UIBarButtonItem *close = [[UIBarButtonItem alloc]
            initWithBarButtonSystemItem:UIBarButtonSystemItemClose
                                 target:[MomentsHook class]
                                 action:@selector(wpCloseMomentsSheet:)];
        ((UIViewController *)mvc).navigationItem.leftBarButtonItem = close;

        if (host) {
            [host presentViewController:nav animated:YES completion:nil];
            WPLog(@"Moments", @"[Pyq] moments half-screen opened");
        } else {
            WPLog(@"Moments", @"[Pyq] no host VC, skip open");
        }
    } @catch (NSException *e) {
        WPLog(@"Moments", @"[Pyq] open error: %@", e);
    }
}

// 输入变化垫片（主 + 动态 delegate 类共用）：先调对应原实现，再检测 pyq。
// 文本来源双兼容：self 有 text 用 self.text（WCR FUN_017a7970 同款），
// 否则用 textView 参数的 text（动态 delegate 可能是无 text 的 VC/容器）
static void hooked_pyq_didChange(id self, SEL _cmd, id textView) {
    IMP orig = orig_pyq_didChange;
    if (gDynCls1 && [self isMemberOfClass:gDynCls1]) orig = orig_pyq_dyn1;
    else if (gDynCls2 && [self isMemberOfClass:gDynCls2]) orig = orig_pyq_dyn2;
    if (orig) ((void(*)(id, SEL, id))orig)(self, _cmd, textView);
    @try {
        // 取文本（self.text 优先，textView.text 兜底）
        NSString *text = nil;
        SEL textSel = NSSelectorFromString(@"text");
        if ([self respondsToSelector:textSel]) {
            id t = ((id(*)(id, SEL))objc_msgSend)(self, textSel);
            if ([t isKindOfClass:[NSString class]]) text = t;
        }
        if (!text && [textView isKindOfClass:[UITextView class]]) {
            text = [(UITextView *)textView text];
        }
        // 取证日志（仅前 3 次）：确认垫片被调用、参数形态、开关状态、文本内容
        if (gPyqLogCount < 3) {
            gPyqLogCount++;
            WPLog(@"Moments", @"[Pyq] fired(%d) self=%@ tv=%@ enable=%d text=%@",
                  gPyqLogCount, NSStringFromClass([self class]),
                  textView ? NSStringFromClass([textView class]) : @"nil",
                  [MomentsConfig shared].convenientMomentsEnabled ? 1 : 0,
                  text ?: @"(none)");
        }
        if (gPyqHandling) return;
        MomentsConfig *cfg = [MomentsConfig shared];
        if (!cfg.convenientMomentsEnabled) return;
        if (text.length == 0) return;
        // trim 空白（WCR FUN_017b0dd8 同款）
        text = [text stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
        if (![text isEqualToString:@"pyq"]) return;

        gPyqHandling = YES;
        WPLog(@"Moments", @"[Pyq] matched, opening moments");
        // 清空输入（self setText 优先，textView setText 兜底，均带守卫）
        SEL setSel = NSSelectorFromString(@"setText:");
        if ([self respondsToSelector:setSel]) {
            ((void(*)(id, SEL, id))objc_msgSend)(self, setSel, @"");
        }
        if ([textView isKindOfClass:[UITextView class]]) {
            [(UITextView *)textView setText:@""];
        }

        // 宿主：从 self 沿 responder 链找最近的 VC（聊天页）
        UIViewController *host = nil;
        UIResponder *r = ([self isKindOfClass:[UIResponder class]] ? (UIResponder *)self : nil)
                         ?: ([textView isKindOfClass:[UIResponder class]] ? (UIResponder *)textView : nil);
        while (r) {
            if ([r isKindOfClass:[UIViewController class]]) { host = (UIViewController *)r; break; }
            r = [r nextResponder];
        }
        WPLog(@"Moments", @"[Pyq] host=%@", host ? NSStringFromClass([host class]) : @"nil");

        dispatch_async(dispatch_get_main_queue(), ^{
            MioOpenMomentsHalfScreen(host);
            dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.5 * NSEC_PER_SEC)),
                           dispatch_get_main_queue(), ^{ gPyqHandling = NO; });
        });
    } @catch (NSException *e) {
        gPyqHandling = NO;
        WPLog(@"Moments", @"[Pyq] error: %@", e);
    }
}

// textViewDidChangeSelection: 探测垫片：打字时光标移动必触发，
// 用于判定 MMGrowTextView 是否为活 delegate（仅日志，不拦截）
static void hooked_pyq_selChange(id self, SEL _cmd, id textView) {
    if (orig_pyq_selChange) {
        ((void(*)(id, SEL, id))orig_pyq_selChange)(self, _cmd, textView);
    }
    if (gSelLogCount < 3) {
        gSelLogCount++;
        WPLog(@"Moments", @"[Pyq] selChg(%d) self=%@ tv=%@",
              gSelLogCount, NSStringFromClass([self class]),
              textView ? NSStringFromClass([textView class]) : @"nil");
    }
}

// UITextView setDelegate: 动态挂载器：微信系输入框的 delegate 设给谁，
// 就实时把 pyq 垫片挂到那个 delegate 类的 textViewDidChange: 上（幂等防重）。
// 同时放宽日志：delegate 类全打（上限 10 条）
static void hooked_tv_setDelegate(id self, SEL _cmd, id delegate) {
    if (orig_tv_setDelegate) {
        ((void(*)(id, SEL, id))orig_tv_setDelegate)(self, _cmd, delegate);
    }
    if (!delegate) return;
    @try {
        NSString *tvCn = NSStringFromClass([self class]);
        // 只关注微信输入框系 textView（聊天输入/搜索等）
        if (![tvCn hasPrefix:@"MM"] && ![tvCn containsString:@"GrowTextView"]) return;
        Class dCls = [delegate class];
        NSString *dCn = NSStringFromClass(dCls);
        if (gDelLogCount < 10) {
            gDelLogCount++;
            WPLog(@"Moments", @"[Pyq] delegate(%d) tv=%@ -> %@",
                  gDelLogCount, tvCn, dCn);
        }
        // MMGrowTextView 主探测已挂；其余 delegate 类动态挂（幂等）
        if (dCls == objc_getClass("MMGrowTextView")) return;
        SEL didSel = NSSelectorFromString(@"textViewDidChange:");
        Method m = class_getInstanceMethod(dCls, didSel);
        if (!m || method_getImplementation(m) == (IMP)hooked_pyq_didChange) return;
        if (dCls == gDynCls1 || dCls == gDynCls2) return;   // 已挂过
        IMP origImp = method_getImplementation(m);
        if (!gDynCls1) {
            gDynCls1 = dCls; orig_pyq_dyn1 = origImp;
        } else if (!gDynCls2) {
            gDynCls2 = dCls; orig_pyq_dyn2 = origImp;
        } else {
            return;   // 两个动态槽已满
        }
        method_setImplementation(m, (IMP)hooked_pyq_didChange);
        WPLog(@"Moments", @"[Pyq] dyn-hook %@.textViewDidChange: (tv=%@)", dCn, tvCn);
    } @catch (NSException *e) {
        WPLog(@"Moments", @"[Pyq] setDelegate probe error: %@", e);
    }
}

// 安装：MMGrowTextView textViewDidChange:（WCR MSHookMessageEx 同款位置）+
// textViewDidChangeSelection: 探测 + UITextView setDelegate: 探针 + 继承链结构日志
static void MioInstallPyqHooks(void) {
    SEL didSel = NSSelectorFromString(@"textViewDidChange:");
    SEL selSel = NSSelectorFromString(@"textViewDidChangeSelection:");
    Class growCls = objc_getClass("MMGrowTextView");
    if (!growCls) {
        WPLog(@"Moments", @"[Pyq] SKIP: MMGrowTextView NOT found");
        return;
    }

    // 继承链结构日志：实锤两个 delegate 方法的实现层
    Class c = growCls;
    int depth = 0;
    while (c && depth < 6) {
        BOOL ownDid = MioClassOwnsMethod(c, didSel);
        BOOL ownSel = MioClassOwnsMethod(c, selSel);
        WPLog(@"Moments", @"[Pyq] chain[%d] %@ own(didChange)=%d own(selChange)=%d",
              depth, NSStringFromClass(c), ownDid, ownSel);
        if ([c isSubclassOfClass:[UITextView class]] && c != [UITextView class] &&
            [c superclass] == [UITextView class]) break;   // 链到 UITextView 前一级为止
        c = [c superclass];
        depth++;
    }

    // 主探测：textViewDidChange:（WCR 同款）
    Method m1 = class_getInstanceMethod(growCls, didSel);
    if (m1) {
        orig_pyq_didChange = method_getImplementation(m1);
        method_setImplementation(m1, (IMP)hooked_pyq_didChange);
        WPLog(@"Moments", @"[Pyq] MMGrowTextView.textViewDidChange: hooked");
    } else {
        WPLog(@"Moments", @"[Pyq] SKIP: textViewDidChange: NOT found");
    }

    // 辅探测：textViewDidChangeSelection:（光标移动必触发）
    Method m2 = class_getInstanceMethod(growCls, selSel);
    if (m2) {
        orig_pyq_selChange = method_getImplementation(m2);
        method_setImplementation(m2, (IMP)hooked_pyq_selChange);
        WPLog(@"Moments", @"[Pyq] MMGrowTextView.textViewDidChangeSelection: hooked");
    } else {
        WPLog(@"Moments", @"[Pyq] SKIP: textViewDidChangeSelection: NOT found");
    }

    // delegate 探针：UITextView setDelegate:（轻垫片，仅命中日志）
    Class tvCls = [UITextView class];
    Method m3 = class_getInstanceMethod(tvCls, NSSelectorFromString(@"setDelegate:"));
    if (m3) {
        orig_tv_setDelegate = method_getImplementation(m3);
        method_setImplementation(m3, (IMP)hooked_tv_setDelegate);
        WPLog(@"Moments", @"[Pyq] UITextView.setDelegate: probe hooked");
    }
}

// 重挂自检：微信晚到的初始化可能覆盖 IMP，20s/45s 检查并恢复
static void MioRehookCheck(int round) {
    SEL didSel = NSSelectorFromString(@"textViewDidChange:");
    SEL selSel = NSSelectorFromString(@"textViewDidChangeSelection:");
    SEL delSel = NSSelectorFromString(@"setDelegate:");
    int fixed = 0;

    Class growCls = objc_getClass("MMGrowTextView");
    if (growCls) {
        Method m1 = class_getInstanceMethod(growCls, didSel);
        if (m1 && method_getImplementation(m1) != (IMP)hooked_pyq_didChange) {
            orig_pyq_didChange = method_getImplementation(m1);
            method_setImplementation(m1, (IMP)hooked_pyq_didChange);
            fixed++;
        }
        Method m2 = class_getInstanceMethod(growCls, selSel);
        if (m2 && method_getImplementation(m2) != (IMP)hooked_pyq_selChange) {
            orig_pyq_selChange = method_getImplementation(m2);
            method_setImplementation(m2, (IMP)hooked_pyq_selChange);
            fixed++;
        }
    }
    Method m3 = class_getInstanceMethod([UITextView class], delSel);
    if (m3 && method_getImplementation(m3) != (IMP)hooked_tv_setDelegate) {
        orig_tv_setDelegate = method_getImplementation(m3);
        method_setImplementation(m3, (IMP)hooked_tv_setDelegate);
        fixed++;
    }
    WPLog(@"Moments", @"[Pyq] rehook check(%d) fixed=%d", round, fixed);
}

#pragma mark - 安装

@implementation MomentsHook

// 关闭按钮回调：沿 presentedViewController 链找到顶层并 dismiss
+ (void)wpCloseMomentsSheet:(UIBarButtonItem *)sender {
    UIViewController *top = [UIApplication sharedApplication].keyWindow.rootViewController;
    while (top.presentedViewController) top = top.presentedViewController;
    [top dismissViewControllerAnimated:YES completion:nil];
}

+ (void)install {
    WPLog(@"Moments", @"[MomentsHook] install start");
    MioInstallPyqHooks();
    // 重挂自检（防微信晚到初始化覆盖 IMP）
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(20 * NSEC_PER_SEC)),
                   dispatch_get_main_queue(), ^{ MioRehookCheck(1); });
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(45 * NSEC_PER_SEC)),
                   dispatch_get_main_queue(), ^{ MioRehookCheck(2); });
    WPLog(@"Moments", @"[MomentsHook] install complete");
}

@end
