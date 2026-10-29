@interface ChatRoomUpgradeOpenIMLogic : NSObject <IGroupMgrExt>
{
    unsigned int _m_scene; // +0x8
    id <ChatRoomUpgradeOpenIMLogicDelegate> m_delegate; // +0x10
    CContact * _m_chatRoomContact; // +0x18
}
- (void)start;
- (void)openChatRoomUpgradeOpenIMViewControllerWithResp:(id)arg1;
- (void)OnGetUpgradeAssociateChatRoom:(id)arg1 withTicket:(id)arg2 withResult:(unsigned int)arg3 errorMsg:(id)arg4 withResp:(id)arg5;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_chatRoomContact;
- (void)setM_chatRoomContact:(id)arg1;
- (unsigned int)m_scene;
- (void)setM_scene:(unsigned int)arg1;
- (void).cxx_destruct;
@end
