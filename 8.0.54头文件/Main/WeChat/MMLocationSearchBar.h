@interface MMLocationSearchBar : MMObject <UISearchBarDelegate, UITableViewDelegate, UITableViewDataSource>
{
    BOOL _isSearching; // +0x8
    MMLocationUISearchBar * _m_searchBar; // +0x10
    MMTableView * _m_searchResultTableView; // +0x18
    long long _m_returnKeyType; // +0x20
    id <MMLocationSearchBarDelegate> _m_SearchBarDelegate; // +0x28
    id <MMLocationSearchResultTableViewDelegate> _m_tableViewDelegate; // +0x30
    NSMutableArray * _m_arrFilteredObject; // +0x38
    UIViewController * _m_viewController; // +0x40
}
- (id)initWithSearchBar:(id)arg1 tableView:(id)arg2 ContentsController:(id)arg3;
- (id)initWithSearchBar:(id)arg1 tableView:(id)arg2 ContentsController:(id)arg3 change:(BOOL)arg4;
- (void)dealloc;
- (void)initData;
- (void)addNotifications;
- (void)reloadSearchResultData;
- (void)adjustContentView;
- (void)UISplitViewWillChangeSplitMode;
- (id)getObjectFor:(unsigned long long)arg1;
- (void)setFilteredObjects:(id)arg1;
- (void)updateAddrForShow:(id)arg1;
- (unsigned long long)getObjectCount;
- (void)addFilteredObject:(id)arg1;
- (void)clearFilteredObjects;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (BOOL)searchBar:(id)arg1 shouldChangeTextInRange:(_NSRange)arg2 replacementText:(id)arg3;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (BOOL)searchBarShouldBeginEditing:(id)arg1;
- (BOOL)searchBarShouldEndEditing:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)clearSearch;
- (void)finishSearch;
- (void)searchBarResignFirstResponder;
- (BOOL)isSearchBarFirstResponder;
- (void)enableButton:(id)arg1;
- (void)setIsSearching:(BOOL)arg1;
- (id)m_searchBar;
- (void)setM_searchBar:(id)arg1;
- (id)m_searchResultTableView;
- (void)setM_searchResultTableView:(id)arg1;
- (long long)m_returnKeyType;
- (void)setM_returnKeyType:(long long)arg1;
- (id)m_SearchBarDelegate;
- (void)setM_SearchBarDelegate:(id)arg1;
- (id)m_tableViewDelegate;
- (void)setM_tableViewDelegate:(id)arg1;
- (BOOL)isSearching;
- (id)m_arrFilteredObject;
- (void)setM_arrFilteredObject:(id)arg1;
- (id)m_viewController;
- (void)setM_viewController:(id)arg1;
- (void).cxx_destruct;
@end

