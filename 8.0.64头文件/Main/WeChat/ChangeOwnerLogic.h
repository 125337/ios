@interface ChangeOwnerLogic : NSObject <RoomContactSelectDelegate, contactInfoDelegate, IGroupMgrExt>
{
    id <ChangeOwnerLogicDelegate> m_delegate; // +0x8
    RoomContactSelectViewController * m_vc; // +0x10
    BOOL m_bNeedReload; // +0x18
    CContact * _m_oContact; // +0x20
}
- (id)init;
- (void)start;
- (void)onChangeOwner:(id)arg1;
- (void)OnChangeChatRoomOwner:(id)arg1 NewOwner:(id)arg2 Success:(BOOL)arg3;
- (void)didSelectContact:(id)arg1;
- (void)onCancelSelectContact;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_oContact;
- (void)setM_oContact:(id)arg1;
- (void).cxx_destruct;
@end
