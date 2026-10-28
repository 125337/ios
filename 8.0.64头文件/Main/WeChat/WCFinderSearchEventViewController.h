@interface WCFinderSearchEventViewController : MMUIViewController <WCFinderSearchEventViewModelDelegate, UISearchBarDelegate, UITableViewDelegate, UITableViewDataSource, UIScrollViewDelegate, WCFinderEventPosterViewControllerDelegate, WCFinderEmptyTipsViewDelegate, WCFinderRefreshTableFooterViewDelegate>
{
    id <WCFinderSearchEventViewControllerDelegate> _delegate; // +0x70
    WCFinderSearchEventViewModel * _viewModel; // +0x78
    MMUISearchBar * _searchBar; // +0x80
    UITableView * _tableView; // +0x88
    WCFinderEmptyTipsView * _emptyTipsView; // +0x90
    WCFinderRefreshTableFooterView * _footerView; // +0x98
}
- (id)init;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)arg1;
- (id)navigationBarBackgroundColor;
- (void)OnCancel;
- (id)searchBar;
- (id)tableView;
- (id)emptyTipsView;
- (id)footerView;
- (void)setFlowId:(id)arg1;
- (void)setEventVisitId:(id)arg1;
- (void)setEmptyTipsViewState:(unsigned long long)arg1 config:(id)arg2;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)finderSearchEventReloadAllData;
- (void)finderSearchEventAppendDataFrom:(long long)arg1 toIndex:(long long)arg2;
- (void)finderSearchEventNoMoreData;
- (void)finderSearchEventError;
- (void)eventPosterViewController:(id)arg1 didSelectEvent:(id)arg2;
- (void)finderEmptyTipsView:(id)arg1 didClickOnState:(unsigned long long)arg2;
- (void)didClickFooterRefreshRetry:(id)arg1;
- (void)finderFooterDidTriggerRefresh:(id)arg1;
- (BOOL)isEnableTriggerRefreshAtScroll:(id)arg1;
- (void)registerYReportSdk;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (void)setSearchBar:(id)arg1;
- (void)setTableView:(id)arg1;
- (void)setEmptyTipsView:(id)arg1;
- (void)setFooterView:(id)arg1;
- (void).cxx_destruct;
@end
