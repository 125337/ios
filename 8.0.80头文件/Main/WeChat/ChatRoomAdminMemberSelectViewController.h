@interface ChatRoomAdminMemberSelectViewController : RoomContactSelectViewController <MMTableViewIndexViewDelegate>
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (Class)getNewContactsSearchPanelViewClass;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)loadHeaderViewSelection;
- (BOOL)mmforceUseTableView:(id)arg1;
- (id)mmsectionIndexTitlesForTableView:(id)arg1;
- (long long)mmtableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (long long)mmcurrentIndexForTableView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
@end
