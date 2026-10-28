#import "FontBeautifyConfig.h"
#import "../../Core/LogManager.h"

@implementation FontBeautifyConfig

+ (instancetype)shared {
    static FontBeautifyConfig *instance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        instance = [[FontBeautifyConfig alloc] init];
        MioPurgeLegacyFontBackups();
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

// 字体统一落盘目录：Library/Preferences/fonts（顺带建目录，导入/扫描/Hook 注册共用一个入口）。
// 位置照抄微信助手 3.9-5 反编译实锤（MiYouPriUtil fontPath → "%@/Preferences/fonts"）：
// Preferences 是"部分还原"式安装唯一会被还原的目录（NSUserDefaults 也在这），
// 字体文件放这里跟着一起活下来，天然免疫覆盖安装丢文件
+ (NSString *)mioFontsDir {
    NSString *dir = [NSSearchPathForDirectoriesInDomains(NSLibraryDirectory, NSUserDomainMask, YES)
                     firstObject];
    dir = [dir stringByAppendingPathComponent:@"Preferences/fonts"];
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

#pragma mark - 旧版备份残留清理

// 老版本曾把字体字节备份进 UserDefaults（MioFontData_ 前缀，一个字体可占十几 MB）。
// 现字体目录已改 Library/Preferences/fonts——"部分还原"式安装会整体还原该目录，
// 字体文件天然幸存，不再需要备份。首次启动把残留 key 清干净
static void MioPurgeLegacyFontBackups(void) {
    NSUserDefaults *ud = [NSUserDefaults standardUserDefaults];
    NSDictionary *all = [ud dictionaryRepresentation];
    for (NSString *key in all) {
        if ([key hasPrefix:@"MioFontData_"]) [ud removeObjectForKey:key];
    }
}

@end
