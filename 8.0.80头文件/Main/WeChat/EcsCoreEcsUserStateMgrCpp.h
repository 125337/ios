@interface EcsCoreEcsUserStateMgrCpp : UnitRCObjcBaseProxyClass <EcsCoreEcsUserStateMgr>
+ (id)initState;
+ (id)sharedInstance;
- (id)genCliUniqueId;
- (void)updateJsApiKvLimitedSize:(unsigned long long)arg1;
- (unsigned long long)getJsApiKvLimitedSize;
- (void)updateSamplingPolicy:(id)arg1;
- (id)getSamplingPolicy:(id)arg1;
- (void)updateEcsConfig:(id)arg1;
- (id)getEcsConfig;
- (unsigned long long)getCommonCgiPingDedupDurationMs;
- (BOOL)getIsDebug;
- (id)getSelfUserName;
- (BOOL)getIFlavorBiz;
- (BOOL)isMainProcess;
@end
