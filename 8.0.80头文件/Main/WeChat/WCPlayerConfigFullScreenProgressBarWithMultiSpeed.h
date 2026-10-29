@interface WCPlayerConfigFullScreenProgressBarWithMultiSpeed : WCPlayerFullScreenProgressBarBase
{
    BOOL _isPlaying; // +0x8
    BOOL _isMinimized; // +0x9
    BOOL _isStartTimeSetupFinish; // +0xa
    BOOL _hasGlowEffectplayRateButton; // +0xb
    int _curPlayRateIndex; // +0xc
    UIView * _containerView; // +0x10
    MMUILabel * _currentTimeLabel; // +0x18
    UIImageView * _separatorLine; // +0x20
    MMUILabel * _totalTimeLabel; // +0x28
    WXVideoSlider * _videoSlider; // +0x30
    MMTimer * _progressUpdateTimer; // +0x38
    double _totalTime; // +0x40
    NSMutableArray * _customizeAccessibilityElements; // +0x48
    MMUIButton * _playRateButton; // +0x50
    NSArray * _supportedPlayRateArr; // +0x58
    WCPlayerConfigFullScreenProgressBarParams * _params; // +0x60
}
- (id)initWithSuper:(id)arg1 totalTime:(double)arg2 delegate:(id)arg3 params:(id)arg4;
- (void)initSubviews;
- (id)containerView;
- (id)videoSlider;
- (id)currentTimeLabel;
- (id)separatorLine;
- (id)totalTimeLabel;
- (id)playRateButton;
- (id)accessibilityElements;
- (void)addPlayRateButtonGlowEffect;
- (float)getSliderHeight:(unsigned long long)arg1;
- (id)getSliderDotImage:(unsigned long long)arg1;
- (void)setProgressBarType:(unsigned long long)arg1;
- (void)configureSliderDragingSizeAndLayout;
- (void)configureSliderNormalSizeAndLayout;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (void)setHidden:(BOOL)arg1;
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
- (void)resetSliderToNMStatus;
- (void)resetSliderToHLStatus;
- (void)updateProgress;
- (void)_updateProgressWithoutAnimation;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)handlePanGesture:(id)arg1;
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
- (BOOL)hasGlowEffectplayRateButton;
- (id)customizeAccessibilityElements;
- (void)setCustomizeAccessibilityElements:(id)arg1;
- (void)setPlayRateButton:(id)arg1;
- (id)supportedPlayRateArr;
- (void)setSupportedPlayRateArr:(id)arg1;
- (int)curPlayRateIndex;
- (void)setCurPlayRateIndex:(int)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (void).cxx_destruct;
@end
