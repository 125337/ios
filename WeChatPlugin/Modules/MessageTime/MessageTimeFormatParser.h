#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// 复刻微信优化 1.6.5 的自定义时间格式引擎
/// 支持 {yyyy}{MM}{dd}{HH}{mm}{ss} 标准令牌 + {EE}{EEEE}{a}{b} 特殊令牌
@interface MessageTimeFormatParser : NSObject

/// 使用自定义格式字符串格式化日期
/// @param date 要格式化的日期
/// @param customFormat 自定义格式字符串（如 "{HH}:{mm}:{ss}"），nil 则使用默认值
/// @param isDarkMode 是否暗色模式（影响逗号分隔的双格式选择）
+ (NSString *)formatDate:(NSDate *)date customFormat:(nullable NSString *)customFormat isDarkMode:(BOOL)isDarkMode;

/// 实时预览用（使用当前时间格式化）
+ (NSString *)previewWithFormat:(NSString *)customFormat isDarkMode:(BOOL)isDarkMode;

/// 默认格式
+ (NSString *)defaultFormat;

/// NSUserDefaults 存储 key
+ (NSString *)storageKey;

@end

NS_ASSUME_NONNULL_END