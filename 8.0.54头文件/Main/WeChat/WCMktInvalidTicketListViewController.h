@interface WCMktInvalidTicketListViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, WCMktInvalidTicketListLogicControllerDelegate, WCMktInvalidTicketItemCellDelegate, WCActionSheetDelegate>
{
    WCMktInvalidTicketListLogicController * _logicController; // +0x68
    MMTableView * _tableView; // +0x70
    UIView * _emptyTipsView; // +0x78
}
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)setupData;
- (void)setupView;
- (void)setupTableView;
- (void)setupEmptyView;
- (void)setupDeleteAllBtn;
- (void)handleHeaderRefresh;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)genTableFooterView;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (void)reportInvalidTicketListDataWithIndexPath:(id)arg1 reportScene:(unsigned int)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)getViewController;
- (void)vcStartLoading;
- (void)vcStopLoading;
- (void)onTableviewNeedReloadWhenLoadCache;
- (void)onTableviewNeedReloadWhenGetResp;
- (void)onTableviewGetInvalidTicketHomepageFail;
- (void)onDeleteInvalidListElemDataSuccWithIndexPath:(id)arg1;
- (void)onInvalidTicketItemCellTagBtnClick:(id)arg1;
- (id)logicController;
- (void)setLogicController:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)emptyTipsView;
- (void)setEmptyTipsView:(id)arg1;
- (void).cxx_destruct;
@end

