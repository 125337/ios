@interface MMLimitedModeGuardianSelectContactViewController : ContactBaseSelectListViewController <ContactSelectListViewControllerDelegate, MMLimitedModeGuardianLogicDelegate, ForwardMessageLogicDelegate>
{
    MMLimitedModeGuardianLogic * m_guardianLogic; // +0x68
    ForwardMessageLogicController * m_forwardMsgLogic; // +0x70
    CContact * m_selectedContact; // +0x78
    CMessageWrap * m_oMessageWrap; // +0x80
    NSString * _ticket; // +0x88
    UINavigationController * _m_preNavController; // +0x90
    unsigned long long _bindScene; // +0x98
    ContactsDataLogic * _m_contactsDataLogic; // +0xa0
}
- (void)viewDidLoad;
- (id)getContactsDataLogic;
- (void)didClickLeftCloseBarButton;
- (void)forMessage:(id)arg1 ticket:(id)arg2;
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
- (id)m_contactsDataLogic;
- (void)setM_contactsDataLogic:(id)arg1;
- (void).cxx_destruct;
@end

