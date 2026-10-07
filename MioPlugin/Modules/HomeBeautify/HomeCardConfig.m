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
        // 联系人（XOS CadisContact*，Pos 未设默认 0 = 卡片上方）
        [ConfigDescriptor itemWithKey:@"hcContactEnabled" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"hcContactPos" type:ConfigValueTypeInteger default:@(0)],
        [ConfigDescriptor itemWithKey:@"hcContactHideNick" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"hcContactY" type:ConfigValueTypeFloat default:@(50)],
        [ConfigDescriptor itemWithKey:@"hcContactSpacing" type:ConfigValueTypeFloat default:@(10)],
        [ConfigDescriptor itemWithKey:@"hcContactBgColor" type:ConfigValueTypeString default:@""],
        [ConfigDescriptor itemWithKey:@"hcContactBgColorDark" type:ConfigValueTypeString default:@""],
        [ConfigDescriptor itemWithKey:@"hcContactAvatarSize" type:ConfigValueTypeFloat default:@(48)],
        [ConfigDescriptor itemWithKey:@"hcContactAvatarSpacing" type:ConfigValueTypeFloat default:@(3)],
        [ConfigDescriptor itemWithKey:@"hcContactMaxVisible" type:ConfigValueTypeInteger default:@(5)],
        [ConfigDescriptor itemWithKey:@"hcContactOnline" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"hcContactDotColor" type:ConfigValueTypeString default:@""],
        [ConfigDescriptor itemWithKey:@"hcContactDotColorDark" type:ConfigValueTypeString default:@""],
        [ConfigDescriptor itemWithKey:@"hcContactDotPos" type:ConfigValueTypeInteger default:@(0)],
        [ConfigDescriptor itemWithKey:@"hcContactFullScreen" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"hcContactBgHeight" type:ConfigValueTypeFloat default:@(0)],
    ];
}

#pragma mark - 管理联系人（NSUserDefaults 有序 userName 数组，XOS CadisSavedContacts 同构）

+ (NSArray<NSString *> *)savedContacts {
    id v = [[NSUserDefaults standardUserDefaults] objectForKey:@"MioContactSaved"];
    return [v isKindOfClass:[NSArray class]] ? v : @[];
}

+ (void)saveContacts:(NSArray<NSString *> *)userNames {
    [[NSUserDefaults standardUserDefaults] setObject:userNames ?: @[] forKey:@"MioContactSaved"];
    [[NSUserDefaults standardUserDefaults] synchronize];
}

+ (NSString *)savedContactsFingerprint {
    NSArray *saved = [self savedContacts];
    return [NSString stringWithFormat:@"%lu|%@", (unsigned long)saved.count,
            [saved componentsJoinedByString:@","]];
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
