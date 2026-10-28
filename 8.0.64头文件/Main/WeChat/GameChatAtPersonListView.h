@interface GameChatAtPersonListView : MMPageSheetBaseView <MMPageSheetBottomViewDelegate, UITableViewDelegate, UITableViewDataSource, UISearchBarDelegate, GCAtPersonListViewModelViewDelegate>
{
    BOOL _isSearching; // +0x8
    GameChatAtPersonListViewModel * _viewModel; // +0x10
    id <GameChatAtPersonListViewDelegate> _delegate; // +0x18
    NSString * _chatroomName; // +0x20
    UIView * _contentView; // +0x28
    MMTableView * _tableView; // +0x30
    MMUISearchBar * _searchBar; // +0x38
    UIView * _searchBarContainer; // +0x40
    NSArray * _searchResultArray; // +0x48
    MMTimer * _atAllCheckTimer; // +0x50
}
- (id)initWithFrame:(CGRect)arg1 viewModel:(id)arg2;
- (id)makeBackButton;
- (void)setupUI;
- (void)dealloc;
- (void)reloadListView;
- (void)initTableView;
- (void)initSearchBar;
- (void)didClickAtLeftNavButton;
- (unsigned long long)getSectionType:(long long)arg1;
- (void)showWithAnimation;
- (void)reportDataWithPositionId:(unsigned long long)arg1 op:(unsigned long long)arg2 userName:(id)arg3;
- (void)reportCell:(id)arg1 withAction:(unsigned long long)arg2;
- (void)makeGroupCell:(id)arg1 byModel:(id)arg2;
- (void)makeGroupCell:(id)arg1 url:(id)arg2 title:(id)arg3;
- (void)makeMoreMemberCell:(id)arg1;
- (void)makeAtAllCell:(id)arg1 byModel:(id)arg2;
- (void)onAtAllTimerCheck;
- (id)createContactsItemViewInCell:(id)arg1;
- (id)atModelAtIndexPath:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)reloadWhenCancelSearch;
- (void)reloadWhenSearchChange;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pageSheetDidClose:(BOOL)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)chatroomName;
- (void)setChatroomName:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)searchBar;
- (void)setSearchBar:(id)arg1;
- (id)searchBarContainer;
- (void)setSearchBarContainer:(id)arg1;
- (BOOL)isSearching;
- (void)setIsSearching:(BOOL)arg1;
- (id)searchResultArray;
- (void)setSearchResultArray:(id)arg1;
- (id)atAllCheckTimer;
- (void)setAtAllCheckTimer:(id)arg1;
- (void).cxx_destruct;
@end
