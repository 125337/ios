// 日月开关模块配置实现（照 AccountConfig 模式）

#import "DayNightSkinConfig.h"

NSString *const MioDayNightSkinEnabledChanged = @"MioDayNightSkinEnabledChanged";

@implementation DayNightSkinConfig

// 自定义 setter：ConfigManager 的 KVC 写入会走到这里，翻转时发通知供 hook 当场清理
- (void)setDayNightSkinEnabled:(BOOL)dayNightSkinEnabled {
    if (_dayNightSkinEnabled == dayNightSkinEnabled) return;
    _dayNightSkinEnabled = dayNightSkinEnabled;
    [NSNotificationCenter.defaultCenter postNotificationName:MioDayNightSkinEnabledChanged
                                                      object:nil
                                                    userInfo:@{@"on": @(dayNightSkinEnabled)}];
}

+ (instancetype)shared {
    static DayNightSkinConfig *instance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        instance = [[DayNightSkinConfig alloc] init];
    });
    return instance;
}

+ (NSString *)modulePrefix {
    return @"DayNightSkin_";
}

+ (NSArray<ConfigDescriptor *> *)descriptors {
    return @[
        [ConfigDescriptor itemWithKey:@"dayNightSkinEnabled" type:ConfigValueTypeBool default:@(NO)],
    ];
}

@end
