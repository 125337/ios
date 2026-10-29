@interface EcsOrderAndCardCgiMgr_UrCpp : UnitRCObjcBaseProxyClass <EcsOrderAndCardCgiMgr_Ur>
+ (id)sharedInstance;
- (void)onAccountInit:(BOOL)arg1;
- (id)getMmecShopAppid;
- (id)getPreloadSectionList;
- (void)preload:(int)arg1 reddotId:(id)arg2 reddotByPass:(id)arg3;
- (id)readCache:(id)arg1;
- (void)request:(id)arg1 callback:(id /* block */)arg2;
- (void)remove:(id)arg1 callback:(id /* block */)arg2;
@end
