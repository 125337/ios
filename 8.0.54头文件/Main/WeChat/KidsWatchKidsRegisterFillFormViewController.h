@interface KidsWatchKidsRegisterFillFormViewController : KidsWatchBaseViewController <KidsWatchRegisterFormCardViewDelegate>
{
    KidsWatchRegisterFormCardView * _formCardView; // +0x68
    KidsWatchFlexibleImageView * _bottomBackgroundView; // +0x70
    WCAgreementCheckBox * _checkBox; // +0x78
    KidsWatchButton * _registerButton; // +0x80
    NSString * _ISOCode; // +0x88
}
- (void)viewDidLoad;
- (void)setupWithData:(id)arg1;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)makePhoneNumberFirstResponder;
- (void)setISOCode:(id)arg1;
- (BOOL)respondToKeyboardEvent;
- (BOOL)shouldEndEditForTappedView:(id)arg1;
- (void)onKeyboardWillChangeHeight:(double)arg1;
- (void)onKeyboardChangingHeight:(double)arg1;
- (BOOL)forceCloseBarButtonItem;
- (BOOL)validate;
- (void)updateRegisterButton;
- (void)onTapRegisterButton;
- (id)getViewController;
- (void)onFormCardInfoChanged:(id)arg1;
- (id)formCardView;
- (void)setFormCardView:(id)arg1;
- (id)bottomBackgroundView;
- (void)setBottomBackgroundView:(id)arg1;
- (id)checkBox;
- (void)setCheckBox:(id)arg1;
- (id)registerButton;
- (void)setRegisterButton:(id)arg1;
- (id)ISOCode;
- (void).cxx_destruct;
@end

