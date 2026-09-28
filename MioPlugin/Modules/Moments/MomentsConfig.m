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
        [ConfigDescriptor itemWithKey:@"fakeLikeCount" type:ConfigValueTypeInteger default:@(10)],
        [ConfigDescriptor itemWithKey:@"fakeCommentCount" type:ConfigValueTypeInteger default:@(3)],
        [ConfigDescriptor itemWithKey:@"fakeCommentTexts" type:ConfigValueTypeArray default:@[]],
    ];
}

@end
