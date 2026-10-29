@interface WCCanvasStreamVideoComponent : WCCanvasComponent <WCNetworkMediaCoreDelegate, VoiceComponentExt, WCCanvasImageLoaderObserver>
{
    BOOL _streamVideoThumbReady; // +0x8
    BOOL _isFirstInit; // +0x9
    BOOL _isLastPlaying; // +0xa
    BOOL _shouldPlayAtBegin; // +0xb
    BOOL _turnToPlayForVideoDisplayScaleLargeThanHalf; // +0xc
    MMProgressViewEx * _loadingView; // +0x10
    MMUILabel * _durationLabel; // +0x18
    UIView * _bottomView; // +0x20
    MMUILabel * _currentLabel; // +0x28
    WCNetworkMediaSlider * _sliderView; // +0x30
    UIButton * _playButton; // +0x38
    UIButton * _detailButton; // +0x40
    UIButton * _voiceControlButton; // +0x48
    UIButton * _m_hideBtn; // +0x50
    UIView * _m_maskView; // +0x58
    UIButton * _m_initPlayButton; // +0x60
    UIView * _m_initPlayMaskView; // +0x68
    UIImageView * _m_previewImageView; // +0x70
    WCNetworkMediaCore * _mediaCore; // +0x78
    id _timeObserverToken; // +0x80
    CGSize _videoSize; // +0x88
}
+ (CGSize)calcSizeForCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (void)configureWithCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (void)componentDidFullyAppearInMainScreen:(BOOL)arg1;
- (void)componentWillDisappearInMainScreen:(BOOL)arg1;
- (void)componentAppearFactorChagneInMainScreen;
- (void)componentWillResumeState:(BOOL)arg1;
- (void)componentWillStopState:(BOOL)arg1;
- (void)tryToPauseStreamVideo;
- (void)tryPlayStreamVideo;
- (void)innerPlayStreamVideo;
- (void)setMuted:(BOOL)arg1;
- (void)tryToSetVideoPlayingState:(BOOL)arg1;
- (BOOL)isControlViewsHidden;
- (void)updateControlViewsVisible:(BOOL)arg1;
- (void)refreshCurrentTime;
- (void)updateVideoFrame:(long long)arg1;
- (void)updateSubviewsFrame:(long long)arg1;
- (id)stringFromTimeInterval:(double)arg1;
- (void)retryToLoadVideo;
- (void)componentDidEnterBackground;
- (void)componentWillEnterForeground;
- (BOOL)isInSafeArea;
- (void)onSliderChange:(id)arg1;
- (void)onPlaySliderChange:(id)arg1;
- (void)onPlayClick:(id)arg1;
- (void)onShowDetail:(id)arg1;
- (void)onHideClick;
- (void)onVoiceIconBtnClick:(id)arg1;
- (void)onInitPlayButtonClick;
- (void)showControlViewsAnimated:(BOOL)arg1;
- (void)showControlViewsWithAutoHide;
- (void)showControlViewsWithAutoHideAnimated:(BOOL)arg1;
- (void)hideControlViews;
- (void)hideControlViewsAndTryShowArrowAnimate;
- (void)tryShowDownArrowAnimate;
- (BOOL)shouldAutoPlayStreamVideo;
- (void)onMediaCore:(id)arg1 StateChange:(int)arg2;
- (void)onMediaCore:(id)arg1 CacheDarutionChange:(double)arg2;
- (void)onMediaCore:(id)arg1 DarutionUpdate:(double)arg2;
- (void)onMediaCore:(id)arg1 VideoSizeUpdate:(CGSize)arg2;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)ImageDidFail:(id)arg1;
- (BOOL)shouldForbidDelegateShowArrowDown;
- (BOOL)shouldForbidDelegateShowFloatActionBtn;
- (id)mediaCore;
- (id)m_previewImageView;
- (id)sliderView;
- (id)playButton;
- (id)loadingView;
- (id)bottomView;
- (id)currentLabel;
- (id)durationLabel;
- (id)m_hideBtn;
- (id)m_maskView;
- (id)voiceControlButton;
- (id)m_initPlayButton;
- (id)m_initPlayMaskView;
- (void)onVoiceComponentHasPlayWithSound:(id)arg1;
- (BOOL)hasFloatComponentInfo;
- (void)notifyToShowFloatComponent;
- (void)showFloatJumpView:(BOOL)arg1;
- (void)setLoadingView:(id)arg1;
- (void)setDurationLabel:(id)arg1;
- (void)setBottomView:(id)arg1;
- (void)setCurrentLabel:(id)arg1;
- (void)setSliderView:(id)arg1;
- (void)setPlayButton:(id)arg1;
- (id)detailButton;
- (void)setDetailButton:(id)arg1;
- (void)setVoiceControlButton:(id)arg1;
- (void)setM_hideBtn:(id)arg1;
- (void)setM_maskView:(id)arg1;
- (void)setM_initPlayButton:(id)arg1;
- (void)setM_initPlayMaskView:(id)arg1;
- (void)setM_previewImageView:(id)arg1;
- (void)setMediaCore:(id)arg1;
- (CGSize)videoSize;
- (void)setVideoSize:(CGSize)arg1;
- (BOOL)streamVideoThumbReady;
- (void)setStreamVideoThumbReady:(BOOL)arg1;
- (BOOL)isFirstInit;
- (void)setIsFirstInit:(BOOL)arg1;
- (BOOL)isLastPlaying;
- (void)setIsLastPlaying:(BOOL)arg1;
- (BOOL)shouldPlayAtBegin;
- (void)setShouldPlayAtBegin:(BOOL)arg1;
- (BOOL)turnToPlayForVideoDisplayScaleLargeThanHalf;
- (void)setTurnToPlayForVideoDisplayScaleLargeThanHalf:(BOOL)arg1;
- (id)timeObserverToken;
- (void)setTimeObserverToken:(id)arg1;
- (void).cxx_destruct;
@end

