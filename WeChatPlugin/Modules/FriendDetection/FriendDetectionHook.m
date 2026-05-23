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
// MARK: - 原始函数指针（JailBreak 绕过 — 微信优化 行 27116-27118）
// 多开微信是重签名 IPA，微信签名校验会认为 app 被篡改，触发支付限制。
// 微信优化 hook JailBreakHelper 让 IsJailBreak 返回 NO 来绕过此限制。
// ============================================================
static IMP _orig_IsJailBreak = NULL;
static IMP _orig_HasInstallJailbreakPlugin = NULL;
static IMP _orig_JailBroken = NULL;

// Hook GetTransferPrepayRequest: 本身（诊断用 — 不是微信优化的 hook）
static IMP _orig_GetTransferPrepayRequest = NULL;

// Hook WCPayTransferPrepayRequestStruct init — 完整属性诊断
static IMP _orig_TransferReqInit = NULL;

static id hook_TransferReqInit(id self, SEL _cmd) {
    // 调用原始 init
    if (_orig_TransferReqInit) {
        self = ((id (*)(id, SEL))_orig_TransferReqInit)(self, _cmd);
    }
    if (!self) return nil;

    // 用 objc runtime 枚举所有属性名和值
    WPLog(@"FriendDetect", @"[InitDump] WCPayTransferPrepayRequestStruct init → %p", self);
    unsigned int count = 0;
    objc_property_t *props = class_copyPropertyList([self class], &count);
    for (unsigned int i = 0; i < count; i++) {
        const char *name = property_getName(props[i]);
        if (!name) continue;
        NSString *key = [NSString stringWithUTF8String:name];
        id val = nil;
        @try { val = [self valueForKey:key]; } @catch(...) {}
        if (val) {
            WPLog(@"FriendDetect", @"[InitDump]   %@ = %@", key, ([val isKindOfClass:[NSString class]] || [val isKindOfClass:[NSNumber class]]) ? val : NSStringFromClass([val class]));
        }
    }
    free(props);
    return self;
}

static void hook_GetTransferPrepayRequest(id self, SEL _cmd, id request) {
    WPLog(@"FriendDetect", @"[Trace] GetTransferPrepayRequest: called on WCPayLogicMgr=%p, request=%p class=%@",
          self, request, [request class]);
    if ([request respondsToSelector:sel_registerName("m_nsReceiverUserName")]) {
        id un = ((id (*)(id, SEL))objc_msgSend)(request, sel_registerName("m_nsReceiverUserName"));
        WPLog(@"FriendDetect", @"[Trace]   receiver=%@", un);
    }
    if (_orig_GetTransferPrepayRequest) {
        ((void (*)(id, SEL, id))_orig_GetTransferPrepayRequest)(self, _cmd, request);
    }
    WPLog(@"FriendDetect", @"[Trace] GetTransferPrepayRequest: returned");
}

static BOOL hook_IsJailBreak(id self, SEL _cmd) {
    return NO;
}

static BOOL hook_HasInstallJailbreakPlugin(id self, SEL _cmd, id plugin) {
    if (plugin) { ((id (*)(id, SEL))objc_msgSend)(plugin, sel_registerName("retain")); }
    if (plugin) { ((void (*)(id, SEL))objc_msgSend)(plugin, sel_registerName("release")); }
    return NO;
}

static BOOL hook_JailBroken(id self, SEL _cmd) {
    return NO;
}

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
    WPLog(@"FriendDetect", @"[Hook] ── values: retcode=%@, retmsg=%@, wx_error_type=%@, wx_error_msg=%@, req_key=%@",
          rawDict[@"retcode"], rawDict[@"retmsg"], rawDict[@"wx_error_type"], rawDict[@"wx_error_msg"], rawDict[@"req_key"]);

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

    // — Hook WCPayTransferPrepayRequestStruct init — 诊断：打印 init 后所有属性 —
    {
        Class reqCls = objc_getClass("WCPayTransferPrepayRequestStruct");
        if (reqCls) {
            MSHookMessageEx(reqCls, @selector(init), (IMP)hook_TransferReqInit, &_orig_TransferReqInit);
            WPLog(@"FriendDetect", @"[Hook] ✓ WCPayTransferPrepayRequestStruct init (dump all props)");
        }
    }

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

    // — Hook 0: GetTransferPrepayRequest: 本身（诊断用 — 非微信优化 hook）—
    {
        SEL sel = sel_registerName("GetTransferPrepayRequest:");
        Method m = class_getInstanceMethod(payCls, sel);
        if (m) {
            MSHookMessageEx(payCls, sel, (IMP)hook_GetTransferPrepayRequest, &_orig_GetTransferPrepayRequest);
            WPLog(@"FriendDetect", @"[Hook] ✓ GetTransferPrepayRequest: (trace)");
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

    // — JailBreak Bypass — 微信优化 行 27108-27119 —
    // 多开微信是重签名 IPA，WCPayLogicMgr 可能通过 JailBreakHelper 检测 app 完整性并拒绝支付请求
    {
        Class jbCls = objc_getClass("JailBreakHelper");
        if (jbCls) {
            MSHookMessageEx(jbCls, sel_registerName("IsJailBreak"), (IMP)hook_IsJailBreak, &_orig_IsJailBreak);
            MSHookMessageEx(jbCls, sel_registerName("HasInstallJailbreakPlugin:"), (IMP)hook_HasInstallJailbreakPlugin, &_orig_HasInstallJailbreakPlugin);
            // JailBroken 是类方法，hook 在 metaclass 上
            MSHookMessageEx(object_getClass(jbCls), sel_registerName("JailBroken"), (IMP)hook_JailBroken, &_orig_JailBroken);
            WPLog(@"FriendDetect", @"[JailBreak] ✓ 3 hooks installed (IsJailBreak, HasInstallJailbreakPlugin:, JailBroken)");
        } else {
            WPLog(@"FriendDetect", @"[JailBreak] - JailBreakHelper not found");
        }
    }
}

@end