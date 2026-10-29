@interface NSMutableDictionary (JITSafeInsert)
- (void)jit_safeSetObject:(id)arg1 forKey:(id)arg2;
- (void)jit_safeRemoveObjectForKey:(id)arg1;
@end
