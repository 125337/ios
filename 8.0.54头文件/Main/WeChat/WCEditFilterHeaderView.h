@interface WCEditFilterHeaderView : MMUIView
{
    int _lastSliderValue; // +0x8
    id <WCEditFilterHeaderViewDelegate> _delegate; // +0x10
    UISlider * _slider; // +0x18
    UILabel * _titleLabel; // +0x20
    UILabel * _sliderValueLabel; // +0x28
    MMTimer * _throttle; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupUI;
- (id)titleLabel;
- (id)sliderValueLabel;
- (id)slider;
- (void)onsliderValueDidChange;
- (void)onSliderScrubbBegin;
- (void)onSliderScrubbEnd;
- (id)getDotImage:(id)arg1 withSize:(CGSize)arg2;
- (void)changeSliderValue:(int)arg1;
- (void)changeSliderValueProgress;
- (void)sendSliderValueDidChangeNotify;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setSlider:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setSliderValueLabel:(id)arg1;
- (id)throttle;
- (void)setThrottle:(id)arg1;
- (int)lastSliderValue;
- (void)setLastSliderValue:(int)arg1;
- (void).cxx_destruct;
@end

