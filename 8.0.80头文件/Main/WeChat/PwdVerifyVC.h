@interface PwdVerifyVC : WCAccountBaseViewController <PasswordLogicDelegate, WCBaseInfoItemDelegate>
{
    UINavigationController * _pendingResetPwdNav; // +0x80
    BOOL _hasAppeared; // +0x88
    BOOL _isVerifying; // +0x89
    int _btnBottomHeight; // +0x8c
    id /* block */ _onVerifySuccess; // +0x90
    id /* block */ _onCancel; // +0x98
    MMUILabel * _titleLabel; // +0xa0
    WCRedesignTextItem * _passwordItem; // +0xa8
    MMUILabel * _errorTipLabel; // +0xb0
    MMUIButton * _forgetPwdBtn; // +0xb8
    MMUILabel * _subtitleLabel; // +0xc0
    UIButton * _confirmBtn; // +0xc8
    PasswordLogic * _passwordLogic; // +0xd0
}
- (BOOL)useSheetView;
- (BOOL)useRedesignStyle;
- (BOOL)autoHandleKeyboardEvent;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)initNavigationBar;
- (void)initView;
- (void)onKeyboardChangingHeight:(double)arg1;
- (void)onCloseButtonClicked;
- (void)onTextFieldChanged:(id)arg1;
- (void)updateConfirmButtonState;
- (void)onConfirmClick;
- (void)verifyPasswordOK:(id)arg1 logic:(id)arg2;
- (void)verifyPasswordError:(id)arg1;
- (void)verifyPasswordFail:(id)arg1;
- (void)onForgetPwdClick;
- (void)dismissSelfAndPresentResetPwdNav:(id)arg1;
- (void)WCBaseInfoItemPressReturnKey:(id)arg1;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (id /* block */)onVerifySuccess;
- (void)setOnVerifySuccess:(id /* block */)arg1;
- (id /* block */)onCancel;
- (void)setOnCancel:(id /* block */)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)passwordItem;
- (void)setPasswordItem:(id)arg1;
- (id)errorTipLabel;
- (void)setErrorTipLabel:(id)arg1;
- (id)forgetPwdBtn;
- (void)setForgetPwdBtn:(id)arg1;
- (id)subtitleLabel;
- (void)setSubtitleLabel:(id)arg1;
- (id)confirmBtn;
- (void)setConfirmBtn:(id)arg1;
- (id)passwordLogic;
- (void)setPasswordLogic:(id)arg1;
- (BOOL)isVerifying;
- (void)setIsVerifying:(BOOL)arg1;
- (int)btnBottomHeight;
- (void)setBtnBottomHeight:(int)arg1;
- (void).cxx_destruct;
@end
