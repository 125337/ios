@interface ChatRoomInfoProfileRoomContactSelectViewController : RoomContactSelectViewController <UITextFieldDelegate>
{
    MMTableView * m_roomMemberResultTableView; // +0x120
    NSString * m_chatRoomOwnerTitle; // +0x128
    NSString * m_chatRoomAdminTitle; // +0x130
    BOOL m_firstLoad; // +0x138
    UIImageView * _searchBarWrap; // +0x140
    WCSearchBar * _searcherBar; // +0x148
    NSArray * _arrAdminUserName; // +0x150
}
- (id)init;
- (void)viewDidLayoutSubviews;
- (void)initData;
- (void)initSearchBar;
- (BOOL)isSeachActive;
- (BOOL)shouldInteractivePop;
- (id)navigationBarBackgroundColor;
- (void)viewWillAppear:(BOOL)arg1;
- (void)modifyArrKeys;
- (double)getContentViewY;
- (id)getRoomMemberResultTableView;
- (id)getRoomMemberSearchText;
- (void)addContact:(id)arg1;
- (void)initNavigationBar;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)loadHeaderViewSelection;
- (BOOL)mmforceUseTableView:(id)arg1;
- (BOOL)mmForceUseSpecialIndexShapeTableView:(id)arg1;
- (id)mmsectionIndexTitlesForTableView:(id)arg1;
- (long long)mmtableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (long long)mmcurrentIndexForTableView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)doSearchAction:(id)arg1;
- (double)getTableViewTop;
- (void)resetTableViewFrame;
- (void)textFieldDidBeginEditing:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)onTextFieldChanged:(id)arg1;
- (void)cancelButtonClicked;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)searchBarWrap;
- (void)setSearchBarWrap:(id)arg1;
- (id)searcherBar;
- (void)setSearcherBar:(id)arg1;
- (id)arrAdminUserName;
- (void)setArrAdminUserName:(id)arg1;
- (void).cxx_destruct;
@end
