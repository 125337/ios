#import "ClearUnreadConfig.h"

@implementation ClearUnreadConfig

+ (instancetype)shared {
    static ClearUnreadConfig *instance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        instance = [[ClearUnreadConfig alloc] init];
    });
    return instance;
}

+ (NSString *)modulePrefix {
    return @"ClearUnread_";
}

+ (NSArray<ConfigDescriptor *> *)descriptors {
    return @[
        [ConfigDescriptor itemWithKey:@"clearUnreadEnabled" type:ConfigValueTypeBool default:@(NO)],
    ];
}

@end