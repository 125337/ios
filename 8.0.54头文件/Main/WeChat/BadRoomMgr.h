@interface BadRoomMgr : MMUserService <MessageDBExt, IMMNewSessionMgrExt, INewSyncExt, MMServiceProtocol>
{
    NSObject<OS_dispatch_queue> * m_updateDigestQueue; // +0x8
    NSRecursiveLock * _m_oLock; // +0x10
}
- (BOOL)existsInDeletedMsg:(long long)arg1;
- (void)AddDeletedMsg:(long long)arg1 createTime:(unsigned int)arg2;
- (id)getPBPath;
- (id)loadDeleteMsg;
- (void)saveDeleteMsg:(id)arg1;
- (void)onServiceInit;
- (void)onNewSyncBadRoomClearUnread:(id)arg1;
- (void)onNewSyncBadRoomBatchHandleDigest:(id)arg1;
- (void)batchHandleDigestDatas:(id)arg1;
- (id)convertDataToDigest:(id)arg1;
- (id)genSessionByDigest:(id)arg1 updateSequenceDigests:(id)arg2;
- (void)updateSessionInfos:(id)arg1 updateSequenceDigests:(id)arg2;
- (void)onDeleteBrokenMsg:(unsigned int)arg1 chatName:(id)arg2;
- (void)onDeleteAllMsgs:(id)arg1;
- (void)onDeleteBadRoomMsg:(long long)arg1 createTime:(unsigned int)arg2 chatName:(id)arg3;
- (void)onWillDeleteSession:(id)arg1;
- (void)notifyWithData:(id)arg1;
- (id)HandleSysMsg:(id)arg1 revokeMsgId:(long long *)arg2;
- (id)m_oLock;
- (void)setM_oLock:(id)arg1;
- (void).cxx_destruct;
@end

