@interface ShareFriendOnChatLogicController : MMObject <ForwardMessageLogicDelegate, SelectContactsViewControllerDelegate>
{
    id <ShareFriendOnChatDelegate> m_delegate; // +0x8
    CContact * m_contactToShare; // +0x10
    CContact * m_contactShareToWho; // +0x18
    SelectContactsViewController * m_selectContactViewController; // +0x20
    BOOL m_bIsShareToChatRoom; // +0x28
    ForwardMessageLogicController * m_forwardMsgLogic; // +0x30
    CMessageWrap * m_msg; // +0x38
}
- (id)initWithDelegate:(id)arg1;
- (void)showConfirmShareView;
- (id)contactShareMsgFromUser:(id)arg1 toUser:(id)arg2 sharedContact:(id)arg3;
- (void)OnForwardMessageSend:(id)arg1;
- (id)getCurrentViewController;
- (void)onDismiss:(id)arg1;
- (void)start;
- (void)reset;
- (BOOL)onFilterContactCandidate:(id)arg1;
- (void)onSelectContactReturn:(id)arg1 atScene:(unsigned int)arg2;
- (BOOL)onFilterSendReceiver:(id)arg1;
- (id)selectContactViewController;
- (void)setSelectContactViewController:(id)arg1;
- (id)m_contactToShare;
- (void)setM_contactToShare:(id)arg1;
- (id)m_contactShareToWho;
- (void)setM_contactShareToWho:(id)arg1;
- (BOOL)m_bIsShareToChatRoom;
- (void)setM_bIsShareToChatRoom:(BOOL)arg1;
- (void).cxx_destruct;
@end
