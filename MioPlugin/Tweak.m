#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <objc/runtime.h>
#import "Registry/HookRegistry.h"
#import "Config/PluginConfig.h"
#import "Modules/ListCornerRadius/ListCornerRadiusHook.h"
#import "Modules/ProfileCardBg/ProfileCardBgHook.h"

__attribute__((constructor))
static void MioPluginInitialize() {
    NSLog(@"[MioPlugin] === DYLIB LOADED ===");

    @try {
        @autoreleasepool {
            NSLog(@"[MioPlugin] entering constructor");

            [HookRegistry installAllHooks];

            // ★ 资料卡模块暂未通过 FeatureModuleRegistry 注册
            // 待实现 +install 后可删除此行
            [ProfileCardBgHook initProfileCardHook];

            NSLog(@"[MioPlugin] all hooks installed");
        }
    } @catch (NSException *e) {
        NSLog(@"[MioPlugin] ✗ CONSTRUCTOR EXCEPTION: %@ - %@\n%@", e.name, e.reason, e.callStackSymbols);
    }
}