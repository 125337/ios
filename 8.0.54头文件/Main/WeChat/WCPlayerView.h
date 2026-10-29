@interface WCPlayerView : UIScrollView <TLProfileBaseMediaView, WCPlayerPlaybackInfoDelegate, WCAudioSessionExt, WCAudioModuleDelegate, WCCorePlayerDelegate, WCPlayerResourceLoaderDelegate, WCPlayerPredicterDelegate, UIScrollViewDelegate, MMImageScrollViewHelperDelegate, WCPipContentSourcePlayerDelegate, WCPlayerProtocol>
{
    BOOL _bAutoPlayWhenReady; // +0x8
    BOOL _zoomEnabled; // +0x9
    BOOL _isNotifyOthersAudioModule; // +0xa
    BOOL _isPreviewingLivePhoto; // +0xb
    BOOL _isRequireStartPlayWhenAppActive; // +0xc
    unsigned int _taskId; // +0x10
    WCPlayerPlayArgs * _playerArgs; // +0x18
    WCPlayerPlaybackInfo * _playbackInfo; // +0x20
    UIImageView * _thumbImageView; // +0x28
    WCPlayerLayerView * _displayView; // +0x30
    NSObject<WCPlayerControlProtocol> * _controller; // +0x38
    id <WCPlayerViewUIDelegate> _uiDelegate; // +0x40
    WCPlayerReporter * _reporter; // +0x48
    unsigned long long _seekStartTime; // +0x50
    WCPipContentSourcePlayer * _pipSourcePlayer; // +0x58
    WCCorePlayer * _player; // +0x60
    NSString * _groupName; // +0x68
    NSRecursiveLock * _lock; // +0x70
    WCPlayerPredicter * _predicter; // +0x78
    WCPlayerResourceLoader * _resourceloader; // +0x80
    WCPlayerResourceLoader * _switchingResourceloader; // +0x88
    WCPlayerFairPlayResourceLoader * _fairPlayResourceloader; // +0x90
    MMImageScrollViewHelper * _scrollViewHelper; // +0x98
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
- (id)generatePipContentSourcePlayer;
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
- (void)onSliderScrubbingDidStart;
- (void)onScrubbedToTime:(double)arg1;
- (void)onSliderScrubbingDidEndAtTime:(double)arg1;
- (void)onLocalServerReinit;
- (void)onLocalServerReinitFail;
- (void)onPlayerAssetCreated;
- (void)onPlayerSeekComplete:(double)arg1;
- (id)makeSwitchingResouloaderToFormat;
- (void)onDataSourceChangeSuccess;
- (void)onPlayerBufferingStart;
- (void)onPlayerBufferingEnd;
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
- (void)startWithPlayerMode:(unsigned long long)arg1;
- (void)destoryResourceLoader;
- (id)generaterFairPlayResourceLoader;
- (id)generateResourceloaderWithDownloadArgsWrap:(id)arg1;
- (void)onResponseDataToResourceLoaderFail:(id)arg1;
- (void)onRecieveSeekLoadingRequest;
- (void)onRequestDataAvailable;
- (void)onRecieveAllVideoData;
- (void)onVideoDownloadFail:(int)arg1;
- (void)onChangeVideoSource;
- (void)onVideoMoovReady;
- (void)onM3u8Ready;
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
- (void)deactiveAudioModule;
- (void)releaseAudioModuleRegisterDuty;
- (CGSize)getPlayerPresentationSize;
- (void)checkTaskDownloadState;
- (BOOL)isReceiveAllVideoData;
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
- (id)reporter;
- (void)setReporter:(id)arg1;
- (unsigned long long)seekStartTime;
- (void)setSeekStartTime:(unsigned long long)arg1;
- (BOOL)isNotifyOthersAudioModule;
- (void)setIsNotifyOthersAudioModule:(BOOL)arg1;
- (BOOL)isPreviewingLivePhoto;
- (void)setIsPreviewingLivePhoto:(BOOL)arg1;
- (void)setPipSourcePlayer:(id)arg1;
- (BOOL)isRequireStartPlayWhenAppActive;
- (void)setIsRequireStartPlayWhenAppActive:(BOOL)arg1;
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

