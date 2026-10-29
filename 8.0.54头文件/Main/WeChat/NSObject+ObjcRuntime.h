@interface NSObject (ObjcRuntime)
- (const void *)computeKeyFromString:(id)arg1;
- (void)attachObject:(id)arg1 forKey:(id)arg2;
- (id)getAttachedObjectForKey:(id)arg1;
- (void)attachCopyObject:(id)arg1 forKey:(id)arg2;
- (id)getAttachedCopyObjectForKey:(id)arg1;
- (void)attachWeakObject:(id)arg1 forKey:(id)arg2;
- (id)getAttachedWeakObjectForKey:(id)arg1;
- (void)detachObjectForKey:(id)arg1;
- (void)removeAssociatedObjects;
@end

