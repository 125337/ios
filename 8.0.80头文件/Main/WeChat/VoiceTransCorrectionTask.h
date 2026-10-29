@interface VoiceTransCorrectionTask : NSObject
{
    unsigned long long _state; // +0x8
    NSObject * _roundToken; // +0x10
    NSString * _streamId; // +0x18
    iLinkStreamServiceMgr * _streamService; // +0x20
    MMTimer * _timeoutTimer; // +0x28
    id /* block */ _completionBlock; // +0x30
}
+ (id)errorWithCode:(long long)arg1 description:(id)arg2 details:(id)arg3;
- (BOOL)isRunning;
- (void)dealloc;
- (void)startWithVoiceId:(id)arg1 scene:(unsigned int)arg2 behaviors:(id)arg3 completion:(id /* block */)arg4;
- (BOOL)isRunningRound:(id)arg1;
- (void)receiveFragments:(id)arg1;
- (void)onTimeout:(id)arg1;
- (void)cancel;
- (void)finishWithCorrections:(id)arg1 error:(id)arg2;
- (void)releaseResources;
- (unsigned long long)state;
- (void)setState:(unsigned long long)arg1;
- (id)roundToken;
- (void)setRoundToken:(id)arg1;
- (id)streamId;
- (void)setStreamId:(id)arg1;
- (id)streamService;
- (void)setStreamService:(id)arg1;
- (id)timeoutTimer;
- (void)setTimeoutTimer:(id)arg1;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
