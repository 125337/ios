@interface WxpayLFSAudioFocusLease : NSObject <WCAudioModuleDelegate>
{
    BOOL _active; // +0x8
    BOOL _closed; // +0x9
    NSString * _sessionId; // +0x10
    NSString * _appId; // +0x18
    id /* block */ _reply; // +0x20
    id /* block */ _onInterrupted; // +0x28
}
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (void)audioModuleInterruptionEnd:(id)arg1 param:(id)arg2;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id /* block */)reply;
- (void)setReply:(id /* block */)arg1;
- (BOOL)active;
- (void)setActive:(BOOL)arg1;
- (BOOL)closed;
- (void)setClosed:(BOOL)arg1;
- (id /* block */)onInterrupted;
- (void)setOnInterrupted:(id /* block */)arg1;
- (void).cxx_destruct;
@end
