@interface MMOrderCenterSearchPageController : MMUIViewController <UISearchBarDelegate, UITableViewDelegate, UITableViewDataSource, MMOrderCenterOrderSearchHistoryTableViewItemCellDelegate>
{
    id <MMOrderCenterReporter> _reporter; // +0x68
    MMUISearchBar * _searchBar; // +0x70
    NSArray * _searchHistoryItems; // +0x78
    MMTableView * _historyTableView; // +0x80
    MMOrderCenterSearchDataProvider * _dataProvider; // +0x88
    MMOrderCenterTableViewController * _resultTable; // +0x90
}
- (id)initWithFilteringAppId:(id)arg1;
- (void)setReporter:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)onRemoveKeyword:(id)arg1;
- (void)configureViewToShowResult:(BOOL)arg1;
- (void)startSearchWithKeyword:(id)arg1;
- (void)addSearchHistory:(id)arg1;
- (void)removeSearchHistory:(id)arg1;
- (void)clearSearchHistory;
- (void)reportEntry;
- (void)reportSearch;
- (id)reporter;
- (id)searchBar;
- (void)setSearchBar:(id)arg1;
- (id)searchHistoryItems;
- (void)setSearchHistoryItems:(id)arg1;
- (id)historyTableView;
- (void)setHistoryTableView:(id)arg1;
- (id)dataProvider;
- (void)setDataProvider:(id)arg1;
- (id)resultTable;
- (void)setResultTable:(id)arg1;
- (void).cxx_destruct;
@end

