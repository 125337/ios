@interface WCMktCouponHomeViewControllerV2 : WCMktCardBaseViewController <UITableViewDelegate, UITableViewDataSource, WCMktCouponHomeLogicControllerV2Delegate, WCActionSheetDelegate>
{
    WCMktCouponHomeLogicControllerV2 * _logicController; // +0x68
    MMTableView * _tableView; // +0x70
    UIView * _emptyView; // +0x78
}
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (id)navigationBarBackgroundColor;
- (void)setupData;
- (void)setupView;
- (void)setupTableView;
- (void)setupEmptyView;
- (void)handleHeaderRefresh;
- (void)updateFooterView;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)updateNavigationBar;
- (void)rightBarButtonClick;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)genTableFooterView;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)getViewController;
- (void)vcStartLoading;
- (void)vcStopLoading;
- (void)onTableviewNeedReloadWhenLoadCache;
- (void)onTableviewNeedReloadWhenGetResp;
- (void)onTableviewGetCouponHomepageFail;
- (void)onDeleteCouponListElemDataSuccWithIndexPath:(id)arg1;
- (id)logicController;
- (void)setLogicController:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)emptyView;
- (void)setEmptyView:(id)arg1;
- (void).cxx_destruct;
@end

