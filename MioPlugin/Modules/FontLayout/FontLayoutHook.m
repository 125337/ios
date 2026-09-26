// FontLayoutHook.m —— 修复版 v4（基于日志证据）

// 修改说明：
//   1. 不再检查具体属性名（allLevel/webLevel/chatLevel）
//   2. 不再检查 _font_set 规则集
//   3. 改为检查返回值是否为 NSArray + 第一个元素是否为数值
//   4. 保持数组结构，只修改第一个元素（字号）
//   5. 保持元素类型（NSNumber→NSNumber, NSString→NSString）

#import "FontLayoutHook.h"
#import "FontLayoutConfig.h"
#import "../../Core/LogManager.h"
#import <substrate.h>
#import <objc/runtime.h>

#pragma mark - 常量

// 字号范围（与 UI 侧保持一致）
static const CGFloat kMinFontSize = 10.0f;
static const CGFloat kMaxFontSize = 16.0f;

// 白名单规则集（只修改这些规则集中的字号）
// 基于日志 v7 中实际出现的所有规则集
// 以 # 前缀开头，可通过持续观察补充
static NSSet *s_fontRuleSets(void) {
    static NSSet *sets = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        sets = [NSSet setWithObjects:
            @"#navigation_bar",         // 导航栏
            @"#common_default",         // 通用默认
            @"#input_tool_view_tool",   // 输入工具栏
            @"#widget_tipsbar_base",    // Tipsbar 组件
            @"#brand_timeline_view",    // 朋友圈品牌视图
            nil];
    });
    return sets;
}

#pragma mark - 辅助函数

/// 判断是否需要拦截此返回值
/// 规则：必须是可变数组 + 第一个元素是数值（NSNumber 或数字字符串）
/// @param originalResult 原方法返回值
/// @param property 属性名（用于日志）
/// @param ruleSet 规则集（用于日志）
/// @param outSize 输出：原始字号值
/// @param outElementType 输出：第一个元素的类型（NSNumber/NSString）
/// @return YES=需要拦截
static BOOL shouldIntercept(id originalResult,
                            NSString *property,
                            NSString *ruleSet,
                            CGFloat *outSize,
                            NSString **outElementType) {
    // ── 检查是否为数组 ──
    if (![originalResult isKindOfClass:[NSArray class]]) {
        return NO;
    }

    NSArray *arr = (NSArray *)originalResult;
    if (arr.count == 0) {
        return NO;
    }

    // ── 可选的白名单检查 ──
    // 如果规则集在白名单中，直接通过
    BOOL inWhitelist = [s_fontRuleSets() containsObject:ruleSet];
    if (!inWhitelist) {
        // 如果不在白名单中，用宽松条件检查属性名是否含 "font"
        NSString *lowerProperty = [property lowercaseString];
        if (![lowerProperty containsString:@"font"]) {
            return NO;  // 属性名不含 font，跳过
        }
    }

    // ── 检查第一个元素是否为数值 ──
    id firstObj = arr[0];

    if ([firstObj isKindOfClass:[NSNumber class]]) {
        *outSize = [firstObj floatValue];
        *outElementType = @"NSNumber";
        return YES;
    }

    if ([firstObj isKindOfClass:[NSString class]]) {
        NSString *str = (NSString *)firstObj;
        // 尝试解析为浮点数
        NSScanner *scanner = [NSScanner scannerWithString:str];
        float val;
        if ([scanner scanFloat:&val] && [scanner isAtEnd]) {
            *outSize = (CGFloat)val;
            *outElementType = @"NSString";
            return YES;
        }
    }

    return NO;
}

/// 创建新的第一个元素值（保持原类型）
/// @param originalElement 原第一个元素
/// @param newSize 目标字号
/// @return 同类型的新值
static id createNewValueForElement(id originalElement, CGFloat newSize) {
    if ([originalElement isKindOfClass:[NSNumber class]]) {
        // NSNumber → NSNumber
        return @((NSInteger)newSize);
    } else if ([originalElement isKindOfClass:[NSString class]]) {
        // NSString → NSString
        return [NSString stringWithFormat:@"%.0f", newSize];
    }
    // 未知类型 → 返回原值（不做修改）
    return originalElement;
}

#pragma mark - Hook 1: MMThemeManager.getValueOfProperty:inRuleSet:

static id (*orig_getValueOfProperty_inRuleSet)(id, SEL, NSString *, NSString *);

static id hook_getValueOfProperty_inRuleSet(id self, SEL _cmd,
                                             NSString *property,
                                             NSString *ruleSet) {
    // ★ 第一步：先调原方法获取原始值（orig 段不包 try：微信内部异常让其走崩溃取证记录）★
    id originalResult = orig_getValueOfProperty_inRuleSet(self, _cmd, property, ruleSet);

    // ★ 处理段包 try：配置全关时本 hook 是纯 pass-through，异常时回退原值不破坏微信 ★
    @try {
        FontLayoutConfig *config = [FontLayoutConfig shared];
        BOOL globalOn = config.globalLayoutEnabled;
        BOOL chatOn   = config.chatLayoutEnabled;

        // ── 两个布局都未开启 → 直接返回 ──
        if (!globalOn && !chatOn) {
            return originalResult;
        }

        // ── 检查是否需要拦截 ──
        CGFloat originalSize = 0;
        NSString *elementType = nil;

        if (!shouldIntercept(originalResult, property, ruleSet,
                             &originalSize, &elementType)) {
            // 不需要拦截 → 返回原始值
            return originalResult;
        }

        // ── 确定目标字号 ──
        CGFloat targetSize = kMaxFontSize; // 默认 16

        if (globalOn && chatOn) {
            // 两个都开启 → 全局优先（可根据需求改为对话优先）
            targetSize = config.globalFontSize;
        } else if (globalOn) {
            // 仅全局
            targetSize = config.globalFontSize;
        } else if (chatOn) {
            // 仅对话
            targetSize = config.chatFontSize;
        }

        // ── 范围验证 ──
        if (targetSize < kMinFontSize || targetSize > kMaxFontSize) {
            WPLog(@"FontLayout",
                  @"[SKIP] fontSize %.0f out of range [%.0f, %.0f]",
                  targetSize, kMinFontSize, kMaxFontSize);
            return originalResult;
        }

        // ── 执行修改：保留数组结构，只改第一个元素 ──
        NSMutableArray *modified = [(NSArray *)originalResult mutableCopy];
        id newElement = createNewValueForElement(modified[0], targetSize);
        modified[0] = newElement;

        // ── 日志 ──
        WPLog(@"FontLayout",
              @"[MODIFY] %@ in %@ : %.0f → %.0f (type=%@, count=%lu)",
              property, ruleSet,
              originalSize, targetSize,
              elementType, (unsigned long)modified.count);

        return modified;
    } @catch (NSException *e) {
        WPLog(@"FontLayout",
              @"⚠️⚠️ getValueOfProperty 处理段异常: %@ reason=%@ prop=%@ ruleSet=%@",
              e.name, e.reason, property, ruleSet);
        return originalResult;
    }
}

#pragma mark - Hook 2: CLocalInfo.m_uiGlobalFontLevel

static unsigned int (*orig_m_uiGlobalFontLevel)(id, SEL);

static unsigned int hook_m_uiGlobalFontLevel(id self, SEL _cmd) {
    @try {
        FontLayoutConfig *config = [FontLayoutConfig shared];
        if (config.globalLayoutEnabled || config.chatLayoutEnabled) {
            // 大字模式激活，触发微信内置大字号体系
            // （我们的 Hook-1 会在此基础上进一步精确控制具体字号）
            return 1;
        }
    } @catch (NSException *e) {
        WPLog(@"FontLayout",
              @"⚠️⚠️ m_uiGlobalFontLevel 异常: %@ reason=%@", e.name, e.reason);
    }
    return orig_m_uiGlobalFontLevel(self, _cmd);
}

#pragma mark - 安装入口

static BOOL g_fontHooksInstalled = NO;

@implementation FontLayoutHook

+ (void)install {
    [self installIfNeeded];
}

// ★ scene-create 看门狗优化（0x8BADF00D：启动 CPU 配额 6.96s 耗尽即被 SIGKILL）：
//   getValueOfProperty:inRuleSet: 是微信主题系统热路径（实测启动期 8000-19000 次/2s），
//   双开关全关时 hook 体仅 pass-through，但 trampoline + 单例 + 属性读的空转照烧 CPU。
//   全关时不安装；设置页打开开关后经 wpHandleSwitchKey → installIfNeeded 惰性补装。
+ (void)installIfNeeded {
    if (g_fontHooksInstalled) return;
    WPLog(@"FontLayout", @"=== FontLayoutHook v4 Install Start ===");

    // ── 诊断：检查类和方法的可用性 ──
    Class mmThemeManager = objc_getClass("MMThemeManager");
    Class clocalInfo = objc_getClass("CLocalInfo");

    SEL selGetValue = @selector(getValueOfProperty:inRuleSet:);
    SEL selFontLevel = @selector(m_uiGlobalFontLevel);

    Method mGetValue = mmThemeManager
        ? class_getInstanceMethod(mmThemeManager, selGetValue) : NULL;
    Method mFontLevel = clocalInfo
        ? class_getInstanceMethod(clocalInfo, selFontLevel) : NULL;

    WPLog(@"FontLayout", @"MMThemeManager: %@",
          mmThemeManager ? @"EXISTS" : @"NIL");
    WPLog(@"FontLayout", @"getValueOfProperty:inRuleSet: method: %@",
          mGetValue ? @"EXISTS" : @"NIL");
    WPLog(@"FontLayout", @"CLocalInfo: %@",
          clocalInfo ? @"EXISTS" : @"NIL");
    WPLog(@"FontLayout", @"m_uiGlobalFontLevel method: %@",
          mFontLevel ? @"EXISTS" : @"NIL");

    // ── 诊断：打印当前的配置值 ──
    FontLayoutConfig *cfg = [FontLayoutConfig shared];
    WPLog(@"FontLayout",
          @"Config: globalOn=%d globalSize=%.0f chatOn=%d chatSize=%.0f",
          cfg.globalLayoutEnabled, cfg.globalFontSize,
          cfg.chatLayoutEnabled, cfg.chatFontSize);

    // ── 诊断：打印白名单 ⚠️ 仅供调试，后续可以移除 ⚠️ ──
    WPLog(@"FontLayout", @"FontRuleSet whitelist: %@",
          [[s_fontRuleSets() allObjects] componentsJoinedByString:@", "]);

    // ── 双开关全关 → 不安装（惰性补装机制见 installIfNeeded 注释）──
    if (!cfg.globalLayoutEnabled && !cfg.chatLayoutEnabled) {
        WPLog(@"FontLayout", @"[SKIP] 全局/对话布局均未开启，跳过 hook 安装（开关打开时惰性补装）");
        return;
    }

    // ── Hook 安装 ──
    if (mmThemeManager && mGetValue) {
        MSHookMessageEx(mmThemeManager, selGetValue,
                        (IMP)hook_getValueOfProperty_inRuleSet,
                        (IMP *)&orig_getValueOfProperty_inRuleSet);
        WPLog(@"FontLayout",
              @"[+] MMThemeManager.getValueOfProperty:inRuleSet: HOOKED");
    } else {
        WPLog(@"FontLayout",
              @"[-] MMThemeManager HOOK SKIPPED (class=%@ method=%@)",
              mmThemeManager ? @"OK" : @"NIL",
              mGetValue ? @"OK" : @"NIL");
    }

    if (clocalInfo && mFontLevel) {
        MSHookMessageEx(clocalInfo, selFontLevel,
                        (IMP)hook_m_uiGlobalFontLevel,
                        (IMP *)&orig_m_uiGlobalFontLevel);
        WPLog(@"FontLayout",
              @"[+] CLocalInfo.m_uiGlobalFontLevel HOOKED");
    } else {
        WPLog(@"FontLayout",
              @"[-] CLocalInfo HOOK SKIPPED (class=%@ method=%@)",
              clocalInfo ? @"OK" : @"NIL",
              mFontLevel ? @"OK" : @"NIL");
    }

    g_fontHooksInstalled = YES;
    WPLog(@"FontLayout", @"=== FontLayoutHook v4 Install Complete ===");
}

@end
