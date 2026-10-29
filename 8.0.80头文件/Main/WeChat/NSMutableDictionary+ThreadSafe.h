@interface NSMutableDictionary (ThreadSafe)
- (void)threadSafeSetObject:(id)arg1 forKey:(id)arg2;
- (void)threadSafeSyncSetObject:(id)arg1 forKey:(id)arg2;
- (void)threadSafeRemoveObjectForKey:(id)arg1;
- (id)threadSafeObjectForKey:(id)arg1;
- (id)syncQueue;
@end
