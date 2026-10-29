@interface WCFinderPOIFavListViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, WCFinderPOIFavListViewModelDelegate, WCFinderRefreshTableFooterViewDelegate, WCFinderPOIFavListTableViewCellDelegate>
{
    WCFinderPOIFavListViewModel * _viewModel; // +0x70
    UITableView * _tableView; // +0x78
    WCFinderRefreshTableFooterView * _footerView; // +0x80
    WCFinderAnimationLoadingView * _loadingView; // +0x88
    UIButton * _retryButton; // +0x90
    UILabel * _emptyLabel; // +0x98
}
- (id)init;
- (void)viewDidLoad;
- (void)setupUI;
- (void)updateUI;
- (void)showLoading;
- (void)hideLoading;
- (void)showRetryButton;
- (void)hideRetryButton;
- (void)showEmptyLabel;
- (void)hideEmptyLabel;
- (CGPoint)tipsCenterPoint;
- (int)commentScene;
- (void)onRetryBtnClicked;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)reportCellEventWithFavItem:(id)arg1 event:(id)arg2;
- (void)onPOIFavListViewModelNoMoreData;
- (void)onPOIFavListViewModelFetchDataFail;
- (void)onPOIFavListViewModelDataChanged;
- (void)adjustDataLoadState;
- (void)didClickFooterRefreshRetry:(id)arg1;
- (void)finderFooterDidTriggerRefresh:(id)arg1;
- (BOOL)isEnableTriggerRefreshAtScroll:(id)arg1;
- (void)onPOIFavListTableViewCellClickedWithFavPOIItem:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)retryButton;
- (void)setRetryButton:(id)arg1;
- (id)emptyLabel;
- (void)setEmptyLabel:(id)arg1;
- (void).cxx_destruct;
@end
