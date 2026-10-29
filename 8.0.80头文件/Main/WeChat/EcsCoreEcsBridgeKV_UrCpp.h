@interface EcsCoreEcsBridgeKV_UrCpp : UnitRCObjcBaseProxyClass <EcsCoreEcsBridgeKV_Ur>
+ (id)sharedInstance;
- (id)get:(id)arg1;
- (int)setPersistent:(id)arg1;
- (int)setWithTimeout:(id)arg1 timeout:(int)arg2;
- (int)setWithDefaultTimeout:(id)arg1;
- (void)clear:(id)arg1;
- (id)allKeys;
- (void)clearAll;
- (void)clearExcept:(id)arg1;
@end
