#import "ClearUnreadConfig.h"

@implementation ClearUnreadConfig

static ClearUnreadConfig *_sharedInstance = nil;

+ (instancetype)shared {
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        _sharedInstance = [[ClearUnreadConfig alloc] init];
    });
    return _sharedInstance;
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