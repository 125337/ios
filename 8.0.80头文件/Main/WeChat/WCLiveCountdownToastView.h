@interface WCLiveCountdownToastView : UIView
{
    BOOL _centerVertically; // +0x8
    UIColor * _toastBackGroundColor; // +0x10
    id /* block */ _timerTimeOutCallback; // +0x18
    UIView * _toastViewContainer; // +0x20
    UIView * _toastView; // +0x28
    MMTimer * _coundownTimer; // +0x30
    UILabel * _coundownTips; // +0x38
    UIImageView * _completionImageView; // +0x40
    UILabel * _wordingLabel; // +0x48
    NSString * _wordings; // +0x50
    long long _timerCountdown; // +0x58
    long long _countDown; // +0x60
    NSString * _timeoutIcon; // +0x68
    NSString * _timeoutText; // +0x70
}
- (id)initWithFrame:(CGRect)arg1 countTime:(long long)arg2 wordings:(id)arg3 timeoutIcon:(id)arg4 timeoutText:(id)arg5;
- (id)initWithFrame:(CGRect)arg1 countTime:(long long)arg2 wordings:(id)arg3;
- (void)stopCountdownAndRemoveView;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)startCountdownTimer;
- (void)updateCountTimer;
- (void)clearCountdownTimerAndRemoveView:(BOOL)arg1;
- (void)showCompletion;
- (void)setToastBackGroundColor:(id)arg1;
- (void)setCenterVertically:(BOOL)arg1;
- (void)layoutToastView;
- (void)layoutCoundownTips;
- (void)layoutCompletionImageView;
- (void)layoutWordingLabel;
- (void)adjustContentViews;
- (id)toastBackGroundColor;
- (id /* block */)timerTimeOutCallback;
- (void)setTimerTimeOutCallback:(id /* block */)arg1;
- (BOOL)centerVertically;
- (id)toastViewContainer;
- (void)setToastViewContainer:(id)arg1;
- (id)toastView;
- (void)setToastView:(id)arg1;
- (id)coundownTimer;
- (void)setCoundownTimer:(id)arg1;
- (id)coundownTips;
- (void)setCoundownTips:(id)arg1;
- (id)completionImageView;
- (void)setCompletionImageView:(id)arg1;
- (id)wordingLabel;
- (void)setWordingLabel:(id)arg1;
- (id)wordings;
- (void)setWordings:(id)arg1;
- (long long)timerCountdown;
- (void)setTimerCountdown:(long long)arg1;
- (long long)countDown;
- (void)setCountDown:(long long)arg1;
- (id)timeoutIcon;
- (void)setTimeoutIcon:(id)arg1;
- (id)timeoutText;
- (void)setTimeoutText:(id)arg1;
- (void).cxx_destruct;
@end
