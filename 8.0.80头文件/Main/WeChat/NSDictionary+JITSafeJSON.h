@interface NSDictionary (JITSafeJSON)
- (id)jit_stringForKey:(id)arg1;
- (id)jit_arrayForKey:(id)arg1;
- (id)jit_dictionaryForKey:(id)arg1;
- (long long)jit_integerForKey:(id)arg1;
- (long long)jit_integerForKey:(id)arg1 defaultValue:(long long)arg2;
- (int)jit_intForKey:(id)arg1 defaultValue:(int)arg2;
- (long long)jit_int64ForKey:(id)arg1;
- (BOOL)jit_boolForKey:(id)arg1 defaultValue:(BOOL)arg2;
@end
