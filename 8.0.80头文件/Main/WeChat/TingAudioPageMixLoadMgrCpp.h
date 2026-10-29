@interface TingAudioPageMixLoadMgrCpp : UnitRCObjcBaseProxyClass <TingAudioPageMixLoadMgr>
+ (id)sharedInstance;
- (BOOL)addListener:(id)arg1 listener:(id)arg2;
- (BOOL)removeListener:(id)arg1 listener:(id)arg2;
- (void)loadData:(id)arg1 reqInfo:(id)arg2;
- (unsigned long long)getLastReqTimeSec;
- (id)getFirstScreenNetCache:(id)arg1;
- (void)setFirstScreenNetCache:(id)arg1 response:(id)arg2;
- (void)clearFilterSet;
- (void)filterAndSetListenIds:(id)arg1 topLines:(BOOL)arg2;
@end
