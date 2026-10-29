@interface HoneyPayReceiverCardDetailViewController : HoneyPayBaseViewController
{
    id <HoneyPayReceiverCardDetailViewControllerDelegate> _delegate; // +0x90
    QryHoneyPayCardDetailResp * _detail; // +0x98
}
- (void)viewDidLoad;
- (BOOL)useTransparentNavibar;
- (void)refreshViewWithData:(id)arg1;
- (void)setupNavigationBar;
- (void)reloadTableView;
- (id)headerView;
- (void)onRightBarButtonClick;
- (void)didClickUnbind;
- (long long)overrideUserInterfaceStyle;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)detail;
- (void)setDetail:(id)arg1;
- (void).cxx_destruct;
@end

