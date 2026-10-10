#import "ListCornerRadiusConfig.h"

// 默认色单一来源（声明见 .h）
NSString * const MioDefaultCellLightBgColor = @"#FFFFFF";
NSString * const MioDefaultCellDarkBgColor  = @"#1C1C1E";
NSString * const MioDefaultBorderColorLight = @"#E5E5E5";
NSString * const MioDefaultBorderColorDark  = @"#3A3A3C";

@implementation ListCornerRadiusConfig

+ (instancetype)shared {
    static ListCornerRadiusConfig *instance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        instance = [[ListCornerRadiusConfig alloc] init];
    });
    return instance;
}

+ (NSString *)modulePrefix {
    return @"ListCorner_";
}

+ (NSArray<ConfigDescriptor *> *)descriptors {
    return @[
        [ConfigDescriptor itemWithKey:@"globalCornerRadiusEnabled" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"globalCornerMyPageEnabled" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"globalCornerContactsPageEnabled" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"globalCornerDiscoverPageEnabled" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"listSearchCornerRadius" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"listCellBorder" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"listCellCornerRadius" type:ConfigValueTypeFloat default:@(18.0)],
        [ConfigDescriptor itemWithKey:@"listCellMargin" type:ConfigValueTypeFloat default:@(9.0)],
        [ConfigDescriptor itemWithKey:@"listCellLightBgColor" type:ConfigValueTypeString default:MioDefaultCellLightBgColor],
        [ConfigDescriptor itemWithKey:@"listCellDarkBgColor" type:ConfigValueTypeString default:MioDefaultCellDarkBgColor],
        [ConfigDescriptor itemWithKey:@"listCellBorderWidth" type:ConfigValueTypeFloat default:@(2.0)],
        [ConfigDescriptor itemWithKey:@"listCellBorderColor" type:ConfigValueTypeString default:MioDefaultBorderColorLight],
        [ConfigDescriptor itemWithKey:@"listCellBorderColorDarkHex" type:ConfigValueTypeString default:MioDefaultBorderColorDark],
    ];
}

@end