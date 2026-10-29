@interface MMLiveCountdownTipsView : UIView
{
    BOOL _isFinish; // +0x8
    UIView * _tipsViewContainer; // +0x10
    UIButton * _cancelButton; // +0x18
    MMTimer * _coundownTimer; // +0x20
    UILabel * _coundownTips; // +0x28
    long long _timerCountdown; // +0x30
    long long _countDown; // +0x38
    id <MMLiveCountdownTipsViewDelegate> _delegate; // +0x40
}
- (id)initWithFrame:(CGRect)arg1 countTime:(long long)arg2 delegate:(id)arg3;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)dealloc;
- (void)startCountdownTimer;
- (void)updateCountTimer;
- (void)clearCountdownTimer;
- (void)layoutCoundownTips;
- (void)layoutCancelButton;
- (void)onCancelLiveActionClicked;
- (BOOL)isFinish;
- (void)setIsFinish:(BOOL)arg1;
- (id)tipsViewContainer;
- (void)setTipsViewContainer:(id)arg1;
- (id)cancelButton;
- (void)setCancelButton:(id)arg1;
- (id)coundownTimer;
- (void)setCoundownTimer:(id)arg1;
- (id)coundownTips;
- (void)setCoundownTips:(id)arg1;
- (long long)timerCountdown;
- (void)setTimerCountdown:(long long)arg1;
- (long long)countDown;
- (void)setCountDown:(long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

