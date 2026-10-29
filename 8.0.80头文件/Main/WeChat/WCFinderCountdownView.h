@interface WCFinderCountdownView : UIView
{
    id <WCFinderCountdownViewDelegate> _delegate; // +0x8
    MMTimer * _countdownTimer; // +0x10
    UILabel * _countdownTips; // +0x18
    long long _curCountdownNum; // +0x20
    long long _countdownLimit; // +0x28
}
- (id)initWithFrame:(CGRect)arg1 countdownLimit:(long long)arg2;
- (void)updateCountdownLimit:(long long)arg1;
- (void)startCountdownAction;
- (void)updateCountTimer;
- (void)stopCountdownAction;
- (id)countdownTips;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)countdownTimer;
- (void)setCountdownTimer:(id)arg1;
- (void)setCountdownTips:(id)arg1;
- (long long)curCountdownNum;
- (void)setCurCountdownNum:(long long)arg1;
- (long long)countdownLimit;
- (void)setCountdownLimit:(long long)arg1;
- (void).cxx_destruct;
@end
