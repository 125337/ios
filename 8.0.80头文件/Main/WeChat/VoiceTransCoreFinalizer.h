@interface VoiceTransCoreFinalizer : NSObject <MMTranscriptionCoreDelegate>
{
    BOOL _finished; // +0x8
    MMTranscriptionCore * _core; // +0x10
    NSString * _latestResult; // +0x18
    id /* block */ _onFinalResult; // +0x20
    id /* block */ _onDone; // +0x28
}
- (void)cancel;
- (void)finishWithFinalResult;
- (void)transcriptionCore:(id)arg1 didUpdateResult:(id)arg2;
- (void)transcriptionCore:(id)arg1 didFinishResult:(id)arg2 endFlag:(unsigned int)arg3;
- (void)transcriptionCore:(id)arg1 didFailWithError:(long long)arg2;
- (id)core;
- (void)setCore:(id)arg1;
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
