@interface DataReportAbilityProviderMMKVImpl : NSObject <AmoebaAbilityProviderMMKV>
- (BOOL)setString:(id)arg1 forKey:(id)arg2 withMapId:(id)arg3;
- (id)getStringForKey:(id)arg1 defaultValue:(id)arg2 withMapId:(id)arg3;
- (BOOL)setBool:(BOOL)arg1 forKey:(id)arg2 withMapId:(id)arg3;
- (BOOL)getBoolForKey:(id)arg1 defaultValue:(BOOL)arg2 withMapId:(id)arg3;
- (BOOL)setInt64:(long long)arg1 forKey:(id)arg2 withMapId:(id)arg3;
- (long long)getInt64ForKey:(id)arg1 defaultValue:(long long)arg2 withMapId:(id)arg3;
- (void)removeValueForKey:(id)arg1 withMapId:(id)arg2;
@end
