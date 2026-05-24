#import "UIPurifyHook.h"
#import "../../Config/PluginConfig.h"
#import <objc/runtime.h>
#import <objc/message.h>
#import <substrate.h>
#import "../../Core/LogManager.h"

// ============================================================
// MARK: - 保存原始 IMP
// ============================================================
static IMP _orig_ChatTimeCell_layoutSubviews = NULL;
static IMP _orig_SystemMsgCell_updateStatus = NULL;
static IMP _orig_BaseMsgCell_layoutContentView = NULL;
static IMP _orig_VoiceMsgCell_layoutContentView = NULL;
static IMP _orig_ChatTimeCell_setM_uiTime = NULL;

// ============================================================
// MARK: - 1. 隐藏水平分割线
// ChatTimeCellView 是聊天时间分隔线 cell
// ============================================================
static void hook_ChatTimeCell_layoutSubviews(id self, SEL _cmd) {
    if (_orig_ChatTimeCell_layoutSubviews) {
        ((void (*)(id, SEL))_orig_ChatTimeCell_layoutSubviews)(self, _cmd);
    }
    if ([PluginConfig shared].hideSeparatorLine) {
        ((void (*)(id, SEL, CGFloat))objc_msgSend)(self, sel_registerName("setAlpha:"), 0.0);
    }
}

// ============================================================
// MARK: - 2 & 3. 隐藏撤回/拍一拍消息提示
// SystemMessageCellView 显示系统消息（撤回、拍一拍等）
// ============================================================
static void hook_SystemMsgCell_updateStatus(id self, SEL _cmd) {
    if (_orig_SystemMsgCell_updateStatus) {
        ((void (*)(id, SEL))_orig_SystemMsgCell_updateStatus)(self, _cmd);
    }
    PluginConfig *cfg = [PluginConfig shared];
    if (!cfg.hideRevokeHint && !cfg.hidePatHint) return;

    NSString *content = nil;
    @try {
        id wrap = nil;
        for (NSString *sel in @[@"getCurrentMessageWrap", @"messageWrap"]) {
            SEL s = NSSelectorFromString(sel);
            if ([self respondsToSelector:s]) { wrap = ((id (*)(id, SEL))objc_msgSend)(self, s); break; }
        }
        if (wrap && [wrap respondsToSelector:@selector(m_nsContent)]) {
            content = ((id (*)(id, SEL, ...))objc_msgSend)(wrap, @selector(m_nsContent));
        }
    } @catch (NSException *e) {}

    if (content) {
        if (cfg.hideRevokeHint && [content containsString:@"撤回"]) {
            ((void (*)(id, SEL, CGFloat))objc_msgSend)(self, sel_registerName("setAlpha:"), 0.0);
        }
        if (cfg.hidePatHint && [content containsString:@"拍了拍"]) {
            ((void (*)(id, SEL, CGFloat))objc_msgSend)(self, sel_registerName("setAlpha:"), 0.0);
        }
    }
}

// ============================================================
// MARK: - 4. 隐藏语音红点和转文字标签
// VoiceMessageCellView 是语音消息 cell
// ============================================================
static void hook_VoiceMsgCell_layoutContentView(id self, SEL _cmd) {
    if (_orig_VoiceMsgCell_layoutContentView) {
        ((void (*)(id, SEL))_orig_VoiceMsgCell_layoutContentView)(self, _cmd);
    }
    if (![PluginConfig shared].hideVoiceRedDot) return;

    @try {
        // 尝试隐藏红点视图
        for (NSString *key in @[@"m_redDotView", @"m_voiceRedDotView", @"redDotView"]) {
            @try {
                id dotView = [self valueForKey:key];
                if (dotView && [dotView isKindOfClass:[UIView class]]) {
                    ((void (*)(id, SEL, BOOL))objc_msgSend)(dotView, @selector(setHidden:), YES);
                }
            } @catch (NSException *e) {}
        }
        // 隐藏"转文字"标签
        for (NSString *key in @[@"m_translateLabel", @"m_voiceTransLabel", @"translateLabel"]) {
            @try {
                id label = [self valueForKey:key];
                if (label && [label isKindOfClass:[UIView class]]) {
                    ((void (*)(id, SEL, BOOL))objc_msgSend)(label, @selector(setHidden:), YES);
                }
            } @catch (NSException *e) {}
        }
    } @catch (NSException *e) {}
}

// ============================================================
// MARK: - 5. 隐藏聊天气泡背景（气泡透明）
// BaseMessageCellView / CommonMessageCellView 气泡背景
// ============================================================
static void hook_BaseMsgCell_layoutContentView(id self, SEL _cmd) {
    if (_orig_BaseMsgCell_layoutContentView) {
        ((void (*)(id, SEL))_orig_BaseMsgCell_layoutContentView)(self, _cmd);
    }
    if (![PluginConfig shared].hideBubbleBackground) return;

    @try {
        // 尝试清零气泡背景视图
        for (NSString *key in @[@"m_bgImageView", @"m_bubbleImageView", @"m_backgroundImageView", @"bgImageView"]) {
            @try {
                id bgView = [self valueForKey:key];
                if (bgView && [bgView isKindOfClass:[UIView class]]) {
                    ((void (*)(id, SEL, CGFloat))objc_msgSend)(bgView, sel_registerName("setAlpha:"), 0.0);
                }
            } @catch (NSException *e) {}
        }
        // 尝试设置父视图背景透明
        [self setValue:[UIColor clearColor] forKey:@"backgroundColor"];
    } @catch (NSException *e) {}
}

// ============================================================
// MARK: - 6. 禁用聊天页输入框听写功能
// 通过 hook MMUIViewController 禁止 dictation
// ============================================================
#import <UIKit/UIKit.h>

// 保存原始 textView 的 inputAssistantItem 设置
static void disableInputDictation(UIView *view) {
    for (UIView *subv in view.subviews) {
        if ([subv isKindOfClass:[UITextView class]] || [subv isKindOfClass:[UITextField class]]) {
            @try {
                // iOS 16+ inputAssistantItem
                if ([subv respondsToSelector:@selector(inputAssistantItem)]) {
                    id item = [subv valueForKey:@"inputAssistantItem"];
                    if (item) {
                        [item setValue:@(NO) forKey:@"allowsAccessoryView"];
                        [item setValue:@(YES) forKey:@"leadingBarButtonGroups"];
                        [item setValue:@(YES) forKey:@"trailingBarButtonGroups"];
                    }
                }
                // 隐藏 UITextInputAssistantItem（听写按钮所在栏）
                if ([subv respondsToSelector:@selector(inputAssistantItem)]) {
                    id assistant = [subv performSelector:@selector(inputAssistantItem)];
                    if ([assistant respondsToSelector:@selector(setLeadingBarButtonGroups:)]) {
                        [assistant performSelector:@selector(setLeadingBarButtonGroups:) withObject:@[]];
                    }
                    if ([assistant respondsToSelector:@selector(setTrailingBarButtonGroups:)]) {
                        [assistant performSelector:@selector(setTrailingBarButtonGroups:) withObject:@[]];
                    }
                }
            } @catch (NSException *e) {}
        }
        disableInputDictation(subv);
    }
}

// Hook BaseMsgContentViewController.viewDidLoad 执行 dictation 禁用
static IMP _orig_BaseMsgVC_viewDidLoad = NULL;
static void hook_BaseMsgVC_viewDidLoad(id self, SEL _cmd) {
    if (_orig_BaseMsgVC_viewDidLoad) {
        ((void (*)(id, SEL))_orig_BaseMsgVC_viewDidLoad)(self, _cmd);
    }
    if ([PluginConfig shared].disableDictation) {
        @try {
            disableInputDictation([self valueForKey:@"view"]);
        } @catch (NSException *e) {}
    }
}

// ============================================================
// MARK: - UIPurifyHook
// ============================================================
@implementation UIPurifyHook

+ (void)install {
    WPLog(@"UIPurify", @"UIPurifyHook install start");

    // 1. 隐藏水平分割线 — ChatTimeCellView
    {
        Class cls = objc_getClass("ChatTimeCellView");
        if (cls) {
            MSHookMessageEx(cls, @selector(layoutSubviews), (IMP)hook_ChatTimeCell_layoutSubviews, &_orig_ChatTimeCell_layoutSubviews);
            WPLog(@"UIPurify", @"[Hook] ✓ ChatTimeCellView.layoutSubviews (hide separator)");
        } else {
            WPLog(@"UIPurify", @"[Hook] - ChatTimeCellView not found");
        }
    }

    // 2 & 3. 隐藏撤回/拍一拍 — SystemMessageCellView
    {
        Class cls = objc_getClass("SystemMessageCellView");
        if (cls) {
            MSHookMessageEx(cls, sel_registerName("updateStatus"), (IMP)hook_SystemMsgCell_updateStatus, &_orig_SystemMsgCell_updateStatus);
            WPLog(@"UIPurify", @"[Hook] ✓ SystemMessageCellView.updateStatus (hide revoke/pat)");
        } else {
            WPLog(@"UIPurify", @"[Hook] - SystemMessageCellView not found");
        }
    }

    // 4. 隐藏语音红点/转文字 — VoiceMessageCellView
    {
        Class cls = objc_getClass("VoiceMessageCellView");
        if (cls) {
            MSHookMessageEx(cls, sel_registerName("layoutContentView"), (IMP)hook_VoiceMsgCell_layoutContentView, &_orig_VoiceMsgCell_layoutContentView);
            WPLog(@"UIPurify", @"[Hook] ✓ VoiceMessageCellView.layoutContentView (hide voice red dot)");
        } else {
            WPLog(@"UIPurify", @"[Hook] - VoiceMessageCellView not found");
        }
    }

    // 5. 隐藏气泡背景 — CommonMessageCellView 和 TextMessageCellView
    {
        Class cls = objc_getClass("BaseMessageCellView");
        if (!cls) cls = objc_getClass("CommonMessageCellView");
        if (cls) {
            MSHookMessageEx(cls, sel_registerName("layoutContentView"), (IMP)hook_BaseMsgCell_layoutContentView, &_orig_BaseMsgCell_layoutContentView);
            WPLog(@"UIPurify", @"[Hook] ✓ %@.layoutContentView (hide bubble bg)", NSStringFromClass(cls));
        } else {
            WPLog(@"UIPurify", @"[Hook] - message cell view not found for bubble bg");
        }
    }

    // 6. 禁用听写 — BaseMsgContentViewController
    {
        Class cls = objc_getClass("BaseMsgContentViewController");
        if (cls) {
            MSHookMessageEx(cls, @selector(viewDidLoad), (IMP)hook_BaseMsgVC_viewDidLoad, &_orig_BaseMsgVC_viewDidLoad);
            WPLog(@"UIPurify", @"[Hook] ✓ BaseMsgContentViewController.viewDidLoad (disable dictation)");
        } else {
            WPLog(@"UIPurify", @"[Hook] - BaseMsgContentViewController not found");
        }
    }

    WPLog(@"UIPurify", @"UIPurifyHook install complete");
}

@end