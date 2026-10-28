@interface WCFinderTimeLabel : MMUIView
{
    UILabel * _currentTimeLabel; // +0x8
    UILabel * _splitLabel; // +0x10
    UILabel * _totalTimeLabel; // +0x18
}
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)setup;
- (void)setupSubViews;
- (id)genLabel;
- (void)updateTotalTime:(double)arg1;
- (void)updateCurTime:(double)arg1;
- (void)layoutView;
- (id)currentTimeLabel;
- (void)setCurrentTimeLabel:(id)arg1;
- (id)splitLabel;
- (void)setSplitLabel:(id)arg1;
- (id)totalTimeLabel;
- (void)setTotalTimeLabel:(id)arg1;
- (void).cxx_destruct;
@end
