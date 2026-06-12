#import "HookRegistry.h"
#import "MioModuleRegistry.h"
#import "MioModuleDescriptor.h"
#import <objc/message.h>

@implementation HookRegistry

+ (void)installAllHooks {
    NSLog(@"[MioPlugin][HookRegistry] installAllHooks start");
    NSMutableSet<Class> *installedClasses = [NSMutableSet set];
    NSArray *modules = [MioModuleRegistry allDescriptors];
    NSLog(@"[MioPlugin][HookRegistry] found %lu modules", (unsigned long)modules.count);
    
    for (MioModuleDescriptor *module in modules) {
        NSLog(@"[MioPlugin][HookRegistry] processing module: %@ (%lu hooks)", 
              module.identifier, (unsigned long)module.hookClasses.count);
        for (Class hookClass in module.hookClasses) {
            if (!hookClass) {
                NSLog(@"[MioPlugin][HookRegistry] skip nil hookClass");
                continue;
            }
            if ([installedClasses containsObject:hookClass]) {
                NSLog(@"[MioPlugin][HookRegistry] skip already installed: %@", hookClass);
                continue;
            }
            if ([hookClass respondsToSelector:@selector(install)]) {
                @try {
                    NSLog(@"[MioPlugin][HookRegistry] installing: %@", hookClass);
                    ((void (*)(id, SEL))objc_msgSend)(hookClass, @selector(install));
                    [installedClasses addObject:hookClass];
                    NSLog(@"[MioPlugin][HookRegistry] ✓ installed: %@", hookClass);
                } @catch (NSException *e) {
                    NSLog(@"[MioPlugin][HookRegistry] ✗ install failed for %@: %@", hookClass, e);
                }
            } else {
                NSLog(@"[MioPlugin][HookRegistry] %@ does not respond to install", hookClass);
            }
        }
    }
    NSLog(@"[MioPlugin][HookRegistry] installAllHooks complete, %lu classes installed", 
          (unsigned long)installedClasses.count);
}

@end