@interface ChatRoomSpecialAttentionDeleteMemberLogic : MMObject <ChatRoomSpecialAttentionMemberLogicDelegate>
{
    ChatRoomSpecialAttentionMemberLogic * m_chatRoomSpecialAttentionMemberLogic; // +0x8
    CContact * _m_chatRoomContact; // +0x10
    id <ChatRoomSpecialAttentionMemberPageLogicDelegate> _m_delegate; // +0x18
    NSArray * _m_attentionMemberContactList; // +0x20
    CContact * _m_deleteAttentionContact; // +0x28
}
- (void)startWithSender:(id)arg1;
- (void)delAttentionMemberWithSender:(id)arg1;
- (void)doDelAttentionMember;
- (void)OnModifyChatRoomSpecialAttentionMember:(id)arg1 withResult:(unsigned int)arg2 errorMsg:(id)arg3;
- (id)m_chatRoomContact;
- (void)setM_chatRoomContact:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_attentionMemberContactList;
- (void)setM_attentionMemberContactList:(id)arg1;
- (id)m_deleteAttentionContact;
- (void)setM_deleteAttentionContact:(id)arg1;
- (void).cxx_destruct;
@end

