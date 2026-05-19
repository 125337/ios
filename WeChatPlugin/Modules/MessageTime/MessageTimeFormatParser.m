#import "MessageTimeFormatParser.h"

// 复刻微信优化 1.6.5 FUN_000354d0 时间格式引擎
// 统一使用花括号格式 {HH}:{mm}:{ss}（匹配编辑器帮助表格）

static NSString * const kDefaultFormat = @"{HH}:{mm}:{ss}";
static NSString * const kStorageKey = @"com.wechat.enhance.messageTime.customFormat";

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