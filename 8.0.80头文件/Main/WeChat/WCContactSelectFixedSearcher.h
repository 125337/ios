@interface WCContactSelectFixedSearcher : NSObject <UISearchBarDelegate, UITableViewDelegate, UITableViewDataSource>
{
    BOOL _isSearching; // +0x8
    MMUISearchBar * _searchBar; // +0x10
    MMTableView * _tableView; // +0x18
    NSString * _lastQuery; // +0x20
    NSMutableArray * _arrResult; // +0x28
    id <WCContactSelectFixedSearcherDelegate> _searchDelegate; // +0x30
    ContactSelectSearcherConfig * _config; // +0x38
}
+ (double)preferSearchBarHeight;
+ (double)preferSearchTableWidth;
+ (double)preferSearchTableHeight;
- (id)initWithSearchResultTableView:(id)arg1;
- (void)dealloc;
- (void)createSearchBar;
- (void)updateWithConfig:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)initData;
- (void)clearData;
- (id)getSearchBarTextField;
- (void)setIsSearching:(BOOL)arg1;
- (void)setEmptyFooterView;
- (void)setNoResultFooterView:(id)arg1;
- (void)setLoadingFooterView:(id)arg1;
- (BOOL)isSearching;
- (id)searchBar;
- (void)setSearchBar:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)lastQuery;
- (void)setLastQuery:(id)arg1;
- (id)arrResult;
- (void)setArrResult:(id)arg1;
- (id)searchDelegate;
- (void)setSearchDelegate:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (void).cxx_destruct;
@end
