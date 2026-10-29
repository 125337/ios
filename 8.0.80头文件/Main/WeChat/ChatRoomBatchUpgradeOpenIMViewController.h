@interface ChatRoomBatchUpgradeOpenIMViewController : ChatRoomBaseUpgradeOpenIMViewController <ChatRoomBatchUpgradeOpenIMLogicDelegate, UITableViewDataSource, UITableViewDelegate, ILinkEventExt, GroupSelectContactsViewControllerDelegate, ContactsDataLogicDelegate>
{
    ChatRoomBatchUpgradeOpenIMLogic * m_chatRoomBatchUpgradeOpenIMLogic; // +0x70
    MMTableView * m_tableView; // +0x78
    CGSize m_layoutSize; // +0x80
    NSMutableArray * m_needUpgradeOpenIMChatRoomAr; // +0x90
    NSMutableDictionary * m_dicMultiSelect; // +0x98
    GroupSelectContactsViewController * m_groupSelectContactsViewController; // +0xa0
    BOOL m_isHadCanUpgradeOpenIMGroupContact; // +0xa8
    UIButton * m_iSelectedBtn; // +0xb0
    NSMutableArray * m_upgradeOpenIMChatRoomUsrNameAr; // +0xb8
    NSMutableArray * m_normalChatRoomUsrNameAr; // +0xc0
    BOOL m_isDoAccept; // +0xc8
    BOOL m_isSeletedNormalChatRoom; // +0xc9
    ContactsDataLogic * m_contactsDataLogic; // +0xd0
    BOOL m_isHadReport; // +0xd8
    NSString * _chatRoomBatchUpgradeOpenIMTicket; // +0xe0
    NSString * _chatRoomBatchUpgradeOpenIMExtInfo; // +0xe8
}
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)initData;
- (void)layoutView;
- (void)layoutISelectedBtn;
- (void)resetSelectedBtnOriAcceptBtn;
- (void)reloadData;
- (BOOL)isSelected:(id)arg1;
- (BOOL)checkMaxNeedUpgradeOpenIMChatRoomArCount;
- (id)getBeUpgradeContactsListMaxCount:(unsigned int)arg1;
- (BOOL)checkIsShowEmptyTipCell;
- (void)reportBatchUpgradeAssociateChatRoom;
- (void)initTableView;
- (id)genHeaderView;
- (void)reloadTableData;
- (id)genFooterView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)makeAddSelectChatRoomCell:(id)arg1 ForRowAtIndexPath:(id)arg2;
- (void)makeEmptyTipCell:(id)arg1 ForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)makeCell:(id)arg1 ForRowAtIndexPath:(id)arg2;
- (id)getCellImage:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)doIAccept;
- (void)onCancel;
- (void)openSelectGroup;
- (BOOL)onShouldSelectContact:(id)arg1;
- (void)onGroupSelectContactReturn:(id)arg1;
- (void)OnGetChatRoomBatchUpgradeOpenIMInfoWithTopTitleText:(id)arg1 andTitleText:(id)arg2 andContentText:(id)arg3;
- (void)showErrorMessage:(id)arg1;
- (void)onContactsDataChange;
- (BOOL)onFilterContactCandidate:(id)arg1;
- (id)navigationBarBackgroundColor;
- (id)chatRoomBatchUpgradeOpenIMTicket;
- (void)setChatRoomBatchUpgradeOpenIMTicket:(id)arg1;
- (id)chatRoomBatchUpgradeOpenIMExtInfo;
- (void)setChatRoomBatchUpgradeOpenIMExtInfo:(id)arg1;
- (void).cxx_destruct;
@end
