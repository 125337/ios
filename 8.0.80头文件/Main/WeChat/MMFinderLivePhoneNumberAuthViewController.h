@interface MMFinderLivePhoneNumberAuthViewController : MMUIViewController <UITextFieldDelegate>
{
    MMFinderLivePhoneNumberAuthViewModel * _viewModel; // +0x70
    UILabel * _errorLabel; // +0x78
    UILabel * _titleLabel; // +0x80
    UILabel * _detailLabel; // +0x88
    UIView * _phoneNumberTopLine; // +0x90
    UILabel * _phoneNumberLabel; // +0x98
    MMUITextField * _phoneNumberField; // +0xa0
    UIView * _phoneNumberBottomLine; // +0xa8
    UILabel * _smsCodeLabel; // +0xb0
    MMUITextField * _smsCodeField; // +0xb8
    UIView * _smsCodeBottomLine; // +0xc0
    UIButton * _sendButton; // +0xc8
    UIButton * _authButton; // +0xd0
    unsigned long long _interval; // +0xd8
    MMTimer * _timer; // +0xe0
}
- (id)initWithViewModel:(id)arg1;
- (void)viewDidLoad;
- (void)initSubviews;
- (void)viewDidLayoutSubviews;
- (id)navigationBarBackgroundColor;
- (void)updateSendButton;
- (void)updateAuthButton;
- (void)onCountDownShouldUpdate;
- (void)onSendButtonClicked;
- (void)onAuthButtonClicked;
- (void)showErrorTips:(id)arg1;
- (id)filterNonDigits:(id)arg1;
- (id)formatPhoneNumber:(id)arg1;
- (id)formatPhoneNumberForDisplay:(id)arg1;
- (void)textFieldDidChangeSelection:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(_NSRange)arg2 replacementString:(id)arg3;
- (void)dealloc;
- (long long)navigationBarHiddenStatus;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)errorLabel;
- (void)setErrorLabel:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)detailLabel;
- (void)setDetailLabel:(id)arg1;
- (id)phoneNumberTopLine;
- (void)setPhoneNumberTopLine:(id)arg1;
- (id)phoneNumberLabel;
- (void)setPhoneNumberLabel:(id)arg1;
- (id)phoneNumberField;
- (void)setPhoneNumberField:(id)arg1;
- (id)phoneNumberBottomLine;
- (void)setPhoneNumberBottomLine:(id)arg1;
- (id)smsCodeLabel;
- (void)setSmsCodeLabel:(id)arg1;
- (id)smsCodeField;
- (void)setSmsCodeField:(id)arg1;
- (id)smsCodeBottomLine;
- (void)setSmsCodeBottomLine:(id)arg1;
- (id)sendButton;
- (void)setSendButton:(id)arg1;
- (id)authButton;
- (void)setAuthButton:(id)arg1;
- (unsigned long long)interval;
- (void)setInterval:(unsigned long long)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (void).cxx_destruct;
@end
