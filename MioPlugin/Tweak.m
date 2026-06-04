#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <objc/runtime.h>
#import "Registry/HookRegistry.h"
#import "Config/PluginConfig.h"
#import "Modules/ListCornerRadius/ListCornerRadiusHook.h"
#import "Modules/ListCornerRadius/WPSessionSpacingHook.h"
#import "Modules/ListCornerRadius/WPAuxiliaryHooks.h"

__attribute__((constructor))
static void MioPluginInitialize() {
    NSLog(@"[MioPlugin] === DYLIB LOADED ===");

    @try {
        @autoreleasepool {
            NSLog(@"[MioPlugin] entering constructor");

            [HookRegistry installAllHooks];

            [ListCornerRadiusHook initListCornerRadiusHook];
            WPInstallSessionSpacingHooks();
            WPInstallAuxiliaryHooks();

            NSLog(@"[MioPlugin] all hooks installed");
        }
    } @catch (NSException *e) {
        NSLog(@"[MioPlugin] ✗ CONSTRUCTOR EXCEPTION: %@ - %@\n%@", e.name, e.reason, e.callStackSymbols);
    }
}