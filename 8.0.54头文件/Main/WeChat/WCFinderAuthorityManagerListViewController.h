@interface WCFinderAuthorityManagerListViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, UISearchBarDelegate, WCFinderRefreshTableFooterViewDelegate, WCFinderAuthorityListViewModelDelegate, MultiSelectContactsViewControllerDelegate, WCFinderShieldOtherLiedSearchFeedViewControllerDelegate, MainTableDelegate, ILinkEventExt>
{
    BOOL _autoHideSearchBar; // +0x68
    UITableView * _tableView; // +0x70
    id <WCFinderAuthorityListViewModelProtocol> _viewModel; // +0x78
    WCFinderRefreshTableFooterView * _footerView; // +0x80
    RichTextView * _tipsView; // +0x88
    UIImageView * _reloadIconView; // +0x90
    MMUISearchBar * _searchBar; // +0x98
    UIView * _searchContainer; // +0xa0
    WCFinderAuthoritySearchListViewController * _searchVC; // +0xa8
    RichTextView * _titleTextView; // +0xb0
}
- (id)initWithViewModel:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (double)contentOffsetY;
- (BOOL)showNavigationBarSepLine;
- (void)setupNavBar;
- (void)configureTableView;
- (void)updateTableViewHeaderView;
- (void)configureRightButton;
- (id)footerView;
- (id)tipsView;
- (id)titleTextView;
- (id)reloadIconView;
- (void)configDisplayTipsView:(id)arg1;
- (void)configDisplayRetryView:(BOOL)arg1;
- (void)layoutTipsTextIconViews;
- (void)initSearchBar;
- (void)setupDisplaySearchBar;
- (void)adjustSearchBarAndInset;
- (void)adjustContentSizeAndOffset;
- (double)fixDisplayOffsetY;
- (BOOL)respondsToSearchBar;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)getHeaderTipsRichTextViewWithTips:(id)arg1;
- (double)contactCellHeight;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)updateSearchContainerPosition;
- (void)onClickSearch;
- (void)clickRightAddButton;
- (void)onMultiSelectContactCancelForSns;
- (void)onMultiSelectContactReturn:(id)arg1;
- (void)didClickFooterRefreshRetry:(id)arg1;
- (void)finderFooterDidTriggerRefresh:(id)arg1;
- (BOOL)isEnableTriggerRefreshAtScroll:(id)arg1;
- (void)viewModelHasNoMoreData:(id)arg1;
- (void)reloadDataWrap;
- (void)viewModelDataDidChanged:(id)arg1;
- (void)viewModelLoadFailed:(id)arg1;
- (void)viewModelRemovedItemFailed:(id)arg1 errorInfo:(id)arg2;
- (void)viewModelRemoveItemAtIndexPath:(id)arg1;
- (void)resetEmptyStatusTips;
- (BOOL)isViewModelHasData;
- (void)viewModelBatchConfigFinish:(id)arg1 hasFailed:(BOOL)arg2;
- (void)WCFinderShieldOtherLiedSearchFeedViewControllerExit:(id)arg1;
- (void)embedSubviewFromChildViewController:(id)arg1;
- (void)unembedChildViewController:(id)arg1;
- (double)changeSearchStatusAdjustHeight;
- (double)getMainTableHeight;
- (double)getMainTableBottomInset;
- (double)getContentViewY;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)showWCOutsiderView;
- (void)showWCBlackListView;
- (void)registerYReportSdk;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (void)setFooterView:(id)arg1;
- (void)setTipsView:(id)arg1;
- (void)setReloadIconView:(id)arg1;
- (id)searchBar;
- (void)setSearchBar:(id)arg1;
- (id)searchContainer;
- (void)setSearchContainer:(id)arg1;
- (id)searchVC;
- (void)setSearchVC:(id)arg1;
- (BOOL)autoHideSearchBar;
- (void)setAutoHideSearchBar:(BOOL)arg1;
- (void)setTitleTextView:(id)arg1;
- (void).cxx_destruct;
@end

