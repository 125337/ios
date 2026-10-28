@interface WCFinderSimplePlayerView : MMUIView <WCFinderPlayerControlViewDelegate, WCFinderFeedImageViewProtocol, WCPlayerDownloaderExt, UIGestureRecognizerDelegate>
{
    BOOL _canPlayMegaVideo; // +0x8
    BOOL _bDisableAudioModule; // +0x9
    BOOL _enableScalingInfo; // +0xa
    BOOL _bLoop; // +0xb
    BOOL _needsRestThumb; // +0xc
    BOOL _disableProgressBar; // +0xd
    id <WCFinderFeedContentMediaActionProtocol> _delegate; // +0x10
    WCFinderFeedImageView * _thumbImageView; // +0x18
    WCPlayerView * _playerView; // +0x20
    WCFinderDataItem * _dataItem; // +0x28
    WCFinderSimplePlayerInitParam * _params; // +0x30
    WCFinderPlayerControlView * _playerConfigControlView; // +0x38
    WCFinderFeedContentVM * _contentVM; // +0x40
    WCFinderFeedMediaWrap * _mediaWrap; // +0x48
    WCFinderMediaInfo * _mediaInfo; // +0x50
    UIImageView * _retryImageView; // +0x58
    UILabel * _retryLabel; // +0x60
    NSString * _currentVideoTid; // +0x68
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 params:(id)arg2;
- (void)pause;
- (void)resume;
- (BOOL)isCurrentPlaying;
- (void)setup;
- (void)changeDataSourceWithContentVM:(id)arg1;
- (void)changeDataSource:(id)arg1;
- (long long)getThumbMediaType;
- (id)playerConfigControlView;
- (id)generateConfig;
- (void)initVideoReloadAction;
- (void)resetVideoReloadHidden:(BOOL)arg1;
- (CGSize)contentSizeForMediaInfo:(id)arg1;
- (void)updateImage:(id)arg1;
- (void)play;
- (void)playWithParams:(id)arg1;
- (void)pauseVideoIfSupport:(BOOL)arg1;
- (id /* block */)fakeStopPlay;
- (void)stopPlay;
- (void)stopVideoIfSupport;
- (void)progressBarValueChange:(double)arg1 playVideo:(BOOL)arg2 pauseVideo:(BOOL)arg3 state:(WCFinderPlayerControlProgressState)arg4;
- (id)getCurrendThumb;
- (void)changeVideoSilenceStatue:(BOOL)arg1;
- (void)changeFeedImageViewBackgroundColor:(id)arg1;
- (void)pauseVideoIfSupport;
- (void)setPlayRate:(double)arg1;
- (void)onSliderScrubbingDidStart;
- (void)onSliderScrubbingDidEndAtTime:(double)arg1;
- (double)getCurrentPlayVideoTime;
- (double)getPlayVideoTotalTime;
- (double)getActualPlayingTimeInMs;
- (double)getMaxPlayTime;
- (void)resetCurrentVideoThumb;
- (void)queryCacheWithCompletion:(id /* block */)arg1;
- (CGSize)mediaSize;
- (void)onPlayToEnd;
- (void)onVideoPlay;
- (void)onShowBufferingView;
- (void)onHiddenBufferingView;
- (void)onVideoSeekActionWithDirection:(BOOL)arg1;
- (void)finderPlayerControllerViewUpdateVideoCurrentTime:(double)arg1 videoDuration:(double)arg2 maxPlayVideoTime:(double)arg3;
- (void)updateStreamingBufferLength;
- (void)hideLoadingView;
- (void)onFinderThumbDownloadFail:(id)arg1;
- (void)onVideoFrameOut:(id)arg1;
- (void)onVideoPrepareToPlay:(id)arg1;
- (void)onPlayerStateChanged:(unsigned long long)arg1;
- (void)onPlayerMuteByAudioModuleInterruptionBegin:(id)arg1;
- (void)onPlayerUnMuteByAudioModuleInterruptionEnd:(id)arg1;
- (void)onPlayerView:(id)arg1 pictureInPictureStateDidChange:(long long)arg2;
- (void)onPlayerRestoreUserInterfaceForPictureInPictureStop:(id)arg1;
- (void)loadingRetry;
- (long long)playerContentMode;
- (void)OnPlayerMoovReady:(id)arg1;
- (void)OnCdnDownloadSuccess:(id)arg1;
- (void)OnPlayerDownloadProgress:(id)arg1 finish:(unsigned long long)arg2 total:(unsigned long long)arg3;
- (void)OnCdnDownloadError:(id)arg1;
- (BOOL)videoIsOnPlayState;
- (void)refreshImageIfFromShare;
- (void)unifiedURLIfNeeded:(id)arg1;
- (void)setThumbnailHidden:(BOOL)arg1;
- (id)getPlayerViewAndClear;
- (void)updateMetaModelWhenStop;
- (unsigned long long)getPlayerState;
- (void)restorePlayerView:(id)arg1;
- (id /* block */)fakeStop;
- (void)didMoveToWindow;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)canPlayMegaVideo;
- (void)setCanPlayMegaVideo:(BOOL)arg1;
- (BOOL)bDisableAudioModule;
- (void)setBDisableAudioModule:(BOOL)arg1;
- (BOOL)enableScalingInfo;
- (void)setEnableScalingInfo:(BOOL)arg1;
- (BOOL)bLoop;
- (void)setBLoop:(BOOL)arg1;
- (id)thumbImageView;
- (void)setThumbImageView:(id)arg1;
- (id)playerView;
- (void)setPlayerView:(id)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (void)setPlayerConfigControlView:(id)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (id)mediaWrap;
- (void)setMediaWrap:(id)arg1;
- (id)mediaInfo;
- (void)setMediaInfo:(id)arg1;
- (id)retryImageView;
- (void)setRetryImageView:(id)arg1;
- (id)retryLabel;
- (void)setRetryLabel:(id)arg1;
- (BOOL)needsRestThumb;
- (void)setNeedsRestThumb:(BOOL)arg1;
- (id)currentVideoTid;
- (void)setCurrentVideoTid:(id)arg1;
- (BOOL)disableProgressBar;
- (void)setDisableProgressBar:(BOOL)arg1;
- (void).cxx_destruct;
@end
