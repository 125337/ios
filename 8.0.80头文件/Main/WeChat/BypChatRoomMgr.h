@interface BypChatRoomMgr : MMUserService <PBMessageObserverDelegate, MMServiceProtocol>
{
    NSMutableSet * _pendingDerivedSyncRooms; // +0x8
    BOOL _derivedSyncTimerScheduled; // +0x10
    NSMutableDictionary * _custAsstRoomIndex; // +0x18
}
- (void)onServiceInit;
- (id)getBypMemberUserNames:(id)arg1;
- (id)getBypMemberContacts:(id)arg1;
- (void)appendBypMembersToArray:(id)arg1 forRoom:(id)arg2;
- (id)getBypMemberNickName:(id)arg1 memberUserName:(id)arg2;
- (BOOL)isBypMember:(id)arg1 memberUserName:(id)arg2;
- (void)updateBypMembers:(id)arg1 members:(id)arg2;
- (void)updateBypMembers:(id)arg1 members:(id)arg2 derivedSyncKey:(id)arg3;
- (void)deleteBypMembers:(id)arg1;
- (id)getRoomsForCustAsst:(id)arg1;
- (id)getDerivedSyncKey:(id)arg1;
- (void)setDerivedSyncKey:(id)arg1 forRoom:(id)arg2;
- (void)startDerivedSyncForRoom:(id)arg1;
- (void)scheduleDerivedSyncTimer;
- (void)flushDerivedSyncBatch;
- (void)handleBypChatRoomContact:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onDerivedSyncResponse:(id)arg1;
- (void).cxx_destruct;
@end
