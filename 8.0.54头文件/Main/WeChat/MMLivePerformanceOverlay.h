@interface MMLivePerformanceOverlay : UIView <MMLivePerformanceViewModelDelegate>
{
    MMLivePerformanceViewModel * _viewModel; // +0x8
    UILabel * _timerTextView; // +0x10
    UITextView * _textView; // +0x18
    MMTimer * _timer; // +0x20
    NSDateFormatter * _dateFormatter; // +0x28
}
- (id)initWithFrame:(CGRect)arg1 viewModel:(id)arg2;
- (void)loadTextView;
- (void)layoutSubviews;
- (void)updatePerformanceContent;
- (void)livePerformanceViewModelDidUpdate:(id)arg1;
- (void)timerTick;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)timerTextView;
- (void)setTimerTextView:(id)arg1;
- (id)textView;
- (void)setTextView:(id)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (id)dateFormatter;
- (void)setDateFormatter:(id)arg1;
- (void).cxx_destruct;
@end

