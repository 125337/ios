@interface WCPayPayPwdViewController : WCPayBaseViewController
{
    UIButton * m_footerButton; // +0x90
    WCPayPwdCtrlPanelView * m_VerifyView; // +0x98
    WCPayPwdCtrlPanelView * m_FirstView; // +0xa0
    WCPayPwdCtrlPanelView * m_SecondView; // +0xa8
    WCPayPwdCtrlPanelView * m_currentView; // +0xb0
    id <WCPayPayPwdViewControllerDelegate> m_delegate; // +0xb8
    long long _vcTag; // +0xc0
    long long _pwdEncryptMode; // +0xc8
    NSString * _pwdNonce; // +0xd0
}
- (void)setTitle:(id)arg1;
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (id)init;
- (void)initFooterView;
- (void)viewDidLoad;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)refreshViewWithData:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)setDelegate:(id)arg1;
- (void)initNavigationBar;
- (void)leftBarButtonClick;
- (void)showViewWithCurrentView:(id)arg1 NextView:(id)arg2;
- (void)showVerifyPwdCtrlWithTitle:(id)arg1 Tip:(id)arg2 withShowFooterButton:(BOOL)arg3;
- (void)setPwdCtrlPasswordTextFieldEncryptModeAndNonce:(id)arg1;
- (void)showVerifyPwdCtrlWithTitle:(id)arg1 Tip:(id)arg2;
- (void)showSetPwdCtrlWithTitle:(id)arg1 WithTip:(id)arg2;
- (void)showSetPwdCtrlWithTitle:(id)arg1 Tip:(id)arg2 fromError:(BOOL)arg3;
- (void)showSecondPwdCtrlWithTitle:(id)arg1 Tip:(id)arg2 withShowFooterButton:(BOOL)arg3;
- (void)setFooterBtnTitle:(id)arg1;
- (void)onNext;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)clearPwdInput;
- (void)resignInputViewFirstResponse;
- (void)becomeInputViewFirstResponse;
- (void)setNavigationBarTitle:(id)arg1 Stype:(unsigned long long)arg2;
- (long long)vcTag;
- (void)setVcTag:(long long)arg1;
- (long long)pwdEncryptMode;
- (void)setPwdEncryptMode:(long long)arg1;
- (id)pwdNonce;
- (void)setPwdNonce:(id)arg1;
- (void).cxx_destruct;
@end

