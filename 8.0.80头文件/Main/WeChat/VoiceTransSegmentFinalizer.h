@interface VoiceTransSegmentFinalizer : NSObject <MMNewVoiceInputCacheLogicDelegate>
{
    BOOL _finished; // +0x8
    MMNewVoiceInputCacheLogic * _logic; // +0x10
    NSString * _latestResult; // +0x18
    id /* block */ _onFinalResult; // +0x20
    id /* block */ _onDone; // +0x28
}
- (void)cancel;
- (void)finishWithFinalResult;
- (void)onGetResultText:(id)arg1 InputId:(unsigned int)arg2;
- (void)onEndVoiceTransByServer:(unsigned int)arg1 endFlag:(unsigned int)arg2;
- (void)onEndVoiceTrans:(unsigned int)arg1 VoiceIds:(id)arg2;
- (void)onVoiceTransError:(unsigned int)arg1 errorCode:(long long)arg2;
- (id)logic;
- (void)setLogic:(id)arg1;
- (id)latestResult;
- (void)setLatestResult:(id)arg1;
- (BOOL)finished;
- (void)setFinished:(BOOL)arg1;
- (id /* block */)onFinalResult;
- (void)setOnFinalResult:(id /* block */)arg1;
- (id /* block */)onDone;
- (void)setOnDone:(id /* block */)arg1;
- (void).cxx_destruct;
@end
