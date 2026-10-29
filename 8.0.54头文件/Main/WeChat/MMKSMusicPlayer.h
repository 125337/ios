@interface MMKSMusicPlayer : MMUserService <IRemoteControlMusicPlayerExt, KSAudioPlayerDelegate, KSAudioPlayerUserDefineProtocol, WCAudioModuleDelegate, MMServiceProtocol>
{
    id <KSAudioPlayerProtocol> m_audioPlayer; // +0x8
    BOOL m_isQQMusicWifiPlay; // +0x10
    BOOL m_isCyclePlay; // +0x11
    NSString * m_clientInfo; // +0x18
    BOOL m_isQQMusicPlay; // +0x20
    BOOL m_isPlayerResuming; // +0x21
    BOOL m_shouldRecevingRemoteControl; // +0x22
    unsigned long long m_skippingMusicCount; // +0x28
    KSSongInfo * m_curSongInfo; // +0x30
    unsigned long long m_state; // +0x38
    BOOL _useCronetDownloader; // +0x40
    BOOL _isInBackground; // +0x41
    id /* block */ _cacheCleanHandlerWithCacheId; // +0x48
    NSMutableDictionary * _referrerDict; // +0x50
}
- (id)createUserAudioProcessor:(id)arg1;
- (id)cacheRootPath;
- (id)hashForUrl:(id)arg1;
- (id)getUrlPathExt:(id)arg1;
- (id)cachePathForMusicFromUrl:(id)arg1;
- (void)onServiceInit;
- (void)dealloc;
- (void)destroyStreamer;
- (void)ignoreCurrentMusicItem;
- (void)playWithMusicTask:(id)arg1;
- (void)configPlayerWithIsHLS:(BOOL)arg1;
- (void)configPlayerWithPlaybackRate:(double)arg1;
- (void)stop;
- (void)forceStopMusic;
- (void)seekToTime:(double)arg1 playAuto:(BOOL)arg2;
- (BOOL)pause;
- (BOOL)pausePlayAndDownloadData;
- (void)resume;
- (BOOL)isWaiting;
- (BOOL)isPlaying;
- (BOOL)isPaused;
- (BOOL)isIdle;
- (BOOL)isResuming;
- (unsigned long long)state;
- (unsigned long long)innerState;
- (BOOL)isMusicCachedForUrl:(id)arg1;
- (BOOL)isMusicCachedForId:(id)arg1;
- (BOOL)isQQMusicWifiPlay;
- (double)getCurTime;
- (double)getDuration;
- (double)getBufferProgress;
- (double)getBufferTime;
- (double)getCurrentPlaybackRate;
- (id)getReferrerWithUrlStr:(id)arg1;
- (void)cleanUpCache;
- (void)setVolume:(float)arg1;
- (float)volume;
- (void)audioPlayer:(id)arg1 status:(unsigned long long)arg2 params:(id)arg3;
- (void)audioPlayer:(id)arg1 dataBuffering:(double)arg2;
- (void)endRecevingRemoteControl;
- (void)delayEndRecevingRemoteControl;
- (BOOL)isNetOk;
- (id)createAudioDownloader;
- (unsigned int)downloadRetryCnt;
- (id)limitNetParam;
- (void)setPlayerState:(unsigned long long)arg1 errInfo:(id)arg2;
- (void)handleState:(unsigned long long)arg1;
- (unsigned long long)playerStateByInnerStatus:(unsigned long long)arg1 params:(id)arg2;
- (id)bcdStringHanding:(id)arg1;
- (id)bcdStringFromUrl_QQMusic:(id)arg1;
- (id)bcdStringFromUrl_WechatMusicUrl:(id)arg1;
- (void)reportPlayEvent;
- (void)reportHLSPlayEvent;
- (void)reportPlayerErrStop;
- (void)reportPlayFileError;
- (void)reportPlaySystemError;
- (void)reportDownloadFailed;
- (void)reportHLSPlayFailEvent;
- (BOOL)isAudioMonoServiceWorkingInCurrentAppScene;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (void)audioModuleInterruptionEnd:(id)arg1 param:(id)arg2;
- (BOOL)canResumeWhenInterruptionEnd;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (id /* block */)cacheCleanHandlerWithCacheId;
- (void)setCacheCleanHandlerWithCacheId:(id /* block */)arg1;
- (BOOL)useCronetDownloader;
- (void)setUseCronetDownloader:(BOOL)arg1;
- (BOOL)isInBackground;
- (void)setIsInBackground:(BOOL)arg1;
- (id)referrerDict;
- (void)setReferrerDict:(id)arg1;
- (void).cxx_destruct;
@end

