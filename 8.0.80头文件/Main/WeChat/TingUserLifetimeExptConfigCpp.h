@interface TingUserLifetimeExptConfigCpp : UnitRCObjcBaseProxyClass <TingUserLifetimeExptConfig>
- (BOOL)getConfigForKey:(id)arg1 defaultValue:(BOOL)arg2;
- (void)setConfigForKey:(id)arg1 value:(BOOL)arg2;
- (unsigned int)getIntConfigForKey:(id)arg1 defaultValue:(unsigned int)arg2;
- (void)setIntConfigForKey:(id)arg1 value:(unsigned int)arg2;
- (id)getStringConfigForKey:(id)arg1 defaultValue:(id)arg2;
- (void)setStringConfigForKey:(id)arg1 value:(id)arg2;
- (void)checkHasAccessSensitiveExpt:(id)arg1 timeIntervalMs:(long long)arg2;
@end
