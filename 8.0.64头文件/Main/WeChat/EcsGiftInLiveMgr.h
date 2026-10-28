@interface EcsGiftInLiveMgr : MMUserService <MMServiceProtocol>
{
    atomic<long long> _seq; // +0x8
    NSMutableDictionary * _callbacks; // +0x10
    EcsGiftInLiveMonitor * _monitor; // +0x18
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)resendGiftFromViewController:(id)arg1 liveId:(unsigned long long)arg2 finderUsername:(id)arg3 giftItem:(id)arg4 completion:(id /* block */)arg5;
- (long long)incrementSeqAndGet;
- (void)setCallback:(id /* block */)arg1 forKey:(id)arg2;
- (id /* block */)getCallbackForKey:(id)arg1;
- (void)clearCallbacks;
- (void)onGiftResendCompletedResult:(id)arg1;
- (id)callbacks;
- (void)setCallbacks:(id)arg1;
- (id)monitor;
- (void)setMonitor:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
