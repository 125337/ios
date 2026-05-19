#import "MessageTimeFormatParser.h"

// 复刻微信优化 1.6.5 FUN_000354d0 时间格式引擎
// 用户直接输入 NSDateFormatter format（如 "HH:mm:ss"），无需 { } 包裹
// {EE}{EEEE}{a}{b} 用 { } 标记为特殊令牌，需要 locale-aware 处理

static NSString * const kDefaultFormat = @"HH:mm:ss";
static NSString * const kStorageKey = @"com.wechat.enhance.messageTime.customFormat";

@implementation MessageTimeFormatParser

+ (NSString *)defaultFormat { return kDefaultFormat; }
+ (NSString *)storageKey   { return kStorageKey; }

+ (NSString *)formatDate:(NSDate *)date customFormat:(NSString *)customFormat isDarkMode:(BOOL)isDarkMode {
    if (!date) return nil;

    NSString *rawFormat = (customFormat.length > 0) ? customFormat : kDefaultFormat;

    // 处理双格式（逗号分隔 = 亮/暗）
    NSRange commaRange = [rawFormat rangeOfString:@","];
    NSString *fmt = rawFormat;
    if (commaRange.location != NSNotFound) {
        NSArray *parts = [rawFormat componentsSeparatedByString:@","];
        if (parts.count >= 2) {
            fmt = isDarkMode ? parts[1] : parts[0];
        }
    }

    // 去掉换行符
    fmt = [fmt stringByReplacingOccurrencesOfString:@"\n" withString:@""];

    // 步骤1: 处理特殊令牌 {EE}{EEEE}{a}{b} → 替换为占位符，稍后用 locale formatter 回填
    // 其他内容直接作为 NSDateFormatter format
    NSMutableString *nsdfFormat = [fmt mutableCopy];
    NSMutableDictionary<NSString *, NSString *> *specialReplacements = [NSMutableDictionary dictionary];

    for (NSString *token in @[@"{EE}", @"{EEEE}", @"{a}", @"{b}"]) {
        NSRange r = [nsdfFormat rangeOfString:token];
        if (r.location == NSNotFound) continue;

        // 创建 locale-aware formatter
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

        // 用唯一占位符替换
        NSString *placeholder = [NSString stringWithFormat:@"\u0001SPECIAL%lu\u0001",
                                  (unsigned long)specialReplacements.count];
        specialReplacements[placeholder] = formatted;
        [nsdfFormat replaceOccurrencesOfString:token withString:placeholder
                                       options:0 range:NSMakeRange(0, nsdfFormat.length)];
    }

    // 步骤2: 直接用 NSDateFormatter 格式化
    NSDateFormatter *df = [[NSDateFormatter alloc] init];
    [df setLocale:[[NSLocale alloc] initWithLocaleIdentifier:@"en_US_POSIX"]];
    [df setDateFormat:nsdfFormat];

    NSString *result = [df stringFromDate:date];
    if (!result) result = @"";

    // 步骤3: 回填特殊令牌的格式化结果
    for (NSString *placeholder in specialReplacements) {
        result = [result stringByReplacingOccurrencesOfString:placeholder
                                                   withString:specialReplacements[placeholder]];
    }

    return result;
}

+ (NSString *)previewWithFormat:(NSString *)customFormat isDarkMode:(BOO