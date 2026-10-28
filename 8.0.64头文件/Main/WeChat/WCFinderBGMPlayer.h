@interface WCFinderBGMPlayer : NSObject <WCAudioModuleDelegate, EditVideoBGMPlayerDelegate>
{
    BOOL _isRegisterAudioModule; // +0x8
    BOOL _loop; // +0x9
    BOOL _isPlaying; // +0xa
    BOOL _allowsExternalPlayback; // +0xb
    BOOL _playOnSystemMutedState; // +0xc
    BOOL _interruptedWhenAppResignActive; // +0xd
    BOOL _autoStartWhenAudioModuleActiveFailed; // +0xe
    BOOL _hasPerformPlay; // +0xf
    BOOL _isRealPlaying; // +0x10
    BOOL _registerBackgroundNotify; // +0x11
    BOOL _interreptByEnterBackground; // +0x12
    BOOL _needResumeWhenAudioModuleIdle; // +0x13
    BOOL _needObserve; // +0x14
    BOOL _lastStartActiveFail; // +0x15
    id <WCFinderBGMPlayerDelegate> _delegate; // +0x18
    RecommendedMusicInfo * _musicInfo; // +0x20
    EditVideoBGMPlayer * _player; // +0x28
    id _progressObserver; // +0x30
    double _progress; // +0x38
}
- (id)init;
- (void)dealloc;
- (id)audioIdentifier;
- (void)mute:(BOOL)arg1;
- (BOOL)start;
- (void)stop;
- (void)setMusicInfo:(id)arg1;
- (void)setDelegate:(id)arg1;
- (BOOL)resume;
- (BOOL)_resume;
- (void)pause;
- (void)_pause;
- (void)seek:(double)arg1;
- (double)currentTime;
- (void)_observePlayerProgress;
- (void)onProgressChanged:(double)arg1;
- (BOOL)tryActive;
- (void)deactive;
- (BOOL)isPlaying;
- (void)setIsRegisterAudioModule:(BOOL)arg1;
- (void)releaseAudioModuleRegisterDuty;
- (void)setInterruptedWhenAppResignActive:(BOOL)arg1;
- (void)addObserverForForegroundNotification;
- (void)removeObserverForForegroundNotification;
- (void)onEnterBackground;
- (void)onEnterForeground;
- (void)onEditVideoBGMPlayerPlaytoEnd;
- (void)onEditVideoBGMPlayerReadyToPlay;
- (void)onEditVideoBGMPlayerTimeControlStatusChange:(long long)arg1;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (void)audioModuleInterruptionEnd:(id)arg1 param:(id)arg2;
- (BOOL)isRegisterAudioModule;
- (BOOL)loop;
- (void)setLoop:(BOOL)arg1;
- (id)delegate;
- (void)setIsPlaying:(BOOL)arg1;
- (id)musicInfo;
- (BOOL)allowsExternalPlayback;
- (void)setAllowsExternalPlayback:(BOOL)arg1;
- (BOOL)playOnSystemMutedState;
- (void)setPlayOnSystemMutedState:(BOOL)arg1;
- (BOOL)interruptedWhenAppResignActive;
- (BOOL)autoStartWhenAudioModuleActiveFailed;
- (void)setAutoStartWhenAudioModuleActiveFailed:(BOOL)arg1;
- (id)player;
- (void)setPlayer:(id)arg1;
- (BOOL)hasPerformPlay;
- (void)setHasPerformPlay:(BOOL)arg1;
- (BOOL)isRealPlaying;
- (void)setIsRealPlaying:(BOOL)arg1;
- (BOOL)registerBackgroundNotify;
- (void)setRegisterBackgroundNotify:(BOOL)arg1;
- (BOOL)interreptByEnterBackground;
- (void)setInterreptByEnterBackground:(BOOL)arg1;
- (BOOL)needResumeWhenAudioModuleIdle;
- (void)setNeedResumeWhenAudioModuleIdle:(BOOL)arg1;
- (BOOL)needObserve;
- (void)setNeedObserve:(BOOL)arg1;
- (id)progressObserver;
- (void)setProgressObserver:(id)arg1;
- (double)progress;
- (void)setProgress:(double)arg1;
- (BOOL)lastStartActiveFail;
- (void)setLastStartActiveFail:(BOOL)arg1;
- (void).cxx_destruct;
@end
