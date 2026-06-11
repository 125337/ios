#import <Foundation/Foundation.h>
#import <objc/runtime.h>

@interface HookEngine : NSObject
+ (IMP)swizzleMethod:(SEL)sel inClass:(Class)cls withIMP:(IMP)newIMP;
+ (void)swizzleMethod:(SEL)sel inClass:(Class)cls withBlock:(id)block;
+ (BOOL)addOrSwizzleMethod:(SEL)sel
                   inClass:(Class)cls
                   withIMP:(IMP)newIMP
              typeEncoding:(const char *)typeEncoding
               originalIMP:(IMP *)outOrigIMP;
@end
