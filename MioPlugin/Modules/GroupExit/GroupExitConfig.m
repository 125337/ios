#import "GroupExitConfig.h"
#import "GroupExitHook.h"

@implementation GroupExitConfig

static GroupExitConfig *_sharedInstance = nil;

+ (instancetype)shared {
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        _sharedInstance = [[GroupExitConfig alloc] init];
    });
    return _sharedInstance;
}

+ (NSString *)modulePrefix {
    return @"GroupExit_";
}

+ (NSArray<ConfigDescriptor *> *)descriptors {
    return @[
        [ConfigDescriptor boolItem:@"enableGroupExitMonitor" default:@(NO)],
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