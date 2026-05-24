//
//  UIPurifyHook.m — 界面净化
//  微信优化方案：purifySafeHook(class_addMethod) + 子类优先安装
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <substrate.h>
#import <objc/runtime.h>
#import "../../Core/LogManager.h"

// ============================================================
// MARK: - 原始 IMP 指针
// ============================================================

// ——— 隐藏时间标签（ChatTimeCellView + ChatTimeViewModel）———
static IMP _orig_ChatTimeCell_initWithViewModel = NULL;
static IMP _orig_ChatTimeCell_layoutInternal = NULL;
static IMP _orig_ChatTimeCell_canBeReused = NULL;
static IMP _orig_ChatTimeCell_shouldLayoutIfNeeded = NULL;
static IMP _orig_ChatTimeVM_measure = NULL;

// ——— 隐藏撤回消息（SystemMessageCellView + SystemMessageViewModel）———
static IMP _orig_SysCell_initWithViewModel = NULL;
static IMP _orig_SysCell_layoutInternal = NULL;
static IMP _orig_SysCell_canBeReused = NULL;
static IMP _orig_SysCell_shouldLayoutIfNeeded = NULL;
static IMP _orig_SysVM_measure = NULL;

// ——— 隐藏拍一拍（AppPatMessageCellView + AppPatMessageViewModel）———
static IMP _orig_PatCell_initWithViewModel = NULL;
static IMP _orig_PatCell_layoutInternal = NULL;
static IMP _orig_PatCell_canBeReused = NULL;
static IMP _orig_PatCell_shouldLayoutIfNeeded = NULL;
static IMP _orig_PatVM_measure = NULL;

// ——— 隐藏语音红点（VoiceMessageCellView）———
static IMP _orig_VoiceCell_layoutSubviews = NULL;

// ——— 气泡透明（YYAsyncImageView）———
static IMP _orig_YYAsyncImage_layoutSubviews = NULL;

// ——— 禁用听写（MMGrowTextViewExtConfig）———
static IMP _orig_MMGrow_enableDictation = NULL;

// ——— 隐藏分割线（UIView 全局）———
static IMP _orig_UIView_layoutSubviews = NULL;

// ============================================================
// MARK: - 辅助
// ============================================================

static inline BOOL purifyReadConfig(NSString *key) {
    return [[NSUserDefaults standardUserDefaults] boolForKey:
            [@"WCP_" stringByAppendingString:key]];
}

/// 检查方法是否在当前类中被重写（非继承）
static BOOL purifyIsOverridden(Class cls, SEL sel) {
    IMP own = class_getMethodImplementation(cls, sel);
    Class superCls = class_getSuperclass(cls);
    if (!superCls) return YES;
    IMP parent = class_getMethodImplementation(superCls, sel);
    return (own != parent);
}

/// 安全 Hook：继承的方法先用 class_addMethod 创建本地副本隔离父类，再 Hook
/// class_addMethod 在子类方法表中创建一个指向父类原始 IMP 的独立条目，
/// 然后 MSHookMessageEx 只修改这个本地副本，父类方法表完全未动。
static BOOL purifySafeHook(Class cls, SEL sel, IMP replacement, IMP *orig) {
    if (!cls) return NO;
    if (purifyIsOverridden(cls, sel)) {
        MSHookMessageEx(cls, sel, replacement, orig);
        return YES;
    }
    // 继承的 → class_addMethod 创建本地副本
    Method parentMethod = class_getInstanceMethod(class_getSuperclass(cls), sel);
    if (!parentMethod) {
        MSHookMessageEx(cls, sel, replacement, orig);
        return YES;
    }
    IMP parentIMP = method_getImplementation(parentMethod);
    const char *types = method_getTypeEncoding(parentMethod);
    class_addMethod(cls, sel, parentIMP, types);
    MSHookMessageEx(cls, sel, replacement, orig);
    return YES;
}

// ============================================================
// MARK: - ChatTimeCellView
// ============================================================

static id hook_ChatTimeCell_initWithViewModel(id self, SEL _cmd, id viewModel) {
    id result = ((id (*)(id, SEL, id))_orig_ChatTimeCell_initWithViewModel)(self, _cmd, viewModel);
    if (result && purifyReadConfig(@"HideChatTimeCell")) {
        [result setHidden:YES];
    }
    return result;
}

static void hook_ChatTimeCell_layoutInternal(id self, SEL _cmd) {
    if (!purifyReadConfig(@"HideChatTimeCell"))
        ((void (*)(id, SEL))_orig_ChatTimeCell_layoutInternal)(self, _cmd);
}

static BOOL hook_ChatTimeCell_canBeReused(id self, SEL _cmd) {
    if (purifyReadConfig(@"HideChatTimeCell")) return YES;
    return ((BOOL (*)(id, SEL))_orig_ChatTimeCell_canBeReused)(self, _cmd);
}

static BOOL hook_ChatTimeCell_shouldLayoutIfNeeded(id self, SEL _cmd) {
    if (purifyReadConfig(@"HideChatTimeCell")) return NO;
    return ((BOOL (*)(id, SEL))_orig_ChatTimeCell_shouldLayoutIfNeeded)(self, _cmd);
}

static CGSize hook_ChatTimeVM_measure(id self, SEL _cmd, CGSize size) {
    if (purifyReadConfig(@"HideChatTimeCell")) return CGSizeZero;
    return ((CGSize (*)(id, SEL, CGSize))_orig_ChatTimeVM_measure)(self, _cmd, size);
}

// ============================================================
// MARK: - SystemMessageCellView（撤回消息隐藏）
// ============================================================

static id hook_SysCell_initWithViewModel(id self, SEL _cmd, id viewModel) {
    id result = ((id (*)(id, SEL, id))_orig_SysCell_initWithViewModel)(self, _cmd, viewModel);
    if (!result) return nil;
    if (purifyReadConfig(@"HideRevokeHint")) {
        [(UIView *)result setHidden:YES];
    }
    return result;
}

static void hook_SysCell_layoutInternal(id self, SEL _cmd) {
    if (purifyReadConfig(@"HideRevokeHint")) return;
    ((void (*)(id, SEL))_orig_SysCell_layoutInternal)(self, _cmd);
}

static BOOL hook_SysCell_canBeReused(id self, SEL _cmd) {
    if (purifyReadConfig(@"HideRevokeHint")) return YES;
    return ((BOOL (*)(id, SEL))_orig_SysCell_canBeReused)(self, _cmd);
}

static BOOL hook_SysCell_shouldLayoutIfNeeded(id self, SEL _cmd) {
    if (purifyReadConfig(@"HideRevokeHint")) return NO;
    return ((BOOL (*)(id, SEL))_orig_SysCell_shouldLayoutIfNeeded)(self, _cmd);
}

static CGSize hook_SysVM_measure(id self, SEL _cmd, CGSize size) {
    if (purifyReadConfig(@"HideRevokeHint")) return CGSizeZero;
    return ((CGSize (*)(id, SEL, CGSize))_orig_SysVM_measure)(self, _cmd, size);
}

// ============================================================
// MARK: - AppPatMessageCellView（拍一拍消息隐藏）
// ============================================================

static id hook_PatCell_initWithViewModel(id self, SEL _cmd, id viewModel) {
    id result = ((id (*)(id, SEL, id))_orig_PatCell_initWithViewModel)(self, _cmd, viewModel);
    if (!result) return nil;
    if (purifyReadConfig(@"HidePatHint")) {
        [(UIView *)result setHidden:YES];
    }
    return result;
}

static void hook_PatCell_layoutInternal(id self, SEL _cmd) {
    if (purifyReadConfig(@"HidePatHint")) return;
    ((void (*)(id, SEL))_orig_PatCell_layoutInternal)(self, _cmd);
}

static BOOL hook_PatCell_canBeReused(id self, SEL _cmd) {
    if (purifyReadConfig(@"HidePatHint")) return YES;
    return ((BOOL (*)(id, SEL))_orig_PatCell_canBeReused)(self, _cmd);
}

static BOOL hook_PatCell_shouldLayoutIfNeeded(id self, SEL _cmd) {
    if (purifyReadConfig(@"HidePatHint")) return NO;
    return ((BOOL (*)(id, SEL))_orig_PatCell_shouldLayoutIfNeeded)(self, _cmd);
}

static CGSize hook_PatVM_measure(id self, SEL _cmd, CGSize size) {
    if (purifyReadConfig(@"HidePatHint")) return CGSizeZero;
    return ((CGSize (*)(id, SEL, CGSize))_orig_PatVM_measure)(self, _cmd, size);
}

// ============================================================
// MARK: - VoiceMessageCellView
// ============================================================

static void hook_VoiceCell_layoutSubviews(id self, SEL _cmd) {
    if (!purifyReadConfig(@"HideVoiceBubble"))
        ((void (*)(id, SEL))_orig_VoiceCell_layoutSubviews)(self, _cmd);
}

// ============================================================
// MARK: - YYAsyncImageView
// ============================================================

static void hook_YYAsyncImage_layoutSubviews(id self, SEL _cmd) {
    if (!purifyReadConfig(@"HideChatBg")) {
        ((void (*)(id, SEL))_orig_YYAsyncImage_layoutSubviews)(self, _cmd);
    } else {
        [self setAlpha:0];
        ((void (*)(id, SEL))_orig_YYAsyncImage_layoutSubviews)(self, _cmd);
    }
}

// ============================================================
// MARK: - MMGrowTextViewExtConfig
// ============================================================

static BOOL hook_MMGrow_enableDictation(id self, SEL _cmd) {
    if (purifyReadConfig(@"DisableDictation")) return NO;
    return ((BOOL (*)(id, SEL))_orig_MMGrow_enableDictation)(self, _cmd);
}

// ============================================================
// MARK: - UIView 分割线全局隐藏
// ============================================================

static void hook_UIView_layoutSubviews(id self, SEL _cmd) {
    ((void (*)(id, SEL))_orig_UIView_layoutSubviews)(self, _cmd);
    if (purifyReadConfig(@"HideSeparator")) {
        Class sepClass = NSClassFromString(@"_UITableViewCellSeparatorView");
        if (sepClass && [self isKindOfClass:sepClass]) {
            [self setHidden:YES];
        }
    }
}

// ============================================================
// MARK: - Install
// ============================================================

@interface UIPurifyHook : NSObject
@end

@implementation UIPurifyHook

+ (void)install {
    WPLog(@"UIPurify", @"UIPurifyHook install (purifySafeHook方案)");

    // ★ 关键：先 Hook 子类（AppPat），再 Hook 父类（System）
    // purifySafeHook 的 class_addMethod 搭配子类优先安装，确保子类 _orig
    // 指向父类原始 IMP，不会经过父类的 Hook 链。

    // ——— ① 隐藏拍一拍：AppPatMessageCellView + AppPatMessageViewModel ———
    {
        Class cls = objc_getClass("AppPatMessageCellView");
        if (cls) {
            MSHookMessageEx(cls, sel_registerName("initWithViewModel:"),
                (IMP)hook_PatCell_initWithViewModel, &_orig_PatCell_initWithViewModel);
            MSHookMessageEx(cls, sel_registerName("layoutInternal"),
                (IMP)hook_PatCell_layoutInternal, &_orig_PatCell_layoutInternal);
            purifySafeHook(cls, sel_registerName("canBeReused"),
                (IMP)hook_PatCell_canBeReused, &_orig_PatCell_canBeReused);
            purifySafeHook(cls, sel_registerName("shouldLayoutIfNeeded"),
                (IMP)hook_PatCell_shouldLayoutIfNeeded, &_orig_PatCell_shouldLayoutIfNeeded);
            WPLog(@"UIPurify", @"[Hook] ✓ AppPatMessageCellView");
        }
        Class vmCls = objc_getClass("AppPatMessageViewModel");
        if (vmCls) {
            purifySafeHook(vmCls, sel_registerName("measure:"),
                (IMP)hook_PatVM_measure, &_orig_PatVM_measure);
            WPLog(@"UIPurify", @"[Hook] ✓ AppPatMessageViewModel.measure:");
        }
    }

    // ——— ② 隐藏撤回消息：SystemMessageCellView + SystemMessageViewModel ———
    {
        Class cls = objc_getClass("SystemMessageCellView");
        if (cls) {
            MSHookMessageEx(cls, sel_registerName("initWithViewModel:"),
                (IMP)hook_SysCell_initWithViewModel, &_orig_SysCell_initWithViewModel);
            MSHookMessageEx(cls, sel_registerName("layoutInternal"),
                (IMP)hook_SysCell_layoutInternal, &_orig_SysCell_layoutInternal);
            purifySafeHook(cls, sel_registerName("canBeReused"),
                (IMP)hook_SysCell_canBeReused, &_orig_SysCell_canBeReused);
            purifySafeHook(cls, sel_registerName("shouldLayoutIfNeeded"),
                (IMP)hook_SysCell_shouldLayoutIfNeeded, &_orig_SysCell_shouldLayoutIfNeeded);
            WPLog(@"UIPurify", @"[Hook] ✓ SystemMessageCellView");
        }
        Class vmCls = objc_getClass("SystemMessageViewModel");
        if (vmCls) {
            purifySafeHook(vmCls, sel_registerName("measure:"),
                (IMP)hook_SysVM_measure, &_orig_SysVM_measure);
            WPLog(@"UIPurify", @"[Hook] ✓ SystemMessageViewModel.measure:");
        }
    }

    // ——— ③ ChatTimeCellView ———
    {
        Class cls = objc_getClass("ChatTimeCellView");
        if (cls) {
            MSHookMessageEx(cls, sel_registerName("initWithViewModel:"),
                (IMP)hook_ChatTimeCell_initWithViewModel, &_orig_ChatTimeCell_initWithViewModel);
            MSHookMessageEx(cls, sel_registerName("layoutInternal"),
                (IMP)hook_ChatTimeCell_layoutInternal, &_orig_ChatTimeCell_layoutInternal);
            purifySafeHook(cls, sel_registerName("canBeReused"),
                (IMP)hook_ChatTimeCell_canBeReused, &_orig_ChatTimeCell_canBeReused);
            purifySafeHook(cls, sel_registerName("shouldLayoutIfNeeded"),
                (IMP)hook_ChatTimeCell_shouldLayoutIfNeeded, &_orig_ChatTimeCell_shouldLayoutIfNeeded);
            WPLog(@"UIPurify", @"[Hook] ✓ ChatTimeCellView");
        }
        Class vmCls = objc_getClass("ChatTimeViewModel");
        if (vmCls) {
            purifySafeHook(vmCls, sel_registerName("measure:"),
                (IMP)hook_ChatTimeVM_measure, &_orig_ChatTimeVM_measure);
            WPLog(@"UIPurify", @"[Hook] ✓ ChatTimeViewModel.measure:");
        }
    }

    // ——— ④ VoiceMessageCellView ———
    {
        Class cls = objc_getClass("VoiceMessageCellView");
        if (cls) {
            MSHookMessageEx(cls, @selector(layoutSubviews),
                (IMP)hook_VoiceCell_layoutSubviews, &_orig_VoiceCell_layoutSubviews);
            WPLog(@"UIPurify", @"[Hook] ✓ VoiceMessageCellView");
        }
    }

    // ——— ⑤ YYAsyncImageView ———
    {
        Class cls = objc_getClass("YYAsyncImageView");
        if (cls) {
            MSHookMessageEx(cls, @selector(layoutSubviews),
                (IMP)hook_YYAsyncImage_layoutSubviews, &_orig_YYAsyncImage_layoutSubviews);
            WPLog(@"UIPurify", @"[Hook] ✓ YYAsyncImageView");
        }
    }

    // ——— ⑥ MMGrowTextViewExtConfig ———
    {
        Class cls = objc_getClass("MMGrowTextViewExtConfig");
        if (cls) {
            MSHookMessageEx(cls, sel_registerName("enableDictation"),
                (IMP)hook_MMGrow_enableDictation, &_orig_MMGrow_enableDictation);
            WPLog(@"UIPurify", @"[Hook] ✓ MMGrowTextViewExtConfig.enableDictation");
        }
    }

    // ——— ⑦ UIView 分割线 ———
    {
        MSHookMessageEx([UIView class], @selector(layoutSubviews),
            (IMP)hook_UIView_layoutSubviews, &_orig_UIView_layoutSubviews);
        WPLog(@"UIPurify", @"[Hook] ✓ UIView.layoutSubviews (separator)");
    }

    WPLog(@"UIPurify", @"UIPurifyHook install complete (purifySafeHook)");
}

@end