#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// 复刻微信优化 1.6.5 的自定义时间格式引擎
/// 支持 {yyyy}{MM}{dd}{HH}{mm}{ss} 标准令牌 + {EE}{EEEE}{a}{b} 特殊令牌
@interface MessageTimeFormatParser : NSObject

/// 使用自定义格式字符串格式化日期（无伪已读）
/// @param date 要格式化的日期
/// @param customFormat 自定义格式字符串（如 "{HH}:{mm}:{ss}"），nil 则使用默认值
/// @param isDarkMode 是否暗色模式（影响逗号分隔的双格式选择）
+ (NSString *)formatDate:(NSDate *)date customFormat:(nullable NSString *)customFormat isDarkMode:(BOOL)isDarkMode;

/// 使用自定义格式字符串格式化日期（含伪已读）
/// @param date 要格式化的日期
/// @param customFormat 自定义格式字符串，nil 则使用默认值
/// @param isDarkMode 是否暗色模式
/// @param isSender 是否发送者（接收者不显示伪已读）
/// @param statusCode 消息状态码（2=已读, 其他=已送达）
+ (NSString *)formatDate:(NSDate *)date customFormat:(nullable NSString *)customFormat isDarkMode:(BOOL)isDarkMode isSender:(BOOL)isSender statusCode:(NSInteger)statusCode;

/// 实时预览用（使用当前时间格式化）
+ (NSString *)previewWithFormat:(NSString *)customFormat isDarkMode:(BOOL)isDarkMode;

/// 默认格式
+ (NSString *)defaultFormat;

/// NSUserDefaults 存储 key
+ (NSString *)storageKey;

@end

NS_ASSUME_NONNULL_END