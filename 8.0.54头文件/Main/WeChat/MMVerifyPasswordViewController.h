@interface MMVerifyPasswordViewController : MMUIViewController <PasswordLogicDelegate, UITextFieldDelegate, MMAcceptAgreementResultViewControllerDelegate>
{
    MMUILabel * _titleLabel; // +0x68
    WCUITextField * _passwordTextField; // +0x70
    MMUILabel * _tipLabel; // +0x78
    UIButton * _forgotButton; // +0x80
    UIButton * _confirmButton; // +0x88
    UIView * _topLineView; // +0x90
    UIView * _bottomLineView; // +0x98
    BOOL _autoCloseWhenVerifySuccessed; // +0xa0
    BOOL _isShowErrorTip; // +0xa1
    BOOL _isSuccess; // +0xa2
    id /* block */ _successCallback; // +0xa8
    id /* block */ _cancelCallback; // +0xb0
    PasswordLogic * _passwordLogic; // +0xb8
}
- (id)initWithSuccess:(id /* block */)arg1 cancel:(id /* block */)arg2;
- (void)viewDidLoad;
- (void)configNavigationBarButton;
- (void)viewWillBePushOrPresent:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (id)navigationBarBackgroundColor;
- (void)initUI;
- (void)onBack;
- (void)onConfirmPassword;
- (void)onForgetPassword;
- (void)clickAtBackground;
- (void)onKeyboardWillShow:(id)arg1;
- (void)onKeyboardWillHide:(id)arg1;
- (void)onTextFieldContentChange:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(_NSRange)arg2 replacementString:(id)arg3;
- (void)verifyPasswordOK:(id)arg1 logic:(id)arg2;
- (void)verifyPasswordError:(id)arg1;
- (void)verifyPasswordFail:(id)arg1;
- (void)onClickMakeSureActionWithViewController:(id)arg1;
- (void)onVerifyPasswordSuccess:(id)arg1;
- (void)onVerifyPasswordFail;
- (void)onVerifyPasswordCancel;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)passwordTextField;
- (void)setPasswordTextField:(id)arg1;
- (id)tipLabel;
- (void)setTipLabel:(id)arg1;
- (id)forgotButton;
- (void)setForgotButton:(id)arg1;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg1;
- (id)topLineView;
- (void)setTopLineView:(id)arg1;
- (id)bottomLineView;
- (void)setBottomLineView:(id)arg1;
- (BOOL)autoCloseWhenVerifySuccessed;
- (void)setAutoCloseWhenVerifySuccessed:(BOOL)arg1;
- (id /* block */)successCallback;
- (void)setSuccessCallback:(id /* block */)arg1;
- (id /* block */)cancelCallback;
- (void)setCancelCallback:(id /* block */)arg1;
- (id)passwordLogic;
- (void)setPasswordLogic:(id)arg1;
- (BOOL)isShowErrorTip;
- (void)setIsShowErrorTip:(BOOL)arg1;
- (BOOL)isSuccess;
- (void)setIsSuccess:(BOOL)arg1;
- (void).cxx_destruct;
@end

