//
//  UIPurifyHook.m — 界面净化
//  完全对齐微信优化 1.6.5 hook 函数逻辑 + 运行时安全回退
//  Hook 函数逻辑 = FUN_00025c48/5f64/5eb4 精确对齐
//  安装顺序 = FUN_00025688 (ChatTime→Sys→Pat)
//  安全回退 = 子类未覆写方法时 class_addMethod 隔离父类 hook，避免 _orig 链污染
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <substrate.h>
#import <objc/runtime.h>
#import "../../Core/LogManager.h"

static inline BOOL purifyReadConfig(NSString *key) {
    return [[NSUserDefaults standardUserDefaults] boolForKey:
            [@"WCP_" stringByAppendingString:key]];
}

// ============================================================
// 安全 hook 工具：检测方法是否被子类覆写，未覆写则 class_addMethod 隔离
// ============================================================

/// 检测 cls 是否覆写了 sel（IMP 与父类不同）
static BOOL purifyIsOverridden(Class cls, SEL sel) {
    Class superCls = class_getSuperclass(cls);
    if (!superCls) return YES; // NSObject 无父类
    IMP own = class_getMethodImplementation(cls, sel);
    IMP parent = class_getMethodImplementation(superCls, sel);
    return (own != parent);
}

/// 安全 hook：覆写→直接 MSHookMessageEx；未覆写→class_addMethod 本地副本→MSHookMessageEx
static void purifySafeHook(Class cls, SEL sel, IMP replacement, IMP *orig) {
    if (!cls) return;
    if (purifyIsOverridden(cls, sel)) {
        // 子类覆写了方法，微信优化级别安全：_orig = 子类自己的 IMP
        MSHookMessageEx(cls, sel, replacement, orig);
        return;
    }
    // 子类未覆写（继承自父类）：先创建本地方法副本隔离父类
    Method parentMethod = class_getInstanceMethod(class_getSuperclass(cls), sel);
    if (!parentMethod) {
        MSHookMessageEx(cls, sel, replacement, orig);
        return;
    }
    IMP parentIMP = method_getImplementation(parentMethod);
    const char *types = method_getTypeEncoding(parentMethod);
    class_addMethod(cls, sel, parentIMP, types);
    // class_addMethod 在子类方法表创建独立条目指向父类原始 IMP
    // MSHookMessageEx 修改这个本地副本，父类方法表完整保留
    MSHookMessageEx(cls, sel, replacement, orig);
    // _orig = 父类原始 IMP，与父类 hook 完全隔离
}

// ============================================================
// ChatTimeCellView — 对齐 FUN_0002592c/59fc/5a78/5b08
// ============================================================

static IMP _orig_ChatTimeCell_initWithViewModel = NULL;
static IMP _orig_ChatTimeCell_layoutInternal = NULL;
static IMP _orig_ChatTimeCell_canBeReused = NULL;
static IMP _orig_ChatTimeCell_shouldLayoutIfNeeded = NULL;
static IMP _orig_ChatTimeVM_measure = NULL;

static id hook_ChatTimeCell_initWithViewModel(id self, SEL _cmd, id viewModel) {
    id result = ((id (*)(id, SEL, id))_orig_ChatTimeCell_initWithViewModel)(self, _cmd, viewModel);
    if (result && purifyReadConfig(@"HideChatTimeCell")) {
        [result setHidden:YES];
        [result setFrame:[result frame]];
    }
    return result;
}

static void hook_ChatTimeCell_layoutInternal(id self, SEL _cmd) {
    if (purifyReadConfig(@"HideChatTimeCell")) return;
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
// SystemMessageCellView — 对齐 FUN_00025c48/5d18/5d94/5e24/5eb4
// ============================================================

static IMP _orig_SysCell_initWithViewModel = NULL;
static IMP _orig_SysCell_layoutInternal = NULL;
static IMP _orig_SysCell_canBeReused = NULL;
static IMP _orig_SysCell_shouldLayoutIfNeeded = NULL;
static IMP _orig_SysVM_measure = NULL;

static id hook_SysCell_initWithViewModel(id self, SEL _cmd, id viewModel) {
    id result = ((id (*)(id, SEL, id))_orig_SysCell_initWithViewModel)(self, _cmd, viewModel);
    if (result && purifyReadConfig(@"HideRevokeHint")) {
        [result setHidden:YES];
        [result setFrame:[result frame]];
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
// AppPatMessageCellView — 对齐 FUN_00025f64/6034/60b0/6140/61d0
// ============================================================

static IMP _orig_PatCell_initWithViewModel = NULL;
static IMP _orig_PatCell_layoutInternal = NULL;
static IMP _orig_PatCell_canBeReused = NULL;
static IMP _orig_PatCell_shouldLayoutIfNeeded = NULL;
static IMP _orig_PatVM_measure = NULL;

static id hook_PatCell_initWithViewModel(id self, SEL _cmd, id viewModel) {
    id result = ((id (*)(id, SEL, id))_orig_PatCell_initWithViewModel)(self, _cmd, viewModel);
    if (result && purifyReadConfig(@"HidePatHint")) {
        [result setHidden:YES];
        [result setFrame:[result frame]];
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
// VoiceMessageCellView
// ============================================================

static IMP _orig_VoiceCell_layoutSubviews = NULL;

static void hook_VoiceCell_layoutSubviews(id self, SEL _cmd) {
    if (purifyReadConfig(@"HideVoiceBubble")) return;
    ((void (*)(id, SEL))_orig_VoiceCell_layoutSubviews)(self, _cmd);
}

// ============================================================
// YYAsyncImageView
// ============================================================

static IMP _orig_YYAsyncImage_layoutSubviews = NULL;

static void hook_YYAsyncImage_layoutSubviews(id self, SEL _cmd) {
    if (!purifyReadConfig(@"HideChatBg")) {
        ((void (*)(id, SEL))_orig_YYAsyncImage_layoutSubviews)(self, _cmd);
    } else {
        [self setAlpha:0];
        ((void (*)(id, SEL))_orig_YYAsyncImage_layoutSubviews)(self, _cmd);
    }
}

// ============================================================
// MMGrowTextViewExtConfig
// ============================================================

static IMP _orig_MMGrow_enableDictation = NULL;

static BOOL hook_MMGrow_enableDictation(id self, SEL _cmd) {
    if (purifyReadConfig(@"DisableDictation")) return NO;
    return ((BOOL (*)(id, SEL))_orig_MMGrow_enableDictation)(self, _cmd);
}

// ============================================================
// UIView 分割线
// ============================================================

static IMP _orig_UIView_layoutSubviews = NULL;

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
// MARK: - Install（对齐 FUN_00025688 安装顺序）
//   微信优化自身可安全直接 MSHookMessageEx 因为 AppPat 覆写了所有方法。
//   我们用 purifySafeHook 做运行时兼容，未覆写的方法自动 class_addMethod 兜底。
// ============================================================

@interface UIPurifyHook : NSObject
@end

@implementation UIPurifyHook

+ (void)install {
    WPLog(@"UIPurify", @"UIPurifyHook install (对齐微信优化 1.6.5 + 运行时安全)");
    Class cls;

    // ① ChatTimeCellView + ChatTimeViewModel — 直接 MSHookMessageEx（无子类冲突）
    cls = objc_getClass("ChatTimeCellView");
    if (cls) {
        MSHookMessageEx(cls, sel_registerName("initWithViewModel:"),
            (IMP)hook_ChatTimeCell_initWithViewModel, &_orig_ChatTimeCell_initWithViewModel);
        MSHookMessageEx(cls, sel_registerName("layoutInternal"),
            (IMP)hook_ChatTimeCell_layoutInternal, &_orig_ChatTimeCell_layoutInternal);
        MSHookMessageEx(cls, sel_registerName("canBeReused"),
            (IMP)hook_ChatTimeCell_canBeReused, &_orig_ChatTimeCell_canBeReused);
        MSHookMessageEx(cls, sel_registerName("shouldLayoutIfNeeded"),
            (IMP)hook_ChatTimeCell_shouldLayoutIfNeeded, &_orig_ChatTimeCell_shouldLayoutIfNeeded);
        WPLog(@"UIPurify", @"[Hook] ✓ ChatTimeCellView");
    }
    cls = objc_getClass("ChatTimeViewModel");
    if (cls) {
        MSHookMessageEx(cls, sel_registerName("measure:"),
            (IMP)hook_ChatTimeVM_measure, &_orig_ChatTimeVM_measure);
        WPLog(@"UIPurify", @"[Hook] ✓ ChatTimeViewModel");
    }

    // ② SystemMessageCellView + SystemMessageViewModel — purifySafeHook（TintHook 修改了 Base 层，需隔离）
    cls = objc_getClass("SystemMessageCellView");
    if (cls) {
        purifySafeHook(cls, sel_registerName("initWithViewModel:"),
            (IMP)hook_SysCell_initWithViewModel, &_orig_SysCell_initWithViewModel);
        purifySafeHook(cls, sel_registerName("layoutInternal"),
            (IMP)hook_SysCell_layoutInternal, &_orig_SysCell_layoutInternal);
        purifySafeHook(cls, sel_registerName("canBeReused"),
            (IMP)hook_SysCell_canBeReused, &_orig_SysCell_canBeReused);
        purifySafeHook(cls, sel_registerName("shouldLayoutIfNeeded"),
            (IMP)hook_SysCell_shouldLayoutIfNeeded, &_orig_SysCell_shouldLayoutIfNeeded);
        WPLog(@"UIPurify", @"[Hook] ✓ SystemMessageCellView");
    }
    cls = objc_getClass("SystemMessageViewModel");
    if (cls) {
        purifySafeHook(cls, sel_registerName("measure:"),
            (IMP)hook_SysVM_measure, &_orig_SysVM_measure);
        WPLog(@"UIPurify", @"[Hook] ✓ SystemMessageViewModel");
    }

    // ③ AppPatMessageCellView + AppPatMessageViewModel — purifySafeHook（子类安全回退）
    cls = objc_getClass("AppPatMessageCellView");
    if (cls) {
        purifySafeHook(cls, sel_registerName("initWithViewModel:"),
            (IMP)hook_PatCell_initWithViewModel, &_orig_PatCell_initWithViewModel);
        purifySafeHook(cls, sel_registerName("layoutInternal"),
            (IMP)hook_PatCell_layoutInternal, &_orig_PatCell_layoutInternal);
        purifySafeHook(cls, sel_registerName("canBeReused"),
            (IMP)hook_PatCell_canBeReused, &_orig_PatCell_canBeReused);
        purifySafeHook(cls, sel_registerName("shouldLayoutIfNeeded"),
            (IMP)hook_PatCell_shouldLayoutIfNeeded, &_orig_PatCell_shouldLayoutIfNeeded);
        WPLog(@"UIPurify", @"[Hook] ✓ AppPatMessageCellView");
    }
    cls = objc_getClass("AppPatMessageViewModel");
    if (cls) {
        purifySafeHook(cls, sel_registerName("measure:"),
            (IMP)hook_PatVM_measure, &_orig_PatVM_measure);
        WPLog(@"UIPurify", @"[Hook] ✓ AppPatMessageViewModel");
    }

    // ④ VoiceMessageCellView
    cls = objc_getClass("VoiceMessageCellView");
    if (cls) {
        MSHookMessageEx(cls, @selector(layoutSubviews),
            (IMP)hook_VoiceCell_layoutSubviews, &_orig_VoiceCell_layoutSubviews);
        WPLog(@"UIPurify", @"[Hook] ✓ VoiceMessageCellView");
    }

    // ⑤ YYAsyncImageView
    cls = objc_getClass("YYAsyncImageView");
    if (cls) {
        MSHookMessageEx(cls, @selector(layoutSubviews),
            (IMP)hook_YYAsyncImage_layoutSubviews, &_orig_YYAsyncImage_layoutSubviews);
        WPLog(@"UIPurify", @"[Hook] ✓ YYAsyncImageView");
    }

    // ⑥ MMGrowTextViewExtConfig
    cls = objc_getClass("MMGrowTextViewExtConfig");
    if (cls) {
        MSHookMessageEx(cls, sel_registerName("enableDictation"),
            (IMP)hook_MMGrow_enableDictation, &_orig_MMGrow_enableDictation);
        WPLog(@"UIPurify", @"[Hook] ✓ MMGrowTextViewExtConfig");
    }

    // ⑦ UIView 分割线
    MSHookMessageEx([UIView class], @selector(layoutSubviews),
        (IMP)hook_UIView_layoutSubviews, &_orig_UIView_layoutSubviews);
    WPLog(@"UIPurify", @"[Hook] ✓ UIView.layoutSubviews");

    WPLog(@"UIPurify", @"UIPurifyHook install complete");
}

@end