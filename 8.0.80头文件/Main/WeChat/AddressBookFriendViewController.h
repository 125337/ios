@interface AddressBookFriendViewController : MMUIViewController <WCSearchDelegate, MMTableViewIndexViewDelegate, ContactVerifyPreCheckBusinessLogicDelegate, IContactMgrExt, UITableViewDataSource, UITableViewDelegate, IAddressBookFriendMgrExt, contactInfoDelegate, VerifyPhoneDelegate, ContactInfoViewControllerDelegate, ContactsItemViewDelegate, contactVerifyLogicDelegate, SendVerifyMsgViewControllerDelegate>
{
    MMTableView * m_tableView; // +0x70
    UITextField * m_searchTextField; // +0x78
    UIButton * m_searchBtn; // +0x80
    AddressBookFriend * m_oCurrentFriendWrap; // +0x88
    NSMutableArray * m_arrAddressBookFriendList; // +0x90
    NSMutableDictionary * m_dicNicknameToFriends; // +0x98
    NSMutableArray * m_arrFilteredFriendList; // +0xa0
    ContactInfoViewController * m_CurrentFriendItemView; // +0xa8
    CContactVerifyLogic * m_oContactVerifyLogic; // +0xb0
    NSMutableArray * m_arrKey; // +0xb8
    NSMutableDictionary * m_dicFriendList; // +0xc0
    CContactVerifyPreCheckBusinessLogic * m_verifyPreCheckBusinessLogic; // +0xc8
    NSMutableDictionary * m_cacheContactDic; // +0xd0
    WCSearcher * _searcher; // +0xd8
}
- (BOOL)isForbidPageSheet;
- (id)init;
- (void)dealloc;
- (BOOL)canSyncAddressBook;
- (void)startLoading;
- (void)stopLoading;
- (void)sortFriendList;
- (void)trySyncAddressBook;
- (void)loadData:(BOOL)arg1;
- (void)initView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (BOOL)goToAddContactWhenHadContactVerify:(id)arg1;
- (id)navigationBarBackgroundColor;
- (void)newAddressBookFriendArrived;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)openContactInfoViewController:(id)arg1;
- (void)makeAddressBookFriendCell:(id)arg1 row:(unsigned long long)arg2 section:(unsigned long long)arg3 tableView:(id)arg4;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)mmsectionIndexTitlesForTableView:(id)arg1;
- (long long)mmtableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (long long)mmcurrentIndexForTableView:(id)arg1;
- (void)onContactVerifyFail;
- (void)contactAddContactOk:(id)arg1;
- (void)contactSendRequestOk:(id)arg1;
- (void)onSendVerifyMsgCancel;
- (void)onContactVerifyFillVerifyMsg:(id)arg1;
- (void)verifyContact:(id)arg1;
- (void)onContactsItemViewRightButtonClick:(id)arg1;
- (void)onContactVerifyPreCheckBusinessSuccess:(id)arg1 opcode:(unsigned int)arg2;
- (id)getVerifyPreCheckBusinessLogic;
- (void)onAddContact;
- (void)onRemoveContact;
- (void)onUpdateContact:(id)arg1;
- (void)onNewContact:(id)arg1;
- (void)addToContactsFromContactInfo:(id)arg1;
- (void)newMessageFromContactInfo:(id)arg1;
- (void)bindPhoneReturn;
- (void)doSearch:(id)arg1;
- (void)wcsSearchBarTextDidBeginEditing:(id)arg1;
- (BOOL)wcsSearchBarShouldBeginEditing:(id)arg1;
- (void)wcsSearchBar:(id)arg1 textDidChange:(id)arg2;
- (void)wcsSearchBarSearchButtonClicked:(id)arg1;
- (void)wcsSearchBarCancelButtonClicked:(id)arg1;
- (id)getViewController;
- (id)m_oCurrentFriendWrap;
- (void)setM_oCurrentFriendWrap:(id)arg1;
- (id)m_CurrentFriendItemView;
- (void)setM_CurrentFriendItemView:(id)arg1;
- (id)searcher;
- (void)setSearcher:(id)arg1;
- (void).cxx_destruct;
@end
