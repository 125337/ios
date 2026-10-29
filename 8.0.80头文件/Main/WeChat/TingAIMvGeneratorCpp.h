@interface TingAIMvGeneratorCpp : UnitRCObjcBaseProxyClass <TingAIMvGenerator>
- (int)getMvStatus;
- (id)getMvInfo;
- (id)getListenId;
- (void)submitMvGeneration:(id)arg1 mvPicUrl:(id)arg2;
- (void)startPollingMvStatus:(id)arg1;
- (void)stopPolling;
- (BOOL)addMvListener:(id)arg1;
- (BOOL)removeMvListener:(id)arg1;
@end
