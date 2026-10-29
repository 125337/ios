@interface KidsWatchKidsRegisterVerifyCodeViewController : KidsWatchBaseViewController <KidsWatchRegisterVerifyCodeCardViewDelegate>
{
    BOOL _hasSentVerifyCode; // +0x68
    KidsWatchRegisterVerifyCodeCardView * _verifyCodeCardView; // +0x70
    KidsWatchFlexibleImageView * _bottomBackgroundView; // +0x78
    KidsWatchButton * _doneButton; // +0x80
    NSString * _rawPhoneNumber; // +0x88
}
- (void)viewDidLoad;
- (void)setupWithData:(id)arg1;
- (void)initSubviews;
- (void)sendVerifyCode;
- (void)onTapDoneButton;
- (BOOL)respondToKeyboardEvent;
- (BOOL)shouldEndEditForTappedView:(id)arg1;
- (void)onKeyboardWillChangeHeight:(double)arg1;
- (void)onKeyboardChangingHeight:(double)arg1;
- (BOOL)forceCloseBarButtonItem;
- (void)onTapSendVerifyCodeButton:(id)arg1;
- (void)onVerifyCodeChanged:(id)arg1;
- (id)verifyCodeCardView;
- (void)setVerifyCodeCardView:(id)arg1;
- (id)bottomBackgroundView;
- (void)setBottomBackgroundView:(id)arg1;
- (id)doneButton;
- (void)setDoneButton:(id)arg1;
- (id)rawPhoneNumber;
- (void)setRawPhoneNumber:(id)arg1;
- (BOOL)hasSentVerifyCode;
- (void)setHasSentVerifyCode:(BOOL)arg1;
- (void).cxx_destruct;
@end

