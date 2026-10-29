@interface WCFinderPOIRelatedListHalfViewController : MMUIHalfScreenViewController <UITableViewDelegate, UITableViewDataSource, WCFinderPOIRelatedListHalfTableViewSearchHeaderDelegate, WCFinderRefreshTableFooterViewDelegate, WCFinderPOIRelatedListHalfViewModelDelegate>
{
    id <WCFinderPOIRelatedListHalfViewControllerDelegate> _actionDelegate; // +0x70
    UITableView * _tableView; // +0x78
    FinderUserPagePoi * _finderUserPagePoi; // +0x80
    WCFinderPOIRelatedListHalfViewModel * _viewModel; // +0x88
    WCFinderRefreshTableFooterView * _footerView; // +0x90
    WCFinderPOIRelatedListHalfTableViewSearchHeader * _headerView; // +0x98
    WCFinderAnimationLoadingView * _loadingView; // +0xa0
    UILabel * _stateTipsLabel; // +0xa8
    UIImageView * _retryImageView; // +0xb0
}
- (void)viewDidLoad;
- (void)initSubView;
- (void)configTableView;
- (id)loadingView;
- (void)setupTipsLabel;
- (void)stateRetryGestureAction:(id)arg1;
- (void)startLoadingState;
- (void)fetchFirstPageData;
- (void)resetLoadingState;
- (void)resetStateTipsLabelWithRetry:(BOOL)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)didClickFooterRefreshRetry:(id)arg1;
- (void)finderFooterDidTriggerRefresh:(id)arg1;
- (BOOL)isEnableTriggerRefreshAtScroll:(id)arg1;
- (void)onBeginSearch;
- (void)onSearchAction:(id)arg1;
- (void)onSearchCancel;
- (void)onSearchStateChanged:(BOOL)arg1;
- (void)onFetchResultNoMore;
- (void)onFetchResultError;
- (void)onFetchResultSuccess;
- (void)onSearchActionStart;
- (id)actionDelegate;
- (void)setActionDelegate:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)finderUserPagePoi;
- (void)setFinderUserPagePoi:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (void)setLoadingView:(id)arg1;
- (id)stateTipsLabel;
- (void)setStateTipsLabel:(id)arg1;
- (id)retryImageView;
- (void)setRetryImageView:(id)arg1;
- (void).cxx_destruct;
@end
