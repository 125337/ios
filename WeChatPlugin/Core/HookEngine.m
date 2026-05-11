#import "HookEngine.h"
#import <objc/runtime.h>

@implementation HookEngine

+ (IMP)swizzleMethod:(SEL)sel inClass:(Class)cls withIMP:(IMP)newIMP {
    if (!cls) return NULL;
    Method m = class_getInstanceMethod(cls, sel);
    if (!m) return NULL;

    IMP origIMP = method_getImplementation(m);
    const char *typeEncoding = method_getTypeEncoding(m);

    BOOL added = class_addMethod(cls, sel, newIMP, typeEncoding);
    if (added) {
        return origIMP;
    }

    method_setImplementation(m, newIMP);
    return origIMP;
}

+ (void)swizzleMethod:(SEL)sel inClass:(Class)cls withBlock:(id)block {
    if (!cls) return;
    Method m = class_getInstanceMethod(cls, sel);
    if (!m) return;

    IMP newIMP = imp_implementationWithBlock(block);
    const char *typeEncoding = method_getTypeEncoding(m);

    BOOL added = class_addMethod(cls, sel, newIMP, typeEncoding);
    if (added) return;

    method_setImplementation(m, newIMP);
}

+ (BOOL)addOrSwizzleMethod:(SEL)sel
                   inClass:(Class)cls
                   withIMP:(IMP)newIMP
              typeEncoding:(const char *)typeEncoding
               originalIMP:(IMP *)outOrigIMP {
    if (!cls || !sel || !newIMP || !typeEncoding) return NO;

    BOOL added = class_addMethod(cls, sel, newIMP, typeEncoding);
    if (added) {
        if (outOrigIMP) *outOrigIMP = NULL;
        return YES;
    }

    Method m = class_getInstanceMethod(cls, sel);
    if (!m) return NO;

    IMP oldIMP = method_getImplementation(m);
    method_setImplementation(m, newIMP);
    if (outOrigIMP) *outOrigIMP = oldIMP;
    return YES;
}

@end
