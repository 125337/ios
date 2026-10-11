//
//  MsgMergeHook.m — 消息合并本体（Phase1：分组打标 + 组内非首条藏头像/藏群昵称）
//
//  对齐 XOS mesMsgMerge 分组算法：
//    - 分组 pass（XOS FUN_000acf2c）：遍历 BaseMsgContentViewController.m_arrMessageNodeData，
//      相邻同发送者的消息打「组内非首条」关联对象标志
//    - 组中断判定（XOS FUN_000af458）：时间条 / 系统消息 / 撤回 / 拍一拍 / 消息类型 10000
//    - 仅群聊合并（XOS 同款：isChatroom 才走合并分支，私聊只减间距属后续阶段）
//    - 触发时机：viewWillAppear / reloadTableData 前全量重算（幂等，无缓存链）
//
//  生效点：CommonMessageViewModel.isShowHeadImage / isShowChatRoomDisplayName
//  （微信原生头像与群昵称显示决策方法，组内非首条返回 NO 即呈现合并外观）
//
//  与 HideAvatarHook 的链式共存：本 Hook 安装顺序在其后，orig 指向其垫片；
//  合并标志命中时短路返回 NO，未命中时透传 orig，两个功能语义正交可叠加。
//

#import "MsgMergeHook.h"
#import "MsgMergeConfig.h"
#import "../../Core/LogManager.h"
#import <substrate.h>
#import <objc/runtime.h>
#import <objc/message.h>
#import <dlfcn.h>

// ============================================================
// MARK: - 关联对象 key
// ============================================================

/// 组内非首条标志（藏头像 + 藏群昵称）
static char kMioMergeHidden;

// ============================================================
// MARK: - Original IMPs
// ============================================================

static IMP orig_BaseVC_viewDidLoad            = NULL;
static IMP orig_BaseVC_viewWillAppear         = NULL;
static IMP orig_BaseVC_reloadTableData        = NULL;
static IMP orig_VM_isShowHeadImage            = NULL;
static IMP orig_VM_isShowChatRoomDisplayName  = NULL;

// ============================================================
// MARK: - 组中断判定（对齐 XOS FUN_000af458，per-class 结果缓存）
// ============================================================

static CFMutableDictionaryRef _wpBreakerClassCache = NULL;

static BOOL wpIsGroupBreaker(id vm) {
    Class cls = object_getClass(vm);
    if (!_wpBreakerClassCache) {
        _wpBreakerClassCache = CFDictionaryCreateMutable(kCFAllocatorDefault, 0,
                                                         NULL, &kCFTypeDictionaryValueCallBacks);
    }
    NSNumber *cached = (__bridge NSNumber *)CFDictionaryGetValue(_wpBreakerClassCache, (__bridge const void *)cls);
    if (!cached) {
        NSString *name = NSStringFromClass(cls);
        // 对齐 XOS：containsString 类名匹配（时间条/系统/撤回/拍一拍/回铃）
        BOOL isBreaker = [name containsString:@"ChatTime"] ||
                         [name containsString:@"SystemMessage"] ||
                         [name containsString:@"Revoke"] ||
                         [name containsString:@"PatMessage"] ||
                         [name containsString:@"RingBack"];
        cached = @(isBreaker);
        CFDictionarySetValue(_wpBreakerClassCache, (__bridge const void *)cls, (__bridge const void *)cached);
    }
    if (cached.boolValue) return YES;

    // messageWrap.m_uiMessageType == 10000 → 系统消息，组中断
    id wrap = ((id (*)(id, SEL))objc_msgSend)(vm, @selector(messageWrap));
    if (wrap && [(id)wrap respondsToSelector:@selector(m_uiMessageType)]) {
        unsigned int msgType = ((unsigned int (*)(id, SEL))objc_msgSend)(wrap, @selector(m_uiMessageType));
        if (msgType == 10000) return YES;
    }
    return NO;
}

// ============================================================
// MARK: - 会话用户名（复用 HideAvatarHook 已验证的 GetContact 路径）
// ============================================================

static NSString *wpChatUsername(id chatVC) {
    id contact = nil;
    @try {
        contact = ((id (*)(id, SEL))objc_msgSend)(chatVC, @selector(GetContact));
    } @catch (NSException *e) {
        return nil;
    }
    if (!contact) return nil;
    @try {
        return ((id (*)(id, SEL))objc_msgSend)(contact, @selector(m_nsUsrName));
    } @catch (NSException *e) {
        return nil;
    }
}

// ============================================================
// MARK: - 分组 pass（对齐 XOS FUN_000acf2c 主循环）
// ============================================================

static void wpRunGroupPass(id chatVC) {
    MsgMergeConfig *config = [MsgMergeConfig shared];
    if (!config.msgMergeEnabled || !chatVC) return;

    // 仅群聊合并（对齐 XOS：私聊只走间距缩减，Phase1 不做）
    NSString *username = wpChatUsername(chatVC);
    if (![username containsString:@"@chatroom"]) return;

    // m_arrMessageNodeData 是 ivar 非 property，按 XOS 同款 class_getInstanceVariable 取
    Ivar ivar = class_getInstanceVariable(object_getClass(chatVC), "m_arrMessageNodeData");
    if (!ivar) return;
    NSArray *arr = object_getIvar(chatVC, ivar);
    NSUInteger n = arr.count;
    if (n == 0) return;

    NSString *prevFrom = nil;
    for (NSUInteger i = 0; i < n; i++) {
        id vm = arr[i];

        // 幂等重算：先清标志（含中断元素，保证关闭开关/分组变化后无残留）
        objc_setAssociatedObject(vm, &kMioMergeHidden, kCFBooleanFalse, OBJC_ASSOCIATION_RETAIN);

        if (wpIsGroupBreaker(vm)) {
            prevFrom = nil;
            continue;
        }

        id wrap = ((id (*)(id, SEL))objc_msgSend)(vm, @selector(messageWrap));
        NSString *from = wrap ? ((id (*)(id, SEL))objc_msgSend)(wrap, @selector(m_nsFromUsr)) : nil;
        if (!from.length) {
            prevFrom = nil;
            continue;
        }

        // 与前一条同发送者 → 组内非首条（XOS：群聊内 m_nsFromUsr 相等才合并）
        if (prevFrom && [from isEqualToString:prevFrom]) {
            objc_setAssociatedObject(vm, &kMioMergeHidden, kCFBooleanTrue, OBJC_ASSOCIATION_RETAIN);
        }
        prevFrom = from;
    }
}

// ============================================================
// MARK: - Hook 垫片
// ============================================================

static void hook_viewDidLoad(id self, SEL _cmd) {
    ((void (*)(id, SEL))orig_BaseVC_viewDidLoad)(self, _cmd);
    wpRunGroupPass(self);
}

static void hook_viewWillAppear(id self, SEL _cmd, BOOL animated) {
    wpRunGroupPass(self);
    ((void (*)(id, SEL, BOOL))orig_BaseVC_viewWillAppear)(self, _cmd, animated);
}

static id hook_reloadTableData(id self, SEL _cmd) {
    wpRunGroupPass(self);
    return ((id (*)(id, SEL))orig_BaseVC_reloadTableData)(self, _cmd);
}

static BOOL hook_isShowHeadImage(id self, SEL _cmd) {
    if (![MsgMergeConfig shared].msgMergeEnabled) {
        return ((BOOL (*)(id, SEL))orig_VM_isShowHeadImage)(self, _cmd);
    }
    NSNumber *hidden = objc_getAssociatedObject(self, &kMioMergeHidden);
    if (hidden.boolValue) return NO;  // 组内非首条 → 藏头像
    return ((BOOL (*)(id, SEL))orig_VM_isShowHeadImage)(self, _cmd);
}

static BOOL hook_isShowChatRoomDisplayName(id self, SEL _cmd) {
    if (![MsgMergeConfig shared].msgMergeEnabled) {
        return ((BOOL (*)(id, SEL))orig_VM_isShowChatRoomDisplayName)(self, _cmd);
    }
    NSNumber *hidden = objc_getAssociatedObject(self, &kMioMergeHidden);
    if (hidden.boolValue) return NO;  // 组内非首条 → 藏群昵称
    return ((BOOL (*)(id, SEL))orig_VM_isShowChatRoomDisplayName)(self, _cmd);
}

// ============================================================
// MARK: - Install
// ============================================================

static void wpSafeHook(Class cls, SEL sel, IMP newImp, IMP *origOut, const char *label) {
    if (!cls) {
        WPLog(@"MsgMerge", @"[Hook] ✗ %s: class not found", label);
        return;
    }
    // dladdr 检查 IMP 归属：来自其他 .dylib（如 WCR）则让位不挂（项目硬规则）
    Method m = class_getInstanceMethod(cls, sel);
    if (!m) {
        WPLog(@"MsgMerge", @"[Hook] ✗ %s: method not found", label);
        return;
    }
    IMP cur = method_getImplementation(m);
    Dl_info info;
    if (dladdr((void *)cur, &info) && info.dli_fname &&
        !strstr(info.dli_fname, "WeChat") && !strstr(info.dli_fname, "Mio")) {
        WPLog(@"MsgMerge", @"[Hook] ⇢ %s: IMP from %s, yield", label, info.dli_fname);
        return;
    }
    MSHookMessageEx(cls, sel, newImp, origOut);
    WPLog(@"MsgMerge", @"[Hook] ✓ %s", label);
}

@implementation MsgMergeHook

+ (void)install {
    WPLog(@"MsgMerge", @"MsgMergeHook install (Phase1 合并本体)");

    Class baseVC = objc_getClass("BaseMsgContentViewController");
    Class vmCls  = objc_getClass("CommonMessageViewModel");

    wpSafeHook(baseVC, @selector(viewDidLoad),
               (IMP)hook_viewDidLoad, &orig_BaseVC_viewDidLoad, "BaseMsgContentViewController.viewDidLoad");
    wpSafeHook(baseVC, @selector(viewWillAppear:),
               (IMP)hook_viewWillAppear, &orig_BaseVC_viewWillAppear, "BaseMsgContentViewController.viewWillAppear:");
    wpSafeHook(baseVC, @selector(reloadTableData),
               (IMP)hook_reloadTableData, &orig_BaseVC_reloadTableData, "BaseMsgContentViewController.reloadTableData");
    wpSafeHook(vmCls, @selector(isShowHeadImage),
               (IMP)hook_isShowHeadImage, &orig_VM_isShowHeadImage, "CommonMessageViewModel.isShowHeadImage");
    wpSafeHook(vmCls, NSSelectorFromString(@"isShowChatRoomDisplayName"),
               (IMP)hook_isShowChatRoomDisplayName, &orig_VM_isShowChatRoomDisplayName,
               "CommonMessageViewModel.isShowChatRoomDisplayName");

    WPLog(@"MsgMerge", @"MsgMergeHook install complete");
}

@end
