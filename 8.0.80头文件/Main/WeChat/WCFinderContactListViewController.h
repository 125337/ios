@interface WCFinderContactListViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, WCFinderContactListViewModelDelegate, WCFinderRefreshTableFooterViewDelegate, WCFinderRedDotNotifyExt, UISearchBarDelegate, WCFinderFeedBaseViewControllerProtocol, WCFinderFollowSearchContactViewControllerDelegate, WCGeneralMonitorDelegate, WCFinderContactListCellDelegate>
{
    BOOL _disableSearch; // +0x70
    int _finderProfileDefaultJumpTab; // +0x74
    NSString * _titleFormatString; // +0x78
    WCTableView * _tableView; // +0x80
    WCFinderContactListViewModel * _viewModel; // +0x88
    WCFinderRefreshTableFooterView * _footerView; // +0x90
    UILabel * _stateTipsLabel; // +0x98
    UITapGestureRecognizer * _stateRetryGesture; // +0xa0
    MMUISearchBar * _searchBar; // +0xa8
    UIView * _searchContainer; // +0xb0
    WCFinderFollowSearchContactViewController * _searchContactVC; // +0xb8
}
- (id)init;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)updateRightBarButtonItems;
- (void)onLimitedClicked;
- (void)updateTitle;
- (void)configureTableView;
- (void)setViewModel:(id)arg1;
- (void)setDisableSearch:(BOOL)arg1;
- (id)stateTipsLabel;
- (id)stateRetryGesture;
- (void)stateRetryGestureAction:(id)arg1;
- (void)resetDetailToInitStatusWithRetry:(BOOL)arg1;
- (void)clickSearchBar;
- (void)openProfileWithContact:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)finderContactListViewNeedReloadWithContinueFlag:(BOOL)arg1;
- (void)finderContactListViewFetchFailWithErrorCode:(int)arg1;
- (void)finderContactListUnFollowContact:(id)arg1 index:(unsigned long long)arg2;
- (void)finderContactListFollowContact:(id)arg1;
- (void)finderContactListUpdateFollowingCount;
- (void)didClickFooterRefreshRetry:(id)arg1;
- (void)finderFooterDidTriggerRefresh:(id)arg1;
- (void)onFinderNotifyFollowCountNeedReload;
- (BOOL)searchBarShouldBeginEditing:(id)arg1;
- (void)setupSearchBar;
- (void)didCancelSelectSearchContact;
- (void)embedSubviewFromChildViewController:(id)arg1;
- (void)unembedChildViewController:(id)arg1;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (void)monitorView:(id)arg1 newExposedItems:(id)arg2 lastExposedItems:(id)arg3;
- (void)onFinderContactListCell:(id)arg1 liveNowViewDidClick:(id)arg2;
- (void)registerYReportSdk;
- (BOOL)disableSearch;
- (id)titleFormatString;
- (void)setTitleFormatString:(id)arg1;
- (int)finderProfileDefaultJumpTab;
- (void)setFinderProfileDefaultJumpTab:(int)arg1;
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
- (id)searchContactVC;
- (void)setSearchContactVC:(id)arg1;
- (void).cxx_destruct;
@end
