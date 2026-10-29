@interface EcsCoreEcsPreloadMgr_UrCpp : UnitRCObjcBaseProxyClass <EcsCoreEcsPreloadMgr_Ur>
+ (id)sharedInstance;
- (void)tryStartPreload:(id)arg1;
- (void)tryStartPreloadWithConfig:(id)arg1 config:(id)arg2;
- (id)getCachedPreloadData:(id)arg1;
- (void)clearCacheForKeys:(id)arg1;
- (void)getCachedPreloadDataAsync:(id)arg1 callback:(id /* block */)arg2;
- (void)getCachedPreloadDataAsyncWithTimeout:(id)arg1 timeoutMs:(unsigned int)arg2 callback:(id /* block */)arg3;
- (void)clearAllCache;
- (void)tryStartPreloadForUncoveredKeys:(id)arg1;
@end
