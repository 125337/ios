@interface MMLiveContactSelectView : ContactSelectView <WCContactSelectFixedSearcherDelegate>
{
    unsigned long long _enterType; // +0x40
    long long _preferredCellAccessoryType; // +0x48
    WCContactSelectFixedSearcher * _liveContactSearcher; // +0x50
    UIView * _searchContainerView; // +0x58
}
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithFrame:(CGRect)arg1 delegate:(id)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (void)initTableView;
- (void)initSearchBar;
- (void)updateSearchResult:(id)arg1;
- (void)updateSearchingState:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)mmsectionIndexTitlesForTableView:(id)arg1;
- (void)liveContactBeginSearch;
- (void)liveContactDoSearch:(id)arg1 Pre:(BOOL)arg2;
- (void)liveContactCancelSearch;
- (id)liveContactCellForSearchViewTable:(id)arg1 index:(id)arg2;
- (void)liveContactDidSearchViewTableSelect:(id)arg1;
- (void)updateWithConfig:(id)arg1;
- (unsigned long long)enterType;
- (void)setEnterType:(unsigned long long)arg1;
- (long long)preferredCellAccessoryType;
- (void)setPreferredCellAccessoryType:(long long)arg1;
- (id)liveContactSearcher;
- (void)setLiveContactSearcher:(id)arg1;
- (id)searchContainerView;
- (void)setSearchContainerView:(id)arg1;
- (void).cxx_destruct;
@end

