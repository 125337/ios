@interface MMFinderLiveAdvertisementCountdownView : UIView
{
    long long _totalTime; // +0x8
    id /* block */ _countdownCompletion; // +0x10
    MMTimer * _timer; // +0x18
    MMUILabel * _descLabel; // +0x20
    MMUILabel * _timeLabel; // +0x28
    UIView * _backgroundView; // +0x30
    MMUILabel * _trailerLabel; // +0x38
    WCFinderProgressView * _progress; // +0x40
    double _countdownTime; // +0x48
    long long _countdownInteval; // +0x50
    double _timeInterval; // +0x58
}
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1;
- (void)setupUI;
- (void)layoutSubviews;
- (void)refreshTimeLabel:(unsigned int)arg1;
- (id)formatTime:(unsigned int)arg1;
- (void)initTimer:(SEL)arg1;
- (void)startAdvertisementCountdown;
- (void)startTrailerCountdown;
- (void)finishTrailerCountdown;
- (void)countDownTime;
- (void)countDownTrailerTime;
- (void)invalidateTimer;
- (id)descLabel;
- (id)timeLabel;
- (id)backgroundView;
- (id)progress;
- (id)trailerLabel;
- (long long)totalTime;
- (void)setTotalTime:(long long)arg1;
- (id /* block */)countdownCompletion;
- (void)setCountdownCompletion:(id /* block */)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (void)setDescLabel:(id)arg1;
- (void)setTimeLabel:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setTrailerLabel:(id)arg1;
- (void)setProgress:(id)arg1;
- (double)countdownTime;
- (void)setCountdownTime:(double)arg1;
- (long long)countdownInteval;
- (void)setCountdownInteval:(long long)arg1;
- (double)timeInterval;
- (void)setTimeInterval:(double)arg1;
- (void).cxx_destruct;
@end

