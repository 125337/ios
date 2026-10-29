@interface ContactsAuthorityManageDetailViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, IContactLabelMgrExt, IContactMgrExt, MMTableViewIndexViewDelegate, ContactsAuthorityManageDeleteContactViewControllerDelegate, ContactsAuthorityManageAddContactFromContactsViewControllerDelegate, ILinkEventExt, ContactsSearchControllerDelegate, ContactsAuthorityManageModifyContactLogicDelegate>
{
    double m_tagDetailEditHeaderHeight; // +0x68
    MMUIView * m_tableViewFooterView; // +0x70
    MMUIViewController * m_selectedViewController; // +0x78
    MMUIView * m_bottomToolView; // +0x80
    UIView * m_emptyView; // +0x88
    MMUIButton * m_deleteBtn; // +0x90
    MMUIButton * m_editeBtn; // +0x98
    NSMutableArray * m_contactUserNameList; // +0xa0
    NSMutableDictionary * m_dicMatchTip; // +0xa8
    unsigned int m_authorityManageSelectionType; // +0xb0
    unsigned int m_authorityManageselectionCount; // +0xb4
    unsigned int m_arrAllCanSelectContactCount; // +0xb8
    BOOL _bIsAlreadyDisMissSelf; // +0xbc
    unsigned int _m_uiFromScene; // +0xc0
    unsigned int _curEventID; // +0xc4
    unsigned long long _commonSearchScene; // +0xc8
    unsigned long long _reportBizType; // +0xd0
    id <ContactsAuthorityManageDetailViewControllerDelegate> _m_delegate; // +0xd8
    MMTableView * _tableView; // +0xe0
    ContactTagData * _contactTagData; // +0xe8
    NSMutableArray * _curMemberContactList; // +0xf0
    NSMutableArray * _contactsKeyArray; // +0xf8
    NSMutableDictionary * _contactsDict; // +0x100
    long long _contactItemClickNum; // +0x108
    NSMutableArray * _originalMemberContactNameList; // +0x110
    RichTextView * _titleTextView; // +0x118
    ContactsSearchController * _searchController; // +0x120
    ContactsAuthorityManageModifyContactLogic * _contactsAuthorityManageModifyContactLogic; // +0x128
}
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)initViewControllerWithContactTagData:(id)arg1;
- (void)initData;
- (void)reloadContactTagData;
- (void)reloadData;
- (void)initView;
- (void)reloadTableView;
- (void)initSearchBar;
- (void)initBottomToolView;
- (void)initEmptyView;
- (id)getHeaderTipsRichTextViewWithTips:(id)arg1 center:(BOOL)arg2;
- (id)getEmptyTipsView;
- (id)getTableTipsView;
- (void)resetViewBackgroundColor;
- (id)getTableTipString;
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
- (void)scrollViewDidScroll:(id)arg1;
- (void)loadHeaderViewSelection;
- (long long)mmcurrentIndexForTableView:(id)arg1;
- (id)mmsectionIndexTitlesForTableView:(id)arg1;
- (long long)mmtableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (void)onDismissBarButtonPress:(id)arg1;
- (void)makeMemberContactCellContent:(id)arg1 WithIndexPath:(id)arg2;
- (void)makeMemberContactCellContent:(id)arg1 contact:(id)arg2;
- (void)onClickContactItemCellWithIndexPath:(id)arg1;
- (void)setSaveButtonEnable:(BOOL)arg1;
- (void)onClickAddBtn;
- (void)onClickDeleteBtn;
- (void)onClickManageBtn;
- (id)getButton:(id)arg1 Action:(SEL)arg2 Target:(id)arg3;
- (void)handleDeleteContactAtIndexPath:(id)arg1;
- (void)doRemoveContact:(id)arg1;
- (void)onNewContactAuthorityAddContactSuccess:(id)arg1;
- (void)onNewContactAuthorityDeleteContactSuccess:(id)arg1;
- (void)reloadAuthorityDetailDeleteContactWithDicMultiSelect:(id)arg1 andDicExistContact:(id)arg2;
- (id)getViewController;
- (void)onNewContactTagAddContactSelectContactReturn:(id)arg1;
- (void)onNewContactTagAddContactAllCanSelectContact:(id)arg1;
- (void)reloadMemberListAndView:(id)arg1 isChatRoomList:(BOOL)arg2;
- (void)doSearch:(id)arg1 Pre:(BOOL)arg2;
- (void)cancelSearch;
- (id)cellForSearchViewTable:(id)arg1 index:(id)arg2;
- (double)cellSeparatorLeftInsetForSearchViewTable:(id)arg1;
- (double)heightForSearchViewTable:(id)arg1;
- (void)didSearchViewTableSelect:(id)arg1;
- (void)onDeleteContact:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (void)handleModifyContactChange:(id)arg1;
- (BOOL)hadContactsAuthority:(id)arg1;
- (void)deleteSnsBlackAndReload:(id)arg1;
- (void)deleteContactInTag:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)titleTextView;
- (unsigned long long)commonSearchScene;
- (void)setCommonSearchScene:(unsigned long long)arg1;
- (unsigned int)m_uiFromScene;
- (void)setM_uiFromScene:(unsigned int)arg1;
- (unsigned long long)reportBizType;
- (void)setReportBizType:(unsigned long long)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)contactTagData;
- (void)setContactTagData:(id)arg1;
- (id)curMemberContactList;
- (void)setCurMemberContactList:(id)arg1;
- (unsigned int)curEventID;
- (void)setCurEventID:(unsigned int)arg1;
- (BOOL)bIsAlreadyDisMissSelf;
- (void)setBIsAlreadyDisMissSelf:(BOOL)arg1;
- (id)contactsKeyArray;
- (void)setContactsKeyArray:(id)arg1;
- (id)contactsDict;
- (void)setContactsDict:(id)arg1;
- (long long)contactItemClickNum;
- (void)setContactItemClickNum:(long long)arg1;
- (id)originalMemberContactNameList;
- (void)setOriginalMemberContactNameList:(id)arg1;
- (void)setTitleTextView:(id)arg1;
- (id)searchController;
- (void)setSearchController:(id)arg1;
- (id)contactsAuthorityManageModifyContactLogic;
- (void)setContactsAuthorityManageModifyContactLogic:(id)arg1;
- (void).cxx_destruct;
@end

