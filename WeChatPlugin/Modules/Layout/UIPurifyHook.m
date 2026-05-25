//
//  UIPurifyHook.m — 界面净化
//  完全对齐微信优化 1.6.5 hook 函数逻辑 + 运行时安全回退
//  Hook 函数逻辑 = FUN_00025c48/5f64/5eb4 精确对齐
//  安装顺序 = FUN_00025688 (ChatTime→Sys→Pat)
//  安全回退 = 子类未覆写方法时 class_addMethod 隔离父类 hook，避免 _orig 链污染
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <objc/runtime.h>
#import <substrate.h>
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
    if (result && purifyReadConfig(@"HideChatTime")) {
        [result setHidden:YES];
        [result setFrame:[result frame]];
    }
    return result;
}

static void hook_ChatTimeCell_layoutInternal(id self, SEL _cmd) {
    if (purifyReadConfig(@"HideChatTime")) return;
    ((void (*)(id, SEL))_orig_ChatTimeCell_layoutInternal)(self, _cmd);
}

static BOOL hook_ChatTimeCell_canBeReused(id self, SEL _cmd) {
    if (purifyReadConfig(@"HideChatTime")) return YES;
    return ((BOOL (*)(id, SEL))_orig_ChatTimeCell_canBeReused)(self, _cmd);
}

static BOOL hook_ChatTimeCell_shouldLayoutIfNeeded(id self, SEL _cmd) {
    if (purifyReadConfig(@"HideChatTime")) return NO;
    return ((BOOL (*)(id, SEL))_orig_ChatTimeCell_shouldLayoutIfNeeded)(self, _cmd);
}

static CGSize hook_ChatTimeVM_measure(id self, SEL _cmd, CGSize size) {
    if (purifyReadConfig(@"HideChatTime")) return CGSizeZero;
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
// VoiceMessageCellView — 对齐 FUN_00026280（只隐藏 _unreadImageView + _quickTransTipButton）
// ============================================================

static IMP _orig_VoiceCell_layoutSubviews = NULL;

// ============================================================
// cf_m_ 前缀 category getter —— 完全对齐微信优化 FUN_00026280
// 微信优化通过 category 给 VoiceMessageCellView 添加了以下 getter：
//   - (MMBadgeView *)cf_m_unreadImageView;
//   - (UIButton *)cf_m_quickTransTipButton;
// 我们用 class_addMethod 在运行时注入，KVC 兼容，不依赖 ivar 偏移量
// 即使未来微信改 ivar 名，只要更新这里即可，不影响外部调用
// ============================================================

static id cf_get_unreadImageView(id self, SEL _cmd) {
    Ivar ivar = class_getInstanceVariable([self class], "_m_unreadImageView");
    return ivar ? object_getIvar(self, ivar) : nil;
}

static id cf_get_quickTransTipButton(id self, SEL _cmd) {
    Ivar ivar = class_getInstanceVariable([self class], "_m_quickTransTipButton");
    return ivar ? object_getIvar(self, ivar) : nil;
}

/// 用 valueForKey: 获取子视图并隐藏，对齐 FUN_00026280（KVC 访问，不依赖 ivar 偏移）
static void hideIvarWithKVC(id obj, NSString *key) {
    id subview = [obj valueForKey:key];
    if (subview) {
        [subview setHidden:YES];
    }
}

static void hook_VoiceCell_layoutSubviews(id self, SEL _cmd) {
    // 调用原始布局（对齐 FUN_00026280 行 22: (*DAT_0013ac10)()）
    ((void (*)(id, SEL))_orig_VoiceCell_layoutSubviews)(self, _cmd);
    
    if (purifyReadConfig(@"HideVoiceRedDot")) {
        // 对齐 FUN_00026280 行 27: [self valueForKey:@"cf_m_unreadImageView"]
        hideIvarWithKVC(self, @"cf_m_unreadImageView");
        // 对齐 FUN_00026280 行 35: [self valueForKey:@"cf_m_quickTransTipButton"]
        hideIvarWithKVC(self, @"cf_m_quickTransTipButton");
    }
}

// ============================================================
// YYAsyncImageView
// ============================================================

static IMP _orig_YYAsyncImage_layoutSubviews = NULL;

static void hook_YYAsyncImage_layoutSubviews(id self, SEL _cmd) {
    if (!purifyReadConfig(@"HideBubbleBackground")) {
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
// 分隔线隐藏 — 100% 复刻 FUN_0004627c (微信优化)
// ============================================================
// 架构：
//   ① FUN_000461e8 → class cache preload (4 个类提前缓存到全局变量)
//   ② FUN_00046248 → UIView.layoutSubviews MSHookMessageEx
//   ③ FUN_0004627c → 核心算法 (10 维过滤 + 3 层父视图链保护)
// 额外：WCTableViewManager.getSeparator → nil (Mio 独家，比微信优化更彻底)
// ============================================================

// ── 类缓存 (对齐 FUN_000461e8) ──
static Class _WCTimeLineViewControllerClass = nil;
static Class _FTSBrandContactCellClass       = nil;
static Class _MPSubscriptionViewControllerClass = nil;

// ── 函数声明 ──
static IMP _orig_UIView_layoutSubviews = NULL;
static IMP _orig_WCTableView_getSeparator = NULL;

static void hook_UIView_layoutSubviews(id self, SEL _cmd) {
    // ════════════════════════════════════════════════
    // 第0层：先调用原始 layoutSubviews + 读配置
    // ════════════════════════════════════════════════
    ((void (*)(id, SEL))_orig_UIView_layoutSubviews)(self, _cmd);
    
    if (!purifyReadConfig(@"HideSeparatorLine")) return;
    
    // ════════════════════════════════════════════════
    // 第1层：类名 + 第一轮排除 (行 41182-41191)
    // ════════════════════════════════════════════════
    NSString *className = NSStringFromClass([self class]);
    
    // 排除1：FTSBrandContactCell 实例
    if (_FTSBrandContactCellClass && [self isKindOfClass:_FTSBrandContactCellClass]) return;
    // 排除2：类名含 "Brand"
    if ([className containsString:@"Brand"]) return;
    // 排除3：类名含 "Contact"
    if ([className containsString:@"Contact"]) return;
    
    // ════════════════════════════════════════════════
    // 第2层：核心属性采集 (行 41192-41218)
    // ════════════════════════════════════════════════
    BOOL isSepClass = [className containsString:@"_UITableViewCellSeparatorView"];
    
    CGRect frame = [self frame];
    CGFloat height = frame.size.height;
    BOOL heightTooTall = (height > 1.0); // height <= 0 不会 > 1.0，也是 false
    
    CGFloat width = frame.size.width;
    CGFloat alpha = [self alpha];
    
    UIColor *bgColor = [self backgroundColor];
    if (bgColor) CFRetain((__bridge CFTypeRef)bgColor);
    BOOL hasBgColor = (bgColor != nil);
    
    BOOL isNotLabel = ![self isKindOfClass:[UILabel class]];
    BOOL isNotImageView;
    if (isNotLabel) {
        isNotImageView = ![self isKindOfClass:[UIImageView class]];
    } else {
        isNotImageView = NO;
    }
    
    // ════════════════════════════════════════════════
    // 第3层：PATH A / PATH B 分支 (行 41219-41264)
    // ════════════════════════════════════════════════
    // 所有 UIView 子类都 isKindOfClass:[UIView class] → 走 PATH B
    // PATH A (严格路径) 通过 className hasPrefix/suffix "UIView" 二次判断进入
    
    // 文件: 隐藏分割线bug根因分析.md 建议修复
    // isKindOfClass 匹配 UIView 及其所有子类，对齐微信优化 isKindOfClass:[UIView class]
    // 注意：isKindOfClass:[UIView class] 对所有 UIView 子类永远 YES，
    //       因此 PATH A/B 分流实际由 classNameHasUIView 决定
    BOOL classNameHasUIView = [className containsString:@"UIView"];
    
    BOOL shouldHide = NO;
    
    if (classNameHasUIView) {
        // ── PATH A 严格路径：类名含 "UIView" ──
        if (width <= 100.0) {
            heightTooTall = YES; // 窄视图跳过，对齐微信优化 bVar1 = true
        }
        if (heightTooTall || alpha <= 0.9 || !hasBgColor || !isNotImageView) {
            goto CLEANUP; // 四条件任一不满足 → 跳过
        }
        shouldHide = YES;
        goto CHECK_PARENT_CHAIN;
    }
    
    // ── PATH B：类名不含 "UIView"（如 _UITableViewCellSeparatorView）──
    // _UITableViewCellSeparatorView 走这里
    // 先检查综合条件
    if (!isSepClass && !heightTooTall && width > 100.0 && alpha > 0.9) {
        // 非分隔线类 → 必须全部物理检测通过
        if (!hasBgColor || !isNotImageView) goto CLEANUP;
        shouldHide = YES;
        goto CHECK_PARENT_CHAIN;
    }
    // 非分隔线类且不满足综合条件 → 跳过
    if (!isSepClass) goto CLEANUP;
    // isSepClass == YES → 放宽限制，进入父视图链检查
    shouldHide = YES;
    
CHECK_PARENT_CHAIN:
    // ════════════════════════════════════════════════
    // 第4层：父视图链遍历 + 3 重保护 (行 41264-41308)
    // ════════════════════════════════════════════════
    if (shouldHide) {
        int maxIter = 11;
        UIView *cursor = self;
        
        // Walk 1：WCTimeLineViewController + WCTimelineFooterCell
        while (cursor && maxIter > 0) {
            maxIter--;
            if (_WCTimeLineViewControllerClass &&
                [cursor isKindOfClass:_WCTimeLineViewControllerClass]) {
                goto CLEANUP;
            }
            NSString *pCls = NSStringFromClass([cursor class]);
            if ([pCls containsString:@"WCTimelineFooterCell"]) goto CLEANUP;
            cursor = [cursor superview];
        }
        
        // Walk 2：MPSubscriptionViewController
        cursor = self;
        maxIter = 11;
        while (cursor && maxIter > 0) {
            maxIter--;
            if (_MPSubscriptionViewControllerClass &&
                [cursor isKindOfClass:_MPSubscriptionViewControllerClass]) {
                goto CLEANUP;
            }
            cursor = [cursor superview];
        }
        
        // 全部保护检查通过 → 隐藏
        [self setHidden:YES];
    }
    
CLEANUP:
    if (bgColor) CFRelease((__bridge CFTypeRef)bgColor);
}

// ── WCTableViewManager.getSeparator → nil (Mio 独家增强) ──
static id hook_WCTableView_getSeparator(id self, SEL _cmd) {
    if (purifyReadConfig(@"HideSeparatorLine")) return nil;
    return ((id (*)(id, SEL))_orig_WCTableView_getSeparator)(self, _cmd);
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

    // ④ VoiceMessageCellView — purifySafeHook + cf_m_ category getter（完全对齐 FUN_00026280）
    cls = objc_getClass("VoiceMessageCellView");
    if (cls) {
        // 对齐微信优化：添加 cf_m_ 前缀 category getter，KVC 兼容，长期稳定
        class_addMethod(cls, sel_registerName("cf_m_unreadImageView"),
            (IMP)cf_get_unreadImageView, "@@:");
        class_addMethod(cls, sel_registerName("cf_m_quickTransTipButton"),
            (IMP)cf_get_quickTransTipButton, "@@:");
        purifySafeHook(cls, @selector(layoutSubviews),
            (IMP)hook_VoiceCell_layoutSubviews, &_orig_VoiceCell_layoutSubviews);
        WPLog(@"UIPurify", @"[Hook] ✓ VoiceMessageCellView (purifySafeHook + cf_m_ category)");
    }

    // ⑤ YYAsyncImageView — purifySafeHook（未覆写 layoutSubviews，继承自 UIImageView）
    cls = objc_getClass("YYAsyncImageView");
    if (cls) {
        purifySafeHook(cls, @selector(layoutSubviews),
            (IMP)hook_YYAsyncImage_layoutSubviews, &_orig_YYAsyncImage_layoutSubviews);
        WPLog(@"UIPurify", @"[Hook] ✓ YYAsyncImageView (purifySafeHook)");
    }

    // ⑥ MMGrowTextViewExtConfig
    cls = objc_getClass("MMGrowTextViewExtConfig");
    if (cls) {
        MSHookMessageEx(cls, sel_registerName("enableDictation"),
            (IMP)hook_MMGrow_enableDictation, &_orig_MMGrow_enableDictation);
        WPLog(@"UIPurify", @"[Hook] ✓ MMGrowTextViewExtConfig");
    }

    // ⑦ 分隔线隐藏 — 100% 复刻微信优化 (FUN_000261e8 + FUN_00026248)
    
    // Step 1：类缓存预加载 (对齐 FUN_000461e8)
    _WCTimeLineViewControllerClass = NSClassFromString(@"WCTimeLineViewController");
    _FTSBrandContactCellClass = NSClassFromString(@"FTSBrandContactCell");
    _MPSubscriptionViewControllerClass = NSClassFromString(@"MPSubscriptionViewController");
    WPLog(@"UIPurify", @"[Hook] ✓ Class cache preloaded (3/4)");
    
    // Step 2：UIView.layoutSubviews 全局 Hook (对齐 FUN_00046248)
    MSHookMessageEx([UIView class], @selector(layoutSubviews),
        (IMP)hook_UIView_layoutSubviews, &_orig_UIView_layoutSubviews);
    WPLog(@"UIPurify", @"[Hook] ✓ UIView.layoutSubviews (FUN_0004627c 10-dim filter)");
    
    // Step 3：WCTableViewManager.getSeparator → nil (Mio 独家，比微信优化更彻底)
    cls = objc_getClass("WCTableViewManager");
    if (cls) {
        MSHookMessageEx(cls, sel_registerName("getSeparator"),
            (IMP)hook_WCTableView_getSeparator, &_orig_WCTableView_getSeparator);
        WPLog(@"UIPurify", @"[Hook] ✓ WCTableViewManager.getSeparator");
    }

    WPLog(@"UIPurify", @"UIPurifyHook install complete");
}

@end