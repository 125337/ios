@interface WCPayDigitalCertInstallViewController : WCPayBaseViewController <WCPayLogicMgrExt, WCPayGenDigitalCertCgiDelegate>
{
    unsigned int _entryScene; // +0x90
    int _cert_encrypt_type; // +0x94
    UIButton * _m_verifyButton; // +0x98
    double _verifyBtnY; // +0xa0
    WCPayTenpaySecureCtrlItem * _m_idNoTextFieldItem; // +0xa8
    WCBizLoadingView * _m_bizLoadingView; // +0xb0
    WCPayGenDigitalCertCgi * _m_genDigitalCgi; // +0xb8
    WCPayUserInfo * _m_userInfo; // +0xc0
    id <WCPayDigitalCertInstallViewControllerDelegate> _m_delegate; // +0xc8
}
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 userInfo:(id)arg2 certEncryptType:(int)arg3;
- (id)navigationBarBackgroundColor;
- (void)viewDidLoad;
- (void)updateBizLoadingView;
- (void)startBizLoadingBlocked;
- (void)stopBizLoading;
- (void)showKeyboard;
- (void)viewWillLayoutSubviews;
- (void)didReceiveMemoryWarning;
- (void)reloadTableView;
- (void)updateHeaderView;
- (void)updateVerifyButton;
- (void)updateTextFieldItem;
- (void)onClickVerifyButton;
- (void)updateVerifyButtonStatus;
- (void)onWCPayGenDigitalCertCgiWithResp:(id)arg1;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)OnGetBindQueryInfo:(id)arg1 Error:(id)arg2;
- (void)tapFooterView;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (unsigned int)entryScene;
- (void)setEntryScene:(unsigned int)arg1;
- (id)m_verifyButton;
- (void)setM_verifyButton:(id)arg1;
- (double)verifyBtnY;
- (void)setVerifyBtnY:(double)arg1;
- (id)m_idNoTextFieldItem;
- (void)setM_idNoTextFieldItem:(id)arg1;
- (id)m_bizLoadingView;
- (void)setM_bizLoadingView:(id)arg1;
- (id)m_genDigitalCgi;
- (void)setM_genDigitalCgi:(id)arg1;
- (id)m_userInfo;
- (void)setM_userInfo:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (int)cert_encrypt_type;
- (void)setCert_encrypt_type:(int)arg1;
- (void).cxx_destruct;
@end

