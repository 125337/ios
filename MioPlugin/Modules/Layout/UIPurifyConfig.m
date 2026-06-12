#import "UIPurifyConfig.h"

@implementation UIPurifyConfig

+ (instancetype)shared {
    static UIPurifyConfig *instance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        instance = [[UIPurifyConfig alloc] init];
    });
    return instance;
}

+ (NSString *)modulePrefix {
    return @"UIPurify_";
}

+ (NSArray<ConfigDescriptor *> *)descriptors {
    return @[
        [ConfigDescriptor itemWithKey:@"hideSeparatorLine" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"hideRevokeHint" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"hidePatHint" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"hideVoiceRedDot" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"hideBubbleBackground" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"disableDictation" type:ConfigValueTypeBool default:@(NO)],
    ];
}

@end