@interface WCFinderFansListViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, WCFinderFansListViewModelDelegate, WCFinderRefreshTableFooterViewDelegate, WCFinderFansProfileViewControllerDelegate, UISearchBarDelegate, WCFinderFollowSearchContactViewControllerDelegate>
{
    int _fromCommentScene; // +0x70
    WCTableView * _tableView; // +0x78
    WCFinderFansListViewModel * _viewModel; // +0x80
    WCFinderRefreshTableFooterView * _footerView; // +0x88
    UILabel * _stateTipsLabel; // +0x90
    UITapGestureRecognizer * _stateRetryGesture; // +0x98
    MMUISearchBar * _searchBar; // +0xa0
    WCFinderContact * _selectContact; // +0xa8
    WCFinderFollowSearchContactViewController * _searchContactVC; // +0xb0
    WCFinderFansListVCParams * _params; // +0xb8
}
- (id)initWithContact:(id)arg1;
- (id)initWithParams:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)updateTitle;
- (void)configureTableView;
- (id)stateTipsLabel;
- (id)stateRetryGesture;
- (void)stateRetryGestureAction:(id)arg1;
- (void)resetDetailToInitStatusWithRetry:(BOOL)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)clickSearchBar;
- (void)embedSubviewFromChildViewController:(id)arg1;
- (void)unembedChildViewController:(id)arg1;
- (void)showCommentProfileViewWithComment:(id)arg1;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)finderFansListViewModelNeedReloadDataWithContinueFlag:(BOOL)arg1;
- (void)finderFansListFetchFailWithErrorCode:(int)arg1;
- (void)didClickFooterRefreshRetry:(id)arg1;
- (void)finderFooterDidTriggerRefresh:(id)arg1;
- (void)fansProfileViewController:(id)arg1 clickActionWithContact:(id)arg2 finderContact:(id)arg3 type:(unsigned long long)arg4;
- (void)fansProfileViewController:(id)arg1 clickPrivateMsgWithContact:(id)arg2 finderContact:(id)arg3 comment:(id)arg4;
- (void)fansProfileViewController:(id)arg1 clickFinderActionWithWXUsername:(id)arg2;
- (void)showAddBlackListViewWithContact:(id)arg1;
- (void)didCancelSelectSearchContact;
- (BOOL)searchBarShouldBeginEditing:(id)arg1;
- (id)searchBar;
- (void)registerYReportSdk;
- (int)fromCommentScene;
- (void)setFromCommentScene:(int)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (void)setStateTipsLabel:(id)arg1;
- (void)setStateRetryGesture:(id)arg1;
- (void)setSearchBar:(id)arg1;
- (id)selectContact;
- (void)setSelectContact:(id)arg1;
- (id)searchContactVC;
- (void)setSearchContactVC:(id)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (void).cxx_destruct;
@end
