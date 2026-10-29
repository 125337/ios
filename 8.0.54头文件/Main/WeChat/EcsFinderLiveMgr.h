@interface EcsFinderLiveMgr : MMUserService <MMServiceProtocol>
{
    WCEliminatedSlotMMKV * _ecsFinderLiveInfoSlotKV; // +0x8
}
- (void)onServiceInit;
- (BOOL)shouldUpdateNow:(id)arg1;
- (void)updateFinderLiveInfoTime:(id)arg1;
- (void)getFinderLiveInfo:(id)arg1 completion:(id /* block */)arg2;
- (id)ecsFinderLiveInfoSlotKV;
- (void)setEcsFinderLiveInfoSlotKV:(id)arg1;
- (void).cxx_destruct;
@end

