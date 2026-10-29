@interface WCFinderCommentContactSelectView : ContactSelectView <WCContactSelectFixedSearcherDelegate>
{
    NSArray * _latestCommentMentionedContacts; // +0x40
    WCContactSelectFixedSearcher * _contactSearcher; // +0x48
    UIView * _searchContainerView; // +0x50
}
- (void)initData:(unsigned int)arg1;
- (void)reloadLatestCommentMentionedContacts;
- (void)resignResponder;
- (void)initSearchBar;
- (void)updateSearchResult:(id)arg1;
- (void)updateSearchingState:(id)arg1;
- (BOOL)onFilterContactCandidate:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)mmtableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (long long)mmcurrentIndexForTableView:(id)arg1;
- (BOOL)hasLastestContact;
- (void)liveContactBeginSearch;
- (void)liveContactDoSearch:(id)arg1 Pre:(BOOL)arg2;
- (void)liveContactCancelSearch;
- (id)liveContactCellForSearchViewTable:(id)arg1 index:(id)arg2;
- (void)liveContactDidSearchViewTableSelect:(id)arg1;
- (id)latestCommentMentionedContacts;
- (void)setLatestCommentMentionedContacts:(id)arg1;
- (id)contactSearcher;
- (void)setContactSearcher:(id)arg1;
- (id)searchContainerView;
- (void)setSearchContainerView:(id)arg1;
- (void).cxx_destruct;
@end

