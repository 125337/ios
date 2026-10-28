@interface TingUserConfigServiceCpp : UnitRCObjcBaseProxyClass <TingUserConfigService>
+ (id)sharedInstance;
- (void)requireConfig;
- (id)getUserConfig;
- (void)setUserConfig:(id)arg1 needNetwork:(BOOL)arg2;
@end
