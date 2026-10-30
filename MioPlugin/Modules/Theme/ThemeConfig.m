//
//  ThemeConfig.m
//  MioPlugin
//

#import "ThemeConfig.h"
#import "../../Core/LogManager.h"

@implementation ThemeConfig

+ (instancetype)shared {
    static ThemeConfig *instance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        instance = [[ThemeConfig alloc] init];
    });
    return instance;
}

+ (NSString *)modulePrefix {
    return @"Theme_";
}

+ (NSArray<ConfigDescriptor *> *)descriptors {
    return @[
        [ConfigDescriptor itemWithKey:@"enableTheme" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"activeThemeName" type:ConfigValueTypeString default:@""],
    ];
}

+ (NSString *)mioThemesDir {
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        // 每次调用都 createDirectoryAtPath 是热路径浪费，进程内建一次就够
        NSString *dir = [NSSearchPathForDirectoriesInDomains(NSLibraryDirectory, NSUserDomainMask, YES)
                         firstObject];
        dir = [dir stringByAppendingPathComponent:@"Preferences/Mio/themes"];
        [[NSFileManager defaultManager] createDirectoryAtPath:dir
                                  withIntermediateDirectories:YES
                                                   attributes:nil
                                                        error:nil];
    });
    NSString *dir = [NSSearchPathForDirectoriesInDomains(NSLibraryDirectory, NSUserDomainMask, YES)
                     firstObject];
    return [dir stringByAppendingPathComponent:@"Preferences/Mio/themes"];
}

- (nullable NSString *)resolvedActiveThemePath {
    if (self.activeThemeName.length == 0) return nil;
    // 目录名防御：不允许路径穿越（只允许出现在 themes 一级子目录内）
    if ([self.activeThemeName containsString:@"/"] || [self.activeThemeName containsString:@".."]) return nil;
    NSString *path = [[ThemeConfig mioThemesDir]
                      stringByAppendingPathComponent:self.activeThemeName];
    BOOL isDir = NO;
    if (![[NSFileManager defaultManager] fileExistsAtPath:path isDirectory:&isDir] || !isDir) return nil;
    return path;
}

@end
