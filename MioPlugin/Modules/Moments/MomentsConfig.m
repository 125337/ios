#import "MomentsConfig.h"

@implementation MomentsConfig

+ (instancetype)shared {
    static MomentsConfig *instance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        instance = [[MomentsConfig alloc] init];
    });
    return instance;
}

+ (NSString *)modulePrefix {
    return @"Moments_";
}

+ (NSArray<ConfigDescriptor *> *)descriptors {
    return @[
        [ConfigDescriptor itemWithKey:@"convenientMomentsEnabled" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"hdMomentsEnabled" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"fakeLikeEnabled" type:ConfigValueTypeBool default:@(NO)],
    ];
}

@end
