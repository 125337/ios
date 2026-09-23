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

/// 热度计（唤醒排查，2026-09-24）：热路径 hook 只做原子计数（无字符串/无文件IO，零开销），
/// 每 5 秒汇总打点一条 [Heat] 速率日志（谁在烧唤醒一目了然）。排查闭环后摘除调用点。
/// 用法：hook 入口调用 WPHeatTick("模块.方法");  key 必须是字符串字面量（指针需全程稳定）。
extern void WPHeatTick(const char *key);