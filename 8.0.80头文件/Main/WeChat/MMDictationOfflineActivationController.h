@interface MMDictationOfflineActivationController : NSObject
{
    BOOL _inSpeech; // +0x8
    BOOL _wantsDormantAtSentenceEnd; // +0x9
    BOOL _onlineFailed; // +0xa
    id /* block */ _forwardBlock; // +0x10
    long long _mode; // +0x18
    NSMutableArray * _pending; // +0x20
    unsigned long long _currentFrameSeq; // +0x28
    unsigned long long _currentSpeechStartFrame; // +0x30
    unsigned long long _lastSpeechFrame; // +0x38
    unsigned long long _onlineEndFrameSeq; // +0x40
    unsigned long long _offlineEndFrameSeq; // +0x48
    unsigned long long _lastForwardedFrameSeq; // +0x50
    unsigned long long _activeStartedFrame; // +0x58
}
- (id)init;
- (void)resetForNewSession;
- (void)consumePCM:(id)arg1 endFrameSeq:(unsigned long long)arg2 segmentId:(id)arg3;
- (void)notifyFrameSeq:(unsigned long long)arg1;
- (void)notifyVADStartAtFrameSeq:(unsigned long long)arg1;
- (void)notifyVADEndAtFrameSeq:(unsigned long long)arg1;
- (void)notifyOnlineEndFrameSeq:(unsigned long long)arg1;
- (void)notifyOfflineEndFrameSeq:(unsigned long long)arg1;
- (void)notifySentenceFinishedAtFrameSeq:(unsigned long long)arg1;
- (void)markOnlineFailed;
- (void)disable;
- (void)_evaluate;
- (void)_activate;
- (void)_forward:(id)arg1;
- (void)_trim;
- (id /* block */)forwardBlock;
- (void)setForwardBlock:(id /* block */)arg1;
- (long long)mode;
- (void)setMode:(long long)arg1;
- (id)pending;
- (void)setPending:(id)arg1;
- (unsigned long long)currentFrameSeq;
- (void)setCurrentFrameSeq:(unsigned long long)arg1;
- (unsigned long long)currentSpeechStartFrame;
- (void)setCurrentSpeechStartFrame:(unsigned long long)arg1;
- (unsigned long long)lastSpeechFrame;
- (void)setLastSpeechFrame:(unsigned long long)arg1;
- (unsigned long long)onlineEndFrameSeq;
- (void)setOnlineEndFrameSeq:(unsigned long long)arg1;
- (unsigned long long)offlineEndFrameSeq;
- (void)setOfflineEndFrameSeq:(unsigned long long)arg1;
- (unsigned long long)lastForwardedFrameSeq;
- (void)setLastForwardedFrameSeq:(unsigned long long)arg1;
- (unsigned long long)activeStartedFrame;
- (void)setActiveStartedFrame:(unsigned long long)arg1;
- (BOOL)inSpeech;
- (void)setInSpeech:(BOOL)arg1;
- (BOOL)wantsDormantAtSentenceEnd;
- (void)setWantsDormantAtSentenceEnd:(BOOL)arg1;
- (BOOL)onlineFailed;
- (void)setOnlineFailed:(BOOL)arg1;
- (void).cxx_destruct;
@end
