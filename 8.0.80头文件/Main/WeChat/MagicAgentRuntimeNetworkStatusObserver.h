@interface MagicAgentRuntimeNetworkStatusObserver : NSObject <INetworkStatusMgrExt, CNetworkStatusExt>
{
    BOOL _registered; // +0x8
    _TtC6WeChat20MagicAgentRuntimeBiz * _biz; // +0x10
}
- (id)initWithBiz:(id)arg1;
- (void)dealloc;
- (void)start;
- (void)stop;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)onNetworkWeakChanged:(BOOL)arg1 currentRTT:(unsigned int)arg2;
- (id)biz;
- (void)setBiz:(id)arg1;
- (BOOL)registered;
- (void)setRegistered:(BOOL)arg1;
- (void).cxx_destruct;
@end
