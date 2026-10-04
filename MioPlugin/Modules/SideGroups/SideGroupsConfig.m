#import "SideGroupsConfig.h"

@implementation SideGroupsConfig

+ (instancetype)shared {
    static SideGroupsConfig *instance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        instance = [[SideGroupsConfig alloc] init];
    });
    return instance;
}

+ (NSString *)modulePrefix {
    return @"SideGroups_";
}

+ (NSArray<ConfigDescriptor *> *)descriptors {
    return @[
        [ConfigDescriptor itemWithKey:@"sdEnabled" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"sdPosition" type:ConfigValueTypeInteger default:@(0)],
        [ConfigDescriptor itemWithKey:@"sdRailWidth" type:ConfigValueTypeFloat default:@(54.0)],
        [ConfigDescriptor itemWithKey:@"sdRailFontSize" type:ConfigValueTypeFloat default:@(12.0)],
        [ConfigDescriptor itemWithKey:@"sdRailXOffset" type:ConfigValueTypeFloat default:@(0.0)],
        [ConfigDescriptor itemWithKey:@"sdShowUnreadBadge" type:ConfigValueTypeBool default:@(YES)],
        [ConfigDescriptor itemWithKey:@"sdRailSelColorCustom" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"sdRailSelColor" type:ConfigValueTypeString default:@""],
        [ConfigDescriptor itemWithKey:@"sdRailSelColorDark" type:ConfigValueTypeString default:@""],
        [ConfigDescriptor itemWithKey:@"sdRailTextColorCustom" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"sdRailTextColor" type:ConfigValueTypeString default:@""],
        [ConfigDescriptor itemWithKey:@"sdRailTextColorDark" type:ConfigValueTypeString default:@""],
    ];
}

@end
