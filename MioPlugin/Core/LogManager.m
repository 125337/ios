//
//  LogManager.m
//  MioPlugin
//
//  统一日志实现。
//  所有日志通过 WPLog / WPLogDebug 宏进入此文件，
//  统一写入 Documents/MioPlugin_Logs/MioPlugin.log。
//

#import "LogManager.h"

/// 统一日志文件路径
/// 返回: .../Documents/MioPlugin_Logs/MioPlugin.log
/// 自动创建目录，dispatch_once 保证线程安全
static NSString *WPLogFilePath(void) {
    static NSString *_logPath = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        NSArray *paths = NSSearchPathForDirectoriesInDomains(
            NSDocumentDirectory, NSUserDomainMask, YES);
        NSString *folder = [paths.firstObject
            stringByAppendingPathComponent:@"MioPlugin_Logs"];
        [[NSFileManager defaultManager] createDirectoryAtPath:folder
                                  withIntermediateDirectories:YES
                                                   attributes:nil
                                                        error:nil];
        _logPath = [folder stringByAppendingPathComponent:@"MioPlugin.log"];
    });
    return _logPath;
}

/// 向统一日志文件追加一行
/// 格式: [2026-06-10 14:30:22][Tag] 内容\n
static void WPLogAppendLine(NSString *tag, NSString *content) {
    @try {
        // 时间戳
        NSDateFormatter *formatter = [[NSDateFormatter alloc] init];
        formatter.dateFormat = @"yyyy-MM-dd HH:mm:ss";
        NSString *timestamp = [formatter stringFromDate:[NSDate date]];

        // 构造行
        NSString *line = [NSString stringWithFormat:@"[%@][%@] %@\n",
                          timestamp, tag, content];

        // 追加写入
        NSString *filePath = WPLogFilePath();
        NSFileHandle *handle = [NSFileHandle fileHandleForWritingAtPath:filePath];
        if (handle) {
            [handle seekToEndOfFile];
            [handle writeData:[line dataUsingEncoding:NSUTF8StringEncoding]];
            [handle closeFile];
        } else {
            [line writeToFile:filePath atomically:YES
                     encoding:NSUTF8StringEncoding error:nil];
        }
    } @catch (NSException *e) {
        // 日志写入失败不抛异常
    }
}

@implementation _WPLogManager

+ (void)appendLineWithTag:(NSString *)tag content:(NSString *)line {
    // WPLog 和 WPLogDebug 宏都最终调用此方法
    // 这是项目中唯一的日志写入方法
    WPLogAppendLine(tag, line);
}

@end