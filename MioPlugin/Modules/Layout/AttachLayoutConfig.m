#import "AttachLayoutConfig.h"

@implementation AttachLayoutConfig

+ (instancetype)shared {
    static AttachLayoutConfig *instance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        instance = [[AttachLayoutConfig alloc] init];
    });
    return instance;
}

+ (NSString *)modulePrefix {
    return @"AttachLayout_";
}

+ (NSArray<ConfigDescriptor *> *)descriptors {
    return @[
        [ConfigDescriptor itemWithKey:@"attachLayoutEnabled" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"attachLayoutColumns" type:ConfigValueTypeString default:nil],
        [ConfigDescriptor itemWithKey:@"attachLayoutRows" type:ConfigValueTypeString default:nil],
    ];
}

@end