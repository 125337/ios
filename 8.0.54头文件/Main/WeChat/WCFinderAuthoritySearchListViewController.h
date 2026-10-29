@interface WCFinderAuthoritySearchListViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, WCFinderFollowSearchContactViewModelDelegate, WCFinderRefreshTableFooterViewDelegate, UISearchBarDelegate, UITextFieldDelegate, WCFinderFeedBaseViewControllerProtocol, WCFinderAuthorityListViewModelSearchDelegate>
{
    id <WCFinderShieldOtherLiedSearchFeedViewControllerDelegate> _delegate; // +0x68
    UIView * _navigationView; // +0x70
    MMUISearchBar * _searchBar; // +0x78
    MMUILabel * _cancelSearchLabel; // +0x80
    UITableView * _tableView; // +0x88
    WCFinderRefreshTableFooterView * _footerView; // +0x90
    WCFinderAnimationLoadingView * _loadingView; // +0x98
    UILabel * _stateTipsLabel; // +0xa0
    UITapGestureRecognizer * _stateRetryGesture; // +0xa8
    UIImageView * _retryImageView; // +0xb0
    id <WCFinderAuthorityListViewModelProtocol> _viewModel; // +0xb8
    NSArray * _searchResult; // +0xc0
}
- (id)initWithViewModel:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)willDisappear;
- (void)initNaviBar;
- (void)configTableView;
- (void)onTextFieldChanged:(id)arg1;
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
- (void)onFinderSearchContactResultError;
- (void)onFinderSearchContactResultNoMore;
- (void)onFinderSearchContactNextPageError;
- (void)onFinderSearchContactReload:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)clickQuitAction;
- (void)setSearchTextFieldBecomeFirstResponder;
- (void)doSearchAction:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)doThrottleSearch;
- (int)feedViewControllerScene;
- (void)viewModel:(id)arg1 onSearchResultUpdated:(id)arg2;
- (void)configStatusTips:(id)arg1;
- (void)viewModelSearchResultHasNoMoreData:(id)arg1;
- (void)viewModelSearchResultRequestNextPageFailed:(id)arg1 errorMsg:(id)arg2;
- (void)onDataFetchFinish;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)navigationView;
- (void)setNavigationView:(id)arg1;
- (id)searchBar;
- (void)setSearchBar:(id)arg1;
- (id)cancelSearchLabel;
- (void)setCancelSearchLabel:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (void)setLoadingView:(id)arg1;
- (void)setStateTipsLabel:(id)arg1;
- (void)setStateRetryGesture:(id)arg1;
- (void)setRetryImageView:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)searchResult;
- (void)setSearchResult:(id)arg1;
- (void).cxx_destruct;
@end

