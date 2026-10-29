@interface ChatRoomSpecialAttentionMemberSelectViewController : RoomContactSelectViewController <MMTableViewIndexViewDelegate>
{
    NSArray * _arrAdminOrOwnerUserName; // +0x110
}
- (void)viewDidLoad;
- (void)addContact:(id)arg1;
- (Class)getNewContactsSearchPanelViewClass;
- (id)getSpecialAttentionMemberOwnOrAdminKey;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)loadHeaderViewSelection;
- (id)mmimageTableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (BOOL)mmforceUseTableView:(id)arg1;
- (BOOL)mmForceUseSpecialIndexShapeTableView:(id)arg1;
- (id)mmsectionIndexTitlesForTableView:(id)arg1;
- (long long)mmtableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (long long)mmcurrentIndexForTableView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)arrAdminOrOwnerUserName;
- (void)setArrAdminOrOwnerUserName:(id)arg1;
- (void).cxx_destruct;
@end

