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
//   注：锤子还 hook 了 CContactMgr getContactList:contactType:，但其挂在其 enableAllowYourSelf
//       功能上，与布局无关，Mio 不搬。
//   生效时机：WCR/锤子同款延迟安装（启动 +8s 过看门狗窗口），设置页开关即时补装（幂等）。
//   立即生效：applyLayoutRefreshNow = 清文本测量缓存 + 语言切换链路全局重绘（Mio fcde36e
//       已实测验证的 WCR 同款链路，锤子 doChangeCSS 同构）。

#import "FontLayoutHook.h"
#import "FontLayoutConfig.h"
#import "../../Core/LogManager.h"
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

/// MMContext currentContext getService:（WCR 唯一路径，Mio 已实证）
static id FLService(Class cls) {
    if (!cls) return nil;
    Class mmctx = objc_getClass("MMContext");
    if (!mmctx || ![mmctx respondsToSelector:@selector(currentContext)]) return nil;
    @try {
        id ctx = ((id (*)(id, SEL))objc_msgSend)(mmctx, @selector(currentContext));
        if (ctx && [ctx respondsToSelector:@selector(getService:)]) {
            return ((id (*)(id, SEL, Class))objc_msgSend)(ctx, @selector(getService:), cls);
        }
    } @catch (NSException *e) {}
    return nil;
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
        WPLog(@"FontLayout", @"[MODIFY] %@ in %@ -> %@",
              property, ruleSet, valueStr);
        return modified;
    } @catch (NSException *e) {
        WPLog(@"FontLayout", @"getValueOfProperty 异常: %@ %@ prop=%@ ruleSet=%@",
              e.name, e.reason, property, ruleSet);
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
        WPLog(@"FontLayout", @"m_uiGlobalFontLevel 异常: %@ %@", e.name, e.reason);
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
            UIFont *font = [UIFont mediumSystemFontOfSize:v + 1.0];
            if (font) ((UILabel *)label).font = font;
        }
    } @catch (NSException *e) {
        WPLog(@"FontLayout", @"getMemeberCountLabel 异常: %@ %@", e.name, e.reason);
    }
    return label;
}

#pragma mark - 立即生效（WCR/锤子 doChangeCSS 同款链路）

+ (void)applyLayoutRefreshNow {
    @try {
        // 1) 清微信文本测量缓存
        Class widthCls = objc_getClass("MMTextWidth");
        if (widthCls && [widthCls respondsToSelector:@selector(clear)]) {
            ((void (*)(id, SEL))objc_msgSend)(widthCls, @selector(clear));
        }

        // 2) 借微信语言切换链路触发全局刷新
        id langMgr = FLService(objc_getClass("MMLanguageMgr"));
        SEL setLangSel = NSSelectorFromString(@"setCurLanguage:shouldChangeMainF:");
        if (langMgr && [langMgr respondsToSelector:setLangSel]) {
            ((void (*)(id, SEL, int, BOOL))objc_msgSend)(langMgr, setLangSel, 0, NO);
        }

        // 3) 清翻译缓存（锤子 doChangeCSS 同款）
        SEL cleanSel = NSSelectorFromString(@"changeLanguageAndCleanAllCache");
        id snsMgr = FLService(objc_getClass("TranslateSnsMgr"));
        if (snsMgr && [snsMgr respondsToSelector:cleanSel]) {
            ((void (*)(id, SEL))objc_msgSend)(snsMgr, cleanSel);
        }
        id msgMgr = FLService(objc_getClass("TranslateMsgMgr"));
        if (msgMgr && [msgMgr respondsToSelector:cleanSel]) {
            ((void (*)(id, SEL))objc_msgSend)(msgMgr, cleanSel);
        }

        // 4) 全微信 VC 重绘
        id appMgr = FLService(objc_getClass("CAppViewControllerManager"));
        SEL refreshSel = NSSelectorFromString(@"refreshLanguage:");
        if (appMgr && [appMgr respondsToSelector:refreshSel]) {
            ((void (*)(id, SEL, int))objc_msgSend)(appMgr, refreshSel, 3);
        }

        WPLog(@"FontLayout", @"[APPLY] 立即生效刷新完成");
    } @catch (NSException *e) {
        WPLog(@"FontLayout", @"applyLayoutRefreshNow 异常: %@ %@", e.name, e.reason);
    }
}

#pragma mark - 安装（WCR 同款延迟引导，过启动看门狗窗口）

@implementation FontLayoutHook

+ (void)install {
    // 启动 +8 秒主队列空闲后执行（看门狗窗口已过）；开关全关时不装
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(8 * NSEC_PER_SEC)),
                   dispatch_get_main_queue(), ^{
        [FontLayoutHook installIfNeeded];
    });
}

+ (void)installIfNeeded {
    if (sHooksInstalled) return;

    FontLayoutConfig *config = [FontLayoutConfig shared];
    if (!config.globalLayoutEnabled && !config.chatLayoutEnabled) {
        WPLog(@"FontLayout", @"[SKIP] 全局/对话布局均未开启，跳过 hook 安装");
        return;
    }

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
    WPLog(@"FontLayout", @"[INSTALL] hooks: theme=%d fontLevel=%d memberLabel=%d",
          (mmThemeManager && m1) ? 1 : 0,
          (clocalInfo && m2) ? 1 : 0,
          (roomContent && m3) ? 1 : 0);
}

+ (void)notifySwitchChanged {
    // 设置页开关变化即时补装（installIfNeeded 幂等守卫防重）
    [FontLayoutHook installIfNeeded];
}

@end
