@interface WCFinderAdPromotionButton : UIView
{
    BOOL _countDownCompleted; // +0x8
    BOOL _hideDefaultInfoIcon; // +0x9
    BOOL _showTitleDownArrow; // +0xa
    long long _countdown; // +0x10
    long long _remainingSeconds; // +0x18
    NSString * _countdownTextFormat; // +0x20
    NSString * _countdownCompletedText; // +0x28
    UIColor * _countdownTextColor; // +0x30
    NSString * _promotionTitle; // +0x38
    id /* block */ _clickCountDownLabelBlock; // +0x40
    id /* block */ _clickTitleLabelBlock; // +0x48
    id /* block */ _countdownCompletionBlock; // +0x50
    id /* block */ _promotionButtonSizeChange; // +0x58
    UIView * _titleContainerView; // +0x60
    UIImageView * _infoIconView; // +0x68
    UILabel * _titleLabel; // +0x70
    UIImageView * _titleArrowView; // +0x78
    UIView * _separatorLine; // +0x80
    UILabel * _countdownLabel; // +0x88
    NSTimer * _timer; // +0x90
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_expandHitArea;
- (void)setupUI;
- (void)setupConstraints;
- (void)updateTitleAreaConstraints;
- (void)updateCountdownText;
- (void)completeCountdownIfNeeded;
- (void)updateCapsuleStyle:(id)arg1;
- (void)startCountdown;
- (void)stopCountdown;
- (void)setRemainingSeconds:(long long)arg1;
- (void)setCountdown:(long long)arg1;
- (void)setCountdownTextColor:(id)arg1;
- (void)setPromotionTitle:(id)arg1;
- (void)setHideDefaultInfoIcon:(BOOL)arg1;
- (void)setShowTitleDownArrow:(BOOL)arg1;
- (void)refreshCurrentLayout;
- (CGSize)intrinsicContentSize;
- (CGSize)updateSize;
- (void)layoutSubviews;
- (void)updateLayout;
- (CGRect)leftPromotionAreaFrameInView:(id)arg1;
- (void)hideCountdownElements;
- (void)clickCountDownLabelAction;
- (void)clickTitleLabelAction;
- (void)dealloc;
- (long long)countdown;
- (long long)remainingSeconds;
- (BOOL)countDownCompleted;
- (void)setCountDownCompleted:(BOOL)arg1;
- (id)countdownTextFormat;
- (void)setCountdownTextFormat:(id)arg1;
- (id)countdownCompletedText;
- (void)setCountdownCompletedText:(id)arg1;
- (id)countdownTextColor;
- (id)promotionTitle;
- (BOOL)hideDefaultInfoIcon;
- (BOOL)showTitleDownArrow;
- (id /* block */)clickCountDownLabelBlock;
- (void)setClickCountDownLabelBlock:(id /* block */)arg1;
- (id /* block */)clickTitleLabelBlock;
- (void)setClickTitleLabelBlock:(id /* block */)arg1;
- (id /* block */)countdownCompletionBlock;
- (void)setCountdownCompletionBlock:(id /* block */)arg1;
- (id /* block */)promotionButtonSizeChange;
- (void)setPromotionButtonSizeChange:(id /* block */)arg1;
- (id)titleContainerView;
- (void)setTitleContainerView:(id)arg1;
- (id)infoIconView;
- (void)setInfoIconView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)titleArrowView;
- (void)setTitleArrowView:(id)arg1;
- (id)separatorLine;
- (void)setSeparatorLine:(id)arg1;
- (id)countdownLabel;
- (void)setCountdownLabel:(id)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (void).cxx_destruct;
@end
