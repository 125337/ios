@interface WCMktMemberCardHomeViewController : WCMktCardBaseViewController <UITableViewDelegate, UITableViewDataSource, WCActionSheetDelegate, WCMktMemberCardHomeLogicControllerDelegate>
{
    WCMktMemberCardHomeLogicController * _logicController; // +0x68
    MMTableView * _tableView; // +0x70
    MMUILabel * _headerContentLabel; // +0x78
    UIButton * _headerContentCoverBtn; // +0x80
    UIView * _emptyView; // +0x88
    NSIndexPath * _willDeleteIndexPath; // +0x90
}
- (void)viewDidLoad;
- (void)viewDidPopOrDismiss:(BOOL)arg1;
- (BOOL)useBlackStatusbar;
- (id)navigationBarBackgroundColor;
- (void)setupData;
- (void)setupView;
- (void)setupTableView;
- (void)updateFooterView;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)genTableFooterView;
- (void)handleHeaderRefresh;
- (void)sortRuleCoverBtnClick;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)updateRightBarButton;
- (void)rightBarButtonClick;
- (void)setupEmptyView;
- (void)bubbleBtnClick;
- (id)getViewController;
- (void)vcStartLoading;
- (void)vcStopLoading;
- (void)onTableviewNeedReloadWhenLoadCache;
- (void)onTableviewNeedReloadWhenGetResp;
- (void)onTableviewGetHomePageDataFail;
- (void)onTableViewNeedRefresh;
- (void)onTableViewNeedDeleteWithIndexPath:(id)arg1;
- (void)onTableViewNeedShowLoading;
- (void)onTableViewNeedUpdateSortContent;
- (BOOL)isVCFromJsapiScene;
- (id)logicController;
- (void)setLogicController:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)headerContentLabel;
- (void)setHeaderContentLabel:(id)arg1;
- (id)headerContentCoverBtn;
- (void)setHeaderContentCoverBtn:(id)arg1;
- (id)emptyView;
- (void)setEmptyView:(id)arg1;
- (id)willDeleteIndexPath;
- (void)setWillDeleteIndexPath:(id)arg1;
- (void).cxx_destruct;
@end

