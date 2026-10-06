#import "HomeCardConfig.h"
#import "../../Core/MioImageVault.h"

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
        [ConfigDescriptor itemWithKey:@"hcCardHeight" type:ConfigValueTypeFloat default:@(100)],
        [ConfigDescriptor itemWithKey:@"hcCardOffsetY" type:ConfigValueTypeFloat default:@(0)],
        [ConfigDescriptor itemWithKey:@"hcCardBottomFix" type:ConfigValueTypeFloat default:@(0)],
        [ConfigDescriptor itemWithKey:@"hcCardMargin" type:ConfigValueTypeFloat default:@(16)],
        [ConfigDescriptor itemWithKey:@"hcBorderWidth" type:ConfigValueTypeFloat default:@(0)],
        [ConfigDescriptor itemWithKey:@"hcBorderColor" type:ConfigValueTypeString default:@""],
        [ConfigDescriptor itemWithKey:@"hcBorderColorDark" type:ConfigValueTypeString default:@""],
        [ConfigDescriptor itemWithKey:@"hcCardBgColor" type:ConfigValueTypeString default:@""],
        [ConfigDescriptor itemWithKey:@"hcCardBgColorDark" type:ConfigValueTypeString default:@""],
        // 天气（XOS CadisWeather*）
        [ConfigDescriptor itemWithKey:@"hcWeatherEnabled" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"hcWeatherPos" type:ConfigValueTypeInteger default:@(0)],
        [ConfigDescriptor itemWithKey:@"hcWeatherX" type:ConfigValueTypeFloat default:@(85)],
        [ConfigDescriptor itemWithKey:@"hcWeatherY" type:ConfigValueTypeFloat default:@(5)],
        [ConfigDescriptor itemWithKey:@"hcWeatherAlpha" type:ConfigValueTypeFloat default:@(90)],
        [ConfigDescriptor itemWithKey:@"hcWeatherBgColor" type:ConfigValueTypeString default:@""],
        [ConfigDescriptor itemWithKey:@"hcWeatherBgColorDark" type:ConfigValueTypeString default:@""],
        [ConfigDescriptor itemWithKey:@"hcWeatherCity" type:ConfigValueTypeString default:@""],
        [ConfigDescriptor itemWithKey:@"hcWeatherLang" type:ConfigValueTypeInteger default:@(0)],
        // 日历（XOS CadisCalendar*，Pos 未设默认 1 = 卡片中）
        [ConfigDescriptor itemWithKey:@"hcCalEnabled" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"hcCalPos" type:ConfigValueTypeInteger default:@(1)],
        [ConfigDescriptor itemWithKey:@"hcCalY" type:ConfigValueTypeFloat default:@(50)],
        [ConfigDescriptor itemWithKey:@"hcCalBgHeight" type:ConfigValueTypeFloat default:@(0)],
        [ConfigDescriptor itemWithKey:@"hcCalScale" type:ConfigValueTypeFloat default:@(100)],
        [ConfigDescriptor itemWithKey:@"hcCalBgColor" type:ConfigValueTypeString default:@""],
        [ConfigDescriptor itemWithKey:@"hcCalBgColorDark" type:ConfigValueTypeString default:@""],
        [ConfigDescriptor itemWithKey:@"hcCalHolidayColor" type:ConfigValueTypeString default:@""],
        [ConfigDescriptor itemWithKey:@"hcCalHolidayColorDark" type:ConfigValueTypeString default:@""],
        [ConfigDescriptor itemWithKey:@"hcCalSelectedColor" type:ConfigValueTypeString default:@""],
        [ConfigDescriptor itemWithKey:@"hcCalSelectedColorDark" type:ConfigValueTypeString default:@""],
    ];
}

#pragma mark - 卡片图片（MioImageVault 双存储：Documents 文件 + Keychain 备份，重装不丢）

+ (NSString *)imageDirectory {
    NSString *docsDir = [NSSearchPathForDirectoriesInDomains(
        NSDocumentDirectory, NSUserDomainMask, YES) firstObject];
    return [docsDir stringByAppendingPathComponent:@"MioHomeCard"];
}

+ (NSString *)lightImagePath {
    return [MioImageVault restorePathForDirName:@"MioHomeCard"
                                       fileName:@"HomeCardLight.png"
                                            key:@"HomeCardLight"];
}

+ (NSString *)darkImagePath {
    return [MioImageVault restorePathForDirName:@"MioHomeCard"
                                       fileName:@"HomeCardDark.png"
                                            key:@"HomeCardDark"];
}

+ (BOOL)hasLightImage {
    return [self lightImagePath] != nil;
}

+ (BOOL)hasDarkImage {
    return [self darkImagePath] != nil;
}

+ (void)deleteLightImage {
    [MioImageVault removeForDirName:@"MioHomeCard"
                           fileName:@"HomeCardLight.png"
                                key:@"HomeCardLight"];
}

+ (void)deleteDarkImage {
    [MioImageVault removeForDirName:@"MioHomeCard"
                           fileName:@"HomeCardDark.png"
                                key:@"HomeCardDark"];
}

@end
