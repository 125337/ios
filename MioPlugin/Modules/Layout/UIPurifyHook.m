#import "UIPurifyHook.h"
#import "UIPurifyConfig.h"
#import "../../Core/LogManager.h"
#import <substrate.h>
#import <objc/runtime.h>
#import <objc/message.h>
#import <UIKit/UIKit.h>

static IMP orig_separatorColor = NULL;
static IMP orig_separatorStyle = NULL;
static IMP orig_wcColor_seperatorColor = NULL;

static UIColor *replaced_separatorColor(id self, SEL _cmd) {
    if ([UIPurifyConfig shared].hideSeparatorLine) {
        return [UIColor clearColor];
    }
    return ((UIColor *(*)(id, SEL))orig_separatorColor)(self, _cmd);
}

static NSInteger replaced_separatorStyle(id self, SEL _cmd) {
    if ([UIPurifyConfig shared].hideSeparatorLine) {
        return 0;
    }
    return ((NSInteger (*)(id, SEL))orig_separatorStyle)(self, _cmd);
}

static UIColor *replaced_wcColor_seperatorColor(id self, SEL _cmd) {
    if ([UIPurifyConfig shared].hideSeparatorLine) {
        return [UIColor clearColor];
    }
    return ((UIColor *(*)(id, SEL))orig_wcColor_seperatorColor)(self, _cmd);
}

#pragma mark - purifySafeHook 工具

/// 检测子类是否覆写了该方法
static BOOL purifyIsOverridden(Class cls, SEL sel) {
    Class superCls = class_getSuperclass(cls);
    if (!superCls) return YES;
    IMP own = class_getMethodImplementation(cls, sel);
    IMP parent = class_getMethodImplementation(superCls, sel);
    return (own != parent);
}

/// 安全 Hook 函数：避免父子类 Hook 交叉污染
static void purifySafeHook(Class cls, SEL sel, IMP replacement, IMP *orig) {
    if (purifyIsOverridden(cls, sel)) {
        MSHookMessageEx(cls, sel, replacement, orig);
        return;
    }
    Method parentMethod = class_getInstanceMethod(class_getSuperclass(cls), sel);
    IMP parentIMP = method_getImplementation(parentMethod);
    const char *types = method_getTypeEncoding(parentMethod);
    class_addMethod(cls, sel, parentIMP, types);
    MSHookMessageEx(cls, sel, replacement, orig);
}

#pragma mark - 拍一拍 Hook 函数

// ★ 拍一拍 _orig 指针
static IMP _orig_AppPatCell_initWithViewModel = NULL;
static IMP _orig_AppPatCell_layoutInternal = NULL;
static IMP _orig_AppPatCell_canBeReused = NULL;
static IMP _orig_AppPatCell_shouldLayoutIfNeeded = NULL;
static IMP _orig_AppPatVM_measure = NULL;

/// initWithViewModel: — 创建时隐藏
static id hook_AppPatCell_initWithViewModel(id self, SEL _cmd, id viewModel) {
    id result = ((id (*)(id, SEL, id))_orig_AppPatCell_initWithViewModel)(self, _cmd, viewModel);
    if (result && [UIPurifyConfig shared].hidePatHint) {
        [result setHidden:YES];
        [result setFrame:[result frame]];  // 触发 setNeedsLayout
    }
    return result;
}

/// layoutInternal — 跳过布局
static void hook_AppPatCell_layoutInternal(id self, SEL _cmd) {
    if ([UIPurifyConfig shared].hidePatHint) return;
    ((void (*)(id, SEL))_orig_AppPatCell_layoutInternal)(self, _cmd);
}

/// canBeReused — 可复用
static BOOL hook_AppPatCell_canBeReused(id self, SEL _cmd) {
    if ([UIPurifyConfig shared].hidePatHint) return YES;
    return ((BOOL (*)(id, SEL))_orig_AppPatCell_canBeReused)(self, _cmd);
}

/// shouldLayoutIfNeeded — 不需要布局
static BOOL hook_AppPatCell_shouldLayoutIfNeeded(id self, SEL _cmd) {
    if ([UIPurifyConfig shared].hidePatHint) return NO;
    return ((BOOL (*)(id, SEL))_orig_AppPatCell_shouldLayoutIfNeeded)(self, _cmd);
}

/// measure: — 返回零高度
static CGSize hook_AppPatVM_measure(id self, SEL _cmd, CGSize size) {
    if ([UIPurifyConfig shared].hidePatHint) return CGSizeZero;
    return ((CGSize (*)(id, SEL, CGSize))_orig_AppPatVM_measure)(self, _cmd, size);
}

#pragma mark - 撤回提示 Hook 函数

// ★ 撤回提示 _orig 指针
static IMP _orig_SysMsgCell_initWithViewModel = NULL;
static IMP _orig_SysMsgCell_layoutInternal = NULL;
static IMP _orig_SysMsgCell_canBeReused = NULL;
static IMP _orig_SysMsgCell_shouldLayoutIfNeeded = NULL;
static IMP _orig_SysMsgVM_measure = NULL;

/// initWithViewModel: — 创建时隐藏
static id hook_SysMsgCell_initWithViewModel(id self, SEL _cmd, id viewModel) {
    id result = ((id (*)(id, SEL, id))_orig_SysMsgCell_initWithViewModel)(self, _cmd, viewModel);
    if (result && [UIPurifyConfig shared].hideRevokeHint) {
        [result setHidden:YES];
        [result setFrame:[result frame]];
    }
    return result;
}

/// layoutInternal — 跳过布局
static void hook_SysMsgCell_layoutInternal(id self, SEL _cmd) {
    if ([UIPurifyConfig shared].hideRevokeHint) return;
    ((void (*)(id, SEL))_orig_SysMsgCell_layoutInternal)(self, _cmd);
}

/// canBeReused — 可复用
static BOOL hook_SysMsgCell_canBeReused(id self, SEL _cmd) {
    if ([UIPurifyConfig shared].hideRevokeHint) return YES;
    return ((BOOL (*)(id, SEL))_orig_SysMsgCell_canBeReused)(self, _cmd);
}

/// shouldLayoutIfNeeded — 不需要布局
static BOOL hook_SysMsgCell_shouldLayoutIfNeeded(id self, SEL _cmd) {
    if ([UIPurifyConfig shared].hideRevokeHint) return NO;
    return ((BOOL (*)(id, SEL))_orig_SysMsgCell_shouldLayoutIfNeeded)(self, _cmd);
}

/// measure: — 返回零高度
static CGSize hook_SysMsgVM_measure(id self, SEL _cmd, CGSize size) {
    if ([UIPurifyConfig shared].hideRevokeHint) return CGSizeZero;
    return ((CGSize (*)(id, SEL, CGSize))_orig_SysMsgVM_measure)(self, _cmd, size);
}

@implementation UIPurifyHook

+ (void)install {
    UIPurifyConfig *config = [UIPurifyConfig shared];
    WPLog(@"UIPurify", @"UIPurifyHook install starting, hideSeparatorLine=%d", config.hideSeparatorLine);

    Class tableViewClass = objc_getClass("UITableView");
    if (tableViewClass) {
        MSHookMessageEx(tableViewClass, @selector(separatorColor), (IMP)replaced_separatorColor, &orig_separatorColor);
        WPLog(@"UIPurify", @"[+] [UITableView separatorColor] hooked");

        MSHookMessageEx(tableViewClass, @selector(separatorStyle), (IMP)replaced_separatorStyle, &orig_separatorStyle);
        WPLog(@"UIPurify", @"[+] [UITableView separatorStyle] hooked");
    } else {
        WPLog(@"UIPurify", @"[-] UITableView class not found");
    }

    Class wcColorClass = objc_getClass("WCColor");
    if (wcColorClass) {
        Class wcColorMeta = object_getClass(wcColorClass);
        MSHookMessageEx(wcColorMeta, @selector(seperatorColor), (IMP)replaced_wcColor_seperatorColor, &orig_wcColor_seperatorColor);
        WPLog(@"UIPurify", @"[+] [WCColor seperatorColor] hooked (class method on metaclass)");
    } else {
        WPLog(@"UIPurify", @"[-] WCColor class not found");
    }

    // ── 拍一拍 ──
    Class appPatCellClass = objc_getClass("AppPatMessageCellView");
    Class appPatVMClass = objc_getClass("AppPatMessageViewModel");
    if (appPatCellClass && appPatVMClass) {
        purifySafeHook(appPatCellClass, @selector(initWithViewModel:),
                       (IMP)hook_AppPatCell_initWithViewModel,
                       &_orig_AppPatCell_initWithViewModel);
        purifySafeHook(appPatCellClass, @selector(layoutInternal),
                       (IMP)hook_AppPatCell_layoutInternal,
                       &_orig_AppPatCell_layoutInternal);
        purifySafeHook(appPatCellClass, @selector(canBeReused),
                       (IMP)hook_AppPatCell_canBeReused,
                       &_orig_AppPatCell_canBeReused);
        purifySafeHook(appPatCellClass, @selector(shouldLayoutIfNeeded),
                       (IMP)hook_AppPatCell_shouldLayoutIfNeeded,
                       &_orig_AppPatCell_shouldLayoutIfNeeded);
        purifySafeHook(appPatVMClass, @selector(measure:),
                       (IMP)hook_AppPatVM_measure,
                       &_orig_AppPatVM_measure);
        WPLog(@"UIPurify", @"[+] AppPatMessageCellView/ViewModel hooked (5 methods, purifySafeHook)");
    } else {
        WPLog(@"UIPurify", @"[-] AppPatMessageCellView/ViewModel not found");
    }

    // ── 撤回提示 ──
    Class sysMsgCellClass = objc_getClass("SystemMessageCellView");
    Class sysMsgVMClass = objc_getClass("SystemMessageViewModel");
    if (sysMsgCellClass && sysMsgVMClass) {
        purifySafeHook(sysMsgCellClass, @selector(initWithViewModel:),
                       (IMP)hook_SysMsgCell_initWithViewModel,
                       &_orig_SysMsgCell_initWithViewModel);
        purifySafeHook(sysMsgCellClass, @selector(layoutInternal),
                       (IMP)hook_SysMsgCell_layoutInternal,
                       &_orig_SysMsgCell_layoutInternal);
        purifySafeHook(sysMsgCellClass, @selector(canBeReused),
                       (IMP)hook_SysMsgCell_canBeReused,
                       &_orig_SysMsgCell_canBeReused);
        purifySafeHook(sysMsgCellClass, @selector(shouldLayoutIfNeeded),
                       (IMP)hook_SysMsgCell_shouldLayoutIfNeeded,
                       &_orig_SysMsgCell_shouldLayoutIfNeeded);
        purifySafeHook(sysMsgVMClass, @selector(measure:),
                       (IMP)hook_SysMsgVM_measure,
                       &_orig_SysMsgVM_measure);
        WPLog(@"UIPurify", @"[+] SystemMessageCellView/ViewModel hooked (5 methods, purifySafeHook)");
    } else {
        WPLog(@"UIPurify", @"[-] SystemMessageCellView/ViewModel not found");
    }

    WPLog(@"UIPurify", @"UIPurifyHook install complete");
}

@end