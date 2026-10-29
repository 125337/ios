@interface NSCache (Swizzle)
+ (void)load;
- (void)mmSetObject:(id)arg1 forKey:(id)arg2 cost:(unsigned long long)arg3;
- (void)mmRemoveObjectForKey:(id)arg1;
@end

