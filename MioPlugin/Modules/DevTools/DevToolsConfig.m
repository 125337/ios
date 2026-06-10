#import "DevToolsConfig.h"

@implementation DevToolsConfig

static DevToolsConfig *_sharedInstance = nil;

+ (instancetype)shared {
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        _sharedInstance = [[DevToolsConfig alloc] init];
    });
    return _sharedInstance;
}

+ (NSString *)modulePrefix {
    return @"DevTools_";
}

+ (NSArray<ConfigDescriptor *> *)descriptors {
    return @[
        [ConfigDescriptor boolItem:@"nsLogMonitorEnabled" default:@(NO)],
        [ConfigDescriptor boolItem:@"nsLogLocalSave" default:@(NO)],
        [ConfigDescriptor stringItem:@"nsLogKeywords" default:@""],
        [ConfigDescriptor boolItem:@"navMonitorEnabled" default:@(NO)],
    ];
}

@end