// 日月开关模块配置实现（照 AccountConfig 模式）

#import "DayNightSkinConfig.h"

@implementation DayNightSkinConfig

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
