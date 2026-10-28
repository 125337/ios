@interface NSObject (AmoebaMethodSwizzling)
+ (BOOL)amb_swizzleMethod:(SEL)arg1 withMethod:(SEL)arg2;
+ (BOOL)amb_swizzleMethod:(SEL)arg1 withImp:(void * *)arg2 store:(void * * *)arg3;
+ (BOOL)amb_swizzleClassMethod:(SEL)arg1 withClassMethod:(SEL)arg2;
+ (BOOL)amb_swizzleClassMethod:(SEL)arg1 withImp:(void * *)arg2 store:(void * * *)arg3;
+ (BOOL)amb_addAndSwizzleMethod:(SEL)arg1 withMethod:(SEL)arg2 andImp:(void * *)arg3;
@end
