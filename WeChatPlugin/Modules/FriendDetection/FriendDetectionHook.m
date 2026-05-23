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
// MARK: - 原始函数指针（仅 insideCallback，8.0.60 唯一生效的回调）
// ============================================================
static IMP _orig_insideCallback = NULL;

// ============================================================
// MARK: - Hook 回调：insideCallBackGetTransferPrepayResponse:OnRequest:
// 微信优化 行 20733-20770：原样传递 NSDictionary，不解析
// 8.0.60 中 OnGetTransferPrepayRespone: 不存在，这是唯一生效的回调
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

    // 微信优化行 20756：原样设置 currentCheckResult，不解析！
    // lVar5 = _objc_retain(uVar2) → 直接 retain 原始字典
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
    WPLog(@"FriendDetect", @" Hook: WCPayLogicMgr x1 (仅 insideCallback)");
    WPLog(@"FriendDetect", @" Note: OnGetTransferPrepayRespone: 在 8.0.60 不存在，已移除");
    WPLog(@"FriendDetect", @"========================================");

    // — Hook WCPayLogicMgr::insideCallBackGetTransferPrepayResponse:OnRequest: —
    Class payCls = objc_getClass("WCPayLogicMgr");
    if (payCls) {
        SEL sel = sel_registerName("insideCallBackGetTransferPrepayResponse:OnRequest:");
        Method m = class_getInstanceMethod(payCls, sel);
        if (m) {
            MSHookMessageEx(payCls, sel, (IMP)hook_insideCallback, &_orig_insideCallback);
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