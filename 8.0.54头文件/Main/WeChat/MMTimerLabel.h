@interface MMTimerLabel : UILabel
{
    long long _second; // +0x8
    long long _minute; // +0x10
    long long _hour; // +0x18
    BOOL _isShowHourDefault; // +0x20
    BOOL _isActive; // +0x21
    BOOL _isCountDown; // +0x22
    BOOL _isInMinutesMode; // +0x23
    id /* block */ _countDownCompleteCallback; // +0x28
    id /* block */ _countDownRemainTimeCallback; // +0x30
    id /* block */ _handleTextBlock; // +0x38
}
- (void)updateLabel;
- (void)increaseTime;
- (void)setIsShowHourDefault:(BOOL)arg1;
- (void)reset;
- (void)startTimer;
- (void)stopTimer;
- (void)pauseTimer;
- (BOOL)isActive;
- (unsigned int)currentTime;
- (void)dealloc;
- (void)countDownFromHour:(long long)arg1 miniute:(long long)arg2 second:(long long)arg3 complte:(id /* block */)arg4 remain:(id /* block */)arg5;
- (long long)second;
- (void)setSecond:(long long)arg1;
- (long long)minute;
- (void)setMinute:(long long)arg1;
- (long long)hour;
- (void)setHour:(long long)arg1;
- (BOOL)isInMinutesMode;
- (void)setIsInMinutesMode:(BOOL)arg1;
- (id /* block */)countDownCompleteCallback;
- (void)setCountDownCompleteCallback:(id /* block */)arg1;
- (id /* block */)countDownRemainTimeCallback;
- (void)setCountDownRemainTimeCallback:(id /* block */)arg1;
- (id /* block */)handleTextBlock;
- (void)setHandleTextBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

