#import "LogManager.h"

@implementation _WPLogManager

+ (NSString *)logFilePath {
    static NSString *_logPath = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        NSArray *paths = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);
        NSString *folder = [paths.firstObject stringByAppendingPathComponent:@"WeChatPlugin_Logs"];
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

@end