@interface HoneyPaySelectCardTypeViewController : HoneyPayBaseViewController <UITableViewDelegate, UITableViewDataSource>
{
    id <HoneyPaySelectCardTypeViewControllerDelegate> _delegate; // +0x98
    UITableView * _tableView; // +0xa0
}
- (void)viewDidLoad;
- (void)refreshViewWithData:(id)arg1;
- (void)setupNavigationBar;
- (id)navigationBarBackgroundColor;
- (void)reloadTableView;
- (void)setupTableHeaderView;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (BOOL)useBlackStatusbar;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (void).cxx_destruct;
@end
