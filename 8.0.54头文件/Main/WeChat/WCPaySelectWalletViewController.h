@interface WCPaySelectWalletViewController : WCPayBaseViewController
{
    id <WCPaySelectWalletViewControllerDelegate> m_delegate; // +0x90
}
- (id)init;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)viewDidLayoutSubviews;
- (void)refreshViewWithData:(id)arg1;
- (void)initNavigationBar;
- (void)reloadTableView;
- (void)OnBack;
- (void)setDelegate:(id)arg1;
- (void)makeWalletInfoCell:(id)arg1 cellInfo:(id)arg2;
- (void)selectWalletInfo:(id)arg1;
- (void).cxx_destruct;
@end

