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

// ——— 隐藏水平分割线（UIView.layoutSubviews 全局）———
static IMP _orig_UIView_layoutSubviews = NULL;

// ============================================================
// MARK: - 辅助
// ============================================================

static inline BOOL purifyReadConfig(NSString *key) {
    return [[NSUserDefaults standardUserDefaults] boolForKey:
            [@"WCP_" stringByAppendingString:key]];
}

// ============================================================
// MARK: - 隐藏撤回消息 — SystemMessageCellView 5 连 Hook
// ============================================================

static id hook_SysCell_initWithViewModel(id self, SEL _cmd, id viewModel) {
    id result = ((id (*)(id, SEL, id))_orig_SysCell_initWithViewModel)(self, _cmd, viewModel);
    if (!result) return nil;
    if (purifyReadConfig(@"HideRevokeHint")) {
        UIView *v = (UIView *)result;
        [v setHidden:YES];
        v.frame = v.frame;  // 触发 setNeedsLayout，匹配微信优化 FUN_00025c48
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
// MARK: - 隐藏拍一拍 — AppPatMessageCellView 5 连 Hook
// ============================================================

static id hook_PatCell_initWithViewModel(id self, SEL _cmd, id viewModel) {
    id result = ((id (*)(id, SEL, id))_orig_PatCell_initWithViewModel)(self, _cmd, viewModel);
    if (!result) return nil;
    if (purifyReadConfig(@"HidePatHint")) {
        UIView *v = (UIView *)result;
        [v setHidden:YES];
        v.frame = v.frame;  // 触发 setNeedsLayout，匹配微信优化 FUN_00025f64
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
            @try { bgImageView = [check valueForKey:@"m_bgImageView"]; }
            @catch (NSException *e) {}
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
// MARK: - 隐藏水平分割线 — UIView.layoutSubviews
// ============================================================

static void hook_UIView_layoutSubviews(id self, SEL _cmd) {
    ((void (*)(id, SEL))_orig_UIView_layoutSubviews)(self, _cmd);
    if (!purifyReadConfig(@"HideSeparatorLine")) return;

    UIView *v = (UIView *)self;

    // 安全：不处理 WeChat 消息 cell 内部的视图（避免消息误伤）
    {
        Class baseMsgCell = NSClassFromString(@"BaseMessageCellView");
        if (baseMsgCell) {
            UIView *check = v;
            while (check) {
                if ([check isKindOfClass:baseMsgCell]) return;
                check = check.superview;
                if (check == nil) break;
            }
        }
    }

    // 第1层：类名过滤
    {
        Class brandCell = NSClassFromString(@"FTSBrandContactCell");
        if (brandCell && [v isKindOfClass:brandCell]) return;
    }
    NSString *className = NSStringFromClass([v class]);
    {
        NSRange r;
        r = [className rangeOfString:@"Brand"];    if (r.location != NSNotFound) return;
        r = [className rangeOfString:@"Contact"];  if (r.location != NSNotFound) return;
    }

    // 第2层：获取属性
    BOOL   isSepView = [className isEqualToString:@"_UITableViewCellSeparatorView"];
    CGFloat h = CGRectGetHeight(v.frame);
    CGFloat w = CGRectGetWidth(v.frame);
    UIColor *bg = nil; @try { bg = v.backgroundColor; } @catch (NSException *e) {}
    BOOL isLabel = [v isKindOfClass:[UILabel class]];
    BOOL isImage = [v isKindOfClass:[UIImageView class]];

    if (isLabel || isImage) return;

    BOOL isThin = (h <= 1.0);
    BOOL shouldHide = NO;

    if (isSepView) {
        if (h <= 0 || isThin) shouldHide = YES;
    }
    else if (isThin && w > 100.0) {
        shouldHide = (bg != nil);
    }
    else if ([className isEqualToString:@"UIView"] && isThin && bg != nil) {
        shouldHide = (v.subviews.count == 0);
    }

    if (!shouldHide) return;

    // 第3层：父链排除
    {
        Class timelineVC = NSClassFromString(@"WCTimeLineViewController");
        Class subVC      = NSClassFromString(@"MPSubscriptionViewController");
        NSString *timelineFooter = @"WCTimelineFooterCell";

        id resp = v;
        for (int i = 0; i < 11; i++) {
            if (timelineVC && [resp isKindOfClass:timelineVC]) return;
            if ([NSStringFromClass([resp class]) isEqualToString:timelineFooter]) return;
            resp = [resp nextResponder];
            if (!resp) break;
        }
        resp = v;
        for (int i = 0; i < 11; i++) {
            if (subVC && [resp isKindOfClass:subVC]) return;
            resp = [resp nextResponder];
            if (!resp) break;
        }
    }

    [v setHidden:YES];
}

// ============================================================
// MARK: - +install 入口
// ============================================================
@implementation UIPurifyHook

/// 检查方法是否在指定类中被重写（非继承）
static BOOL purifyIsOverridden(Class cls, SEL sel) {
    IMP own = class_getMethodImplementation(cls, sel);
    Class superCls = class_getSuperclass(cls);
    if (!superCls) return YES;
    IMP parent = class_getMethodImplementation(superCls, sel);
    return (own != parent);
}

/// 安全 Hook：继承的方法先用 class_addMethod 创建本地副本隔离父类，再 Hook
/// class_addMethod 在子类方法表中创建一个指向父类 IMP 的独立条目，
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
            purifySafeHook(cls, sel_registerName("canBeReused"),
                (IMP)hook_SysCell_canBeReused, &_orig_SysCell_canBeReused);
            purifySafeHook(cls, sel_registerName("shouldLayoutIfNeeded"),
                (IMP)hook_SysCell_shouldLayoutIfNeeded, &_orig_SysCell_shouldLayoutIfNeeded);
            WPLog(@"UIPurify", @"[Hook] ✓ SystemMessageCellView (hide revoke)");
        } else {
            WPLog(@"UIPurify", @"[Hook] - SystemMessageCellView not found");
        }
        Class vmCls = objc_getClass("SystemMessageViewModel");
        if (vmCls) {
            purifySafeHook(vmCls, sel_registerName("measure:"),
                (IMP)hook_SysVM_measure, &_orig_SysVM_measure);
            WPLog(@"UIPurify", @"[Hook] ✓ SysVM.measure: safe (消除空白占位)");
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
            purifySafeHook(cls, sel_registerName("canBeReused"),
                (IMP)hook_PatCell_canBeReused, &_orig_PatCell_canBeReused);
            purifySafeHook(cls, sel_registerName("shouldLayoutIfNeeded"),
                (IMP)hook_PatCell_shouldLayoutIfNeeded, &_orig_PatCell_shouldLayoutIfNeeded);
            WPLog(@"UIPurify", @"[Hook] ✓ AppPatMessageCellView (hide pat)");
        } else {
            WPLog(@"UIPurify", @"[Hook] - AppPatMessageCellView not found");
        }
        Class vmCls = objc_getClass("AppPatMessageViewModel");
        if (vmCls) {
            purifySafeHook(vmCls, sel_registerName("measure:"),
                (IMP)hook_PatVM_measure, &_orig_PatVM_measure);
            WPLog(@"UIPurify", @"[Hook] ✓ PatVM.measure: safe (消除空白占位)");
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

    // ——— 隐藏水平分割线：UIView.layoutSubviews ———
    {
        MSHookMessageEx([UIView class], @selector(layoutSubviews),
            (IMP)hook_UIView_layoutSubviews, &_orig_UIView_layoutSubviews);
        WPLog(@"UIPurify", @"[Hook] ✓ UIView.layoutSubviews (global separator hiding)");
    }

    WPLog(@"UIPurify", @"UIPurifyHook install complete (12 hooks)");
}

@end