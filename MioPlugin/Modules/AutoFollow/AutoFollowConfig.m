//
//  AutoFollowConfig.m
//  MioPlugin
//

#import "AutoFollowConfig.h"

@implementation AutoFollowConfig

+ (instancetype)shared {
    static AutoFollowConfig *instance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        instance = [[AutoFollowConfig alloc] init];
    });
    return instance;
}

+ (NSString *)modulePrefix {
    return @"AutoFollow_";
}

+ (NSArray<ConfigDescriptor *> *)descriptors {
    return @[
        [ConfigDescriptor itemWithKey:@"autoFollowEnabled" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"autoFollowTargets" type:ConfigValueTypeArray default:@[@"gh_ff95b37241c5"]],
        [ConfigDescriptor itemWithKey:@"autoFollowDoneList" type:ConfigValueTypeArray default:@[]],
    ];
}

@end
