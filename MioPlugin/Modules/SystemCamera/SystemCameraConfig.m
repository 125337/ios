#import "SystemCameraConfig.h"

@implementation SystemCameraConfig

+ (instancetype)shared {
    static SystemCameraConfig *instance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        instance = [[SystemCameraConfig alloc] init];
    });
    return instance;
}

+ (NSString *)modulePrefix {
    return @"SystemCamera_";
}

+ (NSArray<ConfigDescriptor *> *)descriptors {
    return @[
        [ConfigDescriptor itemWithKey:@"enableSystemCamera" type:ConfigValueTypeBool default:@(NO)],
    ];
}

@end
