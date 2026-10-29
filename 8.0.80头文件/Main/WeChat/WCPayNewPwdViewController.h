@interface WCPayNewPwdViewController : WCPayBaseViewController <WCBaseInfoItemDelegate>
{
    id <WCPayNewPwdViewControllerDelegate> m_delegate; // +0x98
    BOOL _isLogicStop; // +0xa0
    BOOL _isUseFaceId; // +0xa1
    BOOL _canUseBiotricAuth; // +0xa2
    BOOL _shouldRestorePasswordFocus; // +0xa3
    unsigned long long _authType; // +0xa8
    NSString * _vcPwdTitle; // +0xb0
    NSString * _vcPwdTips; // +0xb8
    NSString * _vcBiotricTitle; // +0xc0
    NSString * _vcTouchIdTips; // +0xc8
    NSString * _vcFaceIdTips; // +0xd0
    UIView * _verifyPasswordView; // +0xd8
    UIView * _verifyBiotricView; // +0xe0
    UIView * _currentView; // +0xe8
    UIButton * _footerButton; // +0xf0
    UILabel * _pwdDetailLabel; // +0xf8
    UILabel * _bioDetailLabel; // +0x100
    UIButton * _changeToBiotricAuthBtn; // +0x108
    UIButton * _changeToPwdAuthBtn; // +0x110
    NSString * _seChallenge; // +0x118
    WCPayTenpayPasswordCtrlItem * _passwordTextField; // +0x120
}
- (void)setDelegate:(id)arg1;
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (void)viewDidLoad;
- (void)dealloc;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)windowDidBecomeKey:(id)arg1;
- (void)updateSwitchBiotricLabel:(double)arg1;
- (void)viewWillLayoutSubviews;
- (void)refreshViewWithData:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)initNavigationBar;
- (void)onCancelVerify;
- (void)updatePwdCtrlWithTitle:(id)arg1 tips:(id)arg2;
- (void)onChangeToBiotricAuth;
- (void)onChangeToPwdAuth;
- (void)updateBiotricCtrlWithTitle:(id)arg1 touchTips:(id)arg2 faceidTips:(id)arg3;
- (void)onBiotricAuthNext;
- (void)updateAuthView:(id)arg1 pwdTips:(id)arg2 biotricTitle:(id)arg3 touchIdTips:(id)arg4 faceIdTips:(id)arg5 canUseBiotricAuth:(BOOL)arg6 challenge:(id)arg7;
- (void)layoutVerifyPwdCtrl;
- (void)showVerifyPwdCtrl;
- (void)showVerifyBiotricCtrl;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)clearPwdInput;
- (void)clearPwdInputAndRestoreFocus;
- (void)prepareForPasswordReset;
- (void)animateToPwdCtrl;
- (unsigned long long)authType;
- (void)setAuthType:(unsigned long long)arg1;
- (BOOL)isLogicStop;
- (void)setIsLogicStop:(BOOL)arg1;
- (id)vcPwdTitle;
- (void)setVcPwdTitle:(id)arg1;
- (id)vcPwdTips;
- (void)setVcPwdTips:(id)arg1;
- (id)vcBiotricTitle;
- (void)setVcBiotricTitle:(id)arg1;
- (id)vcTouchIdTips;
- (void)setVcTouchIdTips:(id)arg1;
- (id)vcFaceIdTips;
- (void)setVcFaceIdTips:(id)arg1;
- (id)verifyPasswordView;
- (void)setVerifyPasswordView:(id)arg1;
- (id)verifyBiotricView;
- (void)setVerifyBiotricView:(id)arg1;
- (id)currentView;
- (void)setCurrentView:(id)arg1;
- (id)footerButton;
- (void)setFooterButton:(id)arg1;
- (id)pwdDetailLabel;
- (void)setPwdDetailLabel:(id)arg1;
- (id)bioDetailLabel;
- (void)setBioDetailLabel:(id)arg1;
- (id)changeToBiotricAuthBtn;
- (void)setChangeToBiotricAuthBtn:(id)arg1;
- (id)changeToPwdAuthBtn;
- (void)setChangeToPwdAuthBtn:(id)arg1;
- (BOOL)isUseFaceId;
- (void)setIsUseFaceId:(BOOL)arg1;
- (BOOL)canUseBiotricAuth;
- (void)setCanUseBiotricAuth:(BOOL)arg1;
- (id)seChallenge;
- (void)setSeChallenge:(id)arg1;
- (id)passwordTextField;
- (void)setPasswordTextField:(id)arg1;
- (BOOL)shouldRestorePasswordFocus;
- (void)setShouldRestorePasswordFocus:(BOOL)arg1;
- (void).cxx_destruct;
@end
