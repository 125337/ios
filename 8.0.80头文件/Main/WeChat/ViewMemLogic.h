@interface ViewMemLogic : NSObject <RoomContactSelectDelegate, contactInfoDelegate, AddMemLogicDelegate, IGroupMgrExt>
{
    id <ViewMemLogicDelegate> m_delegate; // +0x8
    AddMemLogic * m_addMemLogic; // +0x10
    RoomContactSelectViewController * m_vc; // +0x18
    BOOL m_bNeedReload; // +0x20
    BOOL _m_bShowWithGrid; // +0x21
    CContact * _m_oContact; // +0x28
    CGPoint _m_bContentOffset; // +0x30
}
- (id)init;
- (void)start;
- (void)didReloadMemData;
- (Class)getCustomizationRoomContactSelectViewClass;
- (void)handleCustomizationRoomContactSelectView:(id)arg1;
- (void)addMember;
- (void)onAddMemLogicStop:(BOOL)arg1;
- (id)getViewController;
- (void)newMessageFromContactInfo:(id)arg1;
- (void)roomContactSearchBarDidBecomeFirstResponse;
- (void)didSelectContact:(id)arg1;
- (void)onCancelSelectContact;
- (void)didClickDelContact:(id)arg1;
- (void)OnDelGroupMember:(id)arg1 withResult:(unsigned int)arg2 memberList:(id)arg3 errTip:(id)arg4;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_oContact;
- (void)setM_oContact:(id)arg1;
- (BOOL)m_bShowWithGrid;
- (void)setM_bShowWithGrid:(BOOL)arg1;
- (CGPoint)m_bContentOffset;
- (void)setM_bContentOffset:(CGPoint)arg1;
- (void).cxx_destruct;
@end
