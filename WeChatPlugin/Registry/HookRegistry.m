#import "HookRegistry.h"
#import "FeatureModuleRegistry.h"
#import <objc/message.h>

@implementation HookRegistry

+ (void)installAllHooks {
    NSLog(@"[WeChatPlugin][HookRegistry] installAllHooks start");
    NSMutableSet<Class> *installedClasses = [NSMutableSet set];
    NSArray *modules = [FeatureModuleRegistry allModules];
    NSLog(@"[WeChatPlugin][HookRegistry] found %lu modules", (unsigned long)modules.count);
    
    for (FeatureModuleDescriptor *module in modules) {
        NSLog(@"[WeChatPlugin][HookRegistry] processing module: %@ (%lu hooks)", 
              module.identifier, (unsigned long)module.hookInstallerClasses.count);
        for (Class hookClass in module.hookInstallerClasses) {
            if (!hookClass) {
                NSLog(@"[WeChatPlugin][HookRegistry] skip nil hookClass");
                continue;
            }
            if ([installedClasses containsObject:hookClass]) {
                NSLog(@"[WeChatPlugin][HookRegistry] skip already installed: %@", hookClass);
                continue;
            }
            if ([hookClass respondsToSelector:@selector(install)]) {
                @try {
                    NSLog(@"[WeChatPlugin][HookRegistry] installing: %@", hookClass);
                    ((void (*)(id, SEL))objc_msgSend)(hookClass, @selector(install));
                    [installedClasses addObject:hookClass];
                    NSLog(@"[WeChatPlugin][HookRegistry] ✓ installed: %@", hookClass);
                } @catch (NSException *e) {
                    NSLog(@"[WeChatPlugin][HookRegistry] ✗ install failed for %@: %@", hookClass, e);
                }
            } else {
                NSLog(@"[WeChatPlugin][HookRegistry] %@ does not respond to install", hookClass);
            }
        }
    }
    NSLog(@"[WeChatPlugin][HookRegistry] installAllHooks complete, %lu classes installed", 
          (unsigned long)installedClasses.count);
}

@end
