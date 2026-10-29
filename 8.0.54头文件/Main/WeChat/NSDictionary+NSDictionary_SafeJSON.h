@interface NSDictionary (NSDictionary_SafeJSON)
- (id)_stringForKey:(id)arg1;
- (id)_stringForKey:(id)arg1 defaultValue:(id)arg2;
- (id)_numberForKey:(id)arg1;
- (id)_arrayForKey:(id)arg1;
- (id)_dictionaryForKey:(id)arg1;
- (id)_mutableDictionaryForKey:(id)arg1;
- (long long)_integerForKey:(id)arg1;
- (long long)_integerForKey:(id)arg1 DefaultValue:(long long)arg2;
- (int)_intForKey:(id)arg1 defaultValue:(int)arg2;
- (int)_int32ForKey:(id)arg1 defaultValue:(int)arg2;
- (long long)_int64ForKey:(id)arg1;
- (long long)_int64ForKey:(id)arg1 defaultValue:(long long)arg2;
- (float)_floatForKey:(id)arg1;
- (float)_floatForKey:(id)arg1 defaultValue:(float)arg2;
- (double)_doubleForKey:(id)arg1;
- (double)_doubleForKey:(id)arg1 defaultValue:(double)arg2;
- (BOOL)_boolForKey:(id)arg1;
- (BOOL)_boolForKey:(id)arg1 defaultValue:(BOOL)arg2;
@end

