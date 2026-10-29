@interface WCStoryHistoryCollectionReusableHeaderView : UICollectionReusableView
{
    MMUILabel * _timeLabel; // +0x8
    MMUILabel * _yearLabel; // +0x10
    NSString * _time; // +0x18
    NSArray * _monthArray; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupView;
- (id)yearLabel;
- (id)timeLabel;
- (id)monthArray;
- (void)setTime:(id)arg1 showYear:(BOOL)arg2;
- (BOOL)isCurrentMonth:(id)arg1;
- (void)setTimeLabel:(id)arg1;
- (void)setYearLabel:(id)arg1;
- (id)time;
- (void)setTime:(id)arg1;
- (void)setMonthArray:(id)arg1;
- (void).cxx_destruct;
@end
