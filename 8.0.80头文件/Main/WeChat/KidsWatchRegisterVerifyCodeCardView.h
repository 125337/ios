@interface KidsWatchRegisterVerifyCodeCardView : UIView <KidsWatchResponsiveView>
{
    id <KidsWatchRegisterVerifyCodeCardViewDelegate> _delegate; // +0x8
    double _cornerRadius; // +0x10
    NSString * _rawPhoneNumber; // +0x18
    MMUILabel * _titleLabel; // +0x20
    KidsWatchTextFieldItem * _rawPhoneNumberTextFieldItem; // +0x28
    UIView * _rawPhoneNumberSeparateView; // +0x30
    KidsWatchTextFieldItem * _verifyCodeTextFieldItem; // +0x38
    UIView * _verifyCodeSeparateView; // +0x40
    UIButton * _sendVerifyCodeButton; // +0x48
    MMTimer * _timer; // +0x50
    unsigned long long _countdown; // +0x58
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubviews;
- (void)layoutSubviews;
- (double)updateSizeAndCalculateHeightFromFrame:(CGRect)arg1;
- (void)setFrame:(CGRect)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setRawPhoneNumber:(id)arg1;
- (id)verifyCode;
- (void)onTapSendVerifyCodeButton;
- (void)startCountDownIfNeeded;
- (void)countdownTick;
- (void)makeFirstResponder;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (double)cornerRadius;
- (id)rawPhoneNumber;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)rawPhoneNumberTextFieldItem;
- (void)setRawPhoneNumberTextFieldItem:(id)arg1;
- (id)rawPhoneNumberSeparateView;
- (void)setRawPhoneNumberSeparateView:(id)arg1;
- (id)verifyCodeTextFieldItem;
- (void)setVerifyCodeTextFieldItem:(id)arg1;
- (id)verifyCodeSeparateView;
- (void)setVerifyCodeSeparateView:(id)arg1;
- (id)sendVerifyCodeButton;
- (void)setSendVerifyCodeButton:(id)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (unsigned long long)countdown;
- (void)setCountdown:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
