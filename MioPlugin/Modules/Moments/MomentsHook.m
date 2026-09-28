#import "MomentsHook.h"
#import <UIKit/UIKit.h>
#import <objc/runtime.h>
#import <objc/message.h>
#import "../../Core/LogManager.h"
#import "MomentsConfig.h"

#pragma mark - 便捷朋友圈（WCR 同款机制，触发词 pyq）

// 防重入标志：触发后置位，500ms 后主线程清零（WCR FUN_017a7970 同款防抖窗口）
static volatile BOOL gPyqHandling = NO;
static IMP orig_pyq_textChange = NULL;

// 关闭按钮回调：沿 presentedViewController 链找到顶层并 dismiss
+ (void)wpCloseMomentsSheet:(UIBarButtonItem *)sender {
    UIViewController *top = [UIApplication sharedApplication].keyWindow.rootViewController;
    while (top.presentedViewController) top = top.presentedViewController;
    [top dismissViewControllerAnimated:YES completion:nil];
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

// 输入变化垫片：先调原实现，再检测 pyq（WCR FUN_017a7970 同款流程）
static void hooked_pyq_textChange(id self, SEL _cmd, id textView) {
    if (orig_pyq_textChange) {
        ((void(*)(id, SEL, id))orig_pyq_textChange)(self, _cmd, textView);
    }
    @try {
        if (gPyqHandling) return;
        if (![MomentsConfig shared].convenientMomentsEnabled) return;
        if (![textView isKindOfClass:[UITextView class]]) return;
        UITextView *tv = (UITextView *)textView;
        NSString *text = [tv text] ?: @"";
        if (text.length == 0) return;
        // trim 空白（WCR FUN_017b0dd8 同款）
        text = [text stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
        if (![text isEqualToString:@"pyq"]) return;

        gPyqHandling = YES;
        // 清空输入：GrowTextView 本体与内部 textView 双清（均带守卫）
        if ([self respondsToSelector:NSSelectorFromString(@"setText:")]) {
            ((void(*)(id, SEL, id))objc_msgSend)(self, NSSelectorFromString(@"setText:"), @"");
        }
        [tv setText:@""];

        // 宿主：responder 链上最近的 VC（聊天页）
        UIViewController *host = nil;
        UIResponder *r = (UIResponder *)tv;
        while (r) {
            if ([r isKindOfClass:[UIViewController class]]) { host = (UIViewController *)r; break; }
            r = [r nextResponder];
        }

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

// 安装：MMGrowTextView textViewDidChange:（153 包实测唯一有效挂载点）
static void MioInstallPyqHook(void) {
    SEL sel = NSSelectorFromString(@"textViewDidChange:");
    Class cls = objc_getClass("MMGrowTextView");
    if (!cls) {
        WPLog(@"Moments", @"[Pyq] SKIP: MMGrowTextView NOT found");
        return;
    }
    Method m = class_getInstanceMethod(cls, sel);
    if (!m) {
        WPLog(@"Moments", @"[Pyq] SKIP: textViewDidChange: NOT found");
        return;
    }
    orig_pyq_textChange = method_getImplementation(m);
    method_setImplementation(m, (IMP)hooked_pyq_textChange);
    WPLog(@"Moments", @"[Pyq] MMGrowTextView.textViewDidChange: hooked");
}

#pragma mark - 安装

@implementation MomentsHook

+ (void)install {
    WPLog(@"Moments", @"[MomentsHook] install start");
    MioInstallPyqHook();
    WPLog(@"Moments", @"[MomentsHook] install complete");
}

@end
