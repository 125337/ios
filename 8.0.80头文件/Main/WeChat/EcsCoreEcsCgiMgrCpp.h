@interface EcsCoreEcsCgiMgrCpp : UnitRCObjcBaseProxyClass <EcsCoreEcsCgiMgr>
+ (id)sharedInstance;
- (void)requestAsync:(id)arg1 callback:(id /* block */)arg2;
- (void)heartbeat;
- (void)forceHeartbeat;
@end
