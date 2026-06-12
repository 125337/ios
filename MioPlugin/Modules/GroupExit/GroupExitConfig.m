#import "GroupExitConfig.h"
#import "GroupExitHook.h"

@implementation GroupExitConfig

+ (instancetype)shared {
    static GroupExitConfig *instance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        instance = [[GroupExitConfig alloc] init];
    });
    return instance;
}

+ (NSString *)modulePrefix {
    return @"GroupExit_";
}

+ (NSArray<ConfigDescriptor *> *)descriptors {
    return @[
        [ConfigDescriptor itemWithKey:@"enableGroupExitMonitor" type:ConfigValueTypeBool default:@(NO)],
    ];
}

- (void)setEnableGroupExitMonitor:(BOOL)enableGroupExitMonitor {
    _enableGroupExitMonitor = enableGroupExitMonitor;
    if (enableGroupExitMonitor) {
        [GroupExitHook startMonitoring];
    } else {
        [GroupExitHook stopMonitoring];
    }
}

@end