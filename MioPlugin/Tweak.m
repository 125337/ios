#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <objc/runtime.h>
#import "Registry/HookRegistry.h"
#import "Config/PluginConfig.h"
// ListCornerRadius disabled - will be re-enabled after research
// #import "Modules/ListCornerRadius/ListCornerRadiusHook.h"

__attribute__((constructor))
static void MioPluginInitialize() {
    NSLog(@"[MioPlugin] === DYLIB LOADED ===");

    @try {
        @autoreleasepool {
            NSLog(@"[MioPlugin] entering constructor");
            [HookRegistry installAllHooks];
            // [ListCornerRadiusHook initListCornerRadiusHook]; // disabled - causing watchdog timeout
            NSLog(@"[MioPlugin] all hooks installed");
        }
    } @catch (NSException *e) {
        NSLog(@"[MioPlugin] ✗ CONSTRUCTOR EXCEPTION: %@ - %@\n%@", e.name, e.reason, e.callStackSymbols);
    }
}
