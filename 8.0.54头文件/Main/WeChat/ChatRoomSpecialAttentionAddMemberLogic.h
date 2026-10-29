@interface ChatRoomSpecialAttentionAddMemberLogic : MMObject <RoomContactSelectDelegate, ChatRoomSpecialAttentionMemberLogicDelegate>
{
    ChatRoomSpecialAttentionMemberSelectViewController * m_vc; // +0x8
    OrderedDictionary * m_dicModifySpecialAttentionMember; // +0x10
    ChatRoomSpecialAttentionMemberLogic * m_chatRoomSpecialAttentionMemberLogic; // +0x18
    NSArray * m_existAttentionMemberUserName; // +0x20
    id <ChatRoomSpecialAttentionMemberPageLogicDelegate> m_delegate; // +0x28
    CContact * _m_chatRoomContact; // +0x30
    NSArray * _m_attentionMemberContactList; // +0x38
    NSArray * _m_chatRoomMemContactList; // +0x40
}
- (void)start;
- (void)reloadData;
- (void)updateRightBtn;
- (unsigned int)getSpecialAttentionMemberSelectMaxNumber;
- (void)makeCell:(id)arg1 contact:(id)arg2;
- (BOOL)isSelected:(id)arg1;
- (void)DoModifySpecialAttentionMember;
- (id)getAllAttentionMemberContactDic;
- (void)didSelectContact:(id)arg1;
- (void)onCancelSelectContact;
- (void)OnModifyChatRoomSpecialAttentionMember:(id)arg1 withResult:(unsigned int)arg2 errorMsg:(id)arg3;
- (id)getViewController;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_chatRoomContact;
- (void)setM_chatRoomContact:(id)arg1;
- (id)m_attentionMemberContactList;
- (void)setM_attentionMemberContactList:(id)arg1;
- (id)m_chatRoomMemContactList;
- (void)setM_chatRoomMemContactList:(id)arg1;
- (void).cxx_destruct;
@end

