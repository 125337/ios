#import "FontBeautifyConfig.h"

@implementation FontBeautifyConfig

+ (instancetype)shared {
    static FontBeautifyConfig *instance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        instance = [[FontBeautifyConfig alloc] init];
    });
    return instance;
}

+ (NSString *)modulePrefix {
    return @"FontBeautify_";
}

+ (NSArray<ConfigDescriptor *> *)descriptors {
    return @[
        [ConfigDescriptor itemWithKey:@"enableFontBeautify" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"fontBeautifyFamilyName" type:ConfigValueTypeString default:@""],
        [ConfigDescriptor itemWithKey:@"fontBeautifyPostScriptName" type:ConfigValueTypeString default:@""],
        [ConfigDescriptor itemWithKey:@"fontBeautifyFileName" type:ConfigValueTypeString default:@""],
    ];
}

// 字体统一落盘目录：Library/MioFonts（顺带建目录，导入/扫描/Hook 注册共用一个入口）
+ (NSString *)mioFontsDir {
    NSString *dir = [NSSearchPathForDirectoriesInDomains(NSLibraryDirectory, NSUserDomainMask, YES)
                     firstObject];
    dir = [dir stringByAppendingPathComponent:@"MioFonts"];
    [[NSFileManager defaultManager] createDirectoryAtPath:dir
                              withIntermediateDirectories:YES
                                               attributes:nil
                                                    error:nil];
    return dir;
}

// 配置只存文件名：每次按当前容器 Library 路径解析，微信覆盖安装容器迁移后依然有效
- (NSString *)resolvedActiveFontPath {
    if (self.fontBeautifyFileName.length == 0) return nil;
    NSString *path = [[FontBeautifyConfig mioFontsDir]
                      stringByAppendingPathComponent:self.fontBeautifyFileName];
    return [[NSFileManager defaultManager] fileExistsAtPath:path] ? path : nil;
}

@end
