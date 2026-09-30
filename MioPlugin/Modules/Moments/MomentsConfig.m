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
        [ConfigDescriptor itemWithKey:@"autoLikeEnabled" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"autoLikeInterval" type:ConfigValueTypeInteger default:@(5)],
        [ConfigDescriptor itemWithKey:@"autoLikeRefreshInterval" type:ConfigValueTypeInteger default:@(60)],
        [ConfigDescriptor itemWithKey:@"autoLikeMaxPerSession" type:ConfigValueTypeInteger default:@(20)],
        [ConfigDescriptor itemWithKey:@"autoLikeBlocklist" type:ConfigValueTypeArray default:@[]],
        [ConfigDescriptor itemWithKey:@"autoCommentEnabled" type:ConfigValueTypeBool default:@NO],
        [ConfigDescriptor itemWithKey:@"autoCommentInterval" type:ConfigValueTypeInteger default:@(10)],
        [ConfigDescriptor itemWithKey:@"autoCommentRefreshInterval" type:ConfigValueTypeInteger default:@(180)],
        [ConfigDescriptor itemWithKey:@"autoCommentTexts" type:ConfigValueTypeArray default:@[]],
        [ConfigDescriptor itemWithKey:@"autoCommentContacts" type:ConfigValueTypeArray default:@[]],
        [ConfigDescriptor itemWithKey:@"detailedTimeEnabled" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"detailedTimeFormat" type:ConfigValueTypeString default:@"yyyy-MM-dd HH:mm:ss (RT)"],
    ];
}

@end
