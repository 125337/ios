@interface MMLimitedModeGuardianSelectContactViewController : ContactBaseSelectListViewController <ContactSelectListViewControllerDelegate, MMLimitedModeGuardianLogicDelegate, ForwardMessageLogicDelegate>
{
    MMLimitedModeGuardianLogic * m_guardianLogic; // +0x70
    ForwardMessageLogicController * m_forwardMsgLogic; // +0x78
    CContact * m_selectedContact; // +0x80
    CMessageWrap * m_oMessageWrap; // +0x88
    NSString * _ticket; // +0x90
    UINavigationController * _m_preNavController; // +0x98
    unsigned long long _bindScene; // +0xa0
    id /* block */ _completionBlock; // +0xa8
    ContactsDataLogic * _m_contactsDataLogic; // +0xb0
}
- (void)viewDidLoad;
- (id)getContactsDataLogic;
- (void)didClickLeftCloseBarButton;
- (void)forMessage:(id)arg1 ticket:(id)arg2;
- (unsigned int)getContactInfoViewFromScene;
- (id)getReloadContactDataList;
- (void)onSelectedContact:(id)arg1;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)arg1;
- (void)pushToResultViewController;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageException:(id)arg1;
- (void)onGetTeenagerModePreBindGuardianInfo:(id)arg1 success:(BOOL)arg2 errMsg:(id)arg3;
- (id)ticket;
- (void)setTicket:(id)arg1;
- (id)m_preNavController;
- (void)setM_preNavController:(id)arg1;
- (unsigned long long)bindScene;
- (void)setBindScene:(unsigned long long)arg1;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg1;
- (id)m_contactsDataLogic;
- (void)setM_contactsDataLogic:(id)arg1;
- (void).cxx_destruct;
@end
