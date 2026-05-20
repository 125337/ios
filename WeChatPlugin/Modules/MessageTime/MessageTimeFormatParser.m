#import "MessageTimeFormatParser.h"

// 复刻微信优化 1.6.5 FUN_000354d0 时间格式引擎
// 统一使用花括号格式 {HH}:{mm}:{ss}（匹配编辑器帮助表格）

static NSString * const kDefaultFormat = @"{HH}:{mm}:{ss}";
static NSString * const kStorageKey = @"com.wechat.enhance.messageTime.customFormat";

// 伪已读默认文本
static NSString * const kDefaultReadText      = @"已读";
static NSString * const kDefaultDeliveredText = @"已送达";

// 标准 NSDateFormatter 令牌列表（花括号内的名字 → NSDateFormatter format specifier）
static NSDictionary<NSString *, NSString *> *_stdTokenMap(void) {
    static NSDictionary *map;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        map = @{
            @"YYYY": @"yyyy",
            @"YY":   @"yy",
            @"MM":   @"MM",
            @"dd":   @"dd",
            @"HH":   @"HH",
            @"hh":   @"hh",
            @"mm":   @"mm",
            @"ss":   @"ss",
        };
    });
    return map;
}

// 特殊令牌（locale-aware，不传给 NSDateFormatter）
// 注意顺序：{EEEE} 必须在 {EE} 前面，防止前缀污染（BUG 2）
static NSArray<NSString *> *_specialTokenOrder(void) {
    return @[@"{EEEE}", @"{EE}", @"{a}", @"{b}"];
}

static BOOL _isSpecialToken(NSString *token) {
    return [token isEqualToString:@"{EE}"] ||
           [token isEqualToString:@"{EEEE}"] ||
           [token isEqualToString:@"{a}"] ||
           [token isEqualToString:@"{b}"];
}

@implementation MessageTimeFormatParser

+ (NSString *)defaultFormat { return kDefaultFormat; }
+ (NSString *)storageKey   { return kStorageKey; }

+ (NSString *)formatDate:(NSDate *)date customFormat:(NSString *)customFormat isDarkMode:(BOOL)isDarkMode {
    return [self formatDate:date customFormat:customFormat isDarkMode:isDarkMode isSender:NO statusCode:2];
}

// 核心格式化（含伪已读），复刻反编译 FUN_0003bcb0 双循环架构
// Loop 1（步骤0）: 正则遍历 {伪已读...} → 参数解析 + 状态选择 → 替换
// Loop 2（步骤1-3）: 令牌数组遍历 → 占位符 / NSDateFormatter → 回填
+ (NSString *)formatDate:(NSDate *)date customFormat:(NSString *)customFormat isDarkMode:(BOOL)isDarkMode isSender:(BOOL)isSender statusCode:(NSInteger)statusCode {
    if (!date) return nil;

    NSString *rawFormat = (customFormat.length > 0) ? customFormat : kDefaultFormat;

    // 双格式（逗号分隔 = 亮/暗）
    NSRange commaRange = [rawFormat rangeOfString:@","];
    NSString *fmt = rawFormat;
    if (commaRange.location != NSNotFound) {
        NSArray *parts = [rawFormat componentsSeparatedByString:@","];
        if (parts.count >= 2) {
            fmt = isDarkMode ? parts[1] : parts[0];
        }
    }

    // 去换行符
    fmt = [fmt stringByReplacingOccurrencesOfString:@"\n" withString:@""];

    // ================================================================
    // 步骤0: 处理 {伪已读} — 复刻反编译 Loop 1（行 35505-35563）
    //
    // 四个语法：
    //   {伪已读}                         → 默认文本
    //   {伪已读 已读=xxx}                 → 自定义已读文本
    //   {伪已读 已送达=>yyy}              → 自定义已送达文本
    //   {伪已读 已读=xxx 已送达=>yyy}     → 自定义两种状态
    //
    // 反编译逻辑: 在 {...} match 中搜索 "=" (flag 1) 取已读文本,
    //             搜索 ">" (flag 2) 取已送达文本,
    //             根据 isSender/statusCode 选择最终文本替换整个 match
    // ================================================================
    NSRegularExpression *pseudoRegex = [NSRegularExpression
        regularExpressionWithPattern:@"\\{[^}]*伪已读[^}]*\\}" options:0 error:nil];
    NSArray<NSTextCheckingResult *> *pseudoMatches = [pseudoRegex matchesInString:fmt options:0
                                                                             range:NSMakeRange(0, fmt.length)];

    // 从后往前替换（保持索引有效）
    for (NSTextCheckingResult *match in [pseudoMatches reverseObjectEnumerator]) {
        NSString *fullMatch = [fmt substringWithRange:match.range];  // e.g. "{伪已读 已读=已阅 已送达=>已到}"
        NSString *inner = [fullMatch substringWithRange:NSMakeRange(1, fullMatch.length - 2)]; // 去花括号

        // --- 解析: 搜索 "=" 取已读自定义文本 (复刻 FUN_000c8f80 flag=1) ---
        NSString *customReadText = nil;
        NSRange eqRange = [inner rangeOfString:@"="];
        if (eqRange.location != NSNotFound && eqRange.location + 1 < inner.length) {
            customReadText = [inner substringFromIndex:eqRange.location + 1];
            // 如果 "已送达>" 部分也跟在后面，截掉（以第一个空格为界）
            NSRange spaceRange = [customReadText rangeOfString:@" "];
            if (spaceRange.location != NSNotFound) {
                customReadText = [customReadText substringToIndex:spaceRange.location];
            }
        }

        // --- 解析: 搜索 ">" 取已送达自定义文本 (复刻 FUN_000c8f80 flag=2) ---
        NSString *customDeliveredText = nil;
        NSRange gtRange = [inner rangeOfString:@">"];
        if (gtRange.location != NSNotFound && gtRange.location + 1 < inner.length) {
            customDeliveredText = [inner substringFromIndex:gtRange.location + 1];
        }

        // --- 回退默认值 ---
        if (!customReadText || customReadText.length == 0) customReadText = kDefaultReadText;
        if (!customDeliveredText || customDeliveredText.length == 0) customDeliveredText = kDefaultDeliveredText;

        // --- 选择逻辑 (复刻反编译 35542-35552) ---
        // pcVar1 = pcVar5 (已送达文本)
        // if (param_2 == 0) pcVar1 = ""    — 接收者不显示伪已读
        // pcVar2 = pcVar15 (已读文本)
        // if (param_3 != 2) pcVar2 = pcVar1 — 未读→已送达
        NSString *deliveredText = customDeliveredText;
        if (!isSender) {
            deliveredText = @""; // 接收者: 不显示伪已读 (复刻 param_2==0 → "")
        }

        NSString *resultText = customReadText;
        if (statusCode != 2) {
            resultText = deliveredText; // 未读 → 显示已送达文本 (复刻 param_3!=2 → pcVar1)
        }

        // --- 替换整个 {...} match ---
        fmt = [fmt stringByReplacingCharactersInRange:match.range withString:resultText];
    }

    // ================================================================
    // 步骤1: 处理特殊令牌 {EEEE}{EE}{a}{b} → 占位符
    // ================================================================
    NSMutableString *nsdfFormat = [fmt mutableCopy];
    NSMutableDictionary<NSString *, NSString *> *specialReplacements = [NSMutableDictionary dictionary];

    for (NSString *token in _specialTokenOrder()) {
        NSString *inner = [token substringWithRange:NSMakeRange(1, token.length - 2)];
        NSString *locale = nil, *dfFormat = nil;
        BOOL replaceAMPM = NO, replaceMidnight = NO;

        if ([inner isEqualToString:@"EE"]) {
            locale = @"zh_Hans_CN"; dfFormat = @"E"; replaceAMPM = YES;
        } else if ([inner isEqualToString:@"EEEE"]) {
            locale = @"zh_Hans_CN"; dfFormat = @"EEEE";
        } else if ([inner isEqualToString:@"a"]) {
            locale = @"en_US_POSIX"; dfFormat = @"a";
        } else if ([inner isEqualToString:@"b"]) {
            locale = @"en_US_POSIX"; dfFormat = @"B"; replaceMidnight = YES;
        }
        if (!locale) continue;

        NSDateFormatter *spDF = [[NSDateFormatter alloc] init];
        [spDF setLocale:[[NSLocale alloc] initWithLocaleIdentifier:locale]];
        [spDF setDateFormat:dfFormat];
        NSString *formatted = [spDF stringFromDate:date];
        if (!formatted) continue;

        if (replaceAMPM) {
            formatted = [formatted stringByReplacingOccurrencesOfString:@"上午" withString:@"上午"];
            formatted = [formatted stringByReplacingOccurrencesOfString:@"下午" withString:@"下午"];
        }
        if (replaceMidnight) {
            formatted = [formatted stringByReplacingOccurrencesOfString:@"noon" withString:@"PM"];
            formatted = [formatted stringByReplacingOccurrencesOfString:@"midnight" withString:@"AM"];
        }

        NSString *placeholder = [NSString stringWithFormat:@"SP%lu",
                                  (unsigned long)specialReplacements.count];
        specialReplacements[placeholder] = formatted;

        // 用 'SP0' 占位（单引号防止 NSDateFormatter 解释 S/P）
        [nsdfFormat replaceOccurrencesOfString:token
                                    withString:[NSString stringWithFormat:@"'%@'", placeholder]
                                       options:NSLiteralSearch
                                         range:NSMakeRange(0, nsdfFormat.length)];
    }

    // ================================================================
    // 步骤2: 剥离所有剩余 {WORD} 花括号 → 纯 NSDateFormatter format（BUG 3）
    // ================================================================
    // 把 {YYYY}→yyyy, {MM}→MM 等标准令牌替换，并剥离未映射的 {WORD} → WORD
    NSMutableString *finalFormat = [nsdfFormat mutableCopy];
    for (NSString *tokenName in [_stdTokenMap() allKeys]) {
        NSString *braced = [NSString stringWithFormat:@"{%@}", tokenName];
        [finalFormat replaceOccurrencesOfString:braced
                                     withString:_stdTokenMap()[tokenName]
                                        options:NSLiteralSearch
                                          range:NSMakeRange(0, finalFormat.length)];
    }

    // 剥离所有未被映射的 {WORD}（兜底）
    NSRegularExpression *anyBraced = [NSRegularExpression
        regularExpressionWithPattern:@"\\{(\\w+)\\}" options:0 error:nil];
    [anyBraced replaceMatchesInString:finalFormat options:0
                                range:NSMakeRange(0, finalFormat.length)
                         withTemplate:@"$1"];

    // ================================================================
    // 步骤3: NSDateFormatter 格式化
    // ================================================================
    NSDateFormatter *df = [[NSDateFormatter alloc] init];
    [df setLocale:[[NSLocale alloc] initWithLocaleIdentifier:@"en_US_POSIX"]];
    [df setDateFormat:finalFormat];

    NSString *result = [df stringFromDate:date];
    if (!result) result = @"";

    // ================================================================
    // 步骤4: 回填特殊令牌
    // ================================================================
    for (NSString *placeholder in specialReplacements) {
        result = [result stringByReplacingOccurrencesOfString:placeholder
                                                   withString:specialReplacements[placeholder]];
    }

    return result;
}

+ (NSString *)previewWithFormat:(NSString *)customFormat isDarkMode:(BOOL)isDarkMode {
    return [self formatDate:[NSDate date] customFormat:customFormat isDarkMode:isDarkMode];
}

@end