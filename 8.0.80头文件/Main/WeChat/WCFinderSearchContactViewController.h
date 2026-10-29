@interface WCFinderSearchContactViewController : MMUIViewController <UITextFieldDelegate, UITableViewDelegate, UITableViewDataSource, WCFinderSearchContactViewModelDelegate, WCFinderRefreshTableFooterViewDelegate, WCFinderSearchHistoryListViewDelegate, WCFinderFeedBaseViewControllerProtocol, WCGeneralMonitorDelegate, WCFinderSearchContactCellDelegate>
{
    BOOL _hideHistoryView; // +0x70
    MMTagTextField * _navSearchTextField; // +0x78
    MMTitleView * _titleView; // +0x80
    UITableView * _tableView; // +0x88
    WCFinderRefreshTableFooterView * _footerView; // +0x90
    WCFinderSearchHistoryListView * _historyListView; // +0x98
    WCFinderAnimationLoadingView * _loadingView; // +0xa0
    UILabel * _stateTipsLabel; // +0xa8
    UITapGestureRecognizer * _stateRetryGesture; // +0xb0
    UIImageView * _retryImageView; // +0xb8
    WCFinderSearchContactViewModel * _viewModel; // +0xc0
}
- (id)initWithViewModel:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)willDisappear;
- (id)navigationBarBackgroundColor;
- (void)initNaviBar;
- (void)configTableView;
- (void)setupHistoryListView;
- (void)onNavigationBackItemClick:(id)arg1;
- (void)onTextFieldChanged:(id)arg1;
- (void)viewDidLayoutSubviews;
- (id)loadingView;
- (void)startLoadingAnimation;
- (void)stopLoadingAnimation;
- (id)retryImageView;
- (id)stateTipsLabel;
- (id)stateRetryGesture;
- (void)stateRetryGestureAction:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)didClickFooterRefreshRetry:(id)arg1;
- (void)finderFooterDidTriggerRefresh:(id)arg1;
- (void)onFinderSearchContactResultEmpty;
- (void)onFinderSearchContactResultChanged;
- (void)onFinderSearchContactResultError;
- (void)onFinderSearchContactResultNoMore;
- (void)onFinderSearchContactNextPageError;
- (void)onFinderSearchContactReload:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)onSelectSearchRecord:(id)arg1;
- (void)doSearchAction:(id)arg1;
- (void)onClearAllSerchHistory;
- (void)onDeleteSearchRecord:(id)arg1;
- (void)setSearchTextFieldBecomeFirstResponder;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (void)monitorView:(id)arg1 newExposedItems:(id)arg2 lastExposedItems:(id)arg3;
- (void)onFinderSearchContactCell:(id)arg1 liveNowViewDidClick:(id)arg2;
- (void)registerYReportSdk;
- (BOOL)hideHistoryView;
- (void)setHideHistoryView:(BOOL)arg1;
- (id)navSearchTextField;
- (void)setNavSearchTextField:(id)arg1;
- (id)titleView;
- (void)setTitleView:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (id)historyListView;
- (void)setHistoryListView:(id)arg1;
- (void)setLoadingView:(id)arg1;
- (void)setStateTipsLabel:(id)arg1;
- (void)setStateRetryGesture:(id)arg1;
- (void)setRetryImageView:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (void).cxx_destruct;
@end
