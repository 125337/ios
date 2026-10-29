@interface WCFinderMinimizePlayCtrl : NSObject <WCFinderMinimizeContentViewDelegate, WCAudioModuleDelegate>
{
    BOOL _isPlayerDidPlay; // +0x8
    BOOL _isInterruptWhenStartup; // +0x9
    BOOL _lastRequestToPlay; // +0xa
    BOOL _isMakeAudioModule; // +0xb
    id <WCFinderMinimizePlayCtrlPlayDelegate> _controlDelegate; // +0x10
    id <WCFinderMinimizePlayCtrlPlayNotifyExtDelegate> _extDelegate; // +0x18
    WCFinderMinimizePlayInfo * _playInfo; // +0x20
    long long _state; // +0x28
    UIImage * _coverImage; // +0x30
    long long _statusMask; // +0x38
}
+ (void)cleanControlCenter;
+ (void)setupRemoteButton:(id)arg1 enable:(BOOL)arg2 target:(id)arg3 action:(SEL)arg4;
- (void)dealloc;
- (BOOL)isValid;
- (BOOL)isMinimizing;
- (BOOL)isFloatingViewHidden;
- (BOOL)isMinimizePlaying;
- (BOOL)needCleanPauseStateWhenEnterStream;
- (double)queryCurrentPlayPosition;
- (BOOL)playCtrlBtnIsPlaying;
- (void)setIsFloatingViewHidden:(BOOL)arg1;
- (void)configPIPActive:(BOOL)arg1;
- (BOOL)isAudioModuleDeactiveWhenInterruptionBegin;
- (void)play;
- (void)playNotifyOutterMute:(BOOL)arg1 showForbidenToast:(BOOL)arg2;
- (void)pause;
- (void)pauseByInterrupt:(BOOL)arg1 playToEnd:(BOOL)arg2 releaseAudio:(BOOL)arg3;
- (void)onEnterOtherMediaPage;
- (void)onExitOtherMediaPage;
- (BOOL)isEnterOtherMediaPage;
- (void)onOutterInterrupt;
- (void)onOutterResume;
- (void)pauseWithFlag:(long long)arg1;
- (BOOL)resumePlayCheckFlag:(long long)arg1;
- (void)showToast;
- (void)updatePlayerStatus:(BOOL)arg1;
- (void)setState:(long long)arg1;
- (void)setPlayInfo:(id)arg1;
- (void)pauseForSystemCall;
- (void)resumeForSystemCall;
- (void)setupControlCenter;
- (void)updateControlCenterInfo;
- (long long)onPlayAction:(id)arg1;
- (long long)onPauseAction:(id)arg1;
- (void)updatePlayInfo:(id)arg1;
- (void)keepHandlePlayer;
- (void)afterDoMinimize;
- (void)onMinimizePlayViewDidPlay;
- (void)onMinimizePlayViewDidPause;
- (void)onMinimizePlayViewDidPlayToEnd;
- (BOOL)minimizePlayViewNeedSeekBegin;
- (void)onMinimizePlayViewImageDidUpdate:(id)arg1;
- (void)onMinimizePlayViewDidChangeSize;
- (id)description;
- (BOOL)tryActiveAudioModule;
- (void)resignAudioModule;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (void)audioModuleInterruptionEnd:(id)arg1 param:(id)arg2;
- (BOOL)_setActive:(BOOL)arg1 listener:(id)arg2;
- (BOOL)audioModuleBindingWCPlayerPipSupport;
- (id)controlDelegate;
- (void)setControlDelegate:(id)arg1;
- (id)extDelegate;
- (void)setExtDelegate:(id)arg1;
- (BOOL)isPlayerDidPlay;
- (void)setIsPlayerDidPlay:(BOOL)arg1;
- (id)playInfo;
- (long long)state;
- (BOOL)isInterruptWhenStartup;
- (void)setIsInterruptWhenStartup:(BOOL)arg1;
- (id)coverImage;
- (void)setCoverImage:(id)arg1;
- (long long)statusMask;
- (void)setStatusMask:(long long)arg1;
- (BOOL)lastRequestToPlay;
- (void)setLastRequestToPlay:(BOOL)arg1;
- (BOOL)isMakeAudioModule;
- (void)setIsMakeAudioModule:(BOOL)arg1;
- (void).cxx_destruct;
@end
