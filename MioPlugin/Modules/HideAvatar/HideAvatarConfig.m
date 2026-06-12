#import "HideAvatarConfig.h"

@implementation HideAvatarConfig

+ (instancetype)shared {
    static HideAvatarConfig *instance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        instance = [[HideAvatarConfig alloc] init];
    });
    return instance;
}

+ (NSString *)modulePrefix {
    return @"HideAvatar_";
}

+ (NSArray<ConfigDescriptor *> *)descriptors {
    return @[
        [ConfigDescriptor itemWithKey:@"hideC2COtherAvatar" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"hideC2CSelfAvatar" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"hideGroupOtherAvatar" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"hideGroupSelfAvatar" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"hideOAOtherAvatar" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"hideOASelfAvatar" type:ConfigValueTypeBool default:@(NO)],
    ];
}

@end