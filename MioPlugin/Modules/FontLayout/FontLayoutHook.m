// FontLayoutHook.m —— 完全重写
// 从"改控件字号"改为"改微信主题系统"
// 复刻锤子助手：Hook MMThemeManager + CLocalInfo

#import "FontLayoutHook.h"
#import "FontLayoutConfig.h"
#import "../../Core/LogManager.h"
#import <substrate.h>
#import <objc/runtime.h>

// ═══════════════════════════════════════════════
// Hook 1: MMThemeManager.getValueOfProperty:inRuleSet:
// 对应锤子助手 FUN_00753950 + DAT_01411e48
// 功能：拦截微信主题系统查询，覆盖属性返回值
// ═══════════════════════════════════════════════

/// 原方法指针
static id (*orig_getValueOfProperty_inRuleSet)(id, SEL, NSString *, NSString *);

/// 替代函数
static id hook_getValueOfProperty_inRuleSet(id self, SEL _cmd,
                                             NSString *property,
                                             NSString *ruleSet) {
    FontLayoutConfig *config = [FontLayoutConfig shared];
    BOOL globalOn = config.globalLayoutEnabled;
    BOOL chatOn   = config.chatLayoutEnabled;

    if (globalOn || chatOn) {
        // ── 全局布局 ──
        // 条件：globalOn + property = allLevel/webLevel + ruleSet 以 _font_set 结尾
        if (globalOn && [ruleSet hasSuffix:@"_font_set"]) {
            if ([property isEqualToString:@"allLevel"] ||
                [property isEqualToString:@"webLevel"]) {
                CGFloat fontSize = config.globalFontSize;
                if (fontSize >= 10.0f && fontSize <= 16.0f) {
                    NSString *ret = [NSString stringWithFormat:@"%.0f", fontSize];
                    WPLog(@"FontLayout",
                          @"[MMThemeManager] %@ in %@ → %.0f",
                          property, ruleSet, fontSize);
                    return ret;
                }
            }
        }

        // ── 对话布局 ──
        // 条件：chatOn + property = chatLevel + ruleSet 以 _font_set 结尾
        if (chatOn && [ruleSet hasSuffix:@"_font_set"]) {
            if ([property isEqualToString:@"chatLevel"]) {
                CGFloat fontSize = config.chatFontSize;
                if (fontSize >= 10.0f && fontSize <= 16.0f) {
                    NSString *ret = [NSString stringWithFormat:@"%.0f", fontSize];
                    WPLog(@"FontLayout",
                          @"[MMThemeManager] %@ in %@ → %.0f",
                          property, ruleSet, fontSize);
                    return ret;
                }
            }
        }
    }

    // 不匹配 → 走原方法
    return orig_getValueOfProperty_inRuleSet(self, _cmd, property, ruleSet);
}

// ═══════════════════════════════════════════════
// Hook 2: CLocalInfo.m_uiGlobalFontLevel
// 对应锤子助手 FUN_00753ce8 + DAT_01411e50
// 功能：强制返回 1，激活微信大字模式
// ═══════════════════════════════════════════════

/// 原方法指针
static unsigned int (*orig_m_uiGlobalFontLevel)(id, SEL);

/// 替代函数
static unsigned int hook_m_uiGlobalFontLevel(id self, SEL _cmd) {
    FontLayoutConfig *config = [FontLayoutConfig shared];

    // 任一布局开启 → 返回 1（大字模式）
    // 微信看到 1 后会：
    //   1. 使用大字版 _font_set 规则集
    //   2. 所有布局参数切换到放大版本
    if (config.globalLayoutEnabled || config.chatLayoutEnabled) {
        return 1;
    }

    // 未开启 → 走原逻辑
    return orig_m_uiGlobalFontLevel(self, _cmd);
}

// ═══════════════════════════════════════════════
// 安装入口
// ═══════════════════════════════════════════════

@implementation FontLayoutHook

+ (void)install {
    Class cls = Nil;

    // ── Hook ① ──
    cls = objc_getClass("MMThemeManager");
    if (cls) {
        MSHookMessageEx(cls,
                        @selector(getValueOfProperty:inRuleSet:),
                        (IMP)hook_getValueOfProperty_inRuleSet,
                        (IMP *)&orig_getValueOfProperty_inRuleSet);
        WPLog(@"FontLayout", @"[+] MMThemeManager.getValueOfProperty:inRuleSet: hooked");
    } else {
        WPLog(@"FontLayout", @"[-] MMThemeManager class not found");
    }

    // ── Hook ② ──
    cls = objc_getClass("CLocalInfo");
    if (cls) {
        MSHookMessageEx(cls,
                        @selector(m_uiGlobalFontLevel),
                        (IMP)hook_m_uiGlobalFontLevel,
                        (IMP *)&orig_m_uiGlobalFontLevel);
        WPLog(@"FontLayout", @"[+] CLocalInfo.m_uiGlobalFontLevel hooked → return 1");
    } else {
        WPLog(@"FontLayout", @"[-] CLocalInfo class not found");
    }

    WPLog(@"FontLayout", @"✓ FontLayoutHook install complete");
}

@end
