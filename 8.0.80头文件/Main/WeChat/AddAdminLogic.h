@interface AddAdminLogic : MMObject <RoomContactSelectDelegate, IGroupMgrExt, UITextFieldDelegate, contactInfoDelegate, MMTipsViewControllerDelegate>
{
    id <AddAdminLogicDelegate> m_delegate; // +0x8
    BOOL m_bNeedReload; // +0x10
    RoomContactSelectViewController * m_vc; // +0x18
    NSMutableDictionary * m_dicWillAdd; // +0x20
    CContact * _m_roomContact; // +0x28
    NSArray * _m_arrExistAdmintUserName; // +0x30
}
- (id)init;
- (void)start;
- (void)updateRightBtn;
- (void)addMembersToChatRoomAdmin:(id)arg1;
- (void)addAdmin;
- (void)OnAddGroupAdmin:(id)arg1 withResult:(unsigned int)arg2 adminList:(id)arg3 errTip:(id)arg4;
- (void)didSelectContact:(id)arg1;
- (void)onCancelSelectContact;
- (void)newMessageFromContactInfo:(id)arg1;
- (void)onViewContact:(id)arg1;
- (void)makeCell:(id)arg1 contact:(id)arg2;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_roomContact;
- (void)setM_roomContact:(id)arg1;
- (id)m_arrExistAdmintUserName;
- (void)setM_arrExistAdmintUserName:(id)arg1;
- (void).cxx_destruct;
@end
