//
//  UIPurifyHook.m — 界面净化
//  完全对齐微信优化 1.6.5 反编译 (FUN_00025688)
//  全部 _MSHookMessageEx 直连，无 class_addMethod / purifySafeHook
//  安装顺序：ChatTime → SystemMessage → AppPat → Voice → YYAsync → MMGrowText
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
// ChatTimeCellView
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
// SystemMessageCellView — 参照 FUN_00025c48..FUN_00025eb4
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
// AppPatMessageCellView — 参照 FUN_00025f64..FUN_000261d0
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
// MARK: - Install（完全对齐 FUN_00025688 安装顺序）
// ============================================================

@interface UIPurifyHook : NSObject
@end

@implementation UIPurifyHook

+ (void)install {
    WPLog(@"UIPurify", @"UIPurifyHook install (对齐微信优化 1.6.5)");
    Class cls;

    // ① ChatTimeCellView + ChatTimeViewModel
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
        WPLog(@"UIPurify", @"[Hook] ✓ ChatTimeViewModel.measure:");
    }

    // ② SystemMessageCellView + SystemMessageViewModel
    cls = objc_getClass("SystemMessageCellView");
    if (cls) {
        MSHookMessageEx(cls, sel_registerName("initWithViewModel:"),
            (IMP)hook_SysCell_initWithViewModel, &_orig_SysCell_initWithViewModel);
        MSHookMessageEx(cls, sel_registerName("layoutInternal"),
            (IMP)hook_SysCell_layoutInternal, &_orig_SysCell_layoutInternal);
        MSHookMessageEx(cls, sel_registerName("canBeReused"),
            (IMP)hook_SysCell_canBeReused, &_orig_SysCell_canBeReused);
        MSHookMessageEx(cls, sel_registerName("shouldLayoutIfNeeded"),
            (IMP)hook_SysCell_shouldLayoutIfNeeded, &_orig_SysCell_shouldLayoutIfNeeded);
        WPLog(@"UIPurify", @"[Hook] ✓ SystemMessageCellView");
    }
    cls = objc_getClass("SystemMessageViewModel");
    if (cls) {
        MSHookMessageEx(cls, sel_registerName("measure:"),
            (IMP)hook_SysVM_measure, &_orig_SysVM_measure);
        WPLog(@"UIPurify", @"[Hook] ✓ SystemMessageViewModel.measure:");
    }

    // ③ AppPatMessageCellView + AppPatMessageViewModel
    cls = objc_getClass("AppPatMessageCellView");
    if (cls) {
        MSHookMessageEx(cls, sel_registerName("initWithViewModel:"),
            (IMP)hook_PatCell_initWithViewModel, &_orig_PatCell_initWithViewModel);
        MSHookMessageEx(cls, sel_registerName("layoutInternal"),
            (IMP)hook_PatCell_layoutInternal, &_orig_PatCell_layoutInternal);
        MSHookMessageEx(cls, sel_registerName("canBeReused"),
            (IMP)hook_PatCell_canBeReused, &_orig_PatCell_canBeReused);
        MSHookMessageEx(cls, sel_registerName("shouldLayoutIfNeeded"),
            (IMP)hook_PatCell_shouldLayoutIfNeeded, &_orig_PatCell_shouldLayoutIfNeeded);
        WPLog(@"UIPurify", @"[Hook] ✓ AppPatMessageCellView");
    }
    cls = objc_getClass("AppPatMessageViewModel");
    if (cls) {
        MSHookMessageEx(cls, sel_registerName("measure:"),
            (IMP)hook_PatVM_measure, &_orig_PatVM_measure);
        WPLog(@"UIPurify", @"[Hook] ✓ AppPatMessageViewModel.measure:");
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
        WPLog(@"UIPurify", @"[Hook] ✓ MMGrowTextViewExtConfig.enableDictation");
    }

    // ⑦ UIView 分割线
    MSHookMessageEx([UIView class], @selector(layoutSubviews),
        (IMP)hook_UIView_layoutSubviews, &_orig_UIView_layoutSubviews);
    WPLog(@"UIPurify", @"[Hook] ✓ UIView.layoutSubviews (separator)");

    WPLog(@"UIPurify", @"UIPurifyHook install complete (对齐微信优化)");
}

@end