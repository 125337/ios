@interface DelAdminLogic : MMObject <RoomContactSelectDelegate, contactInfoDelegate, IGroupMgrExt>
{
    id <DelAdminLogicDelegate> m_delegate; // +0x8
    BOOL m_bNeedReload; // +0x10
    CContact * _m_roomContact; // +0x18
    CContact * _m_adminContact; // +0x20
}
- (void)start;
- (void)doDelAdmin;
- (void)delAdmin;
- (void)OnDelGroupAdmin:(id)arg1 withResult:(unsigned int)arg2 adminList:(id)arg3 errTip:(id)arg4;
- (void)onUpdateDeleteAdmin;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_roomContact;
- (void)setM_roomContact:(id)arg1;
- (id)m_adminContact;
- (void)setM_adminContact:(id)arg1;
- (void).cxx_destruct;
@end
