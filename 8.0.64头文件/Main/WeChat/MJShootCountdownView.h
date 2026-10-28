@interface MJShootCountdownView : MMUIView
{
    MMUILabel * _countdownLabel; // +0x8
    NSTimer * _timer; // +0x10
    double _remainingTime; // +0x18
    id /* block */ _cancellationHandler; // +0x20
    id /* block */ _completionHandler; // +0x28
}
+ (double)MJMapCountdownTimerMode:(unsigned long long)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)setupViews;
- (void)showCountdownWithTimerMode:(unsigned long long)arg1 cancellationHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (void)cancelCountdown;
- (void)updateCountdownLabelContent;
- (void)startTimer;
- (void)stopTimer;
- (void)updateCountdown;
- (void)dismissCountdownLabelWithCompletionHandler:(id /* block */)arg1;
- (void)swapCountdownLabelWithOutStageCompletionHandler:(id /* block */)arg1 inStageCompletionHandler:(id /* block */)arg2;
- (id)countdownLabel;
- (void)setCountdownLabel:(id)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (double)remainingTime;
- (void)setRemainingTime:(double)arg1;
- (id /* block */)cancellationHandler;
- (void)setCancellationHandler:(id /* block */)arg1;
- (id /* block */)completionHandler;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void).cxx_destruct;
@end
