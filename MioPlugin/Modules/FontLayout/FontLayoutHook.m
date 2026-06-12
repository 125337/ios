// FontLayoutHook.m —— 修复版 v3
// 核心改动：
//   1. 先调原方法获取原始值 + 类型，创建同类型新值返回（解决类型不匹配）
//   2. 扩展 ruleSet 匹配逻辑（hasSuffix + containsString 双重保险）
//   3. 全量日志：记录所有 MMThemeManager 调用，方便调试
//
// 对应锤子助手：FUN_00753950 (MMThemeManager) + FUN_00753ce8 (CLocalInfo)

#import "FontLayoutHook.h"
#import "FontLayoutConfig.h"
#import "../../Core/LogManager.h"
#import <substrate.h>
#import <objc/runtime.h>

#pragma mark - 辅助函数

/// 根据原方法返回值的类型，创建同类型但带新 fontSize 的对象
/// 这是与锤子助手的关键对齐点：
///   锤子助手先调原方法获原始值 → mutableCopy → 修改 → 返回
///   我们：调原方法获原始值 → 创建同类型新值 → 返回
static id createValueWithFontSize(id originalValue, CGFloat fontSize) {
    NSString *fontSizeStr = [NSString stringWithFormat:@"%.0f", fontSize];

    if (originalValue == nil) {
        return fontSizeStr;
    }

    NSString *className = NSStringFromClass([originalValue class]);

    // NSString 子类 / NSCFString → 返回字符串
    if ([className containsString:@"NSString"] ||
        [className containsString:@"String"]) {
        return fontSizeStr;
    }

    // NSNumber 子类 → 返回数字（匹配原方法类型）
    if ([className containsString:@"NSNumber"] ||
        [className containsString:@"__NSCFNumber"]) {
        return @((NSInteger)fontSize);
    }

    // __NSCFString (Toll-Free Bridging) → 返回字符串
    if ([className containsString:@"NSCFString"]) {
        return fontSizeStr;
    }

    // 未知类型 → 默认返回字符串，并日志警告
    WPLog(@"FontLayout",
          @"[WARN] 未知返回值类型: %@, 默认返回字符串",
          className);
    return fontSizeStr;
}

/// 检查 ruleSet 是否匹配字体规则集
/// 锤子助手用 hasSuffix:@"_font_set"，但微信不同版本可能用不同命名，
/// 这里用 hasSuffix + containsString 双重匹配
static BOOL isFontRuleSet(NSString *ruleSet) {
    if (ruleSet.length == 0) return NO;
    // 精确后缀匹配（锤子助手方式）
    if ([ruleSet hasSuffix:@"_font_set"]) return YES;
    // 宽松匹配（兼容其他命名）
    if ([ruleSet containsString:@"_font_set"]) return YES;
    // 纯 font_set 匹配
    if ([ruleSet isEqualToString:@"font_set"]) return YES;
    return NO;
}

#pragma mark - Hook 1: MMThemeManager.getValueOfProperty:inRuleSet:

static id (*orig_getValueOfProperty_inRuleSet)(id, SEL, NSString *, NSString *);

static id hook_getValueOfProperty_inRuleSet(id self, SEL _cmd,
                                             NSString *property,
                                             NSString *ruleSet) {
    FontLayoutConfig *config = [FontLayoutConfig shared];
    BOOL globalOn = config.globalLayoutEnabled;
    BOOL chatOn   = config.chatLayoutEnabled;

    // ★★★ 关键：不管是否匹配，先调原方法获取原始值 ★★★
    // 这样做是为了：
    //   1. 知道原始返回值的类型（NSString / NSNumber / 其他）
    //   2. 可以创建同类型的新值返回
    //   3. 即使不匹配，也能记录日志
    id originalResult = orig_getValueOfProperty_inRuleSet(self, _cmd, property, ruleSet);

    // ── 调试日志：记录所有调用 ──
    // 当任一布局开启时，记录所有 MMThemeManager 调用
    if (globalOn || chatOn) {
        // 只记录 font 相关的调用，避免日志刷屏
        if (isFontRuleSet(ruleSet) ||
            [property containsString:@"Level"] ||
            [property containsString:@"Font"] ||
            [property containsString:@"font"]) {
            WPLog(@"FontLayout",
                  @"[MMTM] property=%@ ruleSet=%@ origType=%@ origValue=%@",
                  property, ruleSet,
                  NSStringFromClass([originalResult class]),
                  originalResult);
        }
    }

    // ── 布局匹配逻辑 ──
    BOOL matched = NO;
    CGFloat targetFontSize = 16.0f;
    NSString *matchType = nil;

    if (globalOn || chatOn) {
        // ── 全局布局匹配 ──
        if (globalOn && isFontRuleSet(ruleSet)) {
            if ([property isEqualToString:@"allLevel"]) {
                matched = YES;
                targetFontSize = config.globalFontSize;
                matchType = @"global-allLevel";
            } else if ([property isEqualToString:@"webLevel"]) {
                matched = YES;
                targetFontSize = config.globalFontSize;
                matchType = @"global-webLevel";
            }
        }

        // ── 对话布局匹配 ──
        if (!matched && chatOn && isFontRuleSet(ruleSet)) {
            if ([property isEqualToString:@"chatLevel"]) {
                matched = YES;
                targetFontSize = config.chatFontSize;
                matchType = @"chat-chatLevel";
            }
        }
    }

    if (matched) {
        // 验证范围：10-16（与锤子助手一致）
        if (targetFontSize >= 10.0f && targetFontSize <= 16.0f) {
            id newValue = createValueWithFontSize(originalResult, targetFontSize);
            WPLog(@"FontLayout",
                  @"[MMTM] ⚡ HIT %@: %@ in %@ -> %.0f (type: %@)",
                  matchType, property, ruleSet, targetFontSize,
                  NSStringFromClass([newValue class]));
            return newValue;
        } else {
            WPLog(@"FontLayout",
                  @"[MMTM] ⚡ HIT %@ but fontSize %.0f out of range [10,16]",
                  matchType, targetFontSize);
        }
    }

    return originalResult;
}

#pragma mark - Hook 2: CLocalInfo.m_uiGlobalFontLevel

static unsigned int (*orig_m_uiGlobalFontLevel)(id, SEL);

static unsigned int hook_m_uiGlobalFontLevel(id self, SEL _cmd) {
    FontLayoutConfig *config = [FontLayoutConfig shared];

    if (config.globalLayoutEnabled || config.chatLayoutEnabled) {
        unsigned int result = 1;
        WPLog(@"FontLayout",
              @"[CLocalInfo] m_uiGlobalFontLevel -> %u (大字模式, global=%d chat=%d)",
              result, config.globalLayoutEnabled, config.chatLayoutEnabled);
        return result;
    }

    unsigned int orig = orig_m_uiGlobalFontLevel(self, _cmd);
    WPLog(@"FontLayout",
          @"[CLocalInfo] m_uiGlobalFontLevel -> %u (原方法, 布局未开启)",
          orig);
    return orig;
}

#pragma mark - 安装入口

@implementation FontLayoutHook

+ (void)install {
    WPLog(@"FontLayout", @"=== FontLayoutHook Install Start ===");

    // ── 诊断：检查类和方法的可用性 ──
    Class mmThemeManager = objc_getClass("MMThemeManager");
    Class clocalInfo = objc_getClass("CLocalInfo");

    SEL selGetValue = @selector(getValueOfProperty:inRuleSet:);
    SEL selFontLevel = @selector(m_uiGlobalFontLevel);

    Method mGetValue = mmThemeManager ? class_getInstanceMethod(mmThemeManager, selGetValue) : NULL;
    Method mFontLevel = clocalInfo ? class_getInstanceMethod(clocalInfo, selFontLevel) : NULL;

    WPLog(@"FontLayout", @"MMThemeManager: %@", mmThemeManager ? @"EXISTS" : @"NIL");
    WPLog(@"FontLayout", @"CLocalInfo: %@", clocalInfo ? @"EXISTS" : @"NIL");
    WPLog(@"FontLayout", @"getValueOfProperty:inRuleSet: method: %@", mGetValue ? @"EXISTS" : @"NIL");
    WPLog(@"FontLayout", @"m_uiGlobalFontLevel method: %@", mFontLevel ? @"EXISTS" : @"NIL");

    // ── 诊断：打印当前的配置值 ──
    FontLayoutConfig *cfg = [FontLayoutConfig shared];
    WPLog(@"FontLayout", @"Config: globalOn=%d globalSize=%.0f chatOn=%d chatSize=%.0f",
          cfg.globalLayoutEnabled, cfg.globalFontSize,
          cfg.chatLayoutEnabled, cfg.chatFontSize);

    // ── 诊断：直接读取 NSUserDefaults 验证 ──
    NSUserDefaults *ud = [NSUserDefaults standardUserDefaults];
    BOOL udGlobalOn = [ud boolForKey:@"FontLayout_globalLayoutEnabled"];
    CGFloat udGlobalSize = [ud floatForKey:@"FontLayout_globalFontSize"];
    BOOL udChatOn = [ud boolForKey:@"FontLayout_chatLayoutEnabled"];
    CGFloat udChatSize = [ud floatForKey:@"FontLayout_chatFontSize"];
    WPLog(@"FontLayout", @"[UD Direct] globalOn=%d globalSize=%.0f chatOn=%d chatSize=%.0f",
          udGlobalOn, udGlobalSize, udChatOn, udChatSize);

    // ── Hook 安装 ──
    if (mmThemeManager && mGetValue) {
        MSHookMessageEx(mmThemeManager, selGetValue,
                        (IMP)hook_getValueOfProperty_inRuleSet,
                        (IMP *)&orig_getValueOfProperty_inRuleSet);
        WPLog(@"FontLayout", @"[+] MMThemeManager.getValueOfProperty:inRuleSet: HOOKED");
    } else {
        WPLog(@"FontLayout", @"[-] MMThemeManager HOOK SKIPPED (class=%@ method=%@)",
              mmThemeManager ? @"OK" : @"NIL", mGetValue ? @"OK" : @"NIL");
    }

    if (clocalInfo && mFontLevel) {
        MSHookMessageEx(clocalInfo, selFontLevel,
                        (IMP)hook_m_uiGlobalFontLevel,
                        (IMP *)&orig_m_uiGlobalFontLevel);
        WPLog(@"FontLayout", @"[+] CLocalInfo.m_uiGlobalFontLevel HOOKED");
    } else {
        WPLog(@"FontLayout", @"[-] CLocalInfo HOOK SKIPPED (class=%@ method=%@)",
              clocalInfo ? @"OK" : @"NIL", mFontLevel ? @"OK" : @"NIL");
    }

    WPLog(@"FontLayout", @"=== FontLayoutHook Install Complete ===");
}

@end