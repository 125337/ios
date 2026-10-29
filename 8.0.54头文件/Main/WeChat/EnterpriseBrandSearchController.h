@interface EnterpriseBrandSearchController : MMObject <IEnterpriseBrandContactMgrExt, WCSearchDelegate, WCDataSearchDelegate>
{
    NSString * _brandUserName; // +0x8
    NSString * _searchText; // +0x10
    NSMutableArray * _aryResult; // +0x18
    NSArray * _arySubContact; // +0x20
    BOOL _isActive; // +0x28
    id <EnterpriseBrandSearchControllerDelegate> _delegate; // +0x30
}
- (id)initWithBrandUserName:(id)arg1;
- (void)initData;
- (void)reloadTable;
- (void)reloadSubContacts;
- (void)doSearch:(id)arg1 Pre:(BOOL)arg2;
- (id)cellForIndex:(id)arg1 ForSearchViewTable:(id)arg2;
- (long long)numberOfSectionsForSearchViewTable:(id)arg1;
- (long long)numberOfRowsInSection:(long long)arg1 ForSearchViewTable:(id)arg2;
- (double)heightForHeaderInSection:(long long)arg1 ForSearchViewTable:(id)arg2;
- (double)heightForSearchViewTable:(id)arg1;
- (void)didSearchViewTableSelect:(id)arg1;
- (void)wcsWillPresentSearch:(id)arg1;
- (void)wcsWillDismissSearch:(id)arg1;
- (void)onEnterpriseBrandContactChanged:(id)arg1;
- (void)onEnterpriseBrandContactDeleted:(id)arg1;
- (id)makeContactCell:(id)arg1 tableView:(id)arg2;
- (id)getMMSearchBar;
- (id)getViewController;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

