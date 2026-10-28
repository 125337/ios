@interface FBSDKSwizzler : NSObject
+ (void)initialize;
+ (void)resolveConflict;
+ (void)printSwizzles;
+ (id)swizzleForMethod:(objc_method *)arg1;
+ (void)removeSwizzleForMethod:(objc_method *)arg1;
+ (void)setSwizzle:(id)arg1 forMethod:(objc_method *)arg2;
+ (BOOL)isLocallyDefinedMethod:(objc_method *)arg1 onClass:(Class)arg2;
+ (void)swizzleSelector:(SEL)arg1 onClass:(Class)arg2 withBlock:(id /* block */)arg3 named:(id)arg4;
+ (void)unswizzleSelector:(SEL)arg1 onClass:(Class)arg2;
+ (void)unswizzleSelector:(SEL)arg1 onClass:(Class)arg2 named:(id)arg3;
@end
