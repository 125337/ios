@interface WCFinderFeedDetailVideoPlayerView : UIView <WCFinderFeedDetailVideoProgressViewDelegate, WCFinderFeedContentMediaActionProtocol, UIGestureRecognizerDelegate>
{
    BOOL _fullScreenState; // +0x8
    id <WCFinderFeedDetailVideoPlayerViewDelegate> _delegate; // +0x10
    WCFinderSimplePlayerView * _playerView; // +0x18
    WCFinderAnimationLoadingView * _loadingView; // +0x20
    WCFinderFeedDetailVideoProgressView * _progressView; // +0x28
    UIView * _progressTintBarBG; // +0x30
    UIView * _progressTintBar; // +0x38
    WCFinderPanMaskView * _panMaskView; // +0x40
    WCFinderGradientView * _gradientView; // +0x48
    double _totalTime; // +0x50
    double _panStartPosX; // +0x58
    double _panStartVideoTime; // +0x60
    unsigned long long _panningDirection; // +0x68
    WCFinderFeedContentVM * _contentVM; // +0x70
    CGSize _mediaSize; // +0x78
    CGRect _layoutBounds; // +0x88
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setup;
- (void)setupViews;
- (void)setupGestures;
- (id)gradientColorsWithHiddenState:(BOOL)arg1;
- (void)layoutViews;
- (void)layoutSubviews;
- (BOOL)currentSceneLandscape;
- (void)updateWithContentVM:(id)arg1;
- (void)updateFullScreenState:(BOOL)arg1;
- (id)getPlayerView;
- (void)playVideoWithStartTime:(double)arg1;
- (void)seekToTime:(double)arg1;
- (void)setPlayRate:(double)arg1;
- (void)stopVideo;
- (void)pauseVideoWithPauseButton:(BOOL)arg1;
- (void)resumeVideo;
- (BOOL)isPlayingVideo;
- (void)updateBulletState;
- (void)setProgressHidden:(BOOL)arg1 autoHide:(BOOL)arg2;
- (void)showProgressPanelIfNeeded;
- (BOOL)pointAtPanableArea:(CGPoint)arg1;
- (void)onTapInProgressView;
- (void)onPanInProgressView:(id)arg1;
- (void)resumeVideoIfNeededAfterPan;
- (void)updateProgressWithCurrentTime:(double)arg1 totalTime:(double)arg2 withAnimation:(BOOL)arg3;
- (void)onVideoShowBufferingView;
- (void)onVideoHiddenBufferingView;
- (void)onVideoUpdatePosition:(double)arg1 videoDuration:(double)arg2 maxPlayVideoTime:(double)arg3;
- (void)contentMediaDidEndPlay:(id)arg1;
- (void)onFinderDetailProgressViewClickPlayRateButton;
- (void)onFinderDetailProgressViewClickPauseBtn:(BOOL)arg1;
- (void)onFinderDetailProgressViewClickFullScreenBtn;
- (void)onFinderDetailProgressViewClickBulletBtn;
- (void)onFinderDetailProgressViewClickBulletInputBtn;
- (void)onFinderDetailProgressViewClickBulletSwitchBtn:(BOOL)arg1;
- (void)onFinderDetailProgressViewExitIPhoneLandscape;
- (void)onFinderDetailProgressViewExitFullScreen;
- (void)onFinderDetailProgressViewHiddenStateChange:(BOOL)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)playerView;
- (void)setPlayerView:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)progressView;
- (void)setProgressView:(id)arg1;
- (id)progressTintBarBG;
- (void)setProgressTintBarBG:(id)arg1;
- (id)progressTintBar;
- (void)setProgressTintBar:(id)arg1;
- (id)panMaskView;
- (void)setPanMaskView:(id)arg1;
- (id)gradientView;
- (void)setGradientView:(id)arg1;
- (CGSize)mediaSize;
- (void)setMediaSize:(CGSize)arg1;
- (double)totalTime;
- (void)setTotalTime:(double)arg1;
- (double)panStartPosX;
- (void)setPanStartPosX:(double)arg1;
- (double)panStartVideoTime;
- (void)setPanStartVideoTime:(double)arg1;
- (unsigned long long)panningDirection;
- (void)setPanningDirection:(unsigned long long)arg1;
- (BOOL)fullScreenState;
- (void)setFullScreenState:(BOOL)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (CGRect)layoutBounds;
- (void)setLayoutBounds:(CGRect)arg1;
- (void).cxx_destruct;
@end

