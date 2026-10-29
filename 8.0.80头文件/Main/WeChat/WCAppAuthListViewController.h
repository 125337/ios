@interface WCAppAuthListViewController : MMUIViewController <UITableViewDelegate, MMTableViewDelegate, UITableViewDataSource, MMRefreshTableFooterDelegate, WCSearchDelegate, WCDataSearchDelegate, WCAppAuthLogicDelegate, MMNavBarInteractiveDelegate, WCAppAuthLogicExt, WCAppAuthTableViewCellDelegate>
{
    BOOL _bSearchWording; // +0x70
    BOOL _isAppear; // +0x71
    BOOL _isLoading; // +0x72
    WCAppAuthLogicController * _logicController; // +0x78
    MMTableView * _tableView; // +0x80
    UIView * _tableHeaderView; // +0x88
    MMUILabel * _headerTitleLabel; // +0x90
    WCTimeLineFooterView * _tableFooterView; // +0x98
    MMUILabel * _emptyTipsLabel; // +0xa0
    MMUIActivityIndicatorView * _activityIndicatorView; // +0xa8
    UIImageView * _refreshIconView; // +0xb0
    MMUILabel * _fetchFailTipsLabel; // +0xb8
    UIView * _fetchFailContainerView; // +0xc0
    WCDataSearcher * _searcher; // +0xc8
    MMUILabel * _searchErrorTips; // +0xd0
    WCTimeLineFooterView * _searchTableFooterView; // +0xd8
    MMUIActivityIndicatorView * _searchActivityIndicatorView; // +0xe0
}
- (id)init;
- (void)viewDidLoad;
- (void)fetchList;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (BOOL)shouldInteractivePop;
- (void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)onSearchClicked;
- (void)initSearchBar;
- (void)initSearchErrorTips;
- (void)layoutSearchErrorTips;
- (void)setSearchErrorTipsHidden:(BOOL)arg1;
- (void)initSearchActivityIndicatorView;
- (void)layoutSearchActivityIndicatorView;
- (void)startSearchActivityIndicatorViewLoading;
- (void)initTableView;
- (void)initTableHeaderView;
- (void)layoutTableHeaderTitleLabel;
- (void)initTableFooterView;
- (double)tipsCenterY;
- (void)setupEmptyTipsLabel;
- (void)initEmptyTipsLabel;
- (void)layoutEmptyTipsLabel;
- (void)initActivityIndicatorView;
- (void)layoutActivityIndicatorView;
- (BOOL)isEmptyPage;
- (void)updateSubviews:(BOOL)arg1;
- (void)setupFetchFailTipsView;
- (void)initFetchFailTipsView;
- (void)layoutFetchFailTipsView;
- (void)resetUIComponentBeforeFetch;
- (void)viewDidLayoutSubviews;
- (id)normalTintColor;
- (BOOL)isSetNormalToBlackStyle;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)didScrollViewScroll:(id)arg1;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)wcSearchViewTableDidScroll:(id)arg1;
- (void)wcsSearchBarCancelButtonClicked:(id)arg1;
- (void)wcsSearchBarSearchButtonClicked:(id)arg1;
- (long long)numberOfSectionsForSearchViewTable:(id)arg1;
- (long long)numberOfRowsInSection:(long long)arg1 ForSearchViewTable:(id)arg2;
- (id)cellForSearchViewTable:(id)arg1 index:(id)arg2;
- (double)heightForSearchViewTable:(id)arg1;
- (void)setSearchBar:(id)arg1 CancelButtonText:(id)arg2;
- (void)wcsSearchBarTextDidEndEditing:(id)arg1;
- (void)didSearchViewTableSelect:(id)arg1;
- (void)wcsSearchBar:(id)arg1 textDidChange:(id)arg2;
- (void)wcsWillPresentSearch:(id)arg1;
- (void)wcsWillDismissSearch:(id)arg1;
- (void)resetSearchBarResultTableView;
- (void)showAppInfoDetail:(id)arg1 fromScene:(unsigned int)arg2 fromIndex:(unsigned int)arg3;
- (void)logicDidFailAtCgi:(unsigned int)arg1 errcode:(int)arg2 errmsg:(id)arg3;
- (void)logicDidLoadMoreApps:(id)arg1;
- (void)logicDidFinishLoadApps;
- (void)logicWillStartDeletionApp:(id)arg1;
- (void)logicDidFinishDeletionApp:(id)arg1 index:(unsigned int)arg2;
- (void)logicDeletionAppFail:(id)arg1;
- (void)logicDidSearchMoreApps:(id)arg1;
- (void)initSearchFooterView;
- (void)logicDidFinishSearch;
- (void)onSwipeMenuItemApppear:(id)arg1;
- (id)logicController;
- (void)setLogicController:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)tableHeaderView;
- (void)setTableHeaderView:(id)arg1;
- (id)headerTitleLabel;
- (void)setHeaderTitleLabel:(id)arg1;
- (id)tableFooterView;
- (void)setTableFooterView:(id)arg1;
- (id)emptyTipsLabel;
- (void)setEmptyTipsLabel:(id)arg1;
- (id)activityIndicatorView;
- (void)setActivityIndicatorView:(id)arg1;
- (id)refreshIconView;
- (void)setRefreshIconView:(id)arg1;
- (id)fetchFailTipsLabel;
- (void)setFetchFailTipsLabel:(id)arg1;
- (id)fetchFailContainerView;
- (void)setFetchFailContainerView:(id)arg1;
- (id)searcher;
- (void)setSearcher:(id)arg1;
- (id)searchErrorTips;
- (void)setSearchErrorTips:(id)arg1;
- (id)searchTableFooterView;
- (void)setSearchTableFooterView:(id)arg1;
- (id)searchActivityIndicatorView;
- (void)setSearchActivityIndicatorView:(id)arg1;
- (BOOL)bSearchWording;
- (void)setBSearchWording:(BOOL)arg1;
- (BOOL)isAppear;
- (void)setIsAppear:(BOOL)arg1;
- (BOOL)isLoading;
- (void)setIsLoading:(BOOL)arg1;
- (void).cxx_destruct;
@end
