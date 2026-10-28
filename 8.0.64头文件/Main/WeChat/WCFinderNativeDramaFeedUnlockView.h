@interface WCFinderNativeDramaFeedUnlockView : UIView
{
    WCFinderNativeDramaFeedUnlockViewModel * _model; // +0x8
    long long _countDown; // +0x10
    UIImageView * _coverImageView; // +0x18
    UIView * _maskBackground; // +0x20
    UIView * _unlockButtonBackground; // +0x28
    UILabel * _unlockButtonTitleLabel; // +0x30
    UILabel * _countDownTipsLabel; // +0x38
    MMTimer * _timer; // +0x40
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupUI;
- (void)layoutSubviews;
- (void)updateWithModel:(id)arg1;
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
- (id)model;
- (void)setModel:(id)arg1;
- (long long)countDown;
- (void)setCountDown:(long long)arg1;
- (void)setCoverImageView:(id)arg1;
- (void)setMaskBackground:(id)arg1;
- (void)setUnlockButtonBackground:(id)arg1;
- (void)setUnlockButtonTitleLabel:(id)arg1;
- (void)setCountDownTipsLabel:(id)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (void).cxx_destruct;
@end
