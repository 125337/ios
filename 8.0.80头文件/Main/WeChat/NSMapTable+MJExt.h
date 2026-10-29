@interface NSMapTable (MJExt)
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)sc_setObjects:(id)arg1 forKeys:(id)arg2;
- (void)sc_removeObjectsForKeys:(id)arg1;
- (id)sc_allKeys;
- (id)sc_allValues;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)mj_removeObjectsForKeys:(id)arg1;
- (id)mj_allKeys;
- (id)mj_allValues;
- (id)mj_anyKey;
- (id)mj_anyObject;
@end
