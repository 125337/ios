@interface FriendListMgr : MMUserService <PBMessageObserverDelegate, MMServiceProtocol>
{
    NSMutableSet * m_downliadingPackageLists; // +0x8
}
- (id)getFriendListPath:(id)arg1;
- (id)LoadFriendListArchive:(id)arg1;
- (void)SaveFriendListArchive:(id)arg1 packageListArchive:(id)arg2;
- (id)getFriendListForType:(unsigned long long)arg1;
- (void)clearFriendListForType:(unsigned long long)arg1;
- (BOOL)downloadFriendListForType:(unsigned long long)arg1 InScene:(unsigned long long)arg2;
- (void)onFriendListSynced:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
@end
