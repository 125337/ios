@interface PhoneAuthAddNewPhoneViewController : MMUIViewController <WCBaseInfoItemDelegate, PhoneAuthManagePhoneLogicOperationDelegate>
{
    BOOL _phoneNumberEntered; // +0x70
    BOOL _confirmCodeRequested; // +0x71
    BOOL _confirmCodeEntered; // +0x72
    NSArray * _phoneNumberList; // +0x78
    WAReportPhoneAuthActionItem * _actionItem; // +0x80
    UIView * _phoneNumberArea; // +0x88
    UIView * _phoneNumberAreaTopLine; // +0x90
    UILabel * _phoneTitleLabel; // +0x98
    WCAccountTextFieldItem * _phoneNumberTF; // +0xa0
    UIButton * _resendButton; // +0xa8
    UIView * _phoneNumberAreaBottomLine; // +0xb0
    UIView * _confirmCodeArea; // +0xb8
    UILabel * _confirmCodeTitleLabel; // +0xc0
    WCAccountTextFieldItem * _confirmCodeTF; // +0xc8
    UIView * _confirmCodeAreaBottomLine; // +0xd0
    UIView * _savePhoneArea; // +0xd8
    UILabel * _savePhoneTitleLabel; // +0xe0
    MMUICellSwitch * _savePhoneSwitch; // +0xe8
    UIView * _savePhoneAreaBottomLine; // +0xf0
    UIButton * _confirmButton; // +0xf8
    PhoneAuthManagePhoneLogic * _logic; // +0x100
    unsigned long long _countDown; // +0x108
}
- (id)initWithLogic:(id)arg1;
- (void)viewDidLoad;
- (void)initSubViews;
- (void)initCustomNavigationBar;
- (void)updateNavigationItems;
- (void)refreshResendButtonState;
- (void)refreshConfirmButtonState;
- (void)startTimer;
- (void)updateSendVerifyCodeButton;
- (void)onReturn;
- (void)handleOnReSendButtonEvent:(id)arg1;
- (void)handleOnConfirmButtonEvent:(id)arg1;
- (void)onTapBGView;
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (void)viewDidLayoutSubviews;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)confirmCodeRequestedSuccess;
- (void)confirmCodeRequestedFailedWithErrorMsg:(id)arg1;
- (void)savePhoneSuccess:(id)arg1 saveFlag:(BOOL)arg2;
- (void)confirmCodeVerifySuccess;
- (void)confirmCodeVerifyFailedWithErrorMsg:(id)arg1;
- (id)phoneNumberList;
- (void)setPhoneNumberList:(id)arg1;
- (id)actionItem;
- (void)setActionItem:(id)arg1;
- (id)phoneNumberArea;
- (void)setPhoneNumberArea:(id)arg1;
- (id)phoneNumberAreaTopLine;
- (void)setPhoneNumberAreaTopLine:(id)arg1;
- (id)phoneTitleLabel;
- (void)setPhoneTitleLabel:(id)arg1;
- (id)phoneNumberTF;
- (void)setPhoneNumberTF:(id)arg1;
- (id)resendButton;
- (void)setResendButton:(id)arg1;
- (id)phoneNumberAreaBottomLine;
- (void)setPhoneNumberAreaBottomLine:(id)arg1;
- (id)confirmCodeArea;
- (void)setConfirmCodeArea:(id)arg1;
- (id)confirmCodeTitleLabel;
- (void)setConfirmCodeTitleLabel:(id)arg1;
- (id)confirmCodeTF;
- (void)setConfirmCodeTF:(id)arg1;
- (id)confirmCodeAreaBottomLine;
- (void)setConfirmCodeAreaBottomLine:(id)arg1;
- (id)savePhoneArea;
- (void)setSavePhoneArea:(id)arg1;
- (id)savePhoneTitleLabel;
- (void)setSavePhoneTitleLabel:(id)arg1;
- (id)savePhoneSwitch;
- (void)setSavePhoneSwitch:(id)arg1;
- (id)savePhoneAreaBottomLine;
- (void)setSavePhoneAreaBottomLine:(id)arg1;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg1;
- (BOOL)phoneNumberEntered;
- (void)setPhoneNumberEntered:(BOOL)arg1;
- (BOOL)confirmCodeRequested;
- (void)setConfirmCodeRequested:(BOOL)arg1;
- (BOOL)confirmCodeEntered;
- (void)setConfirmCodeEntered:(BOOL)arg1;
- (id)logic;
- (void)setLogic:(id)arg1;
- (unsigned long long)countDown;
- (void)setCountDown:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
