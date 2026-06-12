#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "Registry/MioModuleRegistry.h"

__attribute__((constructor))
static void MioPluginInitialize() {
    NSLog(@"[MioPlugin] === DYLIB LOADED ===");

    @try {
        @autoreleasepool {
            NSLog(@"[MioPlugin] entering constructor");
            [MioModuleRegistry registerAll];  // ← 唯一需要的一行
            NSLog(@"[MioPlugin] all modules registered");
        }
    } @catch (NSException *e) {
        NSLog(@"[MioPlugin] ✗ CONSTRUCTOR EXCEPTION: %@ - %@\n%@", e.name, e.reason, e.callStackSymbols);
    }
}