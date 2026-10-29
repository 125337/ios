@interface WCAdCountdownView : MMUIView
{
    id <WCAdCountdownViewDelegate> _delegate; // +0x8
    NSString * _title; // +0x10
    long long _endTime; // +0x18
    double _maxWidth; // +0x20
    MMUILabel * _titleLabel; // +0x28
    MMUILabel * _dayNumLabel; // +0x30
    MMUILabel * _dayUnitLabel; // +0x38
    MMUILabel * _hourNumLabel; // +0x40
    MMUILabel * _timeSeparator1Label; // +0x48
    MMUILabel * _minuteNumLabel; // +0x50
    MMUILabel * _timeSeparator2Label; // +0x58
    MMUILabel * _secondNumLabel; // +0x60
    MMTimer * _updateTimer; // +0x68
}
- (id)initWithTitle:(id)arg1 endTime:(long long)arg2 maxWidth:(double)arg3;
- (void)dealloc;
- (void)initView;
- (id)makeTitleLabel;
- (id)makeDayNumLabel;
- (id)makeDayUnitLabel;
- (id)makeTimeSeparatorLabel;
- (id)makeTimeNumLabel;
- (void)initTimer;
- (void)startCountdown;
- (void)stopCountdown;
- (void)onTimerUpdateView;
- (void)updateView;
- (void)calcRealTitleWidth:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (long long)endTime;
- (void)setEndTime:(long long)arg1;
- (double)maxWidth;
- (void)setMaxWidth:(double)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)dayNumLabel;
- (void)setDayNumLabel:(id)arg1;
- (id)dayUnitLabel;
- (void)setDayUnitLabel:(id)arg1;
- (id)hourNumLabel;
- (void)setHourNumLabel:(id)arg1;
- (id)timeSeparator1Label;
- (void)setTimeSeparator1Label:(id)arg1;
- (id)minuteNumLabel;
- (void)setMinuteNumLabel:(id)arg1;
- (id)timeSeparator2Label;
- (void)setTimeSeparator2Label:(id)arg1;
- (id)secondNumLabel;
- (void)setSecondNumLabel:(id)arg1;
- (id)updateTimer;
- (void)setUpdateTimer:(id)arg1;
- (void).cxx_destruct;
@end

