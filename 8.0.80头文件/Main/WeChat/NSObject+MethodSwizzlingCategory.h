@interface NSObject (MethodSwizzlingCategory)
+ (BOOL)swizzleMethod:(SEL)arg1 withMethod:(SEL)arg2;
+ (BOOL)swizzleMethod:(SEL)arg1 withImp:(void * *)arg2 store:(void * * *)arg3;
+ (BOOL)swizzleClassMethod:(SEL)arg1 withClassMethod:(SEL)arg2;
+ (BOOL)swizzleClassMethod:(SEL)arg1 withImp:(void * *)arg2 store:(void * * *)arg3;
+ (BOOL)addAndSwizzleMethod:(SEL)arg1 withMethod:(SEL)arg2 andImp:(void * *)arg3;
@end
