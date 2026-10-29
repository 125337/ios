@interface WCFinderLandScapeVideoInteractivePlayerView : MMUIView <WCFinderFeedContentMediaActionProtocol, WCFinderLandScapeVideoProgressDisplayViewDelegate, WCFinderLandScapePlayCompleteTipsViewDelegate, UIGestureRecognizerDelegate>
{
    id <WCFinderLandScapeVideoInteractivePlayerViewDelegate> _delegate; // +0x8
    WCFinderSimplePlayerView * _playerView; // +0x10
    WCFinderAnimationLoadingView * _loadingView; // +0x18
    WCFinderLandScapeVideoProgressDisplayView * _progressDisplayView; // +0x20
    WCFinderPanMaskView * _panMaskView; // +0x28
    WCFinderLandScapePlayCompleteTipsView * _playCompleteTipsView; // +0x30
    CAGradientLayer * _gradientLayer; // +0x38
    double _totalTime; // +0x40
    double _panStartPosX; // +0x48
    double _panStartVideoTime; // +0x50
    unsigned long long _panLockState; // +0x58
    WCFinderLandScapePlayerParam * _param; // +0x60
    WCFinderPlaybackSpeedView * _playbackSpeedView; // +0x68
    WCFinderNormalProgressBar * _outerProgressBar; // +0x70
    WCFinderLandScapeVideoInteractivePlayerViewInitParams * _setupParams; // +0x78
    WCFinderFeedContentVM * _contentVM; // +0x80
    WCFinderBlurBubbleView * _eduBlurBubbleView; // +0x88
    CGSize _mediaSize; // +0x90
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 param:(id)arg2;
- (void)setup;
- (void)setupViews;
- (void)setupGesture;
- (void)updateWithDataItem:(id)arg1 param:(id)arg2;
- (void)updateWithContentVM:(id)arg1 param:(id)arg2;
- (void)_triggerAntiAddictCheckLogic;
- (id)getPlayerView;
- (void)playVideo;
- (void)playVideoWithStartTime:(double)arg1 isSilencePlay:(BOOL)arg2;
- (void)stopVideo;
- (void)pauseVideo;
- (void)resumeVideo;
- (BOOL)isPlayingVideo;
- (void)landScapeStateWillChange:(BOOL)arg1;
- (void)updateBulletState;
- (id)getPlayerViewAndClear;
- (void)restorePlayerView:(id)arg1;
- (id)getFinderPlayerView:(BOOL)arg1;
- (void)layoutSubviews;
- (void)showPanMaskView;
- (void)hidePanMaskView;
- (void)changeToolBarHiddenState;
- (void)changeToolBarHiddenState:(BOOL)arg1;
- (void)onTapInProgressView;
- (void)onPanInProgressView:(id)arg1;
- (void)updateProgressWithCurrentTime:(double)arg1 totalTime:(double)arg2 forbidProgressBarMovAni:(BOOL)arg3;
- (void)onLongPressMedia:(id)arg1;
- (void)lightImpact;
- (void)startSpeedPlay;
- (void)stopSpeedPlay;
- (void)stopSpeedPlayTriggerByGesture:(BOOL)arg1;
- (double)viewPlayRate;
- (void)showCompleteTipsWithNextPlayableDataItem:(id)arg1;
- (double)getCurrentPlayVideoTime;
- (void)onVideoShowBufferingView;
- (void)onVideoHiddenBufferingView;
- (void)onVideoUpdatePosition:(double)arg1 videoDuration:(double)arg2 maxPlayVideoTime:(double)arg3;
- (void)contentMediaDidEndPlay:(id)arg1;
- (id)colorsOfHiddenState:(BOOL)arg1;
- (void)tryShowContinuePlayTips:(id)arg1;
- (void)onPlayerStateChanged:(unsigned long long)arg1;
- (void)onSimplePlayerView:(id)arg1 pictureInPictureStateDidChange:(long long)arg2;
- (void)onFinderLandScapeProgressViewHiddenStateChange:(BOOL)arg1;
- (void)onFinderLandScapeProgressViewPlayRateDidChange:(double)arg1;
- (void)onFinderLandScapeProgressViewDidClickPauseBtn:(BOOL)arg1;
- (void)onFinderLandScapeProgressViewDidClickRotateBtn;
- (void)onFinderLandScapeProgressViewDidClickRuturnBtn;
- (void)onFinderLandScapeProgressViewDidClickBulletBtn;
- (void)onFinderLandScapeProgressViewDidClickBulletSwitchBtn:(BOOL)arg1;
- (void)finderLandScapePlayCompleteTipsViewDidClickReplayBtn;
- (void)finderLandScapePlayCompleteTipsViewDidClickReturnBtn;
- (void)finderLandScapePlayCompleteTipsViewDidClickNextBtnWithDataItem:(id)arg1;
- (void)finderLandScapePlayCompleteTipsViewDidCountdownActionOver:(id)arg1;
- (id)finderLandScapePlayCompleteTipsViewLastCompletedDataItem;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)playerView;
- (void)setPlayerView:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)progressDisplayView;
- (void)setProgressDisplayView:(id)arg1;
- (id)panMaskView;
- (void)setPanMaskView:(id)arg1;
- (id)playCompleteTipsView;
- (void)setPlayCompleteTipsView:(id)arg1;
- (id)gradientLayer;
- (void)setGradientLayer:(id)arg1;
- (CGSize)mediaSize;
- (void)setMediaSize:(CGSize)arg1;
- (double)totalTime;
- (void)setTotalTime:(double)arg1;
- (double)panStartPosX;
- (void)setPanStartPosX:(double)arg1;
- (double)panStartVideoTime;
- (void)setPanStartVideoTime:(double)arg1;
- (unsigned long long)panLockState;
- (void)setPanLockState:(unsigned long long)arg1;
- (id)param;
- (void)setParam:(id)arg1;
- (id)playbackSpeedView;
- (void)setPlaybackSpeedView:(id)arg1;
- (id)outerProgressBar;
- (void)setOuterProgressBar:(id)arg1;
- (id)setupParams;
- (void)setSetupParams:(id)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (id)eduBlurBubbleView;
- (void)setEduBlurBubbleView:(id)arg1;
- (void).cxx_destruct;
@end

