@interface EnterpriseConvergeSessionSearchController : MMObject <EnterpriseContactSearchViewDelegate, EnterpriseSearchDataControllerDelegate, WCSearchDelegate, WCDataSearchDelegate>
{
    NSString * _mainBrandUserName; // +0x8
    NSString * _chatBrandUserName; // +0x10
    EnterpriseSearchDataController * _chatBrandDataController; // +0x18
    NSString * _searchText; // +0x20
    NSMutableArray * _aryContact; // +0x28
    NSMutableArray * _aryGroup; // +0x30
    NSMutableArray * _aryApplication; // +0x38
    EnterpriseContactSearchView * _moreView; // +0x40
    BOOL _hasContact; // +0x48
    BOOL _hasMoreContact; // +0x49
    BOOL _hasGroup; // +0x4a
    BOOL _hasMoreGroup; // +0x4b
    BOOL _hasApplication; // +0x4c
    BOOL _hasMoreApplication; // +0x4d
    BOOL _isLoadingContact; // +0x4e
    int _contactSection; // +0x50
    int _groupSection; // +0x54
    int _applicationSection; // +0x58
    BOOL _isActive; // +0x5c
    BOOL _reloadSmooth; // +0x5d
    NSRecursiveLock * _lock; // +0x60
    BOOL _hasSubBrandContact; // +0x68
    BOOL _hasMoreSubBrandContact; // +0x69
    id <EnterpriseConvergeSessionSearchControllerDelegate> _delegate; // +0x70
}
- (id)initWithMainBrandUserName:(id)arg1;
- (void)initData;
- (void)openMoreView:(unsigned int)arg1;
- (void)enterChat:(id)arg1;
- (void)reloadTableView;
- (void)doChatBrandRemoteSearch:(id)arg1;
- (void)doBrandLocalSearch;
- (void)doSearch:(id)arg1 Pre:(BOOL)arg2;
- (void)cancelSearch;
- (id)cellForIndex:(id)arg1 ForSearchViewTable:(id)arg2;
- (long long)numberOfSectionsForSearchViewTable:(id)arg1;
- (long long)numberOfRowsInSection:(long long)arg1 ForSearchViewTable:(id)arg2;
- (double)heightForHeaderInSection:(long long)arg1 ForSearchViewTable:(id)arg2;
- (double)heightForSearchViewTable:(id)arg1;
- (void)didSearchViewTableSelect:(id)arg1;
- (void)wcsWillPresentSearch:(id)arg1;
- (void)wcsWillDismissSearch:(id)arg1;
- (void)onRemoteSearchMoreCompleted:(id)arg1 range:(unsigned int)arg2 result:(id)arg3;
- (BOOL)shouldProcessRemoteSearchResp:(id)arg1 range:(unsigned int)arg2;
- (void)onEnterpriseContactSearchViewReturn:(BOOL)arg1;
- (void)onSelectEnterpriseSearchResultItem:(id)arg1;
- (id)getMMSearchBar;
- (id)getViewController;
- (id)getDataController;
- (id)makeTitleCell:(id)arg1 indexPath:(id)arg2 tableView:(id)arg3;
- (id)makeMoreTipCell:(id)arg1 indexPath:(id)arg2 tableView:(id)arg3;
- (id)makeLoadingTipCell:(id)arg1 indexPath:(id)arg2 tableView:(id)arg3;
- (id)makeContactCell:(id)arg1 tableView:(id)arg2;
- (double)getTitleCellTopMargin;
- (BOOL)hasContactSection;
- (BOOL)hasGroupSection;
- (BOOL)hasApplicationSection;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

