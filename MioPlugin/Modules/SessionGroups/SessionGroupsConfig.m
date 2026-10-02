#import "SessionGroupsConfig.h"

@implementation SessionGroupsConfig

+ (instancetype)shared {
    static SessionGroupsConfig *instance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        instance = [[SessionGroupsConfig alloc] init];
    });
    return instance;
}

+ (NSString *)modulePrefix {
    return @"SessionGroups_";
}

+ (NSArray<ConfigDescriptor *> *)descriptors {
    return @[
        [ConfigDescriptor itemWithKey:@"sgEnabled" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"sgSwitchHaptic" type:ConfigValueTypeInteger default:@(0)],
        [ConfigDescriptor itemWithKey:@"sgIndicator" type:ConfigValueTypeInteger default:@(0)],
        [ConfigDescriptor itemWithKey:@"sgCapsuleRadius" type:ConfigValueTypeFloat default:@(0.0)],
        [ConfigDescriptor itemWithKey:@"sgFullscreenSwipe" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"sgSwipeReverse" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"sgSwipeLoop" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"sgTabCentered" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"sgVisibleTabCount" type:ConfigValueTypeInteger default:@(4)],
        [ConfigDescriptor itemWithKey:@"sgShowUnreadBadge" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"sgShowGroupRedDot" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"sgFoldGroupNoRedDot" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"sgFilterPinned" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"sgFilterDuplicate" type:ConfigValueTypeBool default:@(NO)],
    ];
}

@end
