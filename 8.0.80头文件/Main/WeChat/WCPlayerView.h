@interface WCPlayerView : UIScrollView <TLProfileBaseMediaView, WCPlayerPlaybackInfoDelegate, WCAudioSessionExt, WCAudioModuleDelegate, WCCorePlayerDelegate, WCPlayerResourceLoaderDelegate, WCPlayerFairPlayResourceLoaderDelegate, WCPlayerPredicterDelegate, UIScrollViewDelegate, MMImageScrollViewHelperDelegate, WCPipContentSourcePlayerDelegate, WCPlayerProtocol>
{
    BOOL _bAutoPlayWhenReady; // +0x8
    BOOL _zoomEnabled; // +0x9
    BOOL _enableSeekWatchdog; // +0xa
    BOOL _isSeekWatchdogBuffering; // +0xb
    BOOL _isNotifyOthersAudioModule; // +0xc
    BOOL _isPreviewingLivePhoto; // +0xd
    BOOL _isRequireStartPlayWhenAppActive; // +0xe
    BOOL _hasCleared; // +0xf
    unsigned int _taskId; // +0x10
    NSString * _logTag; // +0x18
    WCPlayerPlayArgs * _playerArgs; // +0x20
    WCPlayerPlaybackInfo * _playbackInfo; // +0x28
    UIImageView * _thumbImageView; // +0x30
    WCPlayerLayerView * _displayView; // +0x38
    NSObject<WCPlayerControlProtocol> * _controller; // +0x40
    id <WCPlayerViewUIDelegate> _uiDelegate; // +0x48
    WCPlayerReporter * _reporter; // +0x50
    unsigned long long _seekStartTime; // +0x58
    double _dragStartPlaybackTime; // +0x60
    WCPlayerActionEvent * _pendingSeekAction; // +0x68
    unsigned long long _seekWatchdogSeq; // +0x70
    WCPipContentSourcePlayer * _pipSourcePlayer; // +0x78
    WCCorePlayer * _player; // +0x80
    NSString * _groupName; // +0x88
    NSRecursiveLock * _lock; // +0x90
    WCPlayerPredicter * _predicter; // +0x98
    WCPlayerResourceLoader * _resourceloader; // +0xa0
    WCPlayerResourceLoader * _switchingResourceloader; // +0xa8
    WCPlayerFairPlayResourceLoader * _fairPlayResourceloader; // +0xb0
    MMImageScrollViewHelper * _scrollViewHelper; // +0xb8
}
+ (id)generatePlayerWithFrame:(CGRect)arg1 PlayArgs:(id)arg2 Controller:(id)arg3;
- (BOOL)isPlaying;
- (BOOL)isPaused;
- (double)tl_mediaAspectRatio;
- (void)tl_startPlayMedia;
- (void)tl_pausePlayMedia;
- (void)tl_stopPlayMedia;
- (void)setTl_muted:(BOOL)arg1;
- (BOOL)tl_invalid;
- (id)initPlayerWithFrame:(CGRect)arg1 PlayArgs:(id)arg2 Controller:(id)arg3;
- (id)initPlayerViewWithPlayArgs:(id)arg1;
- (void)dealloc;
- (void)setZoomEnabled:(BOOL)arg1;
- (id)thumbImageView;
- (void)setThumbImage:(id)arg1;
- (void)setThumbImageHidden:(BOOL)arg1;
- (void)setThumbImageContentMode:(long long)arg1;
- (void)setPlayerContentMode:(long long)arg1;
- (void)updateShowArea:(WCShowArea)arg1;
- (void)resizeToCropDisplayView;
- (void)layoutSubviews;
- (void)displayWithFrame:(CGRect)arg1;
- (void)configReporter;
- (void)configWithPlayerInfo:(id)arg1 ControlView:(id)arg2;
- (void)configPlayerWithFrame:(CGRect)arg1 controller:(id)arg2;
- (void)preload;
- (void)startPlayer;
- (unsigned long long)getValidatePlayerMode;
- (void)prepare;
- (void)startAutoPlay;
- (void)stopPlayer;
- (void)clearPlayer;
- (void)clearLeakPlayer;
- (void)playVideo;
- (void)pauseVideo;
- (void)pauseVideo:(BOOL)arg1;
- (void)pauseDemuxerBuffering;
- (void)pauseLivePhotoVideo;
- (void)checkStreamPlayerState;
- (double)currentTime;
- (void)fetchAllVideoData;
- (void)stopFetchAllVideoData;
- (void)resumeFetchAllVideoData;
- (void)stopVideoDowload;
- (void)resumeVideoDownload;
- (void)setPlayerMaxBufferLength:(unsigned int)arg1;
- (void)setPlayerAllowsExternalPlayback:(BOOL)arg1;
- (void)setPlayBeginPos:(float)arg1 playEndPos:(float)arg2;
- (void)forceSetPlayerToMuted:(BOOL)arg1;
- (void)setPlayerToMuted:(BOOL)arg1;
- (void)setPlayerLoop:(BOOL)arg1;
- (void)setPlayBackRate:(float)arg1;
- (void)setVolume:(double)arg1;
- (double)getVolume;
- (void)setPreferredPeakBitRate:(double)arg1;
- (id)getPlayerAsset;
- (id)getPlayerItem;
- (void)switchDataSourceWithDownloadArgsWrap:(id)arg1;
- (void)switchDataSourceWithDownloadArgsWrap:(id)arg1 mode:(long long)arg2;
- (BOOL)forceChangeToSwitchingDataSource;
- (void)setVideoRenderInBackgroundEnable:(BOOL)arg1;
- (void)setAutoPictureInPictureOpen:(BOOL)arg1;
- (void)captureVideoWithFinishBlock:(id /* block */)arg1;
- (id)syncCaptureVideo;
- (__CVBuffer *)getCurrentPixelBuffer;
- (id)getAVPlayerItemVideoOutput;
- (void)onUserDidTakeScreenshot:(id)arg1;
- (void)onScreenCapturedDidChange:(id)arg1;
- (void)interruptPlay;
- (void)resumePlayAfterInterrupt;
- (int)getDynamicPlayerType;
- (void)parseVideoMetaWithDefalut:(int)arg1;
- (id)parseVideoMetadata;
- (void)startBuffering;
- (void)updateZoomInfo:(CGSize)arg1;
- (BOOL)shouldUpdatePlayArgs;
- (void)initPlayer;
- (void)initPlayerWithType:(int)arg1;
- (BOOL)trySwitchToAVPlayer;
- (void)initPredicter;
- (BOOL)shouldOpenNetworkAdapter;
- (void)internalPlayVideo;
- (void)tryAnimateShowDisplayViewWithFeedback;
- (void)tryDelayAnimateHiddenDisplayView;
- (void)animateHiddenDisplayViewWithCompletionBlock:(id /* block */)arg1;
- (void)updateBufferPercent:(double)arg1;
- (void)updateVideoPlayArgs:(BOOL)arg1;
- (void)CaluDecStuck;
- (id /* block */)getPlayCallBackBlock;
- (void)changeToDownloadFirstMode;
- (void)removeTimeObserver;
- (void)addNotification;
- (void)applicationBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)tryCreatePipSoucePlayerAndRegisterPipResource;
- (id)generatePipContentSourcePlayerWithCompletionHandler:(id /* block */)arg1;
- (id)pipSourcePlayer;
- (BOOL)isDownloadingData;
- (void)tryClosePipVideoFrameCallback;
- (void)interalSetPipSourceAudioModuleOccupyed:(BOOL)arg1;
- (void)notifyPipAudioModuleResignActive;
- (void)notifyPipAudioModuleBecomeActive;
- (void)onRequirePauseWhenPipNotStartSucc;
- (void)onRequireResumePlayWhenPipDidStart;
- (id)getPipDisplayView;
- (void)onPlayerStartDisplayOnPipWindow:(long long)arg1;
- (void)onPlayerStopDisplayOnPipWindow:(long long)arg1;
- (void)onPipStateDidChange:(long long)arg1;
- (void)onRestoreUIForPipStopWithCompletionHandler:(id /* block */)arg1;
- (void)onFailToStartPictureInPictureWithError:(id)arg1;
- (void)onPipPlayerSeekFromTime:(double)arg1 toTime:(double)arg2;
- (void)onPipSourcePlayerPause;
- (void)onPipSourcePlayerPlay;
- (void)onPipSourcePlayerRePlay;
- (double)maxSeekPosition;
- (void)finalizePendingSeekAction;
- (void)onSliderScrubbingDidStart;
- (void)onScrubbedToTime:(double)arg1;
- (void)onSliderScrubbingDidEndAtTime:(double)arg1;
- (void)invalidateSeekWatchdog;
- (void)scheduleSeekWatchdog;
- (void)onLocalServerReinit;
- (void)onLocalServerReinitFail;
- (void)onPlayerAssetCreated;
- (void)onPlayerSeekComplete:(double)arg1;
- (id)makeSwitchingResouloaderToFormat;
- (void)onDataSourceChangeSuccess;
- (void)onPlayerBufferingStart;
- (void)onPlayerBufferingEnd;
- (void)reportWhenBufferEnd:(id)arg1;
- (void)onPlayerCurrentLoopStart;
- (void)onPlayerCurrentLoopEnd;
- (void)onPlayerDidPlayToEndTime;
- (void)onPlayerErrorWithType:(unsigned long long)arg1 errorCode:(long long)arg2 errorDesc:(id)arg3;
- (void)onPlayerGetSeiInfo:(id)arg1;
- (void)onPlayerPlayablePosUpdate:(double)arg1;
- (void)onPlayerStateReady;
- (void)onPlayerVideoSizeChange:(CGSize)arg1;
- (void)onFirstAudioFrameRendered;
- (void)onFirstVideoFrameRendered;
- (void)onVideoFrameRendered:(id)arg1;
- (void)onAudioFrameRendered:(id)arg1;
- (id)onPlayerAudioProcessFrameOut:(id)arg1;
- (void)startDownload;
- (void)destoryResourceLoader;
- (id)generaterFairPlayResourceLoader;
- (id)generateResourceloaderWithDownloadArgsWrap:(id)arg1;
- (void)onResponseDataToResourceLoaderFail:(id)arg1;
- (void)onRecieveLoadingRequestAfterSeek:(id)arg1;
- (void)onRequestDataAvailable;
- (void)onRecieveAllVideoData;
- (void)onVideoDownloadFail:(int)arg1;
- (void)delayResetToPlayLocalFile;
- (void)onChangeVideoSource;
- (void)onVideoMoovReady;
- (void)onSwitchDataSource:(id)arg1;
- (void)onDownloadProgressChange:(unsigned long long)arg1 total:(unsigned long long)arg2;
- (void)onResourceloaderNoAnyLoadingRequest;
- (void)onPlayerStateChange:(unsigned long long)arg1;
- (void)onPlayerProcessChange:(unsigned long long)arg1;
- (void)onWCAudioSessionOldDeviceUnavailable;
- (id)groupName;
- (BOOL)isAudioModuleActiving;
- (void)setNotifyOthersAudioModule:(BOOL)arg1;
- (void)setAudioModuleGroupName:(id)arg1;
- (BOOL)activeAudioModuleWithOptions:(unsigned long long)arg1;
- (BOOL)shouldDeactiveAudioModule;
- (unsigned long long)getDeactiveAudioOptions;
- (void)cancelDelayedDeactiveAudioModule;
- (void)deactiveAudioModuleForPause;
- (void)deactiveAudioModule;
- (void)releaseAudioModuleRegisterDuty;
- (void)regainAudioModuleRegisterDuty;
- (CGSize)getPlayerPresentationSize;
- (void)checkTaskDownloadState;
- (BOOL)isReceiveAllVideoData;
- (unsigned long long)getCurAudioOptions;
- (void)asyncSetPlayerAudioPropertyWithCompletionHandler:(id /* block */)arg1;
- (void)muteSelfWhenOtherAudioModuleInterruptStart;
- (void)recoverMuteWhenOtherAudioModuleInterruptEnd;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (void)audioModuleInterruptionEnd:(id)arg1 param:(id)arg2;
- (BOOL)audioModuleBindingWCPlayerPipSupport;
- (void)onSuggestSwitchDataSourceWithMediaWrap:(id)arg1;
- (void)onWCAudioSessionSetActive:(BOOL)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (id)viewForZooming;
- (id)getScrollView;
- (void)onDoubleTap:(id)arg1;
- (unsigned int)taskId;
- (void)setTaskId:(unsigned int)arg1;
- (id)logTag;
- (void)setLogTag:(id)arg1;
- (id)playerArgs;
- (void)setPlayerArgs:(id)arg1;
- (id)playbackInfo;
- (void)setPlaybackInfo:(id)arg1;
- (BOOL)bAutoPlayWhenReady;
- (void)setBAutoPlayWhenReady:(BOOL)arg1;
- (void)setThumbImageView:(id)arg1;
- (id)displayView;
- (void)setDisplayView:(id)arg1;
- (id)controller;
- (void)setController:(id)arg1;
- (id)uiDelegate;
- (void)setUiDelegate:(id)arg1;
- (BOOL)zoomEnabled;
- (BOOL)enableSeekWatchdog;
- (void)setEnableSeekWatchdog:(BOOL)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (unsigned long long)seekStartTime;
- (void)setSeekStartTime:(unsigned long long)arg1;
- (double)dragStartPlaybackTime;
- (void)setDragStartPlaybackTime:(double)arg1;
- (id)pendingSeekAction;
- (void)setPendingSeekAction:(id)arg1;
- (unsigned long long)seekWatchdogSeq;
- (void)setSeekWatchdogSeq:(unsigned long long)arg1;
- (BOOL)isSeekWatchdogBuffering;
- (void)setIsSeekWatchdogBuffering:(BOOL)arg1;
- (BOOL)isNotifyOthersAudioModule;
- (void)setIsNotifyOthersAudioModule:(BOOL)arg1;
- (BOOL)isPreviewingLivePhoto;
- (void)setIsPreviewingLivePhoto:(BOOL)arg1;
- (void)setPipSourcePlayer:(id)arg1;
- (BOOL)isRequireStartPlayWhenAppActive;
- (void)setIsRequireStartPlayWhenAppActive:(BOOL)arg1;
- (BOOL)hasCleared;
- (void)setHasCleared:(BOOL)arg1;
- (id)player;
- (void)setPlayer:(id)arg1;
- (void)setGroupName:(id)arg1;
- (id)lock;
- (void)setLock:(id)arg1;
- (id)predicter;
- (void)setPredicter:(id)arg1;
- (id)resourceloader;
- (void)setResourceloader:(id)arg1;
- (id)switchingResourceloader;
- (void)setSwitchingResourceloader:(id)arg1;
- (id)fairPlayResourceloader;
- (void)setFairPlayResourceloader:(id)arg1;
- (id)scrollViewHelper;
- (void)setScrollViewHelper:(id)arg1;
- (void).cxx_destruct;
@end
