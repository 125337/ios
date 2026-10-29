@interface MMMusicPlayerMgr : MMUserService <MMImageLoaderObserver, IRemoteControlMusicPlayerExt, MMMusicPlayerNotifyExt, PBMessageObserverDelegate, MonoServiceMgrExt, MMServiceProtocol, MMMusicPlayerExt, MMMusicLyricsRtnExt, MMMusicAlbumRtnExt, MMMusicListExt, ISysCallCheckExt>
{
    BOOL _shouldTurnRepeatNoneMode; // +0x8
    BOOL _isManualPaused; // +0x9
    BOOL _shouldDelayResetCurMusicInfo; // +0xa
    BOOL _isForceStop; // +0xb
    unsigned int _curMusicIndex; // +0xc
    unsigned int _checkingMusicUrlEventId; // +0x10
    MMMusicInfo * _curMusicInfo; // +0x18
    MMMusicInfo * _prevMusicInfo; // +0x20
    MMMusicInfo * _nextMusicInfo; // +0x28
    MusicLogInfo * _musicLogInfo; // +0x30
    long long _state; // +0x38
    long long _playMode; // +0x40
    long long _playDirection; // +0x48
    NSMutableArray * _arrMusicItems; // +0x50
    MMMusicUrlChecker * _musicUrlChecker; // +0x58
    MMMusicLyricResolver * _musicLyricResolver; // +0x60
    MMMusicListMgr * _musicListMgr; // +0x68
    MusicPlayerActionReporter * _actionReporter; // +0x70
}
- (void)setMusicLogInfoWithBrandMusicId:(id)arg1 reportStr:(id)arg2;
- (void)resetMusicPlayerEntranceType;
- (void)logMusicStat;
- (void)logMusicStatAndReset;
- (void)updateMusicLogInfo;
- (void)reportMusicInfoWithStatusChanged:(unsigned long long)arg1;
- (void)addRealPlayTime;
- (void)report11982WithReportStr:(id)arg1 musicLogInfo:(id)arg2;
- (void)handleReportMusicResp:(id)arg1;
- (id)init;
- (void)updateArrMusicItems;
- (void)dealloc;
- (long long)getMusicPlayMode;
- (void)setPlayMode:(long long)arg1;
- (long long)getMusicListSource;
- (void)updateMusicListBySource:(long long)arg1;
- (void)setAndPlayMusicItem:(id)arg1;
- (void)setMusicItemList:(id)arg1;
- (void)forceSetCurMusicInfo:(id)arg1;
- (void)updateCurMusicMvInfoWithNewMusicInfo:(id)arg1;
- (void)playWithMusicKey:(id)arg1;
- (void)playWithMusicKey:(id)arg1 SourceType:(long long)arg2;
- (void)playPreviousMusic;
- (void)playPreviousMusicFromPlayActionSource:(unsigned int)arg1;
- (void)playNextMusic;
- (void)playNextMusicFromPlayActionSource:(unsigned int)arg1;
- (BOOL)pausePlayManual:(BOOL)arg1 pauseDownload:(BOOL)arg2;
- (BOOL)pausePlayManual:(BOOL)arg1 pauseDownload:(BOOL)arg2 reportScene:(unsigned int)arg3;
- (BOOL)isManualPaused;
- (void)resumePlay;
- (void)seekToTime:(double)arg1 playAuto:(BOOL)arg2;
- (void)stopPlay;
- (BOOL)stopWithMusicKey:(id)arg1;
- (BOOL)isIdle;
- (BOOL)isPlaying;
- (BOOL)isWaiting;
- (BOOL)isPaused;
- (id)getCurMusicInfo;
- (id)getCurMusicTitle;
- (long long)getMusicPlayState;
- (unsigned long long)getMusicPlayDetailState;
- (unsigned long long)getMusicPlayDetailInnerState;
- (double)getCurMusicDuration;
- (double)getCurMusicDuarationFromLyricResolver;
- (double)getCurMusicOffset;
- (double)getCurMusicBufferProgress;
- (double)getCurMusicBufferTime;
- (double)getCurrentPlaybackRate;
- (id)getArrMusicItems;
- (BOOL)isMusicItemsContainsMusicKey:(id)arg1;
- (id)getMusicInfoByMusicKey:(id)arg1;
- (void)setMusicPlayDirection:(long long)arg1;
- (float)volume;
- (void)setVolume:(float)arg1;
- (float)playRate;
- (void)setPlayRate:(float)arg1;
- (id)getMusicUrlWithMusicInfo:(id)arg1;
- (BOOL)isValidLowBandUrl:(id)arg1;
- (void)playWithMusicInfo:(id)arg1 updateSessionId:(BOOL)arg2;
- (void)playWithMusicInfo:(id)arg1;
- (BOOL)allowIgnoreCache;
- (id)cacheIdWithMusicInfo:(id)arg1 innerCacheId:(id)arg2 dataUrl:(id)arg3 cacheUrl:(id)arg4;
- (id)cahcedIdFromMusicInfo:(id)arg1 getLinkResponse:(id)arg2;
- (void)_realPlayWithMusicInfo:(id)arg1 musicDataUrl:(id)arg2 cacheUrl:(id)arg3 cacheId:(id)arg4;
- (void)setupKSMusicPlayerCleanFilterIfNeeded;
- (BOOL)shouldCleanCache:(id)arg1;
- (void)safeCheckMusicInfo:(id)arg1;
- (void)showMusicCantPlayAlertWithCustomWording:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)updateMPNowPlayingInfo:(id)arg1;
- (BOOL)isLyricValid;
- (unsigned long long)indexOfMusic:(id)arg1;
- (id)getPreviousMusicInfo;
- (id)getNextMusicInfo;
- (void)onMusicPlayStatusChanged:(unsigned long long)arg1 error:(id)arg2;
- (void)reportMusicDuration:(unsigned int)arg1 musicInfo:(id)arg2;
- (void)handlePlayerStopOrErrorEvent:(id)arg1;
- (id)cacheIdWithMusicInfo:(id)arg1;
- (void)delayResetCurMusicInfo;
- (void)onLevelMeterPeak:(float)arg1;
- (void)onForceStopMusic;
- (void)onDataBuffering:(double)arg1;
- (void)OnGetLyrics:(id)arg1 Lyrics:(id)arg2;
- (void)OnGetSongAlbumUrl:(id)arg1 AlbumUrl:(id)arg2;
- (void)onMusicListArrayChange;
- (id)getCurLyricsList;
- (id)getCurTimeList;
- (void)onRemoteControlMusicShouldPlay;
- (void)onRemoteControlMusicShouldPauseByMannual:(BOOL)arg1;
- (void)onRemoteControlMusicShouldPlayOrPause;
- (void)onRemoteControlMusicShouldStop;
- (void)onRemoteControlMusicShouldPlayNextTrack;
- (void)onRemoteControlMusicShouldPlayPrevTrack;
- (void)notifyMusicPlayerPauseMusic;
- (void)notifyMusicPlayerRestartMusic;
- (void)statNativePlayerAction:(id)arg1 scene:(unsigned int)arg2 actionType:(unsigned int)arg3;
- (void)updateMusicTitle:(id)arg1;
- (void)updateMusicSinger:(id)arg1;
- (void)updateMusicEPName:(id)arg1;
- (void)updateMusicCover:(id)arg1;
- (void)updateMusicWebUrl:(id)arg1;
- (void)updateMinimizationViewVisible:(BOOL)arg1;
- (BOOL)isMusicIdPlayingOrWaiting:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)monoServiceId;
- (void)addMonoService;
- (void)removeMonoService;
- (void)onAudioMonoServiceBussinessAdded:(id)arg1 inMainScene:(BOOL)arg2;
- (void)appWillEnterForeground;
- (void)checkChargedStatusIfNeeded;
- (void)reloadMusicWithGetLinkInfo:(id)arg1;
- (void)reGenerateActionReporter;
- (id)curMusicInfo;
- (void)setCurMusicInfo:(id)arg1;
- (id)prevMusicInfo;
- (void)setPrevMusicInfo:(id)arg1;
- (id)nextMusicInfo;
- (void)setNextMusicInfo:(id)arg1;
- (id)musicLogInfo;
- (void)setMusicLogInfo:(id)arg1;
- (BOOL)shouldTurnRepeatNoneMode;
- (void)setShouldTurnRepeatNoneMode:(BOOL)arg1;
- (long long)state;
- (void)setState:(long long)arg1;
- (long long)playMode;
- (long long)playDirection;
- (void)setPlayDirection:(long long)arg1;
- (unsigned int)curMusicIndex;
- (void)setCurMusicIndex:(unsigned int)arg1;
- (id)arrMusicItems;
- (void)setArrMusicItems:(id)arg1;
- (void)setIsManualPaused:(BOOL)arg1;
- (BOOL)shouldDelayResetCurMusicInfo;
- (void)setShouldDelayResetCurMusicInfo:(BOOL)arg1;
- (BOOL)isForceStop;
- (void)setIsForceStop:(BOOL)arg1;
- (id)musicUrlChecker;
- (void)setMusicUrlChecker:(id)arg1;
- (id)musicLyricResolver;
- (void)setMusicLyricResolver:(id)arg1;
- (id)musicListMgr;
- (void)setMusicListMgr:(id)arg1;
- (unsigned int)checkingMusicUrlEventId;
- (void)setCheckingMusicUrlEventId:(unsigned int)arg1;
- (id)actionReporter;
- (void)setActionReporter:(id)arg1;
- (void).cxx_destruct;
@end
