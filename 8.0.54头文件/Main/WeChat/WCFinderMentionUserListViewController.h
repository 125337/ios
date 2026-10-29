@interface WCFinderMentionUserListViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, WCFinderRefreshTableFooterViewDelegate, UISearchBarDelegate, WCFinderMentionUserViewModelDelegate, WCFinderMentionSearchViewControllerDelegate>
{
    id <WCFinderMentionUserListViewControllerDelegate> _delegate; // +0x68
    WCTableView * _tableView; // +0x70
    WCFinderMentionUserViewModel * _viewModel; // +0x78
    WCFinderRefreshTableFooterView * _footerView; // +0x80
    UILabel * _stateTipsLabel; // +0x88
    UITapGestureRecognizer * _stateRetryGesture; // +0x90
    MMUISearchBar * _searchBar; // +0x98
    UIView * _searchContainer; // +0xa0
    WCFinderMentionSearchViewController * _searchViewController; // +0xa8
}
- (id)init;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)layoutComponents;
- (id)navigationBarBackgroundColor;
- (void)viewDidLoad;
- (void)updateNavigationBarView;
- (void)onClickCloseLeftItem;
- (void)configureTableView;
- (void)initSearchBar;
- (void)clickSearchBar:(id)arg1;
- (void)setViewModel:(id)arg1;
- (id)stateTipsLabel;
- (id)stateRetryGesture;
- (void)stateRetryGestureAction:(id)arg1;
- (void)resetDetailToInitStatusWithRetry:(BOOL)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)didSelectedMentionFollowListCell:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)getTableViewHeaderWithTitle:(id)arg1 section:(long long)arg2;
- (void)finderContactListViewNeedReloadWithContinueFlag:(BOOL)arg1;
- (void)finderContactListViewFetchFailWithErrorCode:(int)arg1;
- (void)finderContactListUnFollowContact:(id)arg1 index:(unsigned long long)arg2;
- (void)finderContactListFollowContact:(id)arg1;
- (void)finderContactListUpdateFinished;
- (void)didClickFooterRefreshRetry:(id)arg1;
- (void)finderFooterDidTriggerRefresh:(id)arg1;
- (BOOL)searchBarShouldBeginEditing:(id)arg1;
- (void)didSelectSearchContact:(id)arg1;
- (void)didCancelSelectSearchContact;
- (void)embedSubviewFromChildViewController:(id)arg1;
- (void)unembedChildViewController:(id)arg1;
- (void)registerYReportSdk;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)viewModel;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (void)setStateTipsLabel:(id)arg1;
- (void)setStateRetryGesture:(id)arg1;
- (id)searchBar;
- (void)setSearchBar:(id)arg1;
- (id)searchContainer;
- (void)setSearchContainer:(id)arg1;
- (id)searchViewController;
- (void)setSearchViewController:(id)arg1;
- (void).cxx_destruct;
@end

