@interface NSDictionary (Swizzle)
+ (void)load;
+ (void)swizzleInitWithObjectsForKeys:(Class)arg1;
+ (void)swizzleObjectForKeyedSubscript:(Class)arg1;
+ (void)swizzleInitWithObjectsForKeysCount:(Class)arg1;
+ (void)swizzleSetObjectForKey:(Class)arg1;
+ (void)swizzleSetObjectForKeyedSubscript:(Class)arg1;
+ (void)swizzleRemoveObjectForKey:(Class)arg1;
@end

