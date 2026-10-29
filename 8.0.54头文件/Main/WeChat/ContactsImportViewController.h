@interface ContactsImportViewController : MMUIViewController <SendVerifyMsgViewControllerDelegate, contactVerifyLogicDelegate, ContactsImportLogicDelegate, ContactInfoViewControllerDelegate, ContactsImportTableViewCellDelegate, UITableViewDelegate, UITableViewDataSource>
{
    MMUIViewController * _guideViewController; // +0x68
    ContactsImportLogic * _contactsImportLogic; // +0x70
    NSMutableArray * _pinyinKeys; // +0x78
    NSMutableDictionary * _pinyinToContactsMap; // +0x80
    CContactVerifyLogic * _contactVerifyLogic; // +0x88
    SendVerifyMsgLogicController * _sendVerifyMessageLogicController; // +0x90
    OldAccountContact * _operatingOldAccountContact; // +0x98
    NSIndexPath * _operatingIndexPath; // +0xa0
    CContact * _operatingContact; // +0xa8
    MMTableView * _tableView; // +0xb0
}
- (id)initWithContactsImportLogic:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)initTableView;
- (void)initData;
- (void)startLoading;
- (void)stopLoading;
- (void)onTapCancelBarButtonItem;
- (void)appendContactList:(id)arg1;
- (id)getContactFromOldAccountContact:(id)arg1;
- (void)updateOperaingOldAccountContactStatus:(unsigned int)arg1 verifyMessage:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)onTapAddButton:(id)arg1;
- (void)onContactVerifyFillVerifyMsg:(id)arg1;
- (void)onFetchContactListSucceeded:(id)arg1 appendContactList:(id)arg2 isFinished:(BOOL)arg3;
- (void)onFetchContactListFailed:(id)arg1;
- (void)onSendVerifyMessage:(id)arg1;
- (void)onRemoveContact;
- (void)contactAddContactOk:(id)arg1;
- (void)contactSendRequestOk:(id)arg1;
- (id)guideViewController;
- (void)setGuideViewController:(id)arg1;
- (id)contactsImportLogic;
- (void)setContactsImportLogic:(id)arg1;
- (id)pinyinKeys;
- (void)setPinyinKeys:(id)arg1;
- (id)pinyinToContactsMap;
- (void)setPinyinToContactsMap:(id)arg1;
- (id)contactVerifyLogic;
- (void)setContactVerifyLogic:(id)arg1;
- (id)sendVerifyMessageLogicController;
- (void)setSendVerifyMessageLogicController:(id)arg1;
- (id)operatingOldAccountContact;
- (void)setOperatingOldAccountContact:(id)arg1;
- (id)operatingIndexPath;
- (void)setOperatingIndexPath:(id)arg1;
- (id)operatingContact;
- (void)setOperatingContact:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (void).cxx_destruct;
@end

