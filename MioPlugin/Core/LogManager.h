#import <Foundation/Foundation.h>

#define WPLog(tag, fmt, ...) \
    do { \
        NSString *_msg = [NSString stringWithFormat:(fmt), ##__VA_ARGS__]; \
        NSLog(@"[%@] %@", (tag), _msg); \
        [_WPLogManager writeTag:(tag) content:_msg]; \
    } while(0)

@interface _WPLogManager : NSObject
+ (void)writeTag:(NSString *)tag content:(NSString *)content;

/// 向统一日志文件追加一行（文件路径: Documents/MioPlugin_Logs/MioPlugin.log）
/// @param tag  模块标签，如 @"GroupExit" / @"AutoTransfer" / @"Alert"
/// @param line 日志内容（方法内部会自动拼接时间戳和换行）
+ (void)appendLineWithTag:(NSString *)tag content:(NSString *)line;
@end