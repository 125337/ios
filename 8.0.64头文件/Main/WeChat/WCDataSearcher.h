@interface WCDataSearcher : WCSearcher <UITableViewDelegate, UITableViewDataSource>
{
    id <WCDataSearchDelegate> _dataDelegate; // +0x8
    Class _resultCellClass; // +0x10
    NSString * _lastQuery; // +0x18
    NSMutableArray * _arrResult; // +0x20
}
- (id)initWithContentViewController:(id)arg1;
- (void)clearData;
- (void)prepareSearchBarInNavMode;
- (void)onWCSearchControllerDidAppear:(BOOL)arg1;
- (void)onWCSearchControllerDidDisappear:(BOOL)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)doSearch:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (BOOL)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)dataDelegate;
- (void)setDataDelegate:(id)arg1;
- (Class)resultCellClass;
- (void)setResultCellClass:(Class)arg1;
- (id)lastQuery;
- (void)setLastQuery:(id)arg1;
- (id)arrResult;
- (void)setArrResult:(id)arg1;
- (void).cxx_destruct;
@end
