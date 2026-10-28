@interface WCPayBalanceSaveMoneyViewController : WCPayBaseViewController
{
    id <WCPayBalanceSaveMoneyViewControllerDelegate> m_delegate; // +0x98
    UIButton * _selectBtn; // +0xa0
}
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)OnHistoryOrderDetailBack;
- (void)internalPushViewController:(id)arg1 animated:(BOOL)arg2;
- (void)initNavigationBar;
- (id)navigationBarBackgroundColor;
- (void)reloadTableView;
- (void)refreshViewWithData:(id)arg1;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (id)selectBtn;
- (void)setSelectBtn:(id)arg1;
- (void).cxx_destruct;
@end
