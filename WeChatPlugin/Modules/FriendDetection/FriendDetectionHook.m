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
// 微信优化 hooks 两个方法（行 20651-20653）：
//   1. OnGetTransferPrepayRespone:        → 3 参数 (self, _cmd, response)
//   2. insideCallBackGetTransferPrepayResponse:OnRequest: → 4 参数 (self, _cmd, response, request)
// 在多开微信上，OnGetTransferPrepayRespone: 可能是主要回调路径
// ============================================================
static IMP _orig_OnGetTransferPrepayRespone = NULL;
static IMP _orig_insideCallback = NULL;

// ============================================================
// MARK: - Hook 回调：OnGetTransferPrepayRespone:
// 微信优化 FUN_00020e88（行 20659-20729）
// 特点：无 checkFriendsEnd 守卫，总是处理
//       同时兼容 NSDictionary 和带 retcode/retmsg 属性的响应对象
// ============================================================
static void hook_OnGetTransferPrepayRespone(id self, SEL _cmd, id response) {
    if (_orig_OnGetTransferPrepayRespone) {
        ((void (*)(id, SEL, id))_orig_OnGetTransferPrepayRespone)(self, _cmd, response);
    }
    if (!g_fdDetectionActive) return;
    if (!response) return;

    NSDictionary *resultDict = nil;

    // 微信优化行 20674-20711：分支处理
    if ([response isKindOfClass:[NSDictionary class]]) {
        // 行 20709-20710：NSDictionary 直接 retain
        resultDict = response;
    } else {
        // 行 20677-20707：非 NSDictionary → 检查 retcode/retmsg selector
        SEL retcodeSel = sel_registerName("retcode");
        SEL retmsgSel = sel_registerName("retmsg");
        if ([response respondsToSelector:retcodeSel] && [response respondsToSelector:retmsgSel]) {
            NSMutableDictionary *md = [NSMutableDictionary dictionary];

            // 行 20682-20685：retcode → %d 格式化
            int rc = ((int (*)(id, SEL))objc_msgSend)(response, retcodeSel);
            md[@"retcode"] = [NSString stringWithFormat:@"%d", rc];

            // 行 20687-20694：retmsg
            id rm = ((id (*)(id, SEL))objc_msgSend)(response, retmsgSel);
            md[@"retmsg"] = rm ?: @"";

            // 行 20696-20706：wx_error_msg（可选）
            SEL wxErrSel = sel_registerName("wx_error_msg");
            if ([response respondsToSelector:wxErrSel]) {
                id wxErr = ((id (*)(id, SEL))objc_msgSend)(response, wxErrSel);
                md[@"wx_error_msg"] = wxErr ?: @"";
            }
            resultDict = md;
        }
    }

    if (resultDict) {
        WPLog(@"FriendDetect", @"[Hook] OnGetTransferPrepayRespone for %@, keys=%@", g_fdCurrentWxID, resultDict.allKeys);
        // 微信优化行 20715：直接设置 currentCheckResult（无守卫，总是覆盖）
        g_fdCurrentResponse = resultDict;

        // 微信优化行 20721：signal semaphore
        if (g_fdSemaphore) {
            dispatch_semaphore_signal(g_fdSemaphore);
        }
    }
}

// ============================================================
// MARK: - Hook 回调：insideCallBackGetTransferPrepayResponse:OnRequest:
// 微信优化 FUN_000210f8（行 20733-20770）
// 特点：有 checkFriendsEnd 守卫；仅处理 NSDictionary
// 在多开微信上，此回调可能携带错误码 269144064
// g_fdCurrentResponse 守卫：防止覆盖 OnGetTransferPrepayRespone 已设置的响应
// ============================================================
static void hook_insideCallback(id self, SEL _cmd, id response, id request) {
    if (_orig_insideCallback) {
        ((void (*)(id, SEL, id, id))_orig_insideCallback)(self, _cmd, response, request);
    }
    if (!g_fdDetectionActive || g_fdCurrentResponse) return;

    // 微信优化行 20746-20748：只处理 NSDictionary 类型
    if (![response isKindOfClass:[NSDictionary class]]) return;

    NSDictionary *rawDict = (NSDictionary *)response;
    WPLog(@"FriendDetect", @"[Hook] insideCallback raw dict for %@, keys=%@", g_fdCurrentWxID, rawDict.allKeys);

    // 微信优化行 20756：原样设置 currentCheckResult，不解析
    @synchronized (rawDict) {
        g_fdCurrentResponse = rawDict;
    }

    // 微信优化行 20762：signal semaphore
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
    WPLog(@"FriendDetect", @" Hook: WCPayLogicMgr x2 (OnGetTransferPrepayRespone + insideCallback)");
    WPLog(@"FriendDetect", @" 完全匹配微信优化 行 20651-20653 双 Hook 策略");
    WPLog(@"FriendDetect", @"========================================");

    Class payCls = objc_getClass("WCPayLogicMgr");
    if (!payCls) {
        WPLog(@"FriendDetect", @"[Hook] ✗ WCPayLogicMgr class not found");
        return;
    }

    // — Hook 1: OnGetTransferPrepayRespone:（微信优化 行 20651）—
    // 在多开微信上，此方法可能是主要回调；在标准 8.0.60 上 MSHookMessageEx 静默失败
    {
        SEL sel = sel_registerName("OnGetTransferPrepayRespone:");
        Method m = class_getInstanceMethod(payCls, sel);
        if (m) {
            MSHookMessageEx(payCls, sel, (IMP)hook_OnGetTransferPrepayRespone, &_orig_OnGetTransferPrepayRespone);
            WPLog(@"FriendDetect", @"[Hook] ✓ OnGetTransferPrepayRespone:");
        } else {
            WPLog(@"FriendDetect", @"[Hook] - OnGetTransferPrepayRespone: not found (normal on 8.0.60, may exist on multi-open)");
        }
    }

    // — Hook 2: insideCallBackGetTransferPrepayResponse:OnRequest:（微信优化 行 20652-20653）—
    {
        SEL sel = sel_registerName("insideCallBackGetTransferPrepayResponse:OnRequest:");
        Method m = class_getInstanceMethod(payCls, sel);
        if (m) {
            MSHookMessageEx(payCls, sel, (IMP)hook_insideCallback, &_orig_insideCallback);
            WPLog(@"FriendDetect", @"[Hook] ✓ insideCallBackGetTransferPrepayResponse:OnRequest:");
        } else {
            WPLog(@"FriendDetect", @"[Hook] ✗ insideCallBackGetTransferPrepayResponse:OnRequest: NOT FOUND");
        }
    }

    WPLog(@"FriendDetect", @"========================================");
    WPLog(@"FriendDetect", @" FriendDetectionHook install complete");
    WPLog(@"FriendDetect", @"========================================");
}

@end