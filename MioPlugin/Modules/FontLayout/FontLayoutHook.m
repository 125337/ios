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
//   立即生效：applyLayoutRefreshNow = 清文本测量缓存 + 语言切换链路全局重绘（Mio fcde36e
//       已实测验证的 WCR 同款链路，锤子 doChangeCSS 同构）。
//
// 日志约定（全流程排查；热路径全部一次性记录，状态变化才打印，避免刷屏——
// 实测 140.log 中 [MODIFY] 18 秒刷 8256 条 ≈ 460 条/秒，为日志文件 IO 开销）：
//   [INSTALL] 安装链路   [SKIP] 跳过安装   [QUERY] #font_set 属性首见留痕
//   [MODIFY] 值变化时替换 [LEVEL] 字体等级锁 [APPLY] 立即生效各步

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
static BOOL sLevelLockLogged = NO;

// 热路径日志去重：key -> 上次打印的标记，状态变化才允许再打印
static NSMutableDictionary<NSString *, NSString *> *sLogState = nil;
static dispatch_once_t sLogStateOnce;

static BOOL FLShouldLog(NSString *prefix, NSString *key, NSString *marker) {
    dispatch_once(&sLogStateOnce, ^{ sLogState = [NSMutableDictionary dictionary]; });
    @synchronized (sLogState) {
        NSString *k = [prefix stringByAppendingString:key];
        NSString *last = sLogState[k];
        if (last && [last isEqualToString:marker]) return NO;
        sLogState[k] = marker;
        return YES;
    }
}

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

        // ── [QUERY] 属性首见留痕（一次性；后续同属性查询不再打印）──
        if (FLShouldLog(@"seen:", property, @"1")) {
            NSString *kind = originalResult ? NSStringFromClass([originalResult class]) : @"nil";
            NSString *firstDesc = nil;
            if ([originalResult isKindOfClass:[NSArray class]]
                && [(NSArray *)originalResult count] > 0) {
                id first = [(NSArray *)originalResult objectAtIndex:0];
                firstDesc = [NSString stringWithFormat:@"%@(%@)",
                             first, NSStringFromClass([first class])];
            }
            WPLog(@"FontLayout", @"[QUERY] prop=%@ result=%@ first=%@ globalOn=%d chatOn=%d",
                  property, kind, firstDesc ?: @"empty", globalOn, chatOn);
        }

        // ── 分支命中与取值 ──
        NSString *valueStr = nil;
        if (globalOn
            && ([kPropAllLevel isEqualToString:property]
                || [kPropWebLevel isEqualToString:property])) {
            if (wpValidFontSize(config.globalFontSize)) {
                valueStr = [NSString stringWithFormat:@"%.0f", config.globalFontSize];
            } else if (FLShouldLog(@"invalid:", property, @"1")) {
                WPLog(@"FontLayout", @"[QUERY] %@ 命中但全局字号无效: %.2f",
                      property, config.globalFontSize);
            }
        } else if (chatOn && [kPropChatLevel isEqualToString:property]) {
            if (wpValidFontSize(config.chatFontSize)) {
                valueStr = [NSString stringWithFormat:@"%.0f", config.chatFontSize];
            } else if (FLShouldLog(@"invalid:", property, @"1")) {
                WPLog(@"FontLayout", @"[QUERY] %@ 命中但对话字号无效: %.2f",
                      property, config.chatFontSize);
            }
        }
        if (!valueStr) return originalResult;

        // 防御：原返回值为空数组时 replaceObjectAtIndex:0 会崩（锤子无此守卫，Mio 加上）
        if (![originalResult isKindOfClass:[NSArray class]]
            || [(NSArray *)originalResult count] == 0) {
            if (FLShouldLog(@"empty:", property, @"1")) {
                WPLog(@"FontLayout", @"[QUERY] %@ 返回值非数组或为空，放弃替换", property);
            }
            return originalResult;
        }

        NSMutableArray *modified = [(NSArray *)originalResult mutableCopy];
        [modified replaceObjectAtIndex:0 withObject:valueStr];
        // 值变化才打印（同值重复替换不刷屏）
        if (FLShouldLog(@"mod:", property, valueStr)) {
            WPLog(@"FontLayout", @"[MODIFY] %@ in %@ -> %@", property, ruleSet, valueStr);
        }
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
            if (!sLevelLockLogged) {
                sLevelLockLogged = YES;
                WPLog(@"FontLayout", @"[LEVEL] m_uiGlobalFontLevel 锁 1 生效（首次调用）");
            }
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
            // CI SDK 无 mediumSystemFontOfSize: 声明，走 objc_msgSend
            SEL medSel = NSSelectorFromString(@"mediumSystemFontOfSize:");
            UIFont *font = ((UIFont *(*)(id, SEL, CGFloat))objc_msgSend)([UIFont class], medSel, v + 1.0);
            if (font) {
                ((UILabel *)label).font = font;
                if (FLShouldLog(@"member:", @"label", [NSString stringWithFormat:@"%.0f", v])) {
                    WPLog(@"FontLayout", @"[MODIFY] memberCountLabel font -> %.0f+1", v);
                }
            }
        }
    } @catch (NSException *e) {
        WPLog(@"FontLayout", @"getMemeberCountLabel 异常: %@ %@", e.name, e.reason);
    }
    return label;
}

#pragma mark - 立即生效（WCR/锤子 doChangeCSS 同款链路）

static void FLApplyRefreshNow(void) {
    @try {
        // 1) 清微信文本测量缓存
        Class widthCls = objc_getClass("MMTextWidth");
        BOOL cleared = NO;
        if (widthCls && [widthCls respondsToSelector:@selector(clear)]) {
            ((void (*)(id, SEL))objc_msgSend)(widthCls, @selector(clear));
            cleared = YES;
        }
        WPLog(@"FontLayout", @"[APPLY] step1 清测量缓存: MMTextWidth=%@ clear=%d",
              widthCls ? @"OK" : @"NIL", cleared);

        // 2) 借微信语言切换链路触发全局刷新
        id langMgr = FLService(objc_getClass("MMLanguageMgr"));
        SEL setLangSel = NSSelectorFromString(@"setCurLanguage:shouldChangeMainF:");
        BOOL langOK = langMgr && [langMgr respondsToSelector:setLangSel];
        if (langOK) {
            ((void (*)(id, SEL, int, BOOL))objc_msgSend)(langMgr, setLangSel, 0, NO);
        }
        WPLog(@"FontLayout", @"[APPLY] step2 MMLanguageMgr=%@ setCurLanguage=%d",
              langMgr ? @"OK" : @"NIL", langOK);

        // 3) 清翻译缓存（锤子 doChangeCSS 同款）
        SEL cleanSel = NSSelectorFromString(@"changeLanguageAndCleanAllCache");
        id snsMgr = FLService(objc_getClass("TranslateSnsMgr"));
        BOOL snsOK = snsMgr && [snsMgr respondsToSelector:cleanSel];
        if (snsOK) ((void (*)(id, SEL))objc_msgSend)(snsMgr, cleanSel);
        id msgMgr = FLService(objc_getClass("TranslateMsgMgr"));
        BOOL msgOK = msgMgr && [msgMgr respondsToSelector:cleanSel];
        if (msgOK) ((void (*)(id, SEL))objc_msgSend)(msgMgr, cleanSel);
        WPLog(@"FontLayout", @"[APPLY] step3 翻译缓存清理: Sns=%d Msg=%d", snsOK, msgOK);

        // 4) 全微信 VC 重绘
        id appMgr = FLService(objc_getClass("CAppViewControllerManager"));
        SEL refreshSel = NSSelectorFromString(@"refreshLanguage:");
        BOOL refreshOK = appMgr && [appMgr respondsToSelector:refreshSel];
        if (refreshOK) {
            ((void (*)(id, SEL, int))objc_msgSend)(appMgr, refreshSel, 3);
        }
        WPLog(@"FontLayout", @"[APPLY] step4 CAppViewControllerManager=%@ refreshLanguage:3=%d",
              appMgr ? @"OK" : @"NIL", refreshOK);

        WPLog(@"FontLayout", @"[APPLY] 立即生效刷新完成");
    } @catch (NSException *e) {
        WPLog(@"FontLayout", @"applyLayoutRefreshNow 异常: %@ %@", e.name, e.reason);
    }
}

#pragma mark - 安装（启动直接安装，开关全关跳过；设置页开关即时补装幂等）

@implementation FontLayoutHook

+ (void)applyLayoutRefreshNow {
    FLApplyRefreshNow();
}

+ (void)install {
    WPLog(@"FontLayout", @"=== FontLayoutHook 锤子同款版 install（直接安装，无延迟）===");
    [FontLayoutHook installIfNeeded];
}

+ (void)installIfNeeded {
    if (sHooksInstalled) {
        WPLog(@"FontLayout", @"[INSTALL] hooks 已安装，跳过重复安装");
        return;
    }

    FontLayoutConfig *config = [FontLayoutConfig shared];
    WPLog(@"FontLayout", @"[INSTALL] 配置: globalOn=%d globalSize=%.2f chatOn=%d chatSize=%.2f",
          config.globalLayoutEnabled, config.globalFontSize,
          config.chatLayoutEnabled, config.chatFontSize);

    if (!config.globalLayoutEnabled && !config.chatLayoutEnabled) {
        WPLog(@"FontLayout", @"[SKIP] 全局/对话布局均未开启，跳过 hook 安装");
        return;
    }

    Class mmThemeManager = objc_getClass("MMThemeManager");
    Class clocalInfo     = objc_getClass("CLocalInfo");
    Class roomContent    = objc_getClass("RoomContentLogicController");
    WPLog(@"FontLayout", @"[INSTALL] 类探测: MMThemeManager=%d CLocalInfo=%d RoomContentLogicController=%d",
          mmThemeManager ? 1 : 0, clocalInfo ? 1 : 0, roomContent ? 1 : 0);

    SEL selGetValue    = NSSelectorFromString(@"getValueOfProperty:inRuleSet:");
    SEL selFontLevel   = NSSelectorFromString(@"m_uiGlobalFontLevel");
    SEL selMemberLabel = NSSelectorFromString(@"getMemeberCountLabel");

    Method m1 = mmThemeManager ? class_getInstanceMethod(mmThemeManager, selGetValue) : NULL;
    Method m2 = clocalInfo     ? class_getInstanceMethod(clocalInfo, selFontLevel) : NULL;
    Method m3 = roomContent    ? class_getInstanceMethod(roomContent, selMemberLabel) : NULL;
    WPLog(@"FontLayout", @"[INSTALL] 方法探测: getValue=%d fontLevel=%d memberLabel=%d",
          m1 ? 1 : 0, m2 ? 1 : 0, m3 ? 1 : 0);

    if (mmThemeManager && m1) {
        MSHookMessageEx(mmThemeManager, selGetValue,
                        (IMP)hook_getValueOfProperty_inRuleSet,
                        (IMP *)&orig_getValueOfProperty_inRuleSet);
        WPLog(@"FontLayout", @"[INSTALL] HOOKED MMThemeManager getValueOfProperty:inRuleSet:");
    } else {
        WPLog(@"FontLayout", @"[INSTALL] SKIP MMThemeManager (class=%d method=%d)",
              mmThemeManager ? 1 : 0, m1 ? 1 : 0);
    }
    if (clocalInfo && m2) {
        MSHookMessageEx(clocalInfo, selFontLevel,
                        (IMP)hook_m_uiGlobalFontLevel,
                        (IMP *)&orig_m_uiGlobalFontLevel);
        WPLog(@"FontLayout", @"[INSTALL] HOOKED CLocalInfo m_uiGlobalFontLevel");
    } else {
        WPLog(@"FontLayout", @"[INSTALL] SKIP CLocalInfo (class=%d method=%d)",
              clocalInfo ? 1 : 0, m2 ? 1 : 0);
    }
    if (roomContent && m3) {
        MSHookMessageEx(roomContent, selMemberLabel,
                        (IMP)hook_getMemeberCountLabel,
                        (IMP *)&orig_getMemeberCountLabel);
        WPLog(@"FontLayout", @"[INSTALL] HOOKED RoomContentLogicController getMemeberCountLabel");
    } else {
        WPLog(@"FontLayout", @"[INSTALL] SKIP RoomContentLogicController (class=%d method=%d)",
              roomContent ? 1 : 0, m3 ? 1 : 0);
    }

    sHooksInstalled = YES;
    WPLog(@"FontLayout", @"[INSTALL] 安装完成: theme=%d fontLevel=%d memberLabel=%d",
          (mmThemeManager && m1) ? 1 : 0,
          (clocalInfo && m2) ? 1 : 0,
          (roomContent && m3) ? 1 : 0);
}

+ (void)notifySwitchChanged {
    FontLayoutConfig *config = [FontLayoutConfig shared];
    WPLog(@"FontLayout", @"[INSTALL] notifySwitchChanged: globalOn=%d chatOn=%d installed=%d",
          config.globalLayoutEnabled, config.chatLayoutEnabled, sHooksInstalled);
    [FontLayoutHook installIfNeeded];
}

@end
