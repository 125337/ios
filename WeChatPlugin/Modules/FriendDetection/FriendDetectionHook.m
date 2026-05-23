#import "FriendDetectionHook.h"
#import "MioFriendDetector.h"
#import "MioFriendDetectionVC.h"
#import "../../Core/LogManager.h"
#import <objc/runtime.h>
#import <objc/message.h>
#import <substrate.h>

// ============================================================
// MARK: - 引用 MioFriendDetector.m 中定义的全局状态
// ============================================================
extern dispatch_semaphore_t g_fdSemaphore;
extern NSString             *g_fdCurrentWxID;
extern NSDictionary         *g_fdCurrentResponse;
extern volatile BOOL         g_fdDetectionActive;

// ============================================================
// MARK: - 原始函数指针
// ============================================================
static IMP _orig_OnGetTransferPrepayRespone = NULL;
static IMP _orig_insideCallback = NULL;

// ============================================================
// MARK: - Hook 回调 1：OnGetTransferPrepayRespone:
// ============================================================
static void hook_OnGetTransferPrepayRespone(id self, SEL _cmd, id response) {
    if (_orig_OnGetTransferPrepayRespone) {
        ((void (*)(id, SEL, id))_orig_OnGetTransferPrepayRespone)(self, _cmd, response);
    }
    if (!g_fdDetectionActive || !response) return;

    WPLog(@"FriendDetect", @"[Hook] OnGetTransferPrepayRespone for %@", g_fdCurrentWxID);

    NSMutableDictionary *result = [NSMutableDictionary dictionary];
    if ([response isKindOfClass:[NSDictionary class]]) {
        NSDictionary *d = (NSDictionary *)response;
        result[@"retcode"] = d[@"retcode"] ?: @0;
        result[@"retmsg"]  = d[@"retmsg"] ?: @"";
        result[@"wx_error_msg"] = d[@"wx_error_msg"] ?: @"";
    } else {
        if ([response respondsToSelector:sel_registerName("retcode")])
            result[@"retcode"] = @(((NSInteger (*)(id, SEL))objc_msgSend)(response, sel_registerName("retcode")));
        if ([response respondsToSelector:sel_registerName("retmsg")])
            result[@"retmsg"] = ((id (*)(id, SEL))objc_msgSend)(response, sel_registerName("retmsg"));
        if ([response respondsToSelector:sel_registerName("wx_error_msg")])
            result[@"wx_error_msg"] = ((id (*)(id, SEL))objc_msgSend)(response, sel_registerName("wx_error_msg"));
    }

    @synchronized (result) {
        g_fdCurrentResponse = [result copy];
    }
    if (g_fdSemaphore) {
        dispatch_semaphore_signal(g_fdSemaphore);
        WPLog(@"FriendDetect", @"[Hook] Signaled: %@", result);
    }
}

// ============================================================
// MARK: - Hook 回调 2：insideCallBackGetTransferPrepayResponse:OnRequest: (兜底)
// ============================================================
static void hook_insideCallback(id self, SEL _cmd, id response, id request) {
    if (_orig_insideCallback) {
        ((void (*)(id, SEL, id, id))_orig_insideCallback)(self, _cmd, response, request);
    }
    if (!g_fdDetectionActive || g_fdCurrentResponse) return;

    WPLog(@"FriendDetect", @"[Hook] insideCallback for %@, response class=%@", g_fdCurrentWxID, NSStringFromClass([response class]));

    NSMutableDictionary *result = [NSMutableDictionary dictionary];

    if ([response isKindOfClass:[NSDictionary class]]) {
        NSDictionary *d = (NSDictionary *)response;
        // 诊断：打印所有 keys（方便适配不同版本）
        WPLog(@"FriendDetect", @"[Diag] insideCallback NSDictionary keys: %@", [d.allKeys description]);

        // 尝试多种 key 格式（不同 WeChat 版本可能用不同命名）
        result[@"retcode"] = d[@"retcode"] ?: d[@"ret_code"] ?: d[@"resultCode"] ?: d[@"result_code"] ?: @-1;
        result[@"retmsg"]  = d[@"retmsg"] ?: d[@"ret_msg"] ?: d[@"retMsg"] ?: d[@"resultMsg"] ?: d[@"result_msg"] ?: d[@"errmsg"] ?: @"";
        result[@"wx_error_msg"] = d[@"wx_error_msg"] ?: d[@"wxErrorMsg"] ?: d[@"error_msg"] ?: @"";
    } else {
        // 非字典响应：从对象提取
        if ([response respondsToSelector:sel_registerName("retcode")])
            result[@"retcode"] = @(((NSInteger (*)(id, SEL))objc_msgSend)(response, sel_registerName("retcode")));
        else if ([response respondsToSelector:sel_registerName("ret_code")])
            result[@"retcode"] = @(((NSInteger (*)(id, SEL))objc_msgSend)(response, sel_registerName("ret_code")));
        else if ([response respondsToSelector:sel_registerName("resultCode")])
            result[@"retcode"] = @(((NSInteger (*)(id, SEL))objc_msgSend)(response, sel_registerName("resultCode")));
        else
            result[@"retcode"] = @-1;

        if ([response respondsToSelector:sel_registerName("retmsg")])
            result[@"retmsg"] = ((id (*)(id, SEL))objc_msgSend)(response, sel_registerName("retmsg"));
        else if ([response respondsToSelector:sel_registerName("errmsg")])
            result[@"retmsg"] = ((id (*)(id, SEL))objc_msgSend)(response, sel_registerName("errmsg"));
        else if ([response respondsToSelector:sel_registerName("ret_msg")])
            result[@"retmsg"] = ((id (*)(id, SEL))objc_msgSend)(response, sel_registerName("ret_msg"));
        else
            result[@"retmsg"] = @"";

        if ([response respondsToSelector:sel_registerName("wx_error_msg")])
            result[@"wx_error_msg"] = ((id (*)(id, SEL))objc_msgSend)(response, sel_registerName("wx_error_msg"));
        else
            result[@"wx_error_msg"] = @"";
    }

    @synchronized (result) {
        g_fdCurrentResponse = [result copy];
    }
    WPLog(@"FriendDetect", @"[Hook] insideCallback parsed: %@", result);

    if (g_fdSemaphore) {
        dispatch_semaphore_signal(g_fdSemaphore);
    }
}

// ============================================================
// MARK: - +install
// ============================================================
@implementation FriendDetectionHook

+ (void)install {
    WPLog(@"FriendDetect", @"========================================");
    WPLog(@"FriendDetect", @" FriendDetectionHook install");
    WPLog(@"FriendDetect", @" Method: 转账预下单法");
    WPLog(@"FriendDetect", @" Hook: WCPayLogicMgr x2");
    WPLog(@"FriendDetect", @"========================================");

    // — Hook WCPayLogicMgr —
    Class payCls = objc_getClass("WCPayLogicMgr");
    if (payCls) {
        // 8.0.60 中 OnGetTransferPrepayRespone: (大写O) 可能不存在
        // 尝试 lowercase: onGetTransferPrepayRespone: (小写o)
        SEL sel1 = sel_registerName("onGetTransferPrepayRespone:");
        Method m1 = class_getInstanceMethod(payCls, sel1);
        if (!m1) {
            // 回退到大写
            sel1 = sel_registerName("OnGetTransferPrepayRespone:");
            m1 = class_getInstanceMethod(payCls, sel1);
        }
        if (m1) {
            MSHookMessageEx(payCls, sel1, (IMP)hook_OnGetTransferPrepayRespone, &_orig_OnGetTransferPrepayRespone);
            WPLog(@"FriendDetect", @"[Hook] ✓ %@", NSStringFromSelector(sel1));
        } else {
            WPLog(@"FriendDetect", @"[Hook] ✗ onGetTransferPrepayRespone: NOT FOUND (both cases)");
            // 诊断：列出 WCPayLogicMgr 中所有含 Transfer 的方法
            unsigned int count = 0;
            Method *methods = class_copyMethodList(payCls, &count);
            for (unsigned int i = 0; i < count; i++) {
                NSString *name = NSStringFromSelector(method_getName(methods[i]));
                if ([name rangeOfString:@"Transfer" options:NSCaseInsensitiveSearch].location != NSNotFound ||
                    [name rangeOfString:@"Prepay" options:NSCaseInsensitiveSearch].location != NSNotFound ||
                    [name rangeOfString:@"prepay" options:NSCaseInsensitiveSearch].location != NSNotFound) {
                    WPLog(@"FriendDetect", @"[Diag] WCPayLogicMgr method: %@", name);
                }
            }
            free(methods);
        }

        SEL sel2 = sel_registerName("insideCallBackGetTransferPrepayResponse:OnRequest:");
        Method m2 = class_getInstanceMethod(payCls, sel2);
        if (m2) {
            MSHookMessageEx(payCls, sel2, (IMP)hook_insideCallback, &_orig_insideCallback);
            WPLog(@"FriendDetect", @"[Hook] ✓ insideCallBackGetTransferPrepayResponse:OnRequest:");
        } else {
            WPLog(@"FriendDetect", @"[Hook] ✗ insideCallBackGetTransferPrepayResponse:OnRequest: NOT FOUND");
        }
    } else {
        WPLog(@"FriendDetect", @"[Hook] ✗ WCPayLogicMgr class not found");
    }

    WPLog(@"FriendDetect", @"========================================");
    WPLog(@"FriendDetect", @" FriendDetectionHook install complete");
    WPLog(@"FriendDetect", @"========================================");
}

@end