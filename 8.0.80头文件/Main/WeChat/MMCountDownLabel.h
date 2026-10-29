@interface MMCountDownLabel : UIView
{
    MMBaseTimeLabel * _baseTimeLabel; // +0x8
    NSDate * _targetTime; // +0x10
    id /* block */ _arriveTargetTime; // +0x18
}
- (void)updateTime;
- (id)initWithFrame:(CGRect)arg1;
- (CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)setTargetTime:(id)arg1;
- (id)baseTimeLabel;
- (id)targetTime;
- (id /* block */)arriveTargetTime;
- (void)setArriveTargetTime:(id /* block */)arg1;
- (void).cxx_destruct;
@end
