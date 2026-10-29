@interface WCFinderFollowSearchContactViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, WCFinderFollowSearchContactViewModelDelegate, WCFinderRefreshTableFooterViewDelegate, UISearchBarDelegate, UITextFieldDelegate, WCFinderFeedBaseViewControllerProtocol, WCFinderFansProfileViewControllerDelegate, WCFinderSearchContactCellDelegate>
{
    BOOL _hideHistoryView; // +0x70
    id <WCFinderFollowSearchContactViewControllerDelegate> _delegate; // +0x78
    UIView * _navigationView; // +0x80
    MMUISearchBar * _searchBar; // +0x88
    MMUILabel * _cancelSearchLabel; // +0x90
    UITableView * _tableView; // +0x98
    WCFinderRefreshTableFooterView * _footerView; // +0xa0
    WCFinderAnimationLoadingView * _loadingView; // +0xa8
    UILabel * _stateTipsLabel; // +0xb0
    UITapGestureRecognizer * _stateRetryGesture; // +0xb8
    UIImageView * _retryImageView; // +0xc0
    id <WCFinderSearchContactViewModelProtocol> _viewModel; // +0xc8
}
- (BOOL)shouldWrapViewWithSafeArea;
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
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)getTableViewHeaderWithTitle:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)showCommentProfileViewWithContact:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)openProfileWithContact:(id)arg1;
- (void)addSearchMaskGestures;
- (void)onSearchMaskPan:(id)arg1;
- (void)clickQuitAction;
- (void)setSearchTextFieldBecomeFirstResponder;
- (void)doSearchAction:(id)arg1;
- (void)showAddBlackListViewWithContact:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)fansProfileViewController:(id)arg1 clickFinderActionWithWXUsername:(id)arg2;
- (void)fansProfileViewController:(id)arg1 clickPrivateMsgWithContact:(id)arg2 finderContact:(id)arg3 comment:(id)arg4;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (void)onFinderSearchContactCell:(id)arg1 liveNowViewDidClick:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)hideHistoryView;
- (void)setHideHistoryView:(BOOL)arg1;
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
- (void).cxx_destruct;
@end
