#import "UIPurifyHook.h"
#import "UIPurifyConfig.h"
#import "../../Core/HookEngine.h"
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
static IMP orig_AppPatCell_initWithViewModel = NULL;
static IMP orig_AppPatCell_layoutInternal = NULL;
static IMP orig_AppPatCell_canBeReused = NULL;
static IMP orig_AppPatCell_shouldLayoutIfNeeded = NULL;
static IMP orig_AppPatVM_measure = NULL;

/// initWithViewModel: — 创建时隐藏
static id hook_AppPatCell_initWithViewModel(id self, SEL _cmd, id viewModel) {
    id result = ((id (*)(id, SEL, id))orig_AppPatCell_initWithViewModel)(self, _cmd, viewModel);
    if (result && [UIPurifyConfig shared].hidePatHint) {
        [result setHidden:YES];
        [result setFrame:[result frame]];  // 触发 setNeedsLayout
    }
    return result;
}

/// layoutInternal — 跳过布局
static void hook_AppPatCell_layoutInternal(id self, SEL _cmd) {
    if ([UIPurifyConfig shared].hidePatHint) return;
    ((void (*)(id, SEL))orig_AppPatCell_layoutInternal)(self, _cmd);
}

/// canBeReused — 可复用
static BOOL hook_AppPatCell_canBeReused(id self, SEL _cmd) {
    if ([UIPurifyConfig shared].hidePatHint) return YES;
    return ((BOOL (*)(id, SEL))orig_AppPatCell_canBeReused)(self, _cmd);
}

/// shouldLayoutIfNeeded — 不需要布局
static BOOL hook_AppPatCell_shouldLayoutIfNeeded(id self, SEL _cmd) {
    if ([UIPurifyConfig shared].hidePatHint) return NO;
    return ((BOOL (*)(id, SEL))orig_AppPatCell_shouldLayoutIfNeeded)(self, _cmd);
}

/// measure: — 返回零高度
static CGSize hook_AppPatVM_measure(id self, SEL _cmd, CGSize size) {
    if ([UIPurifyConfig shared].hidePatHint) return CGSizeZero;
    return ((CGSize (*)(id, SEL, CGSize))orig_AppPatVM_measure)(self, _cmd, size);
}

#pragma mark - 撤回提示 Hook 函数

// ★ 撤回提示 _orig 指针
static IMP orig_SysMsgCell_initWithViewModel = NULL;
static IMP orig_SysMsgCell_layoutInternal = NULL;
static IMP orig_SysMsgCell_canBeReused = NULL;
static IMP orig_SysMsgCell_shouldLayoutIfNeeded = NULL;
static IMP orig_SysMsgVM_measure = NULL;

/// initWithViewModel: — 创建时隐藏
static id hook_SysMsgCell_initWithViewModel(id self, SEL _cmd, id viewModel) {
    id result = ((id (*)(id, SEL, id))orig_SysMsgCell_initWithViewModel)(self, _cmd, viewModel);
    if (result && [UIPurifyConfig shared].hideRevokeHint) {
        [result setHidden:YES];
        [result setFrame:[result frame]];
    }
    return result;
}

/// layoutInternal — 跳过布局
static void hook_SysMsgCell_layoutInternal(id self, SEL _cmd) {
    if ([UIPurifyConfig shared].hideRevokeHint) return;
    ((void (*)(id, SEL))orig_SysMsgCell_layoutInternal)(self, _cmd);
}

/// canBeReused — 可复用
static BOOL hook_SysMsgCell_canBeReused(id self, SEL _cmd) {
    if ([UIPurifyConfig shared].hideRevokeHint) return YES;
    return ((BOOL (*)(id, SEL))orig_SysMsgCell_canBeReused)(self, _cmd);
}

/// shouldLayoutIfNeeded — 不需要布局
static BOOL hook_SysMsgCell_shouldLayoutIfNeeded(id self, SEL _cmd) {
    if ([UIPurifyConfig shared].hideRevokeHint) return NO;
    return ((BOOL (*)(id, SEL))orig_SysMsgCell_shouldLayoutIfNeeded)(self, _cmd);
}

/// measure: — 返回零高度
static CGSize hook_SysMsgVM_measure(id self, SEL _cmd, CGSize size) {
    if ([UIPurifyConfig shared].hideRevokeHint) return CGSizeZero;
    return ((CGSize (*)(id, SEL, CGSize))orig_SysMsgVM_measure)(self, _cmd, size);
}

#pragma mark - 语音红点和转文字 Hook 函数

static void (*orig_VoiceMsgCell_layoutSubviews)(id, SEL) = NULL;
static void hook_VoiceMsgCell_layoutSubviews(id self, SEL _cmd) {
    orig_VoiceMsgCell_layoutSubviews(self, _cmd);
    if ([UIPurifyConfig shared].hideVoiceRedDot) {
        // 隐藏未读红点
        UIView *unreadView = [self valueForKey:@"m_unreadImageView"];
        [unreadView setHidden:YES];
        // 隐藏"转文字"快捷按钮
        UIView *transBtn = [self valueForKey:@"m_quickTransTipButton"];
        [transBtn setHidden:YES];
    }
}

#pragma mark - 聊天气泡背景 Hook 函数

static void (*orig_YYAsyncImg_layoutSubviews)(id, SEL) = NULL;
static void hook_YYAsyncImg_layoutSubviews(id self, SEL _cmd) {
    orig_YYAsyncImg_layoutSubviews(self, _cmd);
    if ([UIPurifyConfig shared].hideBubbleBackground) {
        // 沿 superview 链向上查找 CommonMessageCellView
        UIView *current = self;
        while (true) {
            UIView *superview = [current superview];
            if (superview == nil) break;

            if ([superview isKindOfClass:NSClassFromString(@"CommonMessageCellView")]) {
                // 获取 cell 的背景图片视图（微信私有方法）
                UIImageView *bgImgView = nil;
                if ([superview respondsToSelector:@selector(getBgImageView)]) {
                    bgImgView = [superview performSelector:@selector(getBgImageView)];
                }
                if (bgImgView != nil) {
                    // 确认 self 是 bgImgView 的后代视图
                    if ([self isDescendantOfView:bgImgView]) {
                        [self setAlpha:0.0]; // 透明
                        break;
                    }
                }
            }
            current = superview;
        }
    }
}

#pragma mark - 禁用输入框听写 Hook 函数

static BOOL (*orig_MMDictConfig_enableDictation)(id, SEL) = NULL;
static BOOL hook_MMDictConfig_enableDictation(id self, SEL _cmd) {
    if ([UIPurifyConfig shared].disableDictation) {
        return NO;
    }
    return orig_MMDictConfig_enableDictation(self, _cmd);
}

@implementation UIPurifyHook

+ (void)install {
    UIPurifyConfig *config = [UIPurifyConfig shared];
    [_WPLogManager appendLineWithTag:@"UIPurify" content:[NSString stringWithFormat:@"install starting, hideSeparatorLine=%d", config.hideSeparatorLine]];

    // ── 表驱动 Hook（普通 MSHookMessageEx）──
    HookTableItem items[] = {
        {@"UITableView", @"separatorColor",
            (IMP)replaced_separatorColor, &orig_separatorColor},
        {@"UITableView", @"separatorStyle",
            (IMP)replaced_separatorStyle, &orig_separatorStyle},
        {@"VoiceMessageCellView", @"layoutSubviews",
            (IMP)hook_VoiceMsgCell_layoutSubviews, (IMP *)&orig_VoiceMsgCell_layoutSubviews},
        {@"YYAsyncImageView", @"layoutSubviews",
            (IMP)hook_YYAsyncImg_layoutSubviews, (IMP *)&orig_YYAsyncImg_layoutSubviews},
        {@"MMGrowTextViewExtConfig", @"enableDictation",
            (IMP)hook_MMDictConfig_enableDictation, (IMP *)&orig_MMDictConfig_enableDictation},
    };
    [HookEngine installHookTable:@"UIPurify" items:items
                           count:sizeof(items) / sizeof(items[0])];

    // ── WCColor 类方法 Hook（需要特殊处理 metaclass）──
    Class wcColorClass = objc_getClass("WCColor");
    if (wcColorClass) {
        Class wcColorMeta = object_getClass(wcColorClass);
        MSHookMessageEx(wcColorMeta, @selector(seperatorColor), (IMP)replaced_wcColor_seperatorColor, &orig_wcColor_seperatorColor);
    }

    // ── 拍一拍（使用 purifySafeHook 避免父子类交叉污染）──
    Class appPatCellClass = objc_getClass("AppPatMessageCellView");
    Class appPatVMClass = objc_getClass("AppPatMessageViewModel");
    if (appPatCellClass && appPatVMClass) {
        purifySafeHook(appPatCellClass, @selector(initWithViewModel:),
                       (IMP)hook_AppPatCell_initWithViewModel,
                       &orig_AppPatCell_initWithViewModel);
        purifySafeHook(appPatCellClass, @selector(layoutInternal),
                       (IMP)hook_AppPatCell_layoutInternal,
                       &orig_AppPatCell_layoutInternal);
        purifySafeHook(appPatCellClass, @selector(canBeReused),
                       (IMP)hook_AppPatCell_canBeReused,
                       &orig_AppPatCell_canBeReused);
        purifySafeHook(appPatCellClass, @selector(shouldLayoutIfNeeded),
                       (IMP)hook_AppPatCell_shouldLayoutIfNeeded,
                       &orig_AppPatCell_shouldLayoutIfNeeded);
        purifySafeHook(appPatVMClass, @selector(measure:),
                       (IMP)hook_AppPatVM_measure,
                       &orig_AppPatVM_measure);
    }

    // ── 撤回提示（使用 purifySafeHook 避免父子类交叉污染）──
    Class sysMsgCellClass = objc_getClass("SystemMessageCellView");
    Class sysMsgVMClass = objc_getClass("SystemMessageViewModel");
    if (sysMsgCellClass && sysMsgVMClass) {
        purifySafeHook(sysMsgCellClass, @selector(initWithViewModel:),
                       (IMP)hook_SysMsgCell_initWithViewModel,
                       &orig_SysMsgCell_initWithViewModel);
        purifySafeHook(sysMsgCellClass, @selector(layoutInternal),
                       (IMP)hook_SysMsgCell_layoutInternal,
                       &orig_SysMsgCell_layoutInternal);
        purifySafeHook(sysMsgCellClass, @selector(canBeReused),
                       (IMP)hook_SysMsgCell_canBeReused,
                       &orig_SysMsgCell_canBeReused);
        purifySafeHook(sysMsgCellClass, @selector(shouldLayoutIfNeeded),
                       (IMP)hook_SysMsgCell_shouldLayoutIfNeeded,
                       &orig_SysMsgCell_shouldLayoutIfNeeded);
        purifySafeHook(sysMsgVMClass, @selector(measure:),
                       (IMP)hook_SysMsgVM_measure,
                       &orig_SysMsgVM_measure);
    }
}

@end