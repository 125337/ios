@interface SettingSearchViewController : WCSearchViewController <WCSearchBarDelegate, UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate>
{
    NewSettingViewController * _settingViewController; // +0x70
    id /* block */ _onSearchResultSelected; // +0x78
    UITableView * _tableView; // +0x80
    NSArray * _searchResults; // +0x88
    SettingIndexNode * _settingIndexRoot; // +0x90
    NSString * _currentSearchText; // +0x98
    UILabel * _emptyResultLabel; // +0xa0
}
- (id)initWithSettingViewController:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)dealloc;
- (void)setupSearchBar;
- (void)setupTableView;
- (void)setupEmptyResultView;
- (id)highlightedStringForTitle:(id)arg1 withKeyword:(id)arg2;
- (id)customSearchBar;
- (void)doSearch;
- (void)performSearch:(id)arg1;
- (BOOL)isNodeClickable:(id)arg1;
- (void)clearSearchResults;
- (void)updateTableViewWithResults:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)handleNodeSelection:(id)arg1;
- (void)onTextFieldChanged:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)mmInputBoxClear;
- (void)mmInputBoxTextChanged:(id)arg1 text:(id)arg2;
- (void)mmInputBoxFirstResponder;
- (id)settingViewController;
- (void)setSettingViewController:(id)arg1;
- (id /* block */)onSearchResultSelected;
- (void)setOnSearchResultSelected:(id /* block */)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)searchResults;
- (void)setSearchResults:(id)arg1;
- (id)settingIndexRoot;
- (void)setSettingIndexRoot:(id)arg1;
- (id)currentSearchText;
- (void)setCurrentSearchText:(id)arg1;
- (id)emptyResultLabel;
- (void)setEmptyResultLabel:(id)arg1;
- (void).cxx_destruct;
@end
