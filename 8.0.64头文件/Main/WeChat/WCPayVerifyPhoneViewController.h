@interface WCPayVerifyPhoneViewController : WCPayBaseViewController <CountryCodePickerDelegate>
{
    BOOL _hasSendCode; // +0x98
    unsigned int _lastSendTime; // +0x9c
    id <WCPayVerifyPhoneViewControllerDelegate> _m_delegate; // +0xa0
    WCPayCss * _css; // +0xa8
    UIView * _containerView; // +0xb0
    UIView * _headerView; // +0xb8
    UIView * _footerView; // +0xc0
    UILabel * _headerTitle; // +0xc8
    UIView * _firstLineView; // +0xd0
    UIView * _phoneSection; // +0xd8
    UIButton * _areaCodeCoverBtn; // +0xe0
    UILabel * _areaCodeTitle; // +0xe8
    UIImageView * _areaCodeIcon; // +0xf0
    TenpaySecureCtrl * _phoneInput; // +0xf8
    UIView * _phoneLineView; // +0x100
    UIView * _verifyCodeSection; // +0x108
    UIView * _verifyCodeRightContent; // +0x110
    UILabel * _verifyCodeTitle; // +0x118
    WCUITextField * _verifyCodeInput; // +0x120
    UIButton * _verifyCodeButton; // +0x128
    UIView * _verifyCodeLineView; // +0x130
    MMUIButton * _infoButton; // +0x138
    UIButton * _nextButton; // +0x140
    double _keyboardHeight; // +0x148
    CountryCodeWrap * _currentCountry; // +0x150
    MMTimer * _verifyCodeTimer; // +0x158
}
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewDidBeDismissed:(BOOL)arg1;
- (id)navigationBarBackgroundColor;
- (void)setDelegate:(id)arg1;
- (void)refreshViewWithData:(id)arg1;
- (void)updateView;
- (void)updateHeaderView;
- (void)updateHeaderTitle;
- (void)updateFirstLineView;
- (void)updatePhoneSection;
- (void)updateAreaCodeCoverBtn;
- (void)updateAreaCodeTitle;
- (void)updateAreaCodeIcon;
- (void)updatePhoneInput;
- (void)updatePhoneLineView;
- (void)updateVerifyCodeSection;
- (void)updateVerifyCodeRightContent;
- (void)updateVerifyCodeTitle;
- (void)updateVerifyCodeInput;
- (void)updateVerifyCodeButton;
- (void)updateVerifyCodeLineView;
- (void)updateInfoButton;
- (void)updateFooterView;
- (void)updateNextButton;
- (void)onClickInfoButton;
- (void)onTapVerifyCodeButton;
- (void)verifyCodeTimeOut;
- (void)onTapAreaCode;
- (void)onTapNext;
- (void)phoneInputDidEndOnExit:(id)arg1;
- (void)phoneInputDidChanged:(id)arg1;
- (void)verifyCodeInputDidEndOnExit:(id)arg1;
- (void)verifyCodeInputDidChanged:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)CountryCodePickerDidPickCountryCode:(id)arg1;
- (id)currentCountryCode;
- (id)encryptPhoneNo;
- (id)encryptVerifyCode;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)css;
- (void)setCss:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (id)headerTitle;
- (void)setHeaderTitle:(id)arg1;
- (id)firstLineView;
- (void)setFirstLineView:(id)arg1;
- (id)phoneSection;
- (void)setPhoneSection:(id)arg1;
- (id)areaCodeCoverBtn;
- (void)setAreaCodeCoverBtn:(id)arg1;
- (id)areaCodeTitle;
- (void)setAreaCodeTitle:(id)arg1;
- (id)areaCodeIcon;
- (void)setAreaCodeIcon:(id)arg1;
- (id)phoneInput;
- (void)setPhoneInput:(id)arg1;
- (id)phoneLineView;
- (void)setPhoneLineView:(id)arg1;
- (id)verifyCodeSection;
- (void)setVerifyCodeSection:(id)arg1;
- (id)verifyCodeRightContent;
- (void)setVerifyCodeRightContent:(id)arg1;
- (id)verifyCodeTitle;
- (void)setVerifyCodeTitle:(id)arg1;
- (id)verifyCodeInput;
- (void)setVerifyCodeInput:(id)arg1;
- (id)verifyCodeButton;
- (void)setVerifyCodeButton:(id)arg1;
- (id)verifyCodeLineView;
- (void)setVerifyCodeLineView:(id)arg1;
- (id)infoButton;
- (void)setInfoButton:(id)arg1;
- (id)nextButton;
- (void)setNextButton:(id)arg1;
- (double)keyboardHeight;
- (void)setKeyboardHeight:(double)arg1;
- (BOOL)hasSendCode;
- (void)setHasSendCode:(BOOL)arg1;
- (unsigned int)lastSendTime;
- (void)setLastSendTime:(unsigned int)arg1;
- (id)currentCountry;
- (void)setCurrentCountry:(id)arg1;
- (id)verifyCodeTimer;
- (void)setVerifyCodeTimer:(id)arg1;
- (void).cxx_destruct;
@end
