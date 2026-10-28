@interface WCPlayerConfigFullScreenProgressBarWithShrink : WCPlayerFullScreenProgressBarBase <UIGestureRecognizerDelegate>
{
    BOOL _isPlaying; // +0x8
    BOOL _isMinimized; // +0x9
    BOOL _isStartTimeSetupFinish; // +0xa
    BOOL _hasGlowEffectplayRateButton; // +0xb
    BOOL _isLongPressing; // +0xc
    BOOL _isExpandingProgress; // +0xd
    int _curPlayRateIndex; // +0x10
    UIView * _containerView; // +0x18
    MMUILabel * _currentTimeLabel; // +0x20
    UIImageView * _separatorLine; // +0x28
    MMUILabel * _totalTimeLabel; // +0x30
    WXVideoSlider * _videoSlider; // +0x38
    MMTimer * _progressUpdateTimer; // +0x40
    double _totalTime; // +0x48
    double _currentTime; // +0x50
    NSMutableArray * _customizeAccessibilityElements; // +0x58
    NSMutableArray * _customizeAccessibilityElementsWithExpandButton; // +0x60
    MMUIButton * _playRateButton; // +0x68
    NSArray * _supportedPlayRateArr; // +0x70
    MMUIButton * _playButton; // +0x78
    MMUIButton * _progressShrinkButton; // +0x80
    MMUIButton * _progressExpandButton; // +0x88
    UIView * _progressBgView; // +0x90
    UIView * _rectangleView; // +0x98
    UIView * _sliderContainerView; // +0xa0
    WCPlayerConfigFullScreenProgressBarParams * _params; // +0xa8
}
- (id)initWithSuper:(id)arg1 totalTime:(double)arg2 delegate:(id)arg3 params:(id)arg4;
- (void)initSubviews;
- (id)progressBgView;
- (id)rectangleView;
- (id)containerView;
- (id)sliderContainerView;
- (id)videoSlider;
- (id)currentTimeLabel;
- (id)separatorLine;
- (id)totalTimeLabel;
- (id)playRateButton;
- (id)playButton;
- (void)onClickPlayButton;
- (id)progressExpandButton;
- (void)onClickProgressExpandButton;
- (id)progressShrinkButton;
- (void)updateExpandingProgress:(BOOL)arg1;
- (void)onProgressShrinkButtonClicked;
- (void)isExpandingProgressWithAnimation:(BOOL)arg1;
- (BOOL)shouldPlayingScrubbingEndAtTime;
- (BOOL)isVideoPlaying;
- (id)accessibilityElements;
- (void)addPlayRateButtonGlowEffect;
- (float)getSliderHeight:(unsigned long long)arg1;
- (id)getSliderDotImage:(unsigned long long)arg1;
- (void)setProgressBarType:(unsigned long long)arg1;
- (void)updatePlayButtonImgColor:(BOOL)arg1;
- (void)updateShrinkBtnImgColor:(BOOL)arg1;
- (void)configureSliderDragingSizeAndLayout;
- (void)configureSliderNormalSizeAndLayout;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (double)sliderBottomPos;
- (void)layoutSubviews;
- (void)setHidden:(BOOL)arg1;
- (void)updateVideoSliderAccessibilityabel:(double)arg1 totalTime:(double)arg2;
- (id)formatStrOfTime:(double)arg1;
- (void)updateCurrentTimeLabel:(double)arg1;
- (void)reloadSliderStartTime;
- (void)updateTotalTime:(double)arg1;
- (float)currentProgress;
- (void)onPlayStart;
- (void)onPlayStop;
- (void)dealloc;
- (void)playRatebuttonButtonTapped:(id)arg1;
- (void)resetPlayRateButtonIfNeed;
- (void)resetPlayRate;
- (void)playRatebuttonHighlighted:(id)arg1;
- (void)onSliderValueChanged;
- (void)onSliderScrubbBegin;
- (void)onSliderScrubbEnd;
- (void)onLongPressBegin;
- (void)onLongPressEnd;
- (void)resetSliderToNMStatus;
- (void)resetSliderToHLStatus;
- (void)updateProgress;
- (void)_updateProgressWithoutAnimation;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)handlePanGesture:(id)arg1;
- (void)handleLongPressGesture:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)setContainerView:(id)arg1;
- (void)setCurrentTimeLabel:(id)arg1;
- (void)setSeparatorLine:(id)arg1;
- (void)setTotalTimeLabel:(id)arg1;
- (void)setVideoSlider:(id)arg1;
- (id)progressUpdateTimer;
- (void)setProgressUpdateTimer:(id)arg1;
- (BOOL)isPlaying;
- (void)setIsPlaying:(BOOL)arg1;
- (BOOL)isMinimized;
- (void)setIsMinimized:(BOOL)arg1;
- (BOOL)isStartTimeSetupFinish;
- (void)setIsStartTimeSetupFinish:(BOOL)arg1;
- (double)totalTime;
- (void)setTotalTime:(double)arg1;
- (double)currentTime;
- (void)setCurrentTime:(double)arg1;
- (BOOL)hasGlowEffectplayRateButton;
- (id)customizeAccessibilityElements;
- (void)setCustomizeAccessibilityElements:(id)arg1;
- (id)customizeAccessibilityElementsWithExpandButton;
- (void)setCustomizeAccessibilityElementsWithExpandButton:(id)arg1;
- (BOOL)isLongPressing;
- (void)setIsLongPressing:(BOOL)arg1;
- (void)setPlayRateButton:(id)arg1;
- (id)supportedPlayRateArr;
- (void)setSupportedPlayRateArr:(id)arg1;
- (int)curPlayRateIndex;
- (void)setCurPlayRateIndex:(int)arg1;
- (void)setPlayButton:(id)arg1;
- (void)setProgressShrinkButton:(id)arg1;
- (void)setProgressExpandButton:(id)arg1;
- (void)setProgressBgView:(id)arg1;
- (BOOL)isExpandingProgress;
- (void)setIsExpandingProgress:(BOOL)arg1;
- (void)setRectangleView:(id)arg1;
- (void)setSliderContainerView:(id)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (void).cxx_destruct;
@end
