@interface WCPayECardBankCardListViewController : WCPayBaseViewController <UITableViewDelegate, UITableViewDataSource>
{
    id <WCPayECardBankCardListViewControllerDelegate> _delegate; // +0x90
    MMTableView * _tableView; // +0x98
}
- (void)viewDidLoad;
- (id)navigationBarBackgroundColor;
- (void)viewDidLayoutSubviews;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)setupTableView;
- (void)leftBarButtonItemClick;
- (void)reloadTableView;
- (id)setupTableHeaderView;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)makeBankInfoCell:(id)arg1 bankInfo:(id)arg2 isLastOne:(BOOL)arg3;
- (void)makeSelectNewCardToVerifyCell:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (void).cxx_destruct;
@end

