#import "AttachLayoutConfig.h"

@implementation AttachLayoutConfig

static AttachLayoutConfig *_sharedInstance = nil;

+ (instancetype)shared {
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        _sharedInstance = [[AttachLayoutConfig alloc] init];
    });
    return _sharedInstance;
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