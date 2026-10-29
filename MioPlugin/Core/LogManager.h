//
//  LogManager.h
//  MioPlugin
//
//  统一日志管理。
//
//  提供两种日志宏，全部写入同一个文件：
//    Documents/MioPlugin_Logs/MioPlugin.log
//
//  用法:
//    WPLog(@"Revoke", @"消息已拦截: %@", msgId);      // 控制台 + 文件
//    WPLogDebug(@"GroupExit", @"旧成员: %lu", count); // 仅文件
//

#import <Foundation/Foundation.h>

// ===== 编译期日志开关 =====
// 定义 MIO_LOG_SILENT 后，全项目 843 处 WPLog/WPLogDebug 调用点在预处理阶段
// 被直接删除——字符串字面量和 stringWithFormat 调用代码都不进二进制（约 -200KB）。
// 排障时注释掉这行重新构建即可恢复全部日志，业务代码零改动。
// 注意：静默版参数表达式不求值、无 NSLog 输出（日志参数均为纯读取，无副作用）。
#define MIO_LOG_SILENT 1

#ifdef MIO_LOG_SILENT

/// 静默版：预处理阶段整段剔除
#define WPLog(tag, fmt, ...)      do {} while(0)
#define WPLogDebug(tag, fmt, ...) do {} while(0)

#else

/// 普通日志：控制台 + 文件
/// @param tag  模块标识（如 @"Revoke" / @"AutoTransfer"）
/// @param fmt  格式化字符串，后接变参
#define WPLog(tag, fmt, ...) \
    do { \
        NSString *_msg = [NSString stringWithFormat:(fmt), ##__VA_ARGS__]; \
        NSLog(@"[%@] %@", (tag), _msg); \
        [_WPLogManager appendLineWithTag:(tag) content:_msg]; \
    } while(0)

/// 调试日志：仅文件，不输出到控制台
/// 适用于高频调试信息，避免刷屏
/// @param tag  模块标识
/// @param fmt  格式化字符串，后接变参
#define WPLogDebug(tag, fmt, ...) \
    do { \
        NSString *_msg = [NSString stringWithFormat:(fmt), ##__VA_ARGS__]; \
        [_WPLogManager appendLineWithTag:(tag) content:_msg]; \
    } while(0)

#endif // MIO_LOG_SILENT

@interface _WPLogManager : NSObject

/**
 * 追加一条日志到统一文件（MioPlugin.log）。
 * 格式: [2026-06-10 14:30:22][Tag] 内容
 *
 * 注意: 通常情况下不要直接调用此方法。
 * 普通日志请使用 WPLog() 宏，调试日志请使用 WPLogDebug() 宏。
 */
+ (void)appendLineWithTag:(NSString *)tag content:(NSString *)line;

@end