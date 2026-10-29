@interface WCStoryFloatTopBar : MMUIView
{
    NSString * _time; // +0x8
    MMUILabel * _timeLabel; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupView;
- (id)timeLabel;
- (void)setTime:(id)arg1;
- (void)updateNewHistoryInfo:(id)arg1;
- (id)time;
- (void)setTimeLabel:(id)arg1;
- (void).cxx_destruct;
@end

