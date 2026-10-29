@interface EcsGiftEntrancePreloadMgr : MMUserService <MMServiceProtocol>
{
    BOOL _isExptOn; // +0x8
    EcsPresentEntrance * _entranceData; // +0x10
}
- (id)init;
- (void)onServiceInit;
- (void)onServiceClearData;
- (BOOL)isUseNewLogic;
- (void)checkPreloadWhenExposure:(id)arg1 defaultJumpInfo:(id)arg2;
- (id)getCurrentJumpInfo:(id)arg1 talkerUsername:(id)arg2;
- (id)prepareGiftPreloadExtraData:(id)arg1 isGroupChat:(BOOL)arg2 groupChatUserCount:(unsigned long long)arg3 chatNameTicket:(id)arg4;
- (id)getEntranceInfo:(BOOL)arg1;
- (BOOL)needPreloadWithTiming:(int)arg1 isGroupChat:(BOOL)arg2;
- (BOOL)_needPreloadWithTiming:(int)arg1 isGroupChat:(BOOL)arg2;
- (BOOL)_fetchExptValue;
- (void)_doCheckPreloadWhenExposure:(id)arg1 defaultJumpInfo:(id)arg2;
- (void)_performPreload:(id)arg1 isGroupChat:(BOOL)arg2 groupChatUserCount:(unsigned long long)arg3 jumpInfo:(id)arg4 chatNameTicket:(id)arg5 timing:(int)arg6;
- (void)_fetchPresentJumpInfoAsync:(id)arg1 isGroupChat:(BOOL)arg2 talkerUsername:(id)arg3 sex:(int)arg4 completion:(id /* block */)arg5;
- (void)_fetchChatTicketAsync:(BOOL)arg1 talkerUsername:(id)arg2 completion:(id /* block */)arg3;
- (void)checkPreloadWhenClick:(id)arg1 ecsJumpInfo:(id)arg2 chatNameTicket:(id)arg3;
- (void)_doCheckPreloadWhenClick:(id)arg1 ecsJumpInfo:(id)arg2 chatNameTicket:(id)arg3;
- (id)entranceData;
- (void)setEntranceData:(id)arg1;
- (BOOL)isExptOn;
- (void)setIsExptOn:(BOOL)arg1;
- (void).cxx_destruct;
@end
