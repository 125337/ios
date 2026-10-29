@interface MMFinderLiveReplaySeekTimeView : UIView
{
    BOOL _showHour; // +0x8
    unsigned int _currentTime; // +0xc
    unsigned int _totalTime; // +0x10
    MMUILabel * _currentTimeLabel; // +0x18
    MMUILabel * _totalTimeLabel; // +0x20
    MMUILabel * _slashLabel; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setCurrentTime:(unsigned int)arg1;
- (void)setTotalTime:(unsigned int)arg1;
- (void)layoutSubviews;
- (void)initializeComponents;
- (id)createLabel;
- (void)updateCurrentTimeLabel;
- (void)updateTotalTimeLabel;
- (id)formattedStringOfTimeInSecond:(unsigned int)arg1;
- (unsigned int)currentTime;
- (unsigned int)totalTime;
- (id)currentTimeLabel;
- (void)setCurrentTimeLabel:(id)arg1;
- (id)totalTimeLabel;
- (void)setTotalTimeLabel:(id)arg1;
- (id)slashLabel;
- (void)setSlashLabel:(id)arg1;
- (BOOL)showHour;
- (void)setShowHour:(BOOL)arg1;
- (void).cxx_destruct;
@end
