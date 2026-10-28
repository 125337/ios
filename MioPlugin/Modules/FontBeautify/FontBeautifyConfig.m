#import "FontBeautifyConfig.h"
#import "../../Core/LogManager.h"

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

#pragma mark - 字体文件备份（UserDefaults 幸存区）

// 备份 key 前缀：MioFontData_<文件名>。实测重签覆盖安装只清沙盒文件、UserDefaults 由
// cfprefsd 按 bundle ID 持有不受影响（MioImageVault 头注释同款结论），故字体字节放这里
static NSString * const kMioFontBackupPrefix = @"MioFontData_";

+ (void)backupFontFile:(NSString *)fileName {
    if (fileName.length == 0) return;
    NSString *path = [[self mioFontsDir] stringByAppendingPathComponent:fileName];
    NSData *data = [NSData dataWithContentsOfFile:path];
    if (data.length == 0) {
        WPLog(@"FontBeautify", @"[BACKUP] %@ 读取失败，未备份", fileName);
        return;
    }
    [[NSUserDefaults standardUserDefaults] setObject:data
                                              forKey:[kMioFontBackupPrefix stringByAppendingString:fileName]];
    WPLog(@"FontBeautify", @"[BACKUP] %@ 已备份（%lu 字节）", fileName, (unsigned long)data.length);
}

+ (void)removeFontBackup:(NSString *)fileName {
    if (fileName.length == 0) return;
    [[NSUserDefaults standardUserDefaults] removeObjectForKey:[kMioFontBackupPrefix stringByAppendingString:fileName]];
}

+ (NSInteger)restoreMissingFontFiles {
    NSUserDefaults *ud = [NSUserDefaults standardUserDefaults];
    NSDictionary *all = [ud dictionaryRepresentation];
    NSFileManager *fm = [NSFileManager defaultManager];
    NSString *dir = [self mioFontsDir];
    NSInteger restored = 0;
    for (NSString *key in all) {
        if (![key hasPrefix:kMioFontBackupPrefix]) continue;
        NSString *fileName = [key substringFromIndex:kMioFontBackupPrefix.length];
        if (fileName.length == 0) continue;
        NSString *path = [dir stringByAppendingPathComponent:fileName];
        if ([fm fileExistsAtPath:path]) continue; // 文件还在，无需恢复
        NSData *data = [ud objectForKey:key];
        if (![data isKindOfClass:[NSData class]] || data.length == 0) continue;
        if ([data writeToFile:path atomically:YES]) {
            WPLog(@"FontBeautify", @"[BACKUP] 沙盒字体 %@ 丢失，已从备份恢复（%lu 字节）",
                  fileName, (unsigned long)data.length);
            restored++;
        } else {
            WPLog(@"FontBeautify", @"[BACKUP] 恢复 %@ 写盘失败", fileName);
        }
    }
    return restored;
}

@end
