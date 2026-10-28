@interface EcsFinderLiveMgr : MMUserService <MMServiceProtocol>
{
    MemoryMappedKV * _ecsFinderLiveInfoSlotKV; // +0x8
}
- (void)onServiceInit;
- (BOOL)shouldUpdateNow:(id)arg1;
- (void)updateFinderLiveInfoTime:(id)arg1;
- (id)keyForLiveSaveExportIdTimeWithExportId:(id)arg1;
- (id)keyForLiveRefreshSvrIntervalWithExportId:(id)arg1;
- (BOOL)shouldUpdateExportIdListNow:(id)arg1;
- (void)getFinderLiveInfo:(id)arg1 forceUpdate:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)onCgiResponse:(id)arg1 forEvent:(unsigned int)arg2 completion:(id /* block */)arg3;
- (id)transSvrLiveInfo:(id)arg1;
- (id)ecsFinderLiveInfoSlotKV;
- (void)setEcsFinderLiveInfoSlotKV:(id)arg1;
- (void).cxx_destruct;
@end
