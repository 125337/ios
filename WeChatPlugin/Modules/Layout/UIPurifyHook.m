#import "UIPurifyHook.h"
#import "../../Config/PluginConfig.h"
#import <objc/runtime.h>
#import <objc/message.h>
#import <substrate.h>
#import "../../Core/LogManager.h"

// ============================================================
// MARK: - 原始 IMP 指针声明区
// ============================================================

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

// ——— 隐藏语音红点/转文字（VoiceMessageCellView）———
static IMP _orig_VoiceCell_layoutSubviews = NULL;

// ——— 气泡透明（YYAsyncImageView）———
static IMP _orig_YYAsyncImage_layoutSubviews = NULL;

// ——— 禁用听写（MMGrowTextViewExtConfig）———
static IMP _orig_MMGrow_enableDictation = NULL;

// ============================================================
// MARK: - 辅助键
// ============================================================
static void *kPurifyHiddenKey = &kPurifyHiddenKey;

static inline BOOL purifyReadConfig(NSString *key) {
    return [[NSUserDefaults standardUserDefaults] boolForKey:
            [@"WCP_" stringByAppendingString:key]];
}

// ============================================================
// MARK: - 隐藏撤回消息 — SystemMessageCellView 5 连 Hook
// ============================================================

// 1) initWithViewModel: — 标记隐藏 + 零尺寸
static id hook_SysCell_initWithViewModel(id self, SEL _cmd, id viewModel) {
    id result = ((id (*)(id, SEL, id))_orig_SysCell_initWithViewModel)(self, _cmd, viewModel);
    if (!result) return nil;
    if (purifyReadConfig(@"HideRevokeHint")) {
        UIView *v = (UIView *)result;
        objc_setAssociatedObject(result, kPurifyHiddenKey, @YES, OBJC_ASSOCIATION_RETAIN);
        [v setHidden:YES];
        v.alpha = 0;
        v.frame = CGRectZero;
    }
    return result;
}

// 2) layoutInternal — 已标记则不执行原始布局
static void hook_SysCell_layoutInternal(id self, SEL _cmd) {
    if (purifyReadConfig(@"HideRevokeHint")) return;
    ((void (*)(id, SEL))_orig_SysCell_layoutInternal)(self, _cmd);
}

// 3) canBeReused — 已标记则返回 YES（阻止复用）
static BOOL hook_SysCell_canBeReused(id self, SEL _cmd) {
    if (purifyReadConfig(@"HideRevokeHint")) return YES;
    return ((BOOL (*)(id, SEL))_orig_SysCell_canBeReused)(self, _cmd);
}

// 4) shouldLayoutIfNeeded — 已标记则返回 NO
static BOOL hook_SysCell_shouldLayoutIfNeeded(id self, SEL _cmd) {
    if (purifyReadConfig(@"HideRevokeHint")) return NO;
    return ((BOOL (*)(id, SEL))_orig_SysCell_shouldLayoutIfNeeded)(self, _cmd);
}

// 5) SystemMessageViewModel.measure: — 已配置则不测量
static CGSize hook_SysVM_measure(id self, SEL _cmd, CGSize size) {
    if (purifyReadConfig(@"HideRevokeHint")) return CGSizeZero;
    return ((CGSize (*)(id, SEL, CGSize))_orig_SysVM_measure)(self, _cmd, size);
}

// ============================================================
// MARK: - 隐藏拍一拍 — AppPatMessageCellView 5 连 Hook
// ============================================================

static id hook_PatCell_initWithViewModel(id self, SEL _cmd, id viewModel) {
    id result = ((id (*)(id, SEL, id))_orig_PatCell_initWithViewModel)(self, _cmd, viewModel);
    if (!result) return nil;
    if (purifyReadConfig(@"HidePatHint")) {
        UIView *v = (UIView *)result;
        objc_setAssociatedObject(result, kPurifyHiddenKey, @YES, OBJC_ASSOCIATION_RETAIN);
        [v setHidden:YES];
        v.alpha = 0;
        v.frame = CGRectZero;
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
// MARK: - 隐藏语音红点/转文字 — VoiceMessageCellView.layoutSubviews
// ============================================================

static void hook_VoiceCell_layoutSubviews(id self, SEL _cmd) {
    ((void (*)(id, SEL))_orig_VoiceCell_layoutSubviews)(self, _cmd);
    if (!purifyReadConfig(@"HideVoiceRedDot")) return;
    @try {
        id dot = [self valueForKey:@"m_unreadImageView"];
        if (dot) [dot setHidden:YES];
        id btn = [self valueForKey:@"m_quickTransTipButton"];
        if (btn) [btn setHidden:YES];
    } @catch (NSException *e) {}
}

// ============================================================
// MARK: - 气泡透明 — YYAsyncImageView.layoutSubviews
// ============================================================

static void hook_YYAsyncImage_layoutSubviews(id self, SEL _cmd) {
    ((void (*)(id, SEL))_orig_YYAsyncImage_layoutSubviews)(self, _cmd);
    if (!purifyReadConfig(@"HideBubbleBackground")) return;

    UIView *current = (UIView *)self;
    UIView *check = current;
    while (check) {
        UIView *parent = check.superview;
        if (!parent) break;
        check = parent;
        if ([check isKindOfClass:NSClassFromString(@"CommonMessageCellView")]) {
            id bgImageView = nil;
            @try {
                bgImageView = [check valueForKey:@"m_bgImageView"];
            } @catch (NSException *e) {}
            if (bgImageView && [current isDescendantOfView:bgImageView]) {
                current.alpha = 0;
                return;
            }
            break;
        }
    }
}

// ============================================================
// MARK: - 禁用听写 — MMGrowTextViewExtConfig.enableDictation
// ============================================================

static BOOL hook_MMGrow_enableDictation(id self, SEL _cmd) {
    if (purifyReadConfig(@"DisableDictation")) return NO;
    return ((BOOL (*)(id, SEL))_orig_MMGrow_enableDictation)(self, _cmd);
}

// ============================================================
// MARK: - +install 入口（完全匹配微信优化 FUN_00025688）
// ============================================================
@implementation UIPurifyHook

+ (void)install {
    WPLog(@"UIPurify", @"UIPurifyHook install start (微信优化方案)");

    // ——— 隐藏撤回消息：SystemMessageCellView + SystemMessageViewModel ———
    {
        Class cls = objc_getClass("SystemMessageCellView");
        if (cls) {
            MSHookMessageEx(cls, sel_registerName("initWithViewModel:"),
                (IMP)hook_SysCell_initWithViewModel, &_orig_SysCell_initWithViewModel);
            MSHookMessageEx(cls, sel_registerName("layoutInternal"),
                (IMP)hook_SysCell_layoutInternal, &_orig_SysCell_layoutInternal);
            MSHookMessageEx(cls, sel_registerName("canBeReused"),
                (IMP)hook_SysCell_canBeReused, &_orig_SysCell_canBeReused);
            MSHookMessageEx(cls, sel_registerName("shouldLayoutIfNeeded"),
                (IMP)hook_SysCell_shouldLayoutIfNeeded, &_orig_SysCell_shouldLayoutIfNeeded);
            WPLog(@"UIPurify", @"[Hook] ✓ SystemMessageCellView x4 (hide revoke)");
        } else {
            WPLog(@"UIPurify", @"[Hook] - SystemMessageCellView not found");
        }
        Class vmCls = objc_getClass("SystemMessageViewModel");
        if (vmCls) {
            MSHookMessageEx(vmCls, sel_registerName("measure:"),
                (IMP)hook_SysVM_measure, &_orig_SysVM_measure);
            WPLog(@"UIPurify", @"[Hook] ✓ SystemMessageViewModel.measure: (hide revoke)");
        } else {
            WPLog(@"UIPurify", @"[Hook] - SystemMessageViewModel not found");
        }
    }

    // ——— 隐藏拍一拍：AppPatMessageCellView + AppPatMessageViewModel ———
    {
        Class cls = objc_getClass("AppPatMessageCellView");
        if (cls) {
            MSHookMessageEx(cls, sel_registerName("initWithViewModel:"),
                (IMP)hook_PatCell_initWithViewModel, &_orig_PatCell_initWithViewModel);
            MSHookMessageEx(cls, sel_registerName("layoutInternal"),
                (IMP)hook_PatCell_layoutInternal, &_orig_PatCell_layoutInternal);
            MSHookMessageEx(cls, sel_registerName("canBeReused"),
                (IMP)hook_PatCell_canBeReused, &_orig_PatCell_canBeReused);
            MSHookMessageEx(cls, sel_registerName("shouldLayoutIfNeeded"),
                (IMP)hook_PatCell_shouldLayoutIfNeeded, &_orig_PatCell_shouldLayoutIfNeeded);
            WPLog(@"UIPurify", @"[Hook] ✓ AppPatMessageCellView x4 (hide pat)");
        } else {
            WPLog(@"UIPurify", @"[Hook] - AppPatMessageCellView not found");
        }
        Class vmCls = objc_getClass("AppPatMessageViewModel");
        if (vmCls) {
            MSHookMessageEx(vmCls, sel_registerName("measure:"),
                (IMP)hook_PatVM_measure, &_orig_PatVM_measure);
            WPLog(@"UIPurify", @"[Hook] ✓ AppPatMessageViewModel.measure: (hide pat)");
        } else {
            WPLog(@"UIPurify", @"[Hook] - AppPatMessageViewModel not found");
        }
    }

    // ——— 隐藏语音红点/转文字：VoiceMessageCellView.layoutSubviews ———
    {
        Class cls = objc_getClass("VoiceMessageCellView");
        if (cls) {
            MSHookMessageEx(cls, @selector(layoutSubviews),
                (IMP)hook_VoiceCell_layoutSubviews, &_orig_VoiceCell_layoutSubviews);
            WPLog(@"UIPurify", @"[Hook] ✓ VoiceMessageCellView.layoutSubviews (hide voice hint)");
        } else {
            WPLog(@"UIPurify", @"[Hook] - VoiceMessageCellView not found");
        }
    }

    // ——— 气泡透明：YYAsyncImageView.layoutSubviews ———
    {
        Class cls = objc_getClass("YYAsyncImageView");
        if (cls) {
            MSHookMessageEx(cls, @selector(layoutSubviews),
                (IMP)hook_YYAsyncImage_layoutSubviews, &_orig_YYAsyncImage_layoutSubviews);
            WPLog(@"UIPurify", @"[Hook] ✓ YYAsyncImageView.layoutSubviews (transparent bubble)");
        } else {
            WPLog(@"UIPurify", @"[Hook] - YYAsyncImageView not found");
        }
    }

    // ——— 禁用听写：MMGrowTextViewExtConfig.enableDictation ———
    {
        Class cls = objc_getClass("MMGrowTextViewExtConfig");
        if (cls) {
            MSHookMessageEx(cls, sel_registerName("enableDictation"),
                (IMP)hook_MMGrow_enableDictation, &_orig_MMGrow_enableDictation);
            WPLog(@"UIPurify", @"[Hook] ✓ MMGrowTextViewExtConfig.enableDictation (disable dictation)");
        } else {
            WPLog(@"UIPurify", @"[Hook] - MMGrowTextViewExtConfig not found");
        }
    }

    WPLog(@"UIPurify", @"UIPurifyHook install complete (11 hooks, matched 微信优化 FUN_00025688)");
}

@end