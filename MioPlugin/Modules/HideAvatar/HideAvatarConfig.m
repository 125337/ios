#import "HideAvatarConfig.h"

@implementation HideAvatarConfig

static HideAvatarConfig *_sharedInstance = nil;

+ (instancetype)shared {
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        _sharedInstance = [[HideAvatarConfig alloc] init];
    });
    return _sharedInstance;
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