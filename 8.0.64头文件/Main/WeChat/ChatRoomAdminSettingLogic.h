@interface ChatRoomAdminSettingLogic : NSObject <IGroupMgrExt>
{
    id <ChatRoomAdminSettingLogicDelegate> _m_delegate; // +0x8
    CContact * _m_oContact; // +0x10
}
- (void)start;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_oContact;
- (void)setM_oContact:(id)arg1;
- (void).cxx_destruct;
@end
