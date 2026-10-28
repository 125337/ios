@interface NSObject (AmoebaObjcRuntime)
- (const void *)amb_computeKeyFromString:(id)arg1;
- (void)amb_attachObject:(id)arg1 forKey:(id)arg2;
- (id)amb_getAttachedObjectForKey:(id)arg1;
- (void)amb_attachCopyObject:(id)arg1 forKey:(id)arg2;
- (id)amb_getAttachedCopyObjectForKey:(id)arg1;
- (void)amb_attachWeakObject:(id)arg1 forKey:(id)arg2;
- (id)amb_getAttachedWeakObjectForKey:(id)arg1;
- (void)amb_detachObjectForKey:(id)arg1;
- (void)amb_removeAssociatedObjects;
@end
