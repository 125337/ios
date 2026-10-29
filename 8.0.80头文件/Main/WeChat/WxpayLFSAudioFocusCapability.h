@interface WxpayLFSAudioFocusCapability : WxpayHostPlatformCapability
{
    NSMutableDictionary * _leases; // +0x8
}
- (id)initProvider;
- (id)callMethod:(id)arg1 context:(id)arg2 payload:(id)arg3 arguments:(id)arg4 reply:(id /* block */)arg5;
- (BOOL)activePlaybackAudioSession;
- (void)deactivePlaybackAudioSession;
- (void)acquireOnMainWithSessionId:(id)arg1 appId:(id)arg2 reply:(id /* block */)arg3;
- (void)releaseOnMainWithSessionId:(id)arg1;
- (id)leases;
- (void)setLeases:(id)arg1;
- (void).cxx_destruct;
@end
