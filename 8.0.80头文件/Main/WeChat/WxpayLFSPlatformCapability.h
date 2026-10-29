@interface WxpayLFSPlatformCapability : WxpayHostPlatformCapability
{
    NSMutableDictionary * _speechSessions; // +0x8
}
- (id)init;
- (long long)transSceneForAppId:(id)arg1;
- (void)applySpeechOptions:(id)arg1 toSession:(id)arg2;
- (void)stopSpeechForAppUuid:(unsigned long long)arg1 notifyEnd:(BOOL)arg2;
- (void)stopSpeechSessionsForCallId:(unsigned long long)arg1;
- (void)stopAllSpeechSessions;
- (id)callMethod:(id)arg1 context:(id)arg2 payload:(id)arg3 arguments:(id)arg4 reply:(id /* block */)arg5;
- (id)speechSessions;
- (void)setSpeechSessions:(id)arg1;
- (void).cxx_destruct;
@end
