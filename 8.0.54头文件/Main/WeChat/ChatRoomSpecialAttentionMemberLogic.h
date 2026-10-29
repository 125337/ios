@interface ChatRoomSpecialAttentionMemberLogic : MMObject <PBMessageObserverDelegate>
{
    CContact * _m_chatRoomContact; // +0x8
    id <ChatRoomSpecialAttentionMemberLogicDelegate> _m_delegate; // +0x10
}
+ (void)reportChatRoomSpecialAttentionMemberLogWithActionCode:(long long)arg1 chatRoomUserName:(id)arg2 initialAttentionMemberListCount:(unsigned int)arg3 addAttentionMemberList:(id)arg4 deleteAttentionMemberList:(id)arg5;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (BOOL)modifyChatRoomSpecialAttentionMember:(id)arg1;
- (void)OnModifyChatRoomSpecialAttentionMemberResponse:(id)arg1;
- (void)updateLocalChatRoomRoomSpecialAttentionList:(id)arg1 andSpecialAttentionMemberList:(id)arg2;
- (id)m_chatRoomContact;
- (void)setM_chatRoomContact:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end

