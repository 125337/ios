@interface EcsEcInitService : MMUserService <PBMessageObserverDelegate, MMServiceProtocol>
{
    NSDictionary * _cmdHandlerList; // +0x8
}
- (id)init;
- (void)onServiceInit;
- (void)onServiceEnterForeground;
- (void)onGetBizId1:(long long)arg1 data:(id)arg2;
- (void)processCgiWithScene:(unsigned int)arg1 params:(id)arg2;
- (BOOL)useEcsNewLogic;
- (BOOL)isFreqLimit:(int)arg1 withScene:(unsigned int)arg2;
- (void)updateInitCmdNextRequestTime:(int)arg1 nextRequestTime:(unsigned long long)arg2;
- (unsigned long long)getInitCmdNextRequestTime:(int)arg1;
- (id)getKeyOfInitCmd:(int)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleResp:(id)arg1;
- (id)cmdHandlerList;
- (void)setCmdHandlerList:(id)arg1;
- (void).cxx_destruct;
@end
