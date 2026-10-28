@interface WCMomentsContactTagSearchViewController : WCSearchViewController <UITableViewDelegate, UITableViewDataSource>
{
    BOOL _isMultiSelectEnabled; // +0x70
    id <WCMomentsContactTagSearchViewControllerDelegate> _delegate; // +0x78
    NSMutableOrderedSet * _selectedTagIdSet; // +0x80
    MMTableView * _tableView; // +0x88
    WCMomentsContactTagSearchBottomBar * _bottomBar; // +0x90
    NSArray * _searchResult; // +0x98
    NSString * _lastQuery; // +0xa0
    NSMutableSet * _selecedTagDataSet; // +0xa8
}
- (id)init;
- (void)dealloc;
- (void)initNotification;
- (void)viewDidLoad;
- (void)initTableView;
- (void)initBottomBar;
- (void)reloadData;
- (id)searchResultWithQuery:(id)arg1;
- (id)tagDataAtIndexPath:(id)arg1;
- (BOOL)isTagDataSelected:(id)arg1;
- (BOOL)DismissMyselfAnimated:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)onTextFieldChanged:(id)arg1;
- (void)onClickDone;
- (void)onNavigationCancelItemClick;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (unsigned long long)searchSelectCellCheckTypeWithTagData:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)keyboardDidHide:(id)arg1;
- (void)onKeyboardNotificationWithoutAnimation:(id)arg1;
- (void)onKeyboardNotification:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)selectedTagIdSet;
- (void)setSelectedTagIdSet:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)bottomBar;
- (void)setBottomBar:(id)arg1;
- (id)searchResult;
- (void)setSearchResult:(id)arg1;
- (id)lastQuery;
- (void)setLastQuery:(id)arg1;
- (BOOL)isMultiSelectEnabled;
- (void)setIsMultiSelectEnabled:(BOOL)arg1;
- (id)selecedTagDataSet;
- (void)setSelecedTagDataSet:(id)arg1;
- (void).cxx_destruct;
@end
