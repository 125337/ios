@interface WCPayResetPwdBindCardViewController : WCPayBaseViewController <MMWebViewDelegate>
{
    UIButton * m_footerButton; // +0x90
    WCPayTenpaySecureCtrlItem * m_textFieldItem; // +0x98
    id <WCPayResetPwdBindCardViewControllerDelegate> m_delegate; // +0xa0
    BOOL bPoped; // +0xa8
}
- (id)init;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)OnWCPayResetPwdBindCardBack;
- (void)initNavigationBar;
- (void)viewDidLayoutSubviews;
- (void)reloadTableView;
- (void)initFooterView;
- (void)viewDidLoad;
- (void)setDelegate:(id)arg1;
- (void)onNext;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)showDetailTip;
- (void)changeRealName;
- (void)webViewReturn:(id)arg1;
- (void)makeInfoCell:(id)arg1 cellInfo:(id)arg2;
- (void).cxx_destruct;
@end

