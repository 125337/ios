@interface CBTAsstContactSelectView : ContactSelectView
{
    NSMutableArray * _sortedContacts; // +0x50
    NSSet * _displayUsernameSet; // +0x58
    UILabel * _emptyLabel; // +0x60
    NSMutableDictionary * _reportSelectSourceDict; // +0x68
}
- (void)initData:(unsigned int)arg1;
- (void)onContactsDataChange;
- (void)rebuildSortedContacts;
- (void)initView;
- (void)initSearchBar;
- (void)applySearchBarInset:(id)arg1 containerWidth:(double)arg2 animated:(BOOL)arg3;
- (void)applyDisabledForUnselectedWhenReachedMax:(unsigned long long)arg1;
- (BOOL)isUserSearchBarInView;
- (void)doSearch:(id)arg1 Pre:(BOOL)arg2;
- (void)cancelSearch;
- (void)wcsDidDismissSearch:(id)arg1;
- (void)onContactAsynSearchSectionResultChanged:(id)arg1 sectionTitles:(id)arg2 sectionResults:(id)arg3;
- (void)updateSearchResult:(id)arg1;
- (id)cellForSearchViewTable:(id)arg1 index:(id)arg2;
- (void)didSearchViewTableSelect:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)recordReportSelectSource:(long long)arg1 forContact:(id)arg2;
- (unsigned long long)reportDisplayIndexOfContact:(id)arg1;
- (long long)reportSelectSourceOfContact:(id)arg1;
- (void)updateEmptyView;
- (void).cxx_destruct;
@end
