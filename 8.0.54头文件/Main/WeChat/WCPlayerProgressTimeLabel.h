@interface WCPlayerProgressTimeLabel : MMUIView
{
    MMUILabel * _currentTimeLabel; // +0x8
    MMUILabel * _splitLabel; // +0x10
    MMUILabel * _totalTimeLabel; // +0x18
}
- (id)init;
- (void)initSubviews;
- (id)currentTimeLabel;
- (id)splitLabel;
- (id)totalTimeLabel;
- (id)genTimeLabelFontOfSize:(double)arg1;
- (void)updateTotalTime:(double)arg1;
- (void)updateCurrentTime:(double)arg1;
- (id)formatStrOfTime:(double)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (void)setCurrentTimeLabel:(id)arg1;
- (void)setSplitLabel:(id)arg1;
- (void)setTotalTimeLabel:(id)arg1;
- (void).cxx_destruct;
@end

