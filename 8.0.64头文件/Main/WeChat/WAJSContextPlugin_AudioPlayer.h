@interface WAJSContextPlugin_AudioPlayer : WAJSContextPluginBase <IWAAudioPlayerDelegate, WMPFAudioAPIProtocol, WCAudioModuleDelegate, IWACustomLoadingExt, IWAJSContextPlugin_AudioPlayer, IWAProfileServiceExt>
{
    ALCcontext_struct * _alcContext; // +0x8
    BOOL _isNeedResumeWXMusic; // +0x10
    BOOL _obeyMuteSwitch; // +0x11
    BOOL _mixWithOthers; // +0x12
    BOOL _speakerOn; // +0x13
    BOOL _existPlayerPlayingOrWaiting; // +0x14
    BOOL _existWxAudio; // +0x15
    BOOL _isPhoneCalling; // +0x16
    BOOL _isNeedSeekWhenPlay; // +0x17
    BOOL _bStayPause; // +0x18
    float _seekTime; // +0x1c
    id <IJSContextPluginDelegate> _resultDelegate; // +0x20
    NSObject<OS_dispatch_queue> * _backgroundQueue; // +0x28
    NSObject<OS_dispatch_queue> * _fileQueue; // +0x30
    NSMutableDictionary * _playerDic; // +0x38
    NSMutableDictionary * _playBackDelegates; // +0x40
    NSMutableArray * _needResumePlayerArr; // +0x48
    WANewUniversalAudioEngine * _waAudioEngine; // +0x50
    NSMutableArray * _arrPlay; // +0x58
    NSMutableArray * _stayPausePlayers; // +0x60
}
- (void)dealloc;
- (id)init;
- (id)needResumePlayerArr;
- (BOOL)checkIfExistWxAudio;
- (id)audioTmpRootPath;
- (id)audioTmpPathByfileName:(id)arg1;
- (id)audioCacheDataPathForSrc:(id)arg1;
- (id)localPathByAudioData:(id)arg1 pathExtension:(id)arg2;
- (void)setInnerAudioSession:(BOOL)arg1 mixWithOthers:(BOOL)arg2 speakerOn:(BOOL)arg3;
- (id)createAudioInstance;
- (BOOL)isAudioPlayerExist:(id)arg1;
- (BOOL)setActive:(BOOL)arg1 audioId:(id)arg2;
- (void)setPlayerState:(id)arg1 src:(id)arg2 startTime:(double)arg3 autoPlay:(BOOL)arg4 loop:(BOOL)arg5 obeyMuteSwitch:(BOOL)arg6 volume:(double)arg7 playbackRate:(double)arg8 referrerPolicyTypeStr:(id)arg9;
- (id)generateUrlFromSrc:(id)arg1 fileData:(id *)arg2;
- (BOOL)playPlayer:(id)arg1;
- (BOOL)playPlayer:(id)arg1 bResume:(BOOL)arg2;
- (void)playAudioEnginePlayer:(id)arg1;
- (void)pausePlayer:(id)arg1;
- (void)pauseAudioEnginePlayer:(id)arg1;
- (void)seekPlayer:(id)arg1 seekTime:(float)arg2;
- (void)seekAudioEnginePlayer:(id)arg1 seekTime:(float)arg2;
- (void)stopPlayer:(id)arg1;
- (void)stopAudioEnginePlayer:(id)arg1;
- (void)destoryPlayer:(id)arg1;
- (void)destoryAudioEnginePlayer:(id)arg1;
- (BOOL)isPlayerSet:(id)arg1;
- (BOOL)isPlayerPaused:(id)arg1;
- (BOOL)isPlayerPlaying:(id)arg1;
- (BOOL)isPlayerWaiting:(id)arg1;
- (BOOL)isPlayerIdle:(id)arg1;
- (double)getPlayerDuration:(id)arg1;
- (double)getPlayerCurtime:(id)arg1;
- (id)getPlayerSrc:(id)arg1;
- (double)getPlayerStartTime:(id)arg1;
- (double)getPlayerBufferTime:(id)arg1;
- (double)getPlayerVolume:(id)arg1;
- (id)getPlayerWithAudioId:(id)arg1;
- (double)getPlayerPlaybackRate:(id)arg1;
- (BOOL)isPlayingAudio;
- (void)onPlayerStateChange:(long long)arg1 audioId:(id)arg2 errCode:(long long)arg3 errMsg:(id)arg4;
- (void)setCurrentContext;
- (id)backgroundQueue;
- (void)onDownloadAudioData:(id)arg1 src:(id)arg2;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (void)audioModuleInterruptionEnd:(id)arg1 param:(id)arg2;
- (void)onCustomLoadingCreate:(id)arg1;
- (void)onCustomLoadingDestory:(id)arg1;
- (id)mixListForAudioModule:(id)arg1;
- (id)task;
- (id)fileQueue;
- (void)addObserver;
- (void)removeObserver;
- (void)activeAudioSession;
- (void)forcePauseAllPlayer:(BOOL)arg1;
- (void)resumePlayerIfNeed;
- (void)forcePauseAllEnginePlayer;
- (BOOL)existPlayerPlayingOrWaiting;
- (void)recoverGameAppAudioSession;
- (void)resumeAudioContext;
- (void)asyncClearAudioCache;
- (id)getIdentifierWith:(id)arg1;
- (BOOL)handleEvent:(long long)arg1 userInfo:(id)arg2;
- (void)resumeMusicIfNeed:(BOOL)arg1;
- (void)applicationWillResignActive;
- (void)applicationDidBecomeActive;
- (void)setAudioSessionByWeAppEnterBackground;
- (void)startCapture;
- (void)stopCapture;
- (void)setPlayBackDelegate:(unsigned int)arg1 delegate:(id)arg2;
- (void)handleSetAudioEnginePlayerState:(id)arg1 src:(id)arg2 url:(id)arg3 startTime:(double)arg4 autoPlay:(BOOL)arg5 loop:(BOOL)arg6 obeyMuteSwitch:(BOOL)arg7 volume:(double)arg8;
- (void)handleCreateAudioEnginePlayer:(id)arg1;
- (void)handleEngineWhenServiceRelease;
- (void)handleEngineWhenEnterBackground;
- (void)handleEngineWhenWillResignActive;
- (void)handleEngineWhenVoIPStart;
- (BOOL)shouldForceUseBuiltinMic;
- (void)sendRealPlayEventIfNoErrWithAudioId:(id)arg1;
- (id)resultDelegate;
- (void)setResultDelegate:(id)arg1;
- (void)setBackgroundQueue:(id)arg1;
- (void)setFileQueue:(id)arg1;
- (id)playerDic;
- (void)setPlayerDic:(id)arg1;
- (id)playBackDelegates;
- (void)setPlayBackDelegates:(id)arg1;
- (BOOL)isNeedResumeWXMusic;
- (void)setIsNeedResumeWXMusic:(BOOL)arg1;
- (BOOL)obeyMuteSwitch;
- (void)setObeyMuteSwitch:(BOOL)arg1;
- (BOOL)mixWithOthers;
- (void)setMixWithOthers:(BOOL)arg1;
- (BOOL)speakerOn;
- (void)setSpeakerOn:(BOOL)arg1;
- (void)setNeedResumePlayerArr:(id)arg1;
- (void)setExistPlayerPlayingOrWaiting:(BOOL)arg1;
- (BOOL)existWxAudio;
- (void)setExistWxAudio:(BOOL)arg1;
- (BOOL)isPhoneCalling;
- (void)setIsPhoneCalling:(BOOL)arg1;
- (id)waAudioEngine;
- (void)setWaAudioEngine:(id)arg1;
- (BOOL)isNeedSeekWhenPlay;
- (void)setIsNeedSeekWhenPlay:(BOOL)arg1;
- (float)seekTime;
- (void)setSeekTime:(float)arg1;
- (id)arrPlay;
- (void)setArrPlay:(id)arg1;
- (BOOL)bStayPause;
- (void)setBStayPause:(BOOL)arg1;
- (id)stayPausePlayers;
- (void)setStayPausePlayers:(id)arg1;
- (void).cxx_destruct;
@end
