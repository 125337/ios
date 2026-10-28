@interface EcsCoreCgiPreloadMgr_UrCpp : UnitRCObjcBaseProxyClass <EcsCoreCgiPreloadMgr_Ur>
+ (id)sharedInstance;
- (void)tryStartPreload:(id)arg1;
- (id)getCachedPreloadData:(id)arg1;
- (id)getCachedPreloadDataV2:(id)arg1;
- (void)clearAllCache;
@end
