@interface WCFinderFeedVideoCollectionViewCell : UICollectionViewCell <WCFinderPlayerControlViewDelegate, WCFinderFeedImageViewProtocol, WCPlayerDownloaderExt, UIGestureRecognizerDelegate, WCAudioSessionExt, WCPlayerVolumeObserverDelegate, WCPlayerEventExt, WCFinderFeedContentVMExt, WCFinderFeedCollectionViewCellProtocol, WCFinderHalfScreenListenProtocol>
{
    BOOL _isSubScene; // +0x8
    BOOL _originalVideoMute; // +0x9
    BOOL _isCurrentPlaying; // +0xa
    BOOL _needsRestThumb; // +0xb
    BOOL _needsUpdateThumb; // +0xc
    BOOL _hasCallStopCallBack; // +0xd
    BOOL _isMediaContentReady; // +0xe
    BOOL _hadInMiniWindow; // +0xf
    BOOL _isExactingPlayerViewForLandScapeAnimation; // +0x10
    id <WCFinderFeedContentMediaActionProtocol> _delegate; // +0x18
    id <WCFinderHalfScreenListenProtocol> _halfScreenDelegate; // +0x20
    unsigned long long _currentIndex; // +0x28
    unsigned long long _scene; // +0x30
    double _loadingTopOffset; // +0x38
    UIImageView * _retryImageView; // +0x40
    WCFinderFullNewMultiMediaView * _mediaView; // +0x48
    WCWidgetPlayer * _customWidgetPlayer; // +0x50
    WCPlayerView * _playerView; // +0x58
    MJClipBundlePresentationView * _mjPlayerView; // +0x60
    WCFinderFeedImageView * _thumbImageView; // +0x68
    WCFinderPlayerControlView * _playerConfigControlView; // +0x70
    WCFinderFeedMediaWrap * _mediaWrap; // +0x78
    WCFinderMediaInfo * _mediaInfo; // +0x80
    UILabel * _retryLabel; // +0x88
    WCFinderShortTapGestureRecognizer * _likeGes; // +0x90
    NSString * _currentVideoTid; // +0x98
    WCFinderFeedContentVM * _feedContentVM; // +0xa0
    long long _updateTag; // +0xa8
    WCFinderVideoPlayCellParams * _extParams; // +0xb0
    WCFinderVideoDragProgressReporter * _progressDragReporter; // +0xb8
    WCPlayerVolumeObserver * _volumeObserver; // +0xc0
    UIImage * _pauseCaputerImage; // +0xc8
    WCFinderMinimizeSilenceMonitor * _silenceMonitor; // +0xd0
}
- (id)initWithFrame:(CGRect)arg1;
- (id)volumeObserver;
- (void)prepareForReuse;
- (void)_initCustomWidgetPlayer;
- (void)_pauseCustomWidgetPlayer;
- (void)_playCustomWidgetPlayer;
- (void)_seekCustomWidgetPlayerToTimeSec:(double)arg1;
- (void)_restartCustomWidgetPlayer;
- (void)_relayoutCustomWidgetPlayer;
- (void)dealloc;
- (void)initSubView;
- (void)changeDataSource:(id)arg1 currentIndex:(long long)arg2 useThumb:(id)arg3 startPlayTime:(double)arg4 isFullScreen:(BOOL)arg5;
- (void)updateMeidaWrap;
- (long long)getThumbMediaType;
- (id)playerConfigControlView;
- (id)generateConfig;
- (id)retryImageView;
- (void)onClickRetry:(id)arg1;
- (id)retryLabel;
- (void)initVideoReloadAction;
- (void)resetVideoReloadHidden:(BOOL)arg1;
- (CGSize)contentSizeForMediaInfo:(id)arg1;
- (void)updateImage:(id)arg1;
- (void)layoutSubviews;
- (void)createPlayerView:(double)arg1 commentScene:(int)arg2;
- (void)playVideoIfSupport:(double)arg1 silencePlay:(BOOL)arg2 pauseVideo:(BOOL)arg3 playRate:(double)arg4 extParams:(id)arg5;
- (void)addStartPlayReportInfo;
- (void)onLikeFeed;
- (void)pauseVideoIfSupport:(BOOL)arg1;
- (void)fakeStopPlayAction;
- (BOOL)isH265;
- (BOOL)isH266;
- (BOOL)checkCanPlayVideo;
- (void)updatePlayerReport;
- (void)_performStopActionCallback;
- (void)stopVideoIfSupport;
- (void)updateSnapshot;
- (void)captureVideoIfPossible;
- (void)progressBarValueChange:(double)arg1 playVideo:(BOOL)arg2 pauseVideo:(BOOL)arg3 state:(WCFinderPlayerControlProgressState)arg4;
- (id)getCurrendThumb;
- (void)changeVideoSilenceStatue:(BOOL)arg1;
- (void)realChangeVideoSilenceStatue:(BOOL)arg1;
- (void)changeFeedImageViewBackgroundColor:(id)arg1;
- (void)pauseVideoIfSupport;
- (double)getCurrentPlayVideoTime;
- (id)playSecondSet;
- (double)getPlayVideoTotalTime;
- (double)getActualPlayingTimeInMs;
- (id)progressBarStatus;
- (void)setProgressBarStatus:(id)arg1;
- (void)resetCurrentVideoThumb;
- (void)updateCurrentVideoThumb;
- (void)setPlayRate:(double)arg1;
- (id)playReportInfo;
- (void)setMediaWrap:(id)arg1;
- (double)getCurrentBatteryPowerPercent;
- (void)didMoveToWindow;
- (void)onPlayerView:(id)arg1 pipSeekFromTime:(double)arg2 toTime:(double)arg3;
- (void)onPipStatePlayWithPlayerView:(id)arg1;
- (void)onPipStateRePlayWithPlayerView:(id)arg1;
- (void)onPipStatePauseWithPlayerView:(id)arg1;
- (void)onPlayerView:(id)arg1 startDisplayOnPipWindow:(long long)arg2;
- (void)onPlayerView:(id)arg1 stopDisplayOnPipWindow:(long long)arg2;
- (void)onPlayerStateChanged:(unsigned long long)arg1;
- (void)onPlayerProxyIsUnAvaiable;
- (void)onPlayToEnd;
- (void)onVideoPlay;
- (void)onShowBufferingView;
- (void)onHiddenBufferingView;
- (void)onVideoSeekActionWithDirection:(BOOL)arg1;
- (void)_pauseVideo:(BOOL)arg1 isFakeStopAction:(BOOL)arg2;
- (void)finderPlayerControllerViewUpdateVideoCurrentTime:(double)arg1 videoDuration:(double)arg2 maxPlayVideoTime:(double)arg3;
- (void)updateStreamingBufferLength;
- (unsigned long long)getCurrentNetworkDownloadStatus;
- (void)hideLoadingView;
- (void)onFinderThumbDownloadFail:(id)arg1;
- (void)updateVideoBufferPercent:(double)arg1;
- (double)_limitBufferCount;
- (void)checkPreloadTaskStatus;
- (unsigned long long)getPreloadTaskStatus;
- (void)resumePreloadTasks;
- (void)pausePreloadTasks;
- (void)onShowReloadAction;
- (void)onVideoPlayFail:(unsigned long long)arg1;
- (void)tryDowngradePlayVideoIfSupport;
- (void)updatePlayVolume:(BOOL)arg1;
- (void)loadingRetry;
- (void)OnPlayerMoovReady:(id)arg1;
- (void)OnCdnDownloadSuccess:(id)arg1;
- (void)OnPlayerDownloadProgress:(id)arg1 finish:(unsigned long long)arg2 total:(unsigned long long)arg3;
- (void)OnCdnDownloadError:(id)arg1;
- (void)onPlayerStartPlay:(id)arg1;
- (void)onPlayerPausePlay:(id)arg1;
- (void)onPlayerDownloadMoovReady:(id)arg1 progressInfo:(id)arg2;
- (void)onMuteForExternalPlaybackMode:(id)arg1;
- (void)onPlayerStartDownload:(id)arg1;
- (void)onPlayer:(id)arg1 muteChanged:(BOOL)arg2;
- (void)onPlayerDidStartPictureInPicture;
- (void)onPlayerDidStopPictureInPicture:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)videoIsOnPlayState;
- (void)refreshImageIfFromShare;
- (void)onWCAudioSessionOldDeviceUnavailable;
- (void)onFeedContentUpdateByURLExpired:(id)arg1;
- (void)_reloadPlayView:(id)arg1;
- (void)setAllowBackgroundPlay:(BOOL)arg1;
- (BOOL)finderFeedCellIsCurrentMediaPlaying;
- (BOOL)finderFeedCellIsCurrentMediaSupportMinimizePlay;
- (BOOL)finderFeedCellIsCurrentMediaMute;
- (id)finderFeedCellPlayerMeidaWrapIdentifier;
- (void)_onMinimizeSilenceStop:(id)arg1;
- (id)finderFeedCellMinimizeContentView:(BOOL)arg1;
- (id)extractPlayerViewForLandscapeAnimation;
- (void)restorePlayerViewForLandscapeAnimation:(id)arg1;
- (BOOL)getPIPSwitch;
- (BOOL)getPIPSwitch:(BOOL)arg1;
- (id /* block */)playerViewCreator;
- (void)finderFeedCellRestoreMinimizeContentView:(id)arg1 forPlay:(BOOL)arg2;
- (WCShowArea)getPlayerViewShowArea;
- (CGRect)getPlayerViewRect;
- (void)halfScreenMoveProgressChanged;
- (void)onVolumeDidChange:(double)arg1;
- (void)addMaasRenderViewIfNeeded;
- (BOOL)isMJMaasSDKAsyncExportTask;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)halfScreenDelegate;
- (void)setHalfScreenDelegate:(id)arg1;
- (unsigned long long)currentIndex;
- (void)setCurrentIndex:(unsigned long long)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (double)loadingTopOffset;
- (void)setLoadingTopOffset:(double)arg1;
- (void)setRetryImageView:(id)arg1;
- (BOOL)isSubScene;
- (void)setIsSubScene:(BOOL)arg1;
- (id)mediaView;
- (void)setMediaView:(id)arg1;
- (BOOL)originalVideoMute;
- (void)setOriginalVideoMute:(BOOL)arg1;
- (id)customWidgetPlayer;
- (void)setCustomWidgetPlayer:(id)arg1;
- (id)playerView;
- (void)setPlayerView:(id)arg1;
- (id)mjPlayerView;
- (void)setMjPlayerView:(id)arg1;
- (id)thumbImageView;
- (void)setThumbImageView:(id)arg1;
- (void)setPlayerConfigControlView:(id)arg1;
- (id)mediaWrap;
- (id)mediaInfo;
- (void)setMediaInfo:(id)arg1;
- (BOOL)isCurrentPlaying;
- (void)setIsCurrentPlaying:(BOOL)arg1;
- (void)setRetryLabel:(id)arg1;
- (id)likeGes;
- (void)setLikeGes:(id)arg1;
- (BOOL)needsRestThumb;
- (void)setNeedsRestThumb:(BOOL)arg1;
- (BOOL)needsUpdateThumb;
- (void)setNeedsUpdateThumb:(BOOL)arg1;
- (id)currentVideoTid;
- (void)setCurrentVideoTid:(id)arg1;
- (id)feedContentVM;
- (void)setFeedContentVM:(id)arg1;
- (long long)updateTag;
- (void)setUpdateTag:(long long)arg1;
- (BOOL)hasCallStopCallBack;
- (void)setHasCallStopCallBack:(BOOL)arg1;
- (BOOL)isMediaContentReady;
- (void)setIsMediaContentReady:(BOOL)arg1;
- (BOOL)hadInMiniWindow;
- (void)setHadInMiniWindow:(BOOL)arg1;
- (id)extParams;
- (void)setExtParams:(id)arg1;
- (id)progressDragReporter;
- (void)setProgressDragReporter:(id)arg1;
- (void)setVolumeObserver:(id)arg1;
- (id)pauseCaputerImage;
- (void)setPauseCaputerImage:(id)arg1;
- (id)silenceMonitor;
- (void)setSilenceMonitor:(id)arg1;
- (BOOL)isExactingPlayerViewForLandScapeAnimation;
- (void)setIsExactingPlayerViewForLandScapeAnimation:(BOOL)arg1;
- (void).cxx_destruct;
@end

