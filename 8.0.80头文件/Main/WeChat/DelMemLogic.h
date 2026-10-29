@interface DelMemLogic : NSObject <RoomContactSelectDelegate, contactInfoDelegate, IGroupMgrExt>
{
    id <DelMemLogicDelegate> m_delegate; // +0x8
    RoomContactSelectViewController * m_vc; // +0x10
    BOOL m_bNeedReload; // +0x18
    NSMutableDictionary * m_dicWillDell; // +0x20
    CContact * _m_oContact; // +0x28
}
- (id)init;
- (void)start;
- (void)updateRightBtn;
- (void)doDelMember;
- (void)delMember;
- (void)OnDelGroupMember:(id)arg1 withResult:(unsigned int)arg2 memberList:(id)arg3 errTip:(id)arg4;
- (void)newMessageFromContactInfo:(id)arg1;
- (void)didSelectContact:(id)arg1;
- (void)onCancelSelectContact;
- (void)onViewContact:(id)arg1;
- (void)makeCell:(id)arg1 contact:(id)arg2;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_oContact;
- (void)setM_oContact:(id)arg1;
- (void).cxx_destruct;
@end
