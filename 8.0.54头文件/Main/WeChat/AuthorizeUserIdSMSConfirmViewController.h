@interface AuthorizeUserIdSMSConfirmViewController : MMUIViewController <WCBaseInfoItemDelegate, WCActionSheetDelegate>
{
    NSString * _verifyToken; // +0x68
    WCActionSheet * _actionSheet; // +0x70
    id <AuthorizeUserIdSMSConfirmDelegate> _delegate; // +0x78
    UserIdAuthorizeSmsPageInfo * _pageInfo; // +0x80
    UILabel * _titleLabel; // +0x88
    UILabel * _selectedPhoneLabel; // +0x90
    UIButton * _changePhoneButton; // +0x98
    WCAccountTextFieldItem * _confirmCodeTF; // +0xa0
    UIButton * _resendButton; // +0xa8
    UIView * _separateLine; // +0xb0
    UIButton * _confirmButton; // +0xb8
    UserIdAuthorizeSmsPhoneItem * _selectedPhoneItem; // +0xc0
    unsigned long long _countDown; // +0xc8
}
- (id)initWithSMSPageInfo:(id)arg1;
- (void)viewDidLoad;
- (void)onReturn;
- (void)initSubviews;
- (void)onTap:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)fillPageInfo;
- (void)onResendButton:(id)arg1;
- (void)onConfirmButton:(id)arg1;
- (void)onChangePhoneButton:(id)arg1;
- (void)onCgiResponse:(id)arg1 forEvent:(unsigned int)arg2;
- (void)processErrCode:(unsigned int)arg1 errMsg:(id)arg2;
- (void)showToast:(id)arg1 isSuccess:(BOOL)arg2;
- (void)showAlarmBoxWithTitle:(id)arg1 desc:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)selectPhone:(id)arg1;
- (void)startTimer;
- (void)updateSendVerifyCodeButton;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)pageInfo;
- (void)setPageInfo:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)selectedPhoneLabel;
- (void)setSelectedPhoneLabel:(id)arg1;
- (id)changePhoneButton;
- (void)setChangePhoneButton:(id)arg1;
- (id)confirmCodeTF;
- (void)setConfirmCodeTF:(id)arg1;
- (id)resendButton;
- (void)setResendButton:(id)arg1;
- (id)separateLine;
- (void)setSeparateLine:(id)arg1;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg1;
- (id)selectedPhoneItem;
- (void)setSelectedPhoneItem:(id)arg1;
- (unsigned long long)countDown;
- (void)setCountDown:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

