#import "DevToolsHook.h"
#import "MioLogMonitor.h"
#import "MioNavMonitor.h"
#import "../../Config/PluginConfig.h"
#import "../../Core/LogManager.h"

@implementation DevToolsHook

+ (void)install {
    WPLog(@"DevTools", @"[DevToolsHook] install start");

    [MioLogMonitor sharedInstance];
    [MioNavMonitor sharedInstance];

    WPLog(@"DevTools", @"[DevToolsHook] ✓ install complete");
}

@end
