@interface WCMktCardHomeViewControllerV2 : WCMktCardBaseViewController <UITableViewDelegate, UITableViewDataSource, WCActionSheetDelegate, WCMktCardHomeLogicControllerV2Delegate>
{
    WCMktCardHomeLogicControllerV2 * _logicController; // +0x70
    MMTableView * _tableView; // +0x78
}
- (void)viewDidLoad;
- (void)viewDidPopOrDismiss:(BOOL)arg1;
- (BOOL)useBlackStatusbar;
- (id)navigationBarBackgroundColor;
- (void)setupData;
- (void)setupView;
- (void)setupTableView;
- (void)updateRightBarButton;
- (void)updateFooterView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)genTableFooterView;
- (void)setupEmptyView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)handleHeaderRefresh;
- (void)rightBarButtonClick;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)getViewController;
- (void)vcStartLoading;
- (void)vcStopLoading;
- (void)onTableviewNeedReloadWhenLoadCache;
- (void)onTableviewNeedReloadWhenGetResp;
- (void)onTableviewGetHomePageDataFail;
- (void)onTableViewNeedRefresh;
- (void)onTableViewNeedDeleteWithIndexPath:(id)arg1;
- (void)onTableViewNeedReloadCellWithIndexPath:(id)arg1;
- (void)onTableViewNeedShowLoading;
- (void)registerYReportSdk;
- (id)logicController;
- (void)setLogicController:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (void).cxx_destruct;
@end
