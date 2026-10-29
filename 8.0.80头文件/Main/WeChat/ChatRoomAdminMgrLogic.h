@interface ChatRoomAdminMgrLogic : NSObject <IGroupMgrExt>
{
    id <ChatRoomAdminMgrLogicDelegate> _m_delegate; // +0x8
    CContact * _m_chatRoomContact; // +0x10
    NSArray * _m_arrMemberList; // +0x18
}
- (id)init;
- (void)reLoadData;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_chatRoomContact;
- (void)setM_chatRoomContact:(id)arg1;
- (id)m_arrMemberList;
- (void)setM_arrMemberList:(id)arg1;
- (void).cxx_destruct;
@end
