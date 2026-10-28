@interface WCFinderPoiGroupBuyListViewController : MMUIViewController <WCFinderPoiGroupBuyListViewModelDelegate, UITableViewDataSource, UITableViewDelegate, WCFinderPoiGroupBuyTableViewCellDelegate, WCFinderRefreshTableFooterViewDelegate, WCFinderFeedBaseViewControllerProtocol>
{
    WCFinderPoiGroupBuyListViewModel * _viewModel; // +0x70
    UITableView * _tableView; // +0x78
    WCFinderRefreshTableFooterView * _footerView; // +0x80
}
- (id)initWithOpenParams:(id)arg1;
- (void)viewDidLoad;
- (id)tableView;
- (id)footerView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)finderPoiGroupBuyReloadAllData;
- (void)finderPoiGroupBuyAppendDataFrom:(long long)arg1 toIndex:(long long)arg2;
- (void)finderPoiGroupBuyNoMoreData;
- (void)finderPoiGroupBuyRequestFailWithErrorCode:(int)arg1;
- (void)onPoiGroupBuyActionButtonDidClick:(id)arg1;
- (void)didClickFooterRefreshRetry:(id)arg1;
- (void)finderFooterDidTriggerRefresh:(id)arg1;
- (BOOL)isEnableTriggerRefreshAtScroll:(id)arg1;
- (BOOL)finderFooterStatrLoadingWithoutDragging;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (void)registerYReportSdk;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (void)setTableView:(id)arg1;
- (void)setFooterView:(id)arg1;
- (void).cxx_destruct;
@end
