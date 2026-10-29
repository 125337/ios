@interface ContactsAuthorityManageAddContactFromContactsViewController : MultiSelectContactsViewController <ContactsAuthorityManageModifyContactLogicDelegate>
{
    ContactsAuthorityManageModifyContactLogic * m_newContactFunctionTagAddContactLogic; // +0xe0
    ContactTagData * _m_contactTagData; // +0xe8
    id <ContactsAuthorityManageAddContactFromContactsViewControllerDelegate> _delegate; // +0xf0
}
- (id)init;
- (void)viewDidLoad;
- (void)initData;
- (BOOL)isContactExisted:(id)arg1;
- (void)onCancel:(id)arg1;
- (void)onDone:(id)arg1;
- (id)getViewController;
- (void)onNewContactAuthorityAddContactSuccess:(id)arg1;
- (void)reloadAuthorityDetailAddContactWithDicMultiSelect:(id)arg1 andDicExistContact:(id)arg2;
- (id)m_contactTagData;
- (void)setM_contactTagData:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

