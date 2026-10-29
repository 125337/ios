@interface WCCanvasMusicProgressBar : MMUIView
{
    BOOL _isSliderScrubbing; // +0x8
    id <WCCanvasMusicProgressBarDelegate> _delegate; // +0x10
    UIColor * _labelColor; // +0x18
    UIColor * _fgColor; // +0x20
    UIColor * _bgColor; // +0x28
    MMUILabel * _currentTimeLabel; // +0x30
    MMUILabel * _durationLabel; // +0x38
    WXVideoSlider * _slider; // +0x40
}
- (id)initWithFrame:(CGRect)arg1 labelColor:(id)arg2 fgColor:(id)arg3 bgColor:(id)arg4;
- (void)initViews;
- (id)createTimeLabel;
- (void)layoutSubviews;
- (void)updateDuration:(double)arg1;
- (void)updateCurrentTime:(double)arg1;
- (void)innerUpdateCurrentTime:(double)arg1;
- (id)genTimeText:(double)arg1;
- (void)onSliderChange;
- (void)onSliderScrubBegin;
- (void)onSliderScrubEnd;
- (BOOL)canSlider;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)labelColor;
- (void)setLabelColor:(id)arg1;
- (id)fgColor;
- (void)setFgColor:(id)arg1;
- (id)bgColor;
- (void)setBgColor:(id)arg1;
- (id)currentTimeLabel;
- (void)setCurrentTimeLabel:(id)arg1;
- (id)durationLabel;
- (void)setDurationLabel:(id)arg1;
- (id)slider;
- (void)setSlider:(id)arg1;
- (BOOL)isSliderScrubbing;
- (void)setIsSliderScrubbing:(BOOL)arg1;
- (void).cxx_destruct;
@end

