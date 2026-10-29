@interface NSDictionary (NSDictionary_SafeJSON)
- (id)stringForKey:(id)arg1;
- (id)stringForKey:(id)arg1 defaultValue:(id)arg2;
- (id)numberForKey:(id)arg1;
- (id)numberForKey:(id)arg1 defaultValue:(id)arg2;
- (id)arrayForKey:(id)arg1;
- (id)mutableArrayForKey:(id)arg1;
- (id)dictionaryForKey:(id)arg1;
- (id)mutableDictionaryForKey:(id)arg1;
- (long long)integerForKey:(id)arg1;
- (long long)integerForKey:(id)arg1 DefaultValue:(long long)arg2;
- (unsigned long long)unsignedIntegerForKey:(id)arg1;
- (unsigned long long)unsignedIntegerForKey:(id)arg1 defaultValue:(long long)arg2;
- (int)intForKey:(id)arg1 defaultValue:(int)arg2;
- (int)int32ForKey:(id)arg1 defaultValue:(int)arg2;
- (long long)int64ForKey:(id)arg1;
- (long long)int64ForKey:(id)arg1 defaultValue:(long long)arg2;
- (float)floatForKey:(id)arg1;
- (float)floatForKey:(id)arg1 defaultValue:(float)arg2;
- (double)doubleForKey:(id)arg1;
- (double)doubleForKey:(id)arg1 defaultValue:(double)arg2;
- (BOOL)boolForKey:(id)arg1;
- (BOOL)boolForKey:(id)arg1 defaultValue:(BOOL)arg2;
- (BOOL)containsKey:(id)arg1 value:(id)arg2;
@end

