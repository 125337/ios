//
//  UIPurifyHook.m — 界面净化
//  完全匹配微信优化 1.6.5 反编译实现 (FUN_00025688)
//  安装顺序：ChatTime → SystemMessage → AppPat → Voice → YYAsync → MMGrowText
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <substrate.h>
#import <objc/runtime.h>
#import "../../Core/LogManager.h"

// ============================================================
// MARK: - Config & ordinals
// ============================================================

static inline BOOL purifyReadConfig(NSString *key) {
    return [[NSUserDefaults standardUserDefaults] boolForKey:
            [@"WCP_" stringByAppendingString:key]];
}

// ============================================================
// MARK: - ChatTimeCellView (参照 FUN_0002592c / FUN_000259fc / …)
// ============================================================

static void (*_orig_ChatTimeCell_initWithViewModel)(id, SEL, id);
static void (*_orig_ChatTimeCell_layoutInternal)(id, SEL);
static BOOL (*_orig_ChatTimeCell_canBeReused)(id, SEL);
static BOOL (*_orig_ChatTimeCell_shouldLayoutIfNeeded)(id, SEL);
static CGSize (*_orig_ChatTimeVM_measure)(id, SEL, CGSize);

static id hook_ChatTimeCell_initWithViewModel(id self, SEL _cmd, id viewModel) {
    id result = ((id (*)(id, SEL, id))_orig_ChatTimeCell_initWithViewModel)(self, _cmd, viewModel);
    if (result && purifyReadConfig(@"HideChatTimeCell")) {
        [result setHidden:YES];
        [result setFrame:[result frame]];
    }
    return result;
}

static void hook_ChatTimeCell_layoutInternal(id self, SEL _cmd) {
    if (!purifyReadConfig(@"HideChatTimeCell"))
        _orig_ChatTimeCell_layoutInternal(self, _cmd);
}

static BOOL hook_ChatTimeCell_canBeReused(id self, SEL _cmd) {
    if (purifyReadConfig(@"HideChatTimeCell")) return YES;
    return _orig_ChatTimeCell_canBeReused(self, _cmd);
}

static BOOL hook_ChatTimeCell_shouldLayoutIfNeeded(id self, SEL _cmd) {
    if (purifyReadConfig(@"HideChatTimeCell")) return NO;
    return _orig_ChatTimeCell_shouldLayoutIfNeeded(self, _cmd);
}

static CGSize hook_ChatTimeVM_measure(id self, SEL _cmd, CGSize size) {
    if (purifyReadConfig(@"HideChatTimeCell")) return CGSizeZero;
    return _orig_ChatTimeVM_measure(self, _cmd, size);
}

// ============================================================
// MARK: - SystemMessageCellView (参照 FUN_00025c48 / FUN_00025d18 / …)
// ============================================================

static void (*_orig_SysCell_initWithViewModel)(id, SEL, id);
static void (*_orig_SysCell_layoutInternal)(id, SEL);
static BOOL (*_orig_SysCell_canBeReused)(id, SEL);
static BOOL (*_orig_SysCell_shouldLayoutIfNeeded)(id, SEL);
static CGSize (*_orig_SysVM_measure)(id, SEL, CGSize);

static id hook_SysCell_initWithViewModel(id self, SEL _cmd, id viewModel) {
    id result = ((id (*)(id, SEL, id))_orig_SysCell_initWithViewModel)(self, _cmd, viewModel);
    if (result && purifyReadConfig(@"HideRevokeHint")) {
        [result setHidden:YES];
        [result setFrame:[result frame]];
    }
    return result;
}

static void hook_SysCell_layoutInternal(id self, SEL _cmd) {
    if (!purifyReadConfig(@"HideRevokeHint"))
        _orig_SysCell_layoutInternal(self, _cmd);
}

static BOOL hook_SysCell_canBeReused(id self, SEL _cmd) {
    if (purifyReadConfig(@"HideRevokeHint")) return YES;
    return _orig_SysCell_canBeReused(self, _cmd);
}

static BOOL hook_SysCell_shouldLayoutIfNeeded(id self, SEL _cmd) {
    if (purifyReadConfig(@"HideRevokeHint")) return NO;
    return _orig_SysCell_shouldLayoutIfNeeded(self, _cmd);
}

static CGSize hook_SysVM_measure(id self, SEL _cmd, CGSize size) {
    if (purifyReadConfig(@"HideRevokeHint")) return CGSizeZero;
    return _orig_SysVM_measure(self, _cmd, size);
}

// ============================================================
// MARK: - AppPatMessageCellView (参照 FUN_00025f64 / FUN_00026034 / …)
// ============================================================

static void (*_orig_PatCell_initWithViewModel)(id, SEL, id);
static void (*_orig_PatCell_layoutInternal)(id, SEL);
static BOOL (*_orig_PatCell_canBeReused)(id, SEL);
static BOOL (*_orig_PatCell_shouldLayoutIfNeeded)(id, SEL);
static CGSize (*_orig_PatVM_measure)(id, SEL, CGSize);

static id hook_PatCell_initWithViewModel(id self, SEL _cmd, id viewModel) {
    id result = ((id (*)(id, SEL, id))_orig_PatCell_initWithViewModel)(self, _cmd, viewModel);
    if (result && purifyReadConfig(@"HidePatHint")) {
        [result setHidden:YES];
        [result setFrame:[result frame]];
    }
    return result;
}

static void hook_PatCell_layoutInternal(id self, SEL _cmd) {
    if (!purifyReadConfig(@"HidePatHint"))
        _orig_PatCell_layoutInternal(self, _cmd);
}

static BOOL hook_PatCell_canBeReused(id self, SEL _cmd) {
    if (purifyReadConfig(@"HidePatHint")) return YES;
    return _orig_PatCell_canBeReused(self, _cmd);
}

static BOOL hook_PatCell_shouldLayoutIfNeeded(id self, SEL _cmd) {
    if (purifyReadConfig(@"HidePatHint")) return NO;
    return _orig_PatCell_shouldLayoutIfNeeded(self, _cmd);
}

static CGSize hook_PatVM_measure(id self, SEL _cmd, CGSize size) {
    if (purifyReadConfig(@"HidePatHint")) return CGSizeZero;
    return _orig_PatVM_measure(self, _cmd, size);
}

// ============================================================
// MARK: - VoiceMessageCellView (参照 FUN_00026280)
// ============================================================

static void (*_orig_VoiceCell_layoutSubviews)(id, SEL);

static void hook_VoiceCell_layoutSubviews(id self, SEL _cmd) {
    if (!purifyReadConfig(@"HideVoiceBubble"))
        _orig_VoiceCell_layoutSubviews(self, _cmd);
}

// ============================================================
// MARK: - YYAsyncImageView (参照 FUN_00026384)
// ============================================================

static void (*_orig_YYAsync_layoutSubviews)(id, SEL);

static void hook_YYAsync_layoutSubviews(id self, SEL _cmd) {
    if (!purifyReadConfig(@"HideChatBg")) {
        _orig_YYAsync_layoutSubviews(self, _cmd);
    } else {
        [self setAlpha:0];
        _orig_YYAsync_layoutSubviews(self, _cmd);
    }
}

// ============================================================
// MARK: - MMGrowTextViewExtConfig (参照 FUN_000264f8)
// ============================================================

static BOOL (*_orig_MMGrowText_enableDictation)(id, SEL);

static BOOL hook_MMGrowText_enableDictation(id self, SEL _cmd) {
    if (purifyReadConfig(@"DisableDictation")) return NO;
    return _orig_MMGrowText_enableDictation(self, _cmd);
}

// ============================================================
// MARK: - UIView separator 通用隐藏
// ============================================================

static void (*_orig_UIView_layoutSubviews)(id, SEL);

static void hook_UIView_layoutSubviews(id self, SEL _cmd) {
    _orig_UIView_layoutSubviews(self, _cmd);
    if (purifyReadConfig(@"HideSeparator")) {
        Class sepClass = NSClassFromString(@"_UITableViewCellSeparatorView");
        if (sepClass && [self isKindOfClass:sepClass]) {
            [self setHidden:YES];
        }
    }
}

// ============================================================
// MARK: - Install（完全匹配微信优化安装顺序）
// ============================================================

@interface UIPurifyHook : NSObject
@end

@implementation UIPurifyHook

+ (void)install {
    WPLog(@"UIPurify", @"UIPurifyHook install (微信优化 1.6.5 方案)");

    Class cls;

    // ① ChatTimeCellView — 参照 FUN_0002592c..FUN_00025b98
    cls = objc_getClass("ChatTimeCellView");
    if (cls) {
        MSHookMessageEx(cls, sel_registerName("initWithViewModel:"),
            (IMP)hook_ChatTimeCell_initWithViewModel, (IMP *)&_orig_ChatTimeCell_initWithViewModel);
        MSHookMessageEx(cls, sel_registerName("layoutInternal"),
            (IMP)hook_ChatTimeCell_layoutInternal, (IMP *)&_orig_ChatTimeCell_layoutInternal);
        MSHookMessageEx(cls, sel_registerName("canBeReused"),
            (IMP)hook_ChatTimeCell_canBeReused, (IMP *)&_orig_ChatTimeCell_canBeReused);
        MSHookMessageEx(cls, sel_registerName("shouldLayoutIfNeeded"),
            (IMP)hook_ChatTimeCell_shouldLayoutIfNeeded, (IMP *)&_orig_ChatTimeCell_shouldLayoutIfNeeded);
        WPLog(@"UIPurify", @"[Hook] ✓ ChatTimeCellView");
    }
    cls = objc_getClass("ChatTimeViewModel");
    if (cls) {
        MSHookMessageEx(cls, sel_registerName("measure:"),
            (IMP)hook_ChatTimeVM_measure, (IMP *)&_orig_ChatTimeVM_measure);
        WPLog(@"UIPurify", @"[Hook] ✓ ChatTimeViewModel.measure:");
    }

    // ② SystemMessageCellView — 参照 FUN_00025c48..FUN_00025eb4
    cls = objc_getClass("SystemMessageCellView");
    if (cls) {
        MSHookMessageEx(cls, sel_registerName("initWithViewModel:"),
            (IMP)hook_SysCell_initWithViewModel, (IMP *)&_orig_SysCell_initWithViewModel);
        MSHookMessageEx(cls, sel_registerName("layoutInternal"),
            (IMP)hook_SysCell_layoutInternal, (IMP *)&_orig_SysCell_layoutInternal);
        MSHookMessageEx(cls, sel_registerName("canBeReused"),
            (IMP)hook_SysCell_canBeReused, (IMP *)&_orig_SysCell_canBeReused);
        MSHookMessageEx(cls, sel_registerName("shouldLayoutIfNeeded"),
            (IMP)hook_SysCell_shouldLayoutIfNeeded, (IMP *)&_orig_SysCell_shouldLayoutIfNeeded);
        WPLog(@"UIPurify", @"[Hook] ✓ SystemMessageCellView");
    }
    cls = objc_getClass("SystemMessageViewModel");
    if (cls) {
        MSHookMessageEx(cls, sel_registerName("measure:"),
            (IMP)hook_SysVM_measure, (IMP *)&_orig_SysVM_measure);
        WPLog(@"UIPurify", @"[Hook] ✓ SystemMessageViewModel.measure:");
    }

    // ③ AppPatMessageCellView — 参照 FUN_00025f64..FUN_000261d0
    cls = objc_getClass("AppPatMessageCellView");
    if (cls) {
        MSHookMessageEx(cls, sel_registerName("initWithViewModel:"),
            (IMP)hook_PatCell_initWithViewModel, (IMP *)&_orig_PatCell_initWithViewModel);
        MSHookMessageEx(cls, sel_registerName("layoutInternal"),
            (IMP)hook_PatCell_layoutInternal, (IMP *)&_orig_PatCell_layoutInternal);
        MSHookMessageEx(cls, sel_registerName("canBeReused"),
            (IMP)hook_PatCell_canBeReused, (IMP *)&_orig_PatCell_canBeReused);
        MSHookMessageEx(cls, sel_registerName("shouldLayoutIfNeeded"),
            (IMP)hook_PatCell_shouldLayoutIfNeeded, (IMP *)&_orig_PatCell_shouldLayoutIfNeeded);
        WPLog(@"UIPurify", @"[Hook] ✓ AppPatMessageCellView");
    }
    cls = objc_getClass("AppPatMessageViewModel");
    if (cls) {
        MSHookMessageEx(cls, sel_registerName("measure:"),
            (IMP)hook_PatVM_measure, (IMP *)&_orig_PatVM_measure);
        WPLog(@"UIPurify", @"[Hook] ✓ AppPatMessageViewModel.measure:");
    }

    // ④ VoiceMessageCellView — 参照 FUN_00026280
    cls = objc_getClass("VoiceMessageCellView");
    if (cls) {
        MSHookMessageEx(cls, sel_registerName("layoutSubviews"),
            (IMP)hook_VoiceCell_layoutSubviews, (IMP *)&_orig_VoiceCell_layoutSubviews);
        WPLog(@"UIPurify", @"[Hook] ✓ VoiceMessageCellView");
    }

    // ⑤ YYAsyncImageView — 参照 FUN_00026384
    cls = objc_getClass("YYAsyncImageView");
    if (cls) {
        MSHookMessageEx(cls, sel_registerName("layoutSubviews"),
            (IMP)hook_YYAsync_layoutSubviews, (IMP *)&_orig_YYAsync_layoutSubviews);
        WPLog(@"UIPurify", @"[Hook] ✓ YYAsyncImageView");
    }

    // ⑥ MMGrowTextViewExtConfig — 参照 FUN_000264f8
    cls = objc_getClass("MMGrowTextViewExtConfig");
    if (cls) {
        MSHookMessageEx(cls, sel_registerName("enableDictation"),
            (IMP)hook_MMGrowText_enableDictation, (IMP *)&_orig_MMGrowText_enableDictation);
        WPLog(@"UIPurify", @"[Hook] ✓ MMGrowTextViewExtConfig.enableDictation");
    }

    // ⑦ UIView 通用 separator 隐藏
    MSHookMessageEx([UIView class], sel_registerName("layoutSubviews"),
        (IMP)hook_UIView_layoutSubviews, (IMP *)&_orig_UIView_layoutSubviews);
    WPLog(@"UIPurify", @"[Hook] ✓ UIView.layoutSubviews (separator)");

    WPLog(@"UIPurify", @"UIPurifyHook install complete (12 hooks like 微信优化)");
}

@end