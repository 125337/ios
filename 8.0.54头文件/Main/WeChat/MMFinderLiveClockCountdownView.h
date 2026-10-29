@interface MMFinderLiveClockCountdownView : UIView
{
    UIImageView * _clockImageView; // +0x8
    UILabel * _timeLabel; // +0x10
}
- (id)init;
- (id)initWithFixedHeight:(double)arg1 font:(id)arg2;
- (void)initViewsWithFixedHeight:(double)arg1 font:(id)arg2;
- (void)updateWithRemainTimeInSeconds:(unsigned long long)arg1;
- (void)layoutSubviews;
- (id)clockImageView;
- (void)setClockImageView:(id)arg1;
- (id)timeLabel;
- (void)setTimeLabel:(id)arg1;
- (void).cxx_destruct;
@end

