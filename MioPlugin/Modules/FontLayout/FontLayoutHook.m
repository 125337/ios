// FontLayoutHook.m —— 锤子助手 2.6.9 同款实现（dylib 二进制 + 反编译交叉验证实锤）
//
// 机制（与锤子助手 WeChatTweakCssSettingsController 完全对齐）：
//   Hook-1 MMThemeManager getValueOfProperty:inRuleSet:
//       ruleSet isEqualToString:"#font_set" 精确匹配；
//       全局开关开：property == "alllevel"（全小写，锤子 dylib __cstring 原文）或 "webLevel"；
//       对话开关开：property == "chatLevel"；
//       值校验：字号 10-16（锤子用 NSDecimalNumber compare 实现同语义）；
//       替换方式：[原返回值 mutableCopy] 后 replaceObjectAtIndex:0 withObject:值字符串。
//   Hook-2 CLocalInfo m_uiGlobalFontLevel → 任一开关开强制返回 1（锁死微信自身字体等级缩放，
//       这是锤子敢用固定值替换而不毁布局的关键）。
//   Hook-3 RoomContentLogicController getMemeberCountLabel
//       → 对话开关开且值有效时 label.font = [UIFont mediumSystemFontOfSize:值+1]。
//   生效时机：启动直接安装（无延迟）；开关全关时跳过安装，设置页开开关即时补装（幂等）。
//   生效方式：开关变化后弹统一重启弹窗（MioRestartHelper 优雅重启），重启后全量生效。
//   排查日志已全部移除（143.log 功能闭环后清理）；仅保留 @try 静默放行，不干预微信。

#import "FontLayoutHook.h"
#import "FontLayoutConfig.h"
#import <substrate.h>
#import <objc/message.h>
#import <objc/runtime.h>
#import <UIKit/UIKit.h>

#pragma mark - 常量（锤子助手 dylib CFString 原值）

static NSString * const kFontRuleSet   = @"#font_set";
static NSString * const kPropAllLevel  = @"alllevel";
static NSString * const kPropWebLevel  = @"webLevel";
static NSString * const kPropChatLevel = @"chatLevel";

static const CGFloat kMinFontSize = 10.0;
static const CGFloat kMaxFontSize = 16.0;

static BOOL sHooksInstalled = NO;

static BOOL wpValidFontSize(CGFloat v) {
    return v >= kMinFontSize && v <= kMaxFontSize;
}

#pragma mark - Hook 1: MMThemeManager.getValueOfProperty:inRuleSet:

static id (*orig_getValueOfProperty_inRuleSet)(id, SEL, NSString *, NSString *);

static id hook_getValueOfProperty_inRuleSet(id self, SEL _cmd,
                                            NSString *property,
                                            NSString *ruleSet) {
    // ★ 先调原方法（orig 段不包 try）★
    id originalResult = orig_getValueOfProperty_inRuleSet(self, _cmd, property, ruleSet);

    @try {
        FontLayoutConfig *config = [FontLayoutConfig shared];
        BOOL globalOn = config.globalLayoutEnabled;
        BOOL chatOn   = config.chatLayoutEnabled;
        if (!globalOn && !chatOn) return originalResult;

        // 锤子同款：规则集精确匹配 #font_set，其余一律直通
        if (![kFontRuleSet isEqualToString:ruleSet]) return originalResult;

        // ── 分支命中与取值 ──
        NSString *valueStr = nil;
        if (globalOn
            && ([kPropAllLevel isEqualToString:property]
                || [kPropWebLevel isEqualToString:property])) {
            if (wpValidFontSize(config.globalFontSize)) {
                valueStr = [NSString stringWithFormat:@"%.0f", config.globalFontSize];
            }
        } else if (chatOn && [kPropChatLevel isEqualToString:property]) {
            if (wpValidFontSize(config.chatFontSize)) {
                valueStr = [NSString stringWithFormat:@"%.0f", config.chatFontSize];
            }
        }
        if (!valueStr) return originalResult;

        // 防御：原返回值为空数组时 replaceObjectAtIndex:0 会崩（锤子无此守卫，Mio 加上）
        if (![originalResult isKindOfClass:[NSArray class]]
            || [(NSArray *)originalResult count] == 0) {
            return originalResult;
        }

        NSMutableArray *modified = [(NSArray *)originalResult mutableCopy];
        [modified replaceObjectAtIndex:0 withObject:valueStr];
        return modified;
    } @catch (NSException *e) {
        // 静默放行：异常时返回原值，不干预微信
        return originalResult;
    }
}

#pragma mark - Hook 2: CLocalInfo.m_uiGlobalFontLevel（锤子同款：开关开时锁 1）

static unsigned int (*orig_m_uiGlobalFontLevel)(id, SEL);

static unsigned int hook_m_uiGlobalFontLevel(id self, SEL _cmd) {
    @try {
        FontLayoutConfig *config = [FontLayoutConfig shared];
        if (config.globalLayoutEnabled || config.chatLayoutEnabled) {
            return 1;
        }
    } @catch (NSException *e) {
        // 静默放行：异常时走原实现
    }
    return orig_m_uiGlobalFontLevel(self, _cmd);
}

#pragma mark - Hook 3: RoomContentLogicController.getMemeberCountLabel（锤子同款）

static id (*orig_getMemeberCountLabel)(id, SEL);

static id hook_getMemeberCountLabel(id self, SEL _cmd) {
    id label = orig_getMemeberCountLabel(self, _cmd);
    @try {
        FontLayoutConfig *config = [FontLayoutConfig shared];
        CGFloat v = config.chatFontSize;
        if (config.chatLayoutEnabled && wpValidFontSize(v)
            && [label isKindOfClass:[UILabel class]]) {
            // CI SDK 无 mediumSystemFontOfSize: 声明，走 objc_msgSend
            SEL medSel = NSSelectorFromString(@"mediumSystemFontOfSize:");
            UIFont *font = ((UIFont *(*)(id, SEL, CGFloat))objc_msgSend)([UIFont class], medSel, v + 1.0);
            if (font) {
                ((UILabel *)label).font = font;
            }
        }
    } @catch (NSException *e) {
        // 静默放行：异常时返回原值，不干预微信
    }
    return label;
}

#pragma mark - 安装（启动直接安装，开关全关跳过；设置页开关即时补装幂等）

@implementation FontLayoutHook

+ (void)install {
    [FontLayoutHook installIfNeeded];
}

+ (void)installIfNeeded {
    if (sHooksInstalled) return;

    FontLayoutConfig *config = [FontLayoutConfig shared];
    if (!config.globalLayoutEnabled && !config.chatLayoutEnabled) return;

    Class mmThemeManager = objc_getClass("MMThemeManager");
    Class clocalInfo     = objc_getClass("CLocalInfo");
    Class roomContent    = objc_getClass("RoomContentLogicController");

    SEL selGetValue    = NSSelectorFromString(@"getValueOfProperty:inRuleSet:");
    SEL selFontLevel   = NSSelectorFromString(@"m_uiGlobalFontLevel");
    SEL selMemberLabel = NSSelectorFromString(@"getMemeberCountLabel");

    Method m1 = mmThemeManager ? class_getInstanceMethod(mmThemeManager, selGetValue) : NULL;
    Method m2 = clocalInfo     ? class_getInstanceMethod(clocalInfo, selFontLevel) : NULL;
    Method m3 = roomContent    ? class_getInstanceMethod(roomContent, selMemberLabel) : NULL;

    if (mmThemeManager && m1) {
        MSHookMessageEx(mmThemeManager, selGetValue,
                        (IMP)hook_getValueOfProperty_inRuleSet,
                        (IMP *)&orig_getValueOfProperty_inRuleSet);
    }
    if (clocalInfo && m2) {
        MSHookMessageEx(clocalInfo, selFontLevel,
                        (IMP)hook_m_uiGlobalFontLevel,
                        (IMP *)&orig_m_uiGlobalFontLevel);
    }
    if (roomContent && m3) {
        MSHookMessageEx(roomContent, selMemberLabel,
                        (IMP)hook_getMemeberCountLabel,
                        (IMP *)&orig_getMemeberCountLabel);
    }

    sHooksInstalled = YES;
}

+ (void)notifySwitchChanged {
    [FontLayoutHook installIfNeeded];
}

@end
