@interface WCFinderFeedUnlockView : UIView
{
    UIView * _unlockButtonBackground; // +0x8
    id <WCFinderHalfScreenListenProtocol> _halfScreenDelegate; // +0x10
    WCFinderUnlockViewConfig * _config; // +0x18
    long long _countDown; // +0x20
    UIImageView * _coverImageView; // +0x28
    UIView * _maskBackground; // +0x30
    UILabel * _unlockButtonTitleLabel; // +0x38
    UILabel * _countDownTipsLabel; // +0x40
    MMTimer * _timer; // +0x48
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupUI;
- (void)layoutSubviews;
- (void)updateWitConfig:(id)arg1;
- (void)startCountDown;
- (void)stopCountDown;
- (void)_onTapUnlockButton:(id)arg1;
- (void)_unlockAction;
- (void)_updateCountDown;
- (void)_updateCountDownLabel;
- (id)coverImageView;
- (id)maskBackground;
- (id)unlockButtonBackground;
- (id)unlockButtonTitleLabel;
- (id)countDownTipsLabel;
- (unsigned long long)unlockStyle;
- (void)halfScreenStateChanged;
- (void)setUnlockButtonBackground:(id)arg1;
- (id)halfScreenDelegate;
- (void)setHalfScreenDelegate:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (long long)countDown;
- (void)setCountDown:(long long)arg1;
- (void)setCoverImageView:(id)arg1;
- (void)setMaskBackground:(id)arg1;
- (void)setUnlockButtonTitleLabel:(id)arg1;
- (void)setCountDownTipsLabel:(id)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (void).cxx_destruct;
@end
