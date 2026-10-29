@interface MMLimitedModeIndependentVerifyViewController : MMUIViewController <UITextFieldDelegate, WCPayInputViewDelegate, MMLimitedModeVerifyPasswordLogicDelegate, MMLimitedModeSetPasswordLogicDelegate, MMWebViewDelegate, ForwardMessageLogicDelegate>
{
    double m_fKeyboardHeight; // +0x68
    MMLimitedModeVerifyPasswordLogic * m_verifyPasswordLogic; // +0x70
    MMLimitedModeSetPasswordLogic * m_setPasswordLogic; // +0x78
    MMUIButton * m_payInputViewButton; // +0x80
    BOOL m_isShowErrorTip; // +0x88
    unsigned int _m_verifyScene; // +0x8c
    MMUILabel * m_titleLabel; // +0x90
    MMUITextField * m_textField; // +0x98
    MMUIButton * m_forgetPassWordButton; // +0xa0
    MMUILabel * m_forgetPassWordLabel; // +0xa8
    MMUILabel * m_errorLabel; // +0xb0
    id <MMLimitedModeIndependentVerifyViewControllerDelegate> _m_delegate; // +0xb8
    long long _scene; // +0xc0
    id /* block */ _m_closeBlock; // +0xc8
    WCPayInputView * _payInputView; // +0xd0
    ForwardMessageLogicController * _forwardMsgLogic; // +0xd8
}
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (id)navigationBarBackgroundColor;
- (void)initData;
- (void)initUI;
- (id)payInputView;
- (double)getInputViewWidth;
- (id)getTextFieldText;
- (id)getTitleLabelText;
- (void)showErrorLabel:(id)arg1 isShow:(BOOL)arg2;
- (void)onBack;
- (void)onTextFieldContentChange:(id)arg1;
- (void)doInputFinishAction;
- (void)onForgetPassWord;
- (void)_onOverseaForgetPassWord;
- (void)_onChinaForgetPassWord;
- (void)forwardPasswordResetMsg;
- (void)onPayInputViewButtonClick;
- (void)onKeyboardWillShow:(id)arg1;
- (void)onKeyboardWillHide:(id)arg1;
- (double)getkeyboardHideAcceptBtnBottom;
- (double)getkeyboardShowAcceptBtnBottom;
- (void)restAcceptBtnWithKeyboardWillShow:(BOOL)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(_NSRange)arg2 replacementString:(id)arg3;
- (void)inputView:(id)arg1 didChangeText:(id)arg2;
- (void)onVerifyPasswordRetTicket:(id)arg1 needShowAlert:(BOOL)arg2 success:(BOOL)arg3 errMsg:(id)arg4;
- (void)onLimitedModeSetPasswordRetType:(unsigned int)arg1 ticket:(id)arg2 success:(BOOL)arg3 errMsg:(id)arg4;
- (void)onWebViewCloseAndGoNext:(id)arg1 webVC:(id)arg2 customClose:(BOOL *)arg3;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)arg1;
- (id)m_titleLabel;
- (void)setM_titleLabel:(id)arg1;
- (id)m_textField;
- (void)setM_textField:(id)arg1;
- (id)m_forgetPassWordButton;
- (void)setM_forgetPassWordButton:(id)arg1;
- (id)m_forgetPassWordLabel;
- (void)setM_forgetPassWordLabel:(id)arg1;
- (id)m_errorLabel;
- (void)setM_errorLabel:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (unsigned int)m_verifyScene;
- (void)setM_verifyScene:(unsigned int)arg1;
- (long long)scene;
- (void)setScene:(long long)arg1;
- (id /* block */)m_closeBlock;
- (void)setM_closeBlock:(id /* block */)arg1;
- (void)setPayInputView:(id)arg1;
- (id)forwardMsgLogic;
- (void)setForwardMsgLogic:(id)arg1;
- (void).cxx_destruct;
@end

