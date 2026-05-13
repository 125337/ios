#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <objc/runtime.h>
#import "Registry/HookRegistry.h"
#import "Config/PluginConfig.h"

__attribute__((constructor))
static void WeChatPluginInitialize() {
    NSLog(@"[WeChatPlugin] === DYLIB LOADED ===");

    @try {
        @autoreleasepool {
            NSLog(@"[WeChatPlugin] entering constructor");
            [HookRegistry installAllHooks];
            NSLog(@"[WeChatPlugin] all hooks installed");
        }
    } @catch (NSException *e) {
        NSLog(@"[WeChatPlugin] ✗ CONSTRUCTOR EXCEPTION: %@ - %@\n%@", e.name, e.reason, e.callStackSymbols);
    }
}