@interface NSMutableDictionary (CollectionMerge)
+ (id)wc_dictionaryWithObject:(id)arg1 forKey:(id)arg2;
- (void)wc_removeObjectForKey:(id)arg1;
- (void)wc_setObject:(id)arg1 forKey:(id)arg2;
- (void)safeSetObject:(id)arg1 forKey:(id)arg2;
- (void)safeRemoveObjectForKey:(id)arg1;
- (void)safeSetObject:(id)arg1 forKey:(id)arg2;
- (void)safeRemoveObjectForKey:(id)arg1;
- (void)amb_safeSetObject:(id)arg1 forKey:(id)arg2;
- (void)amb_safeRemoveObjectForKey:(id)arg1;
- (void)threadSafeSetObject:(id)arg1 forKey:(id)arg2;
- (void)threadSafeSyncSetObject:(id)arg1 forKey:(id)arg2;
- (void)threadSafeRemoveObjectForKey:(id)arg1;
- (id)threadSafeObjectForKey:(id)arg1;
- (id)syncQueue;
- (void)collectionMergeWithDictionary:(id)arg1;
@end
