@interface ContactTagSearchPanel : NSObject <WCDataSearchDelegate, WCSearchDelegate>
{
    BOOL _isMultiSelecting; // +0x8
    id <ContactTagSearchPanelDelegate> _delegate; // +0x10
    WCDataSearcher * _searcher; // +0x18
    MMUIViewController * _contentViewController; // +0x20
    NSMutableArray * _searchResult; // +0x28
    ContactTagSearchBottomBar * _bottomBar; // +0x30
    NSMutableSet * _selectedTags; // +0x38
    NSArray * _forceSelectedTags; // +0x40
    NSArray * _allTags; // +0x48
}
- (id)initWithContentViewController:(id)arg1;
- (void)initSearcher;
- (void)initBottomBar;
- (void)dealloc;
- (void)wcsWillPresentSearch:(id)arg1;
- (void)wcsDidPresentSearch:(id)arg1;
- (void)wcsDidDismissSearch:(id)arg1;
- (void)updateBottomBarSelectStatus:(BOOL)arg1 count:(long long)arg2;
- (void)startMultiSelect;
- (void)finishMultiSelect;
- (void)cancelMultiSelect;
- (BOOL)isSelected:(id)arg1;
- (BOOL)isForceSelected:(id)arg1;
- (void)doSearch:(id)arg1 Pre:(BOOL)arg2;
- (void)cancelSearch;
- (id)cellForIndex:(id)arg1 ForSearchViewTable:(id)arg2;
- (double)heightForSearchViewTable:(id)arg1;
- (void)didSearchViewTableSelect:(id)arg1;
- (long long)numberOfSectionsForSearchViewTable:(id)arg1;
- (long long)numberOfRowsInSection:(long long)arg1 ForSearchViewTable:(id)arg2;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)keyboardDidHide:(id)arg1;
- (void)onKeyboardNotificationWithoutAnimation:(id)arg1;
- (void)onKeyboardNotification:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)searcher;
- (void)setSearcher:(id)arg1;
- (id)contentViewController;
- (void)setContentViewController:(id)arg1;
- (id)searchResult;
- (void)setSearchResult:(id)arg1;
- (id)bottomBar;
- (void)setBottomBar:(id)arg1;
- (id)selectedTags;
- (void)setSelectedTags:(id)arg1;
- (id)forceSelectedTags;
- (void)setForceSelectedTags:(id)arg1;
- (id)allTags;
- (void)setAllTags:(id)arg1;
- (BOOL)isMultiSelecting;
- (void)setIsMultiSelecting:(BOOL)arg1;
- (void).cxx_destruct;
@end
