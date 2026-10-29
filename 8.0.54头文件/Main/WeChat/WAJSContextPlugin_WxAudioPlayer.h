@interface WAJSContextPlugin_WxAudioPlayer : WAJSContextPluginBase <WMPFAudioAPIProtocol, wxAudioOutputDelegate, WCAudioModuleDelegate, IWACustomLoadingExt, IWAJSContextPlugin_AudioPlayer, wxAudioStateDelegate>
{
    BOOL _isNeedResumeWXMusic; // +0x8
    BOOL _obeyMuteSwitch; // +0x9
    BOOL _mixWithOthers; // +0xa
    BOOL _speakerOn; // +0xb
    BOOL _useWXAUDIO; // +0xc
    BOOL _muteOnBg; // +0xd
    BOOL _isAudioModuleActiveNow; // +0xe
    BOOL _bInterruptNow; // +0xf
    BOOL _bInterruptByInnerApp; // +0x10
    BOOL _bInterruptBySystem; // +0x11
    WXAudioNative * _wxaudionative; // +0x18
    NSObject<OS_dispatch_queue> * _backgroundQueue; // +0x20
    NSMutableDictionary * _playBackDelegates; // +0x28
    NSMutableSet * _playingAudioEngineSet; // +0x30
    NSMutableDictionary * _sessionIdDict; // +0x38
}
- (id)init;
- (void)dealloc;
- (id)audioTmpRootPath;
- (id)audioTmpPathByfileName:(id)arg1;
- (id)audioCacheDataPathForSrc:(id)arg1;
- (id)localPathByAudioData:(id)arg1 pathExtension:(id)arg2;
- (BOOL)isPlayingAudio;
- (void)setInnerAudioSession:(BOOL)arg1 mixWithOthers:(BOOL)arg2 speakerOn:(BOOL)arg3;
- (void)setPlayBackDelegate:(unsigned int)arg1 delegate:(id)arg2;
- (id)task;
- (void)addObserver;
- (void)removeObserver;
- (void)activeAudioSession;
- (void)forceResumeAllPlayer;
- (void)forcePauseAllPlayer;
- (void)forcePauseAllPlayer:(BOOL)arg1;
- (BOOL)existPlayerPlaying;
- (BOOL)existPlayerWaiting;
- (BOOL)handleEvent:(long long)arg1 userInfo:(id)arg2;
- (void)resumeMusicIfNeed:(BOOL)arg1;
- (void)applicationWillResignActive;
- (void)applicationDidBecomeActive;
- (void)setAudioSessionByWeAppEnterBackground;
- (void)onPcmOutputSessionId:(id)arg1 data:(char *)arg2 size:(unsigned int)arg3 channels:(unsigned int)arg4 samplerate:(unsigned int)arg5 fmt:(int)arg6;
- (BOOL)shouldForceUseBuiltinMic;
- (void)canPlayNowAndAutoActive:(unsigned long long)arg1 block:(id /* block */)arg2;
- (void)onWXAudioState:(int)arg1 audioId:(unsigned long long)arg2;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (void)audioModuleInterruptionEnd:(id)arg1 param:(id)arg2;
- (void)onCustomLoadingCreate:(id)arg1;
- (void)onCustomLoadingDestory:(id)arg1;
- (id)mixListForAudioModule:(id)arg1;
- (id)mixList;
- (void)setActiveAsync:(BOOL)arg1 completion:(id /* block */)arg2;
- (id)getIdentifier;
- (void)audioSessionInterruptionBegan;
- (void)audioSessionInterruptionEnd;
- (void)innerAppAudioInterruptionBegan;
- (void)innerAppAudioInterruptionEnd;
- (void)setJSContextOwner:(id)arg1;
- (void)checkIfSendInterruptionEvent;
- (id)wxaudionative;
- (id)backgroundQueue;
- (void)setBackgroundQueue:(id)arg1;
- (BOOL)isNeedResumeWXMusic;
- (void)setIsNeedResumeWXMusic:(BOOL)arg1;
- (BOOL)obeyMuteSwitch;
- (void)setObeyMuteSwitch:(BOOL)arg1;
- (BOOL)mixWithOthers;
- (void)setMixWithOthers:(BOOL)arg1;
- (BOOL)speakerOn;
- (void)setSpeakerOn:(BOOL)arg1;
- (BOOL)useWXAUDIO;
- (void)setUseWXAUDIO:(BOOL)arg1;
- (BOOL)muteOnBg;
- (void)setMuteOnBg:(BOOL)arg1;
- (id)playBackDelegates;
- (void)setPlayBackDelegates:(id)arg1;
- (BOOL)isAudioModuleActiveNow;
- (void)setIsAudioModuleActiveNow:(BOOL)arg1;
- (id)playingAudioEngineSet;
- (void)setPlayingAudioEngineSet:(id)arg1;
- (BOOL)bInterruptNow;
- (void)setBInterruptNow:(BOOL)arg1;
- (BOOL)bInterruptByInnerApp;
- (void)setBInterruptByInnerApp:(BOOL)arg1;
- (BOOL)bInterruptBySystem;
- (void)setBInterruptBySystem:(BOOL)arg1;
- (id)sessionIdDict;
- (void)setSessionIdDict:(id)arg1;
- (void).cxx_destruct;
@end

