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
        [ConfigDescriptor boolItem:@"hideC2COtherAvatar" default:@(NO)],
        [ConfigDescriptor boolItem:@"hideC2CSelfAvatar" default:@(NO)],
        [ConfigDescriptor boolItem:@"hideGroupOtherAvatar" default:@(NO)],
        [ConfigDescriptor boolItem:@"hideGroupSelfAvatar" default:@(NO)],
        [ConfigDescriptor boolItem:@"hideOAOtherAvatar" default:@(NO)],
        [ConfigDescriptor boolItem:@"hideOASelfAvatar" default:@(NO)],
    ];
}

@end