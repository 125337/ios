#import "HomeCardConfig.h"

@implementation HomeCardConfig

+ (instancetype)shared {
    static HomeCardConfig *instance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        instance = [[HomeCardConfig alloc] init];
    });
    return instance;
}

+ (NSString *)modulePrefix {
    return @"HomeCard_";
}

+ (NSArray<ConfigDescriptor *> *)descriptors {
    return @[
        [ConfigDescriptor itemWithKey:@"hcEnabled" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"hcTitle" type:ConfigValueTypeString default:@""],
        [ConfigDescriptor itemWithKey:@"hcTitleSize" type:ConfigValueTypeFloat default:@(0)],
        [ConfigDescriptor itemWithKey:@"hcTitleOffsetX" type:ConfigValueTypeFloat default:@(0)],
        [ConfigDescriptor itemWithKey:@"hcCardHeight" type:ConfigValueTypeFloat default:@(100)],
        [ConfigDescriptor itemWithKey:@"hcCardOffsetY" type:ConfigValueTypeFloat default:@(0)],
        [ConfigDescriptor itemWithKey:@"hcCardBottomFix" type:ConfigValueTypeFloat default:@(0)],
        [ConfigDescriptor itemWithKey:@"hcCardMargin" type:ConfigValueTypeFloat default:@(16)],
        [ConfigDescriptor itemWithKey:@"hcBorderWidth" type:ConfigValueTypeFloat default:@(0)],
        [ConfigDescriptor itemWithKey:@"hcBorderColor" type:ConfigValueTypeString default:@""],
        [ConfigDescriptor itemWithKey:@"hcBorderColorDark" type:ConfigValueTypeString default:@""],
        [ConfigDescriptor itemWithKey:@"hcCardBgColor" type:ConfigValueTypeString default:@""],
        [ConfigDescriptor itemWithKey:@"hcCardBgColorDark" type:ConfigValueTypeString default:@""],
    ];
}

#pragma mark - 卡片图片（磁盘存储，浅/深色独立文件）

+ (NSString *)imageDirectory {
    NSString *docsDir = [NSSearchPathForDirectoriesInDomains(
        NSDocumentDirectory, NSUserDomainMask, YES) firstObject];
    return [docsDir stringByAppendingPathComponent:@"MioHomeCard"];
}

+ (NSString *)lightImagePath {
    NSString *dir = [self imageDirectory];
    NSString *pngPath = [dir stringByAppendingPathComponent:@"HomeCardLight.png"];
    if ([[NSFileManager defaultManager] fileExistsAtPath:pngPath]) return pngPath;
    return nil;
}

+ (NSString *)darkImagePath {
    NSString *dir = [self imageDirectory];
    NSString *pngPath = [dir stringByAppendingPathComponent:@"HomeCardDark.png"];
    if ([[NSFileManager defaultManager] fileExistsAtPath:pngPath]) return pngPath;
    return nil;
}

+ (BOOL)hasLightImage {
    return [self lightImagePath] != nil;
}

+ (BOOL)hasDarkImage {
    return [self darkImagePath] != nil;
}

+ (void)deleteLightImage {
    NSString *path = [[self imageDirectory] stringByAppendingPathComponent:@"HomeCardLight.png"];
    [[NSFileManager defaultManager] removeItemAtPath:path error:nil];
}

+ (void)deleteDarkImage {
    NSString *path = [[self imageDirectory] stringByAppendingPathComponent:@"HomeCardDark.png"];
    [[NSFileManager defaultManager] removeItemAtPath:path error:nil];
}

@end
