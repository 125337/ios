@interface WCFinderMentionUserActionSheet : WCFinderCustomPanelSheet <UITableViewDelegate, UITableViewDataSource, UISearchBarDelegate, WCFinderMentionUserActionSheetViewModelDelegate, WCFinderRefreshTableFooterViewDelegate>
{
    BOOL _tapDeleteKey; // +0x70
    WCFinderMentionUserActionSheetViewModel * _viewModel; // +0x78
    MMUISearchBar * _searchBar; // +0x80
    UITableView * _tableView; // +0x88
    WCFinderAnimationLoadingView * _loadingView; // +0x90
    UILabel * _stateLabel; // +0x98
    id /* block */ _complete; // +0xa0
    unsigned long long _searchKey; // +0xa8
    unsigned long long _scene; // +0xb0
}
+ (id)sheetWithScene:(unsigned long long)arg1 complete:(id /* block */)arg2;
- (id)initWithContentView:(id)arg1;
- (id)loadContentView;
- (void)viewDidLoad;
- (id)createTableView:(CGRect)arg1;
- (id)createSearchBar;
- (void)viewWillAppear:(BOOL)arg1;
- (void)beginSearch:(id)arg1;
- (void)onClickMore:(id)arg1;
- (void)mentionSheetVMResultChanged:(id)arg1;
- (BOOL)searchBarShouldBeginEditing:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (BOOL)searchBar:(id)arg1 shouldChangeTextInRange:(_NSRange)arg2 replacementText:(id)arg3;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)_delaySearch;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)_clickCleanButton;
- (void)didClickFooterRefreshRetry:(id)arg1;
- (void)finderFooterDidTriggerRefresh:(id)arg1;
- (void)requestNextPage;
- (BOOL)isEnableTriggerRefreshAtScroll:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)updateFooterState;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)showYuanbaoSheetWithContact:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)searchBar;
- (void)setSearchBar:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)stateLabel;
- (void)setStateLabel:(id)arg1;
- (BOOL)tapDeleteKey;
- (void)setTapDeleteKey:(BOOL)arg1;
- (id /* block */)complete;
- (void)setComplete:(id /* block */)arg1;
- (unsigned long long)searchKey;
- (void)setSearchKey:(unsigned long long)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
