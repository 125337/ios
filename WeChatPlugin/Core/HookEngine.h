#import <Foundation/Foundation.h>
#import <objc/runtime.h>

@interface HookEngine : NSObject
+ (IMP)swizzleMethod:(SEL)sel inClass:(Class)cls withIMP:(IMP)newIMP;
+ (void)swizzleMethod:(SEL)sel inClass:(Class)cls withBlock:(id)block;
@end
