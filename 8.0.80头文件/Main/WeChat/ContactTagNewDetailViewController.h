@interface ContactTagNewDetailViewController : MMUIViewController <IContactLabelMgrExt, IContactMgrExt, MultiSelectContactsViewControllerDelegate, MMTableViewIndexViewDelegate, ContactsSearchControllerDelegate, ContactTagCreateTagHalfScreenViewControllerDelegate, UITableViewDelegate, UITableViewDataSource>
{
    BOOL _isNoNeedAddButtonInEmptyView; // +0x70
    BOOL _isRemovingMember; // +0x71
    unsigned int _m_uiFromScene; // +0x74
    unsigned int _curEventID; // +0x78
    unsigned long long _commonSearchScene; // +0x80
    ContactTagData * _contactTagData; // +0x88
    id <ContactTagNewDetailViewControllerDelegate> _m_delegate; // +0x90
    long long _curActionType; // +0x98
    MMTableView * _tableView; // +0xa0
    NSMutableArray * _curMemberContactList; // +0xa8
    NSMutableArray * _contactsKeyArray; // +0xb0
    NSMutableDictionary * _contactsDict; // +0xb8
    UIView * _bottomBar; // +0xc0
    UIView * _emptyView; // +0xc8
    MMUIViewController * _selectContactViewController; // +0xd0
    ContactsSearchController * _searchController; // +0xd8
}
- (id)init;
- (id)initViewControllerWithContactTagData:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)initData;
- (void)reloadDataAndViewAndNotify;
- (void)reloadDataAndView;
- (void)initView;
- (void)initSearchBar;
- (void)initBottomBar;
- (void)initEmptyView;
- (id)getEmptyViewStr;
- (void)processContactSectionData:(id)arg1;
- (id)addContactSectionKey:(id)arg1;
- (void)sortTagContacts;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)handleDeleteContactAtIndexPath:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)loadHeaderViewSelection;
- (long long)mmcurrentIndexForTableView:(id)arg1;
- (id)mmsectionIndexTitlesForTableView:(id)arg1;
- (long long)mmtableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (void)makeMemberContactCellContent:(id)arg1 WithIndexPath:(id)arg2;
- (void)makeMemberContactCellContent:(id)arg1 contact:(id)arg2;
- (void)onClickAddMember;
- (void)onClickRemoveMember;
- (void)onClickContactItemCellWithIndexPath:(id)arg1;
- (void)onMultiSelectContactReturn:(id)arg1 selectContactFromGroup:(id)arg2;
- (void)onMultiSelectContactReturn:(id)arg1;
- (void)doAddTagMembers:(id)arg1;
- (void)doRemoveTagMembers:(id)arg1;
- (void)realDoRemoveTagMembers:(id)arg1;
- (void)setContactLabel:(id)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (void)onDeleteContactLabel:(id)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (void)onOperate:(id)arg1;
- (void)onTapDeleteTag;
- (void)OnNewContactTagCreateTagWithTagId:(unsigned int)arg1 result:(BOOL)arg2 isRename:(BOOL)arg3;
- (void)doSearch:(id)arg1 Pre:(BOOL)arg2;
- (void)cancelSearch;
- (id)cellForSearchViewTable:(id)arg1 index:(id)arg2;
- (double)cellSeparatorLeftInsetForSearchViewTable:(id)arg1;
- (double)heightForSearchViewTable:(id)arg1;
- (void)didSearchViewTableSelect:(id)arg1;
- (void)onDeleteContact:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (void)deleteContactInTag:(id)arg1;
- (unsigned long long)commonSearchScene;
- (void)setCommonSearchScene:(unsigned long long)arg1;
- (unsigned int)m_uiFromScene;
- (void)setM_uiFromScene:(unsigned int)arg1;
- (id)contactTagData;
- (void)setContactTagData:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (long long)curActionType;
- (void)setCurActionType:(long long)arg1;
- (BOOL)isNoNeedAddButtonInEmptyView;
- (void)setIsNoNeedAddButtonInEmptyView:(BOOL)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)curMemberContactList;
- (void)setCurMemberContactList:(id)arg1;
- (unsigned int)curEventID;
- (void)setCurEventID:(unsigned int)arg1;
- (id)contactsKeyArray;
- (void)setContactsKeyArray:(id)arg1;
- (id)contactsDict;
- (void)setContactsDict:(id)arg1;
- (id)bottomBar;
- (void)setBottomBar:(id)arg1;
- (id)emptyView;
- (void)setEmptyView:(id)arg1;
- (id)selectContactViewController;
- (void)setSelectContactViewController:(id)arg1;
- (BOOL)isRemovingMember;
- (void)setIsRemovingMember:(BOOL)arg1;
- (id)searchController;
- (void)setSearchController:(id)arg1;
- (void).cxx_destruct;
@end
