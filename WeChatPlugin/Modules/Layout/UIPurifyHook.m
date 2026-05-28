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
// 分隔线隐藏 — 对齐锤子助手 2.4.1 (FUN_0075159c)
// 方案：精准 Hook 3 个 getter，无过滤、无遍历、无版本锁
// ============================================================

static IMP _orig_UITableView_separatorColor = NULL;
static IMP _orig_UITableView_separatorStyle = NULL;
static IMP _orig_WCColor_seperatorColor     = NULL;

static id hook_separatorColor(id self, SEL _cmd) {
    if (purifyReadConfig(@"HideSeparatorLine")) {
        return [UIColor clearColor];
    }
    return ((id (*)(id, SEL))_orig_UITableView_separatorColor)(self, _cmd);
}

static UITableViewCellSeparatorStyle hook_separatorStyle(id self, SEL _cmd) {
    if (purifyReadConfig(@"HideSeparatorLine")) {
        return UITableViewCellSeparatorStyleNone;
    }
    return ((UITableViewCellSeparatorStyle (*)(id, SEL))_orig_UITableView_separatorStyle)(self, _cmd);
}

static id hook_WCColor_seperatorColor(id self, SEL _cmd) {
    if (purifyReadConfig(@"HideSeparatorLine")) {
        return [UIColor clearColor];
    }
    return ((id (*)(id, SEL))_orig_WCColor_seperatorColor)(self, _cmd);
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
    WPLog(@"UIPurify", @"UIPurifyHook install SKIPPED — 全部 Hook 已禁用，规避 iOS 17.2.1 首页闪退");
}

@end