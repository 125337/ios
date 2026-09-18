#import "AccountConfig.h"

@implementation AccountConfig

+ (instancetype)shared {
    static AccountConfig *instance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        instance = [[AccountConfig alloc] init];
    });
    return instance;
}

+ (NSString *)modulePrefix {
    return @"Account_";
}

+ (NSArray<ConfigDescriptor *> *)descriptors {
    return @[
        [ConfigDescriptor itemWithKey:@"certExpireAlertEnabled" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"certExpireAlertDays" type:ConfigValueTypeString default:@"30@18@7@3"],
    ];
}

@end
