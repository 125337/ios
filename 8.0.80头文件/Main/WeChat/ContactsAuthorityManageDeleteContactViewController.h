@interface ContactsAuthorityManageDeleteContactViewController : MultiSelectContactsViewController <ContactsAuthorityManageModifyContactLogicDelegate, WCFacadeExt>
{
    NSMutableDictionary * m_loadContactDataIDic; // +0xe8
    NSMutableSet * m_socialBlackSuccessModifyUsrNameSet; // +0xf0
    ContactsAuthorityManageModifyContactLogic * m_contactsAuthorityManageModifyContactLogic; // +0xf8
    ContactTagData * _m_contactTagData; // +0x100
    id <ContactsAuthorityManageDeleteContactViewControllerDelegate> _delegate; // +0x108
}
- (id)init;
- (void)viewDidLoad;
- (void)initData;
- (void)updatePanelBtn;
- (id)getContactsAuthorityManageModifyContactLogic;
- (void)onCancel:(id)arg1;
- (void)onDone:(id)arg1;
- (void)modifyTagDetailDeleteContact;
- (void)modifyAuthorityTagDetailDeleteContactConfirm:(id)arg1;
- (void)modifyAuthorityDetailDeleteContact;
- (BOOL)onShouldSelectContact:(id)arg1;
- (BOOL)onFilterContactCandidate:(id)arg1;
- (id)getReloadContactDataList;
- (void)reloadContactDataDic;
- (id)getViewController;
- (void)onNewContactAuthorityDeleteContactSuccess:(id)arg1;
- (void)reloadAuthorityDetailDeleteContactWithDicMultiSelect:(id)arg1 andDicExistContact:(id)arg2;
- (id)m_contactsAuthorityManageModifyContactLogic;
- (void)setM_contactsAuthorityManageModifyContactLogic:(id)arg1;
- (id)m_contactTagData;
- (void)setM_contactTagData:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
