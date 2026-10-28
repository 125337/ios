@interface WCFinderPanMaskView : MMUIView
{
    UILabel * _currTimeLabel; // +0x8
    UILabel * _speLabel; // +0x10
    UILabel * _totalTimeLabel; // +0x18
}
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)setup;
- (void)setupLayout;
- (id)createLabel;
- (void)updateWithCurStr:(id)arg1 totalStr:(id)arg2;
- (void)layoutSubviews;
- (id)currTimeLabel;
- (void)setCurrTimeLabel:(id)arg1;
- (id)speLabel;
- (void)setSpeLabel:(id)arg1;
- (id)totalTimeLabel;
- (void)setTotalTimeLabel:(id)arg1;
- (void).cxx_destruct;
@end
