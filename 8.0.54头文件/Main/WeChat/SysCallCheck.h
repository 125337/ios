@interface SysCallCheck : MMRootService <CXCallObserverDelegate, MMServiceProtocol, JSEventExt>
{
    BOOL mIsNeedRestartAudioTalk; // +0x8
    BOOL mIsInterrupting; // +0x9
    BOOL _mIsNeedResumeWXMusic; // +0xa
    BOOL _mIsNeedResumeFinderMinimize; // +0xb
    CXCallObserver * _callObserver; // +0x10
}
- (void)appBecomeActive;
- (void)startCheck;
- (void)stopCheck;
- (BOOL)isPhoneCalling;
- (BOOL)isInterrupting;
- (void)clearInterruptStatus;
- (void)onServiceClearData;
- (void)jsAudioStateChanged:(id)arg1;
- (void)jsVideoStateChanged:(id)arg1;
- (void)onMediaPlayStateChange:(id)arg1;
- (void)playBegin;
- (void)playEnd;
- (void)pauseTalk;
- (void)restartTalk;
- (void)delayRestartTalk;
- (void)onSilenceSecondaryAudioHint:(id)arg1;
- (void)audioSessionInterruption:(id)arg1;
- (void)beginInterruption;
- (void)endInterruption;
- (void)mediaServiceFail:(id)arg1;
- (void)mediaServiceReset:(id)arg1;
- (void)callObserver:(id)arg1 callChanged:(id)arg2;
- (void)callBegin;
- (void)callEnd;
- (void)switchAudioRoute;
- (int)callStateFromCall:(id)arg1;
- (BOOL)mIsNeedRestartAudioTalk;
- (void)setMIsNeedRestartAudioTalk:(BOOL)arg1;
- (BOOL)mIsInterrupting;
- (void)setMIsInterrupting:(BOOL)arg1;
- (id)callObserver;
- (void)setCallObserver:(id)arg1;
- (BOOL)mIsNeedResumeWXMusic;
- (void)setMIsNeedResumeWXMusic:(BOOL)arg1;
- (BOOL)mIsNeedResumeFinderMinimize;
- (void)setMIsNeedResumeFinderMinimize:(BOOL)arg1;
- (void).cxx_destruct;
@end

