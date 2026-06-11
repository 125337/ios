#import "LogManager.h"

@implementation _WPLogManager

+ (NSString *)logFilePath {
    static NSString *_logPath = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        NSArray *paths = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);
        NSString *folder = [paths.firstObject stringByAppendingPathComponent:@"MioPlugin_Logs"];
        [[NSFileManager defaultManager] createDirectoryAtPath:folder withIntermediateDirectories:YES attributes:nil error:nil];
        _logPath = [folder stringByAppendingPathComponent:@"plugin.log"];
    });
    return _logPath;
}

+ (void)writeTag:(NSString *)tag content:(NSString *)content {
    @try {
        NSString *line = [NSString stringWithFormat:@"[%@] [%@] %@\n", [NSDate date], tag, content];
        NSFileHandle *handle = [NSFileHandle fileHandleForWritingAtPath:[self logFilePath]];
        if (handle) {
            [handle seekToEndOfFile];
            [handle writeData:[line dataUsingEncoding:NSUTF8StringEncoding]];
            [handle closeFile];
        } else {
            [line writeToFile:[self logFilePath] atomically:YES encoding:NSUTF8StringEncoding error:nil];
        }
    } @catch (NSException *e) {}
}

+ (void)appendLineWithTag:(NSString *)tag content:(NSString *)line {
    @try {
        // 确保目录存在
        NSArray *paths = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);
        NSString *folderPath = [paths.firstObject stringByAppendingPathComponent:@"MioPlugin_Logs"];
        [[NSFileManager defaultManager] createDirectoryAtPath:folderPath
                                  withIntermediateDirectories:YES
                                                   attributes:nil
                                                        error:nil];
        
        // 统一写入 MioPlugin.log
        NSString *filePath = [folderPath stringByAppendingPathComponent:@"MioPlugin.log"];
        
        // 格式: [2026-06-10 14:30:22][GroupExit] 内容
        NSDateFormatter *formatter = [[NSDateFormatter alloc] init];
        formatter.dateFormat = @"yyyy-MM-dd HH:mm:ss";
        NSString *timestamp = [formatter stringFromDate:[NSDate date]];
        NSString *logLine = [NSString stringWithFormat:@"[%@][%@] %@\n", timestamp, tag, line];
        
        // 追加写入
        NSFileHandle *handle = [NSFileHandle fileHandleForWritingAtPath:filePath];
        if (handle) {
            [handle seekToEndOfFile];
            [handle writeData:[logLine dataUsingEncoding:NSUTF8StringEncoding]];
            [handle closeFile];
        } else {
            [logLine writeToFile:filePath atomically:YES encoding:NSUTF8StringEncoding error:nil];
        }
    } @catch (NSException *e) {
        // 日志写入失败不抛异常
    }
}

@end