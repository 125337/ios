@interface WCGroupMgr : MMObject <PBMessageObserverDelegate>
{
    BOOL m_bMemCacheNeedReload; // +0x8
    NSMutableDictionary * m_groups; // +0x10
    NSObject<WCGroupMgrExt> * m_delegate; // +0x18
    NSString * m_fromUsrName; // +0x20
    NSString * m_initFromPath; // +0x28
    unsigned int m_lastUpdateAllGroupsTime; // +0x30
}
- (id)pathForGroupData;
- (void)tryLoadData;
- (void)saveData;
- (void)clearMemoryCache;
- (void)clearMD5;
- (id)init;
- (void)dealloc;
- (id)getAllGroups;
- (id)getGroupByID:(id)arg1;
- (void)updateAllGroups;
- (BOOL)canUpdateAllGroups;
- (void)localDeleteAllGroups;
- (void)deleteGroup:(id)arg1;
- (void)addMembers:(id)arg1 toGroup:(id)arg2 withScene:(long long)arg3;
- (void)removeMembers:(id)arg1 fromGroup:(id)arg2 withScene:(long long)arg3;
- (BOOL)tryFuzzDefaultGroup;
- (void)doGroupOp:(unsigned int)arg1 onGroup:(id)arg2 withGroupName:(id)arg3;
- (void)doGroupMemberOp:(unsigned int)arg1 onGroup:(id)arg2 withGroupName:(id)arg3 withMemberList:(id)arg4;
- (void)doGroupMemberOp:(unsigned int)arg1 onGroup:(id)arg2 withGroupName:(id)arg3 withMemberList:(id)arg4 withScene:(long long)arg5;
- (void)doGroupListOp:(unsigned int)arg1 withMD5:(id)arg2;
- (void)onGroupOpReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onGroupMemberOpReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onGroupListReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_fromUsrName;
- (void)setM_fromUsrName:(id)arg1;
- (id)m_initFromPath;
- (void)setM_initFromPath:(id)arg1;
- (unsigned int)m_lastUpdateAllGroupsTime;
- (void)setM_lastUpdateAllGroupsTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end

