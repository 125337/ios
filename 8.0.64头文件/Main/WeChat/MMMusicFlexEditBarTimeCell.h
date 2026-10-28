@interface MMMusicFlexEditBarTimeCell : UICollectionViewCell
{
    UIView * _dotView; // +0x8
    UILabel * _startTimeLabel; // +0x10
    UILabel * _endTimeLabel; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initView;
- (id)startTimeLabel;
- (id)endTimeLabel;
- (void)layoutSubviews;
- (void)setStartTimeSec:(double)arg1 endTimeSec:(double)arg2;
- (void)setStartTimeLabel:(id)arg1;
- (void)setEndTimeLabel:(id)arg1;
- (void).cxx_destruct;
@end
