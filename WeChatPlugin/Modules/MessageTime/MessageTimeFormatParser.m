#import "MessageTimeFormatParser.h"

// 复刻微信优化 1.6.5 FUN_000354d0 + FUN_00005568 的时间格式引擎

// 标准令牌 → NSDateFormatter format specifier 映射
static NSDictionary<NSString *, NSString *> *_stdTokenMap(void) {
    static NSDictionary *map;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        map = @{
            @"yyyy": @"yyyy",
            @"MM":   @"MM",
            @"dd":   @"dd",
            @"HH":   @"HH",
            @"mm":   @"mm",
            @"ss":   @"ss",
        };
    });
    return map;
}

// 特殊令牌配置：locale, NSDateFormatter format, 是否做 post-processing
typedef struct {
    NSString *locale;
    NSString *nsdfFormat;
    BOOL      replaceAMPM;
    BOOL      replaceMidnight;
} SpecialTokenConfig;

static SpecialTokenConfig _specialTokenConfig(NSString *token) {
    if ([token isEqualToString:@"EE"]) {
        // zh_Hans_CN + E format, 然后 replace "上午"→"上午", "下午"→"下午" (保持中文AM/PM)
        return (SpecialTokenConfig){@"zh_Hans_CN", @"E", YES, NO};
    }
    if ([token isEqualToString:@"EEEE"]) {
        // zh_Hans_CN + EEEE format (完整中文星期)
        return (SpecialTokenConfig){@"zh_Hans_CN", @"EEEE", NO, NO};
    }
    if ([token isEqualToString:@"a"]) {
        // en_US_POSIX + a format (AM/PM)
        return (SpecialTokenConfig){@"en_US_POSIX", @"a", NO, NO};
    }
    if ([token isEqualToString:@"b"]) {
        // en_US_POSIX + a format, replace noon→PM, midnight→AM
        return (SpecialTokenConfig){@"en_US_POSIX", @"B", NO, YES};
    }
    return (SpecialTokenConfig){nil, nil, NO, NO};
}

static BOOL _isSpecialToken(NSString *token) {
    return [token isEqualToString:@"EE"] ||
           [token isEqualToString:@"EEEE"] ||
           [token isEqualToString:@"a"] ||
           [token isEqualToString:@"b"];
}

static NSString * const kDefaultFormat = @"{HH}:{mm}:{ss}";
static NSString * const kStorageKey = @"com.wechat.enhance.messageTime.customFormat";

// 构建日期组件字典：{@"yyyy": 2026, @"MM": 5, ...}
// 复刻 FUN_00005568
static NSDictionary<NSString *, NSString *> *_buildDateComponents(NSDate *date) {
    NSCalendar *cal = [NSCalendar currentCalendar];
    NSCalendarUnit units = NSCalendarUnitYear | NSCalendarUnitMonth | NSCalendarUnitDay |
                           NSCalendarUnitHour | NSCalendarUnitMinute | NSCalendarUnitSecond;
    NSDateComponents *comps = [cal components:units fromDate:date];
    return @{
        @"yyyy": [NSString stringWithFormat:@"%ld", (long)comps.year],
        @"MM":   [NSString stringWithFormat:@"%02ld", (long)comps.month],
        @"dd":   [NSString stringWithFormat:@"%02ld", (long)comps.day],
        @"HH":   [NSString stringWithFormat:@"%02ld", (long)comps.hour],
        @"mm":   [NSString stringWithFormat:@"%02ld", (long)comps.minute],
        @"ss":   [NSString stringWithFormat:@"%02ld", (long)comps.second],
    };
}

@implementation MessageTimeFormatParser

+ (NSString *)defaultFormat { return kDefaultFormat; }
+ (NSString *)storageKey   { return kStorageKey; }

+ (NSString *)formatDate:(NSDate *)date customFormat:(NSString *)customFormat isDarkMode:(BOOL)isDarkMode {
    if (!date) return nil;

    NSString *rawFormat = customFormat.length > 0 ? customFormat : kDefaultFormat;

    // 处理双格式（逗号分隔 = 亮/暗）
    // 复刻 FUN_0003c790 行 35491-35496
    NSString *fmt = rawFormat;
    NSRange commaRange = [rawFormat rangeOfString:@","];
    if (commaRange.location != NSNotFound) {
        NSArray *parts = [rawFormat componentsSeparatedByString:@","];
        if (parts.count >= 2) {
            fmt = isDarkMode ? parts[1] : parts[0];
        }
    }

    // 去掉换行符
    fmt = [fmt stringByReplacingOccurrencesOfString:@"\n" withString:@""];

    // 步骤1：替换标准令牌 {yyyy}{MM}{dd}{HH}{mm}{ss} → NSDateFormatter format
    // 复刻 FUN_000354d0 行 35490-35560: 用正则匹配 {token}，提取 token 名映射到 NSDateFormatter
    NSString *nsdfFormat = fmt;
    for (NSString *token in [_stdTokenMap() allKeys]) {
        NSString *pattern = [NSString stringWithFormat:@"\\{%@\\}", token];
        NSString *replacement = _stdTokenMap()[token];
        nsdfFormat = [nsdfFormat stringByReplacingOccurrencesOfString:pattern
                                                           withString:replacement
                                                              options:NSRegularExpressionSearch
                                                                range:NSMakeRange(0, nsdfFormat.length)];
    }

    // 创建 NSDateFormatter 并设置 locale
    NSDateFormatter *df = [[NSDateFormatter alloc] init];
    [df setLocale:[[NSLocale alloc] initWithLocaleIdentifier:@"en_US_POSIX"]];
    [df setDateFormat:nsdfFormat];

    NSString *result = [df stringFromDate:date];
    if (!result) result = @"";

    // 步骤2：替换特殊令牌 {EE}{EEEE}{a}{b}
    // 复刻 FUN_000354d0 行 35565-35668
    for (NSString *token in @[@"{EE}", @"{EEEE}", @"{a}", @"{b}"]) {
        NSRange r = [result rangeOfString:token];
        if (r.location == NSNotFound) continue;

        NSString *inner = [token substringWithRange:NSMakeRange(1, token.length - 2)];
        SpecialTokenConfig cfg = _specialTokenConfig(inner);
        if (!cfg.locale) continue;

        // 创建 locale-aware formatter
        NSDateFormatter *spDF = [[NSDateFormatter alloc] init];
        [spDF setLocale:[[NSLocale alloc] initWithLocaleIdentifier:cfg.locale]];
        [spDF setDateFormat:cfg.nsdfFormat];

        NSString *formatted = [spDF stringFromDate:date];
        if (!formatted) continue;

        // post-processing
        if (cfg.replaceAMPM) {
            // {EE}: 替换"上午"→"上午", "下午"→"下午"（保持中文 AM/PM）
            formatted = [formatted stringByReplacingOccurrencesOfString:@"上午" withString:@"上午"];
            formatted = [formatted stringByReplacingOccurrencesOfString:@"下午" withString:@"下午"];
        }
        if (cfg.replaceMidnight) {
            // {b}: 替换 "noon"→"PM", "midnight"→"AM"
            formatted = [formatted stringByReplacingOccurrencesOfString:@"noon" withString:@"PM"];
            formatted = [formatted stringByReplacingOccurrencesOfString:@"midnight" withString:@"AM"];
        }

        result = [result stringByReplacingOccurrencesOfString:token withString:formatted];
    }

    return result;
}

+ (NSString *)previewWithFormat:(NSString *)customFormat isDarkMode:(BOOL)isDarkMode {
    return [self formatDate:[NSDate date] customFormat:customFormat isDarkMode:isDarkMode];
}

@end