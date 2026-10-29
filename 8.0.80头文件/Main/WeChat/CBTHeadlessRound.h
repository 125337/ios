@interface CBTHeadlessRound : NSObject
{
    BOOL _finished; // +0x8
    BOOL _micReady; // +0x9
    unsigned long long _roundId; // +0x10
    NSString * _voipSessionID; // +0x18
    id <CBTHeadlessRoundKitDelegate> _delegate; // +0x20
    NSString * _requestBusinessId; // +0x28
    id /* block */ _presentFromVCProvider; // +0x30
    NSTimer * _fallbackTimer; // +0x38
    CBTHeadlessRoundKitTrampoline * _trampoline; // +0x40
}
- (void)commit;
- (void)cancel:(int)arg1;
- (void)handleStateChanged:(unsigned long long)arg1 state:(int)arg2 errCode:(int)arg3 errMsg:(id)arg4;
- (int)parsedDecisionFromStateMsg:(id)arg1;
- (id)errorPartFromStateMsg:(id)arg1;
- (BOOL)isASRFailureMessage:(id)arg1;
- (void)finishWithKind:(long long)arg1 decision:(int)arg2 errCode:(int)arg3 errMsg:(id)arg4;
- (void)onFallbackTimeout;
- (unsigned long long)roundId;
- (void)setRoundId:(unsigned long long)arg1;
- (id)voipSessionID;
- (void)setVoipSessionID:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)requestBusinessId;
- (void)setRequestBusinessId:(id)arg1;
- (id /* block */)presentFromVCProvider;
- (void)setPresentFromVCProvider:(id /* block */)arg1;
- (BOOL)finished;
- (void)setFinished:(BOOL)arg1;
- (BOOL)micReady;
- (void)setMicReady:(BOOL)arg1;
- (id)fallbackTimer;
- (void)setFallbackTimer:(id)arg1;
- (id)trampoline;
- (void)setTrampoline:(id)arg1;
- (void).cxx_destruct;
@end
