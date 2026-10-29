@interface WCPlayerConfigFullScreenProgressBar : WCPlayerFullScreenProgressBarBase
{
    BOOL _isPlaying; // +0x8
    BOOL _isMinimized; // +0x9
    BOOL _isStartTimeSetupFinish; // +0xa
    UIView * _containerView; // +0x10
    MMUILabel * _currentTimeLabel; // +0x18
    MMUILabel * _totalTimeLabel; // +0x20
    WXHighlightableVideoSlider * _videoSlider; // +0x28
    MMTimer * _progressUpdateTimer; // +0x30
    double _totalTime; // +0x38
    unsigned long long _updateTimerCount; // +0x40
    WCPlayerConfigFullScreenProgressBarParams * _params; // +0x48
}
- (id)initWithSuper:(id)arg1 totalTime:(double)arg2 delegate:(id)arg3 params:(id)arg4;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)setHidden:(BOOL)arg1;
- (void)onClickAtBackgroud;
- (void)onFocused:(BOOL)arg1;
- (void)updateCurrentTimeLabel:(double)arg1;
- (void)reloadSliderStartTime;
- (void)updateTotalTime:(double)arg1;
- (float)currentProgress;
- (void)onPlayStart;
- (void)onPlayStop;
- (void)onStopButtonClick;
- (void)onPlayButtonClick;
- (void)onSliderValueChanged;
- (void)onSliderScrubbBegin;
- (void)onSliderScrubbEnd;
- (void)resetSliderToNMStatus;
- (void)resetSliderToHLStatus;
- (void)updateProgress;
- (void)_updateProgressWithoutAnimation;
- (void)resetPlayRateButtonIfNeed;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)currentTimeLabel;
- (void)setCurrentTimeLabel:(id)arg1;
- (id)totalTimeLabel;
- (void)setTotalTimeLabel:(id)arg1;
- (id)videoSlider;
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
- (unsigned long long)updateTimerCount;
- (void)setUpdateTimerCount:(unsigned long long)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (void).cxx_destruct;
@end

