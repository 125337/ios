@interface ContactTagDetailViewController : MMUIViewController <MMTableViewInfoDelegate, ChatRoomMemberGridViewDelegate, contactInfoDelegate, IContactLabelMgrExt, MultiSelectContactsViewControllerDelegate, UITextFieldDelegate>
{
    ContactTagData * _contactTagData; // +0x68
    int _actionType; // +0x70
    unsigned int _uiJobID; // +0x74
    MMTableViewInfo * m_tableViewInfo; // +0x78
    NSMutableArray * m_arrMemberList; // +0x80
    unsigned long long m_nCellCnt; // +0x88
    BOOL m_bDeleteStatus; // +0x90
    UITextField * m_tagNameTextField; // +0x98
    UILabel * m_WarningTextLabel; // +0xa0
    id <ContactTagDetailViewControllerDelegate> m_delegate; // +0xa8
    NSString * m_title; // +0xb0
    NSString * m_leftBarButtonTitle; // +0xb8
    BOOL isAlreadyPopKeyBoardWhenCreate; // +0xc0
    BOOL isShowWarningText; // +0xc1
    BOOL isAlreadyDisMissSelf; // +0xc2
    BOOL isTagNameOverLimit; // +0xc3
    NSMutableSet * m_contactSetImportFromGroup; // +0xc8
    NSMutableSet * m_contactSetNotImportFromGroup; // +0xd0
    int TagCountOfMutiSelectScene; // +0xd8
    BOOL m_bIsFromContactTagHelloWorld; // +0xdc
    NSString * ns_CurTagNameTextFieldValue; // +0xe0
}
- (id)initWithItem:(id)arg1;
- (id)initWithMembers:(id)arg1;
- (void)sortTagContacts;
- (void)LoadMemberList;
- (void)initData;
- (void)makeTagNameCell:(id)arg1 CellInfo:(id)arg2;
- (id)makeInfoHeaderSection;
- (void)makeWarningTextCell:(id)arg1 CellInfo:(id)arg2;
- (void)ShowWarningText:(id)arg1;
- (void)HideWarningText;
- (void)updateMemberView;
- (void)updateToNormalStatusEx;
- (void)makeMemListCell:(id)arg1 CellInfo:(id)arg2;
- (long long)getColCount;
- (void)makeWhiteCell:(id)arg1 CellInfo:(id)arg2;
- (id)makeMemListSection;
- (id)makeDeleteBtnSection;
- (void)onTagDeleteButtonPress:(id)arg1;
- (void)makeDeleteBtnCell:(id)arg1 CellInfo:(id)arg2;
- (void)reloadTableData;
- (void)initView;
- (void)InternalDisMissSelfAnimated:(BOOL)arg1;
- (void)onDismiss:(id)arg1;
- (void)onSave:(id)arg1;
- (void)SetSaveButtonEnable:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)didReceiveMemoryWarning;
- (BOOL)isTagNameCreated;
- (BOOL)isTagNameChanged;
- (BOOL)isContactTagListChanged;
- (BOOL)isTagNameEmptyOrExist:(id)arg1;
- (BOOL)isTagNameEmpty:(id)arg1;
- (unsigned int)JobForTagNameWithServer;
- (unsigned int)JobForContactTagChanged;
- (void)onEditComfirm;
- (void)onDeleteComfirm;
- (BOOL)textFieldShouldClear:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(_NSRange)arg2 replacementString:(id)arg3;
- (void)onTagNameChanged:(id)arg1;
- (void)ShowMultiSelectContactsViewController:(id)arg1;
- (void)addMember;
- (void)setShowRemoveMember;
- (void)onLongPressEx:(id)arg1;
- (void)onDeleteMember:(id)arg1;
- (void)openContactInfo:(id)arg1;
- (void)onMultiSelectContactReturn:(id)arg1 selectContactFromGroup:(id)arg2;
- (void)onMultiSelectContactReturn:(id)arg1;
- (void)reloadMemberListAndView:(id)arg1 isChatRoomList:(BOOL)arg2;
- (void)updateContactLabelName:(id)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (void)onAddContactLabel:(id)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (void)setContactLabel:(id)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (void)onDeleteContactLabel:(id)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)ns_CurTagNameTextFieldValue;
- (void)setNs_CurTagNameTextFieldValue:(id)arg1;
- (BOOL)m_bIsFromContactTagHelloWorld;
- (void)setM_bIsFromContactTagHelloWorld:(BOOL)arg1;
- (id)m_title;
- (void)setM_title:(id)arg1;
- (id)m_leftBarButtonTitle;
- (void)setM_leftBarButtonTitle:(id)arg1;
- (void).cxx_destruct;
@end

