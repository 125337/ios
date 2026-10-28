@interface WCFinderLiveReplayProgressBar : UIView
{
    BOOL _isPlaying; // +0x8
    BOOL _hideOperationButtonInPortrait; // +0x9
    BOOL _isSliderScrubbing; // +0xa
    unsigned int _timeLimit; // +0xc
    unsigned int _currentTime; // +0x10
    unsigned int _totalUIntTime; // +0x14
    unsigned int _displayTotalTime; // +0x18
    id <WCFinderLiveReplayProgressBarDelegate> _m_delegate; // +0x20
    id /* block */ _sliderBarFrameChangeCallback; // +0x28
    id /* block */ _greateTimeDotExposeCallback; // +0x30
    MMUIButton * _operateButton; // +0x38
    MMUILabel * _currentTimeLabel; // +0x40
    MMUILabel * _totalTimeLabel; // +0x48
    WCFinderLiveReplaySliderBar * _sliderBar; // +0x50
    NSTimer * _progressUpdateTimer; // +0x58
    double _totalTime; // +0x60
    long long _timeDisplayFormat; // +0x68
}
+ (double)preferHeight;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutOperateButton;
- (BOOL)needShowOperateButton;
- (void)updateOperateButton;
- (void)layoutCurrentTimeLabel;
- (void)updateCurrentTimeLabelOrigin;
- (void)layoutTotalTimeLabel;
- (void)updateTotalTimeLabelOrigin;
- (void)layoutSliderBar;
- (void)updateSliderBarOrigin;
- (void)hideControlWidgets;
- (void)showControlWidgets;
- (void)updateCurrentTimeLabel:(double)arg1;
- (void)updateProgress;
- (void)updateTimeLabelSize:(CGSize)arg1;
- (void)onSliderScrubbingChanged;
- (void)onStopButtonClick;
- (void)onPlayButtonClick;
- (void)onSliderChange;
- (void)onSliderScrubbBegin:(unsigned long long)arg1;
- (void)onSliderScrubbEnd:(unsigned long long)arg1;
- (void)setTimeLimit:(unsigned int)arg1;
- (unsigned int)totalDisplayUIntTime;
- (BOOL)enableShowControlWidgets;
- (void)setHideOperationButtonInPortrait:(BOOL)arg1;
- (void)updateTotalTime:(double)arg1;
- (void)updateDisplayTotalTime:(unsigned int)arg1;
- (void)updateTotalTimeLabel:(unsigned long long)arg1;
- (void)updateCurrentTime:(unsigned int)arg1;
- (void)onPlayStart;
- (void)onPlayStop;
- (void)clearSrc;
- (void)beginExternalProgressManipulation;
- (void)endExternalProgressManipulation;
- (double)timeForValue:(float)arg1;
- (float)valueForTime:(double)arg1;
- (double)getPreviewViewCenterXWithTime:(double)arg1;
- (void)updateGreatTimeList:(id)arg1;
- (void)invokePlayButtonClick;
- (void)invokeStopButtonClick;
- (void)reportForGreateTimeDotExpose;
- (unsigned int)timeLimit;
- (unsigned int)currentTime;
- (void)setCurrentTime:(unsigned int)arg1;
- (unsigned int)totalUIntTime;
- (void)setTotalUIntTime:(unsigned int)arg1;
- (BOOL)isPlaying;
- (void)setIsPlaying:(BOOL)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id /* block */)sliderBarFrameChangeCallback;
- (void)setSliderBarFrameChangeCallback:(id /* block */)arg1;
- (id /* block */)greateTimeDotExposeCallback;
- (void)setGreateTimeDotExposeCallback:(id /* block */)arg1;
- (BOOL)hideOperationButtonInPortrait;
- (id)operateButton;
- (void)setOperateButton:(id)arg1;
- (id)currentTimeLabel;
- (void)setCurrentTimeLabel:(id)arg1;
- (id)totalTimeLabel;
- (void)setTotalTimeLabel:(id)arg1;
- (id)sliderBar;
- (void)setSliderBar:(id)arg1;
- (id)progressUpdateTimer;
- (void)setProgressUpdateTimer:(id)arg1;
- (BOOL)isSliderScrubbing;
- (void)setIsSliderScrubbing:(BOOL)arg1;
- (double)totalTime;
- (void)setTotalTime:(double)arg1;
- (unsigned int)displayTotalTime;
- (void)setDisplayTotalTime:(unsigned int)arg1;
- (long long)timeDisplayFormat;
- (void)setTimeDisplayFormat:(long long)arg1;
- (void).cxx_destruct;
@end
