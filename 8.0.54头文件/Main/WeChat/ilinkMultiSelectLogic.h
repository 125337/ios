@interface ilinkMultiSelectLogic : NSObject <RoomContactSelectDelegate, ilinkMultiSelectContactsViewControllerDelegate>
{
    ilinkMultiSelectContactsViewController * m_vc; // +0x8
    NSMutableDictionary * m_dicWillAdd; // +0x10
    BOOL _doNotShowContactsSelect; // +0x18
    id <ilinkMultiSelectLogicDelegate> m_delegate; // +0x20
    CContact * _m_roomContact; // +0x28
    unsigned long long _maxMemberNumber; // +0x30
}
- (id)init;
- (void)start;
- (BOOL)needShowSelectStatusForCell:(id)arg1;
- (void)updateAddMembersInfo:(id)arg1;
- (BOOL)getIfMemberInChatGroup:(id)arg1;
- (unsigned long long)getMembersLimitNum;
- (id)getMembersInRoom;
- (id)getMembersHasSelectBefore;
- (void)onMultiSelectContactOutsideRoomReturn:(id)arg1 removeContacts:(id)arg2;
- (BOOL)getIfMemberAlreadyInRoom:(id)arg1;
- (void)updateRightBtn;
- (void)addMembers;
- (void)addMembersToChatRoom:(id)arg1;
- (void)didSelectContact:(id)arg1;
- (void)onCancelSelectContact;
- (void)makeCell:(id)arg1 contact:(id)arg2 indexPath:(id)arg3;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_roomContact;
- (void)setM_roomContact:(id)arg1;
- (unsigned long long)maxMemberNumber;
- (void)setMaxMemberNumber:(unsigned long long)arg1;
- (BOOL)doNotShowContactsSelect;
- (void)setDoNotShowContactsSelect:(BOOL)arg1;
- (void).cxx_destruct;
@end

