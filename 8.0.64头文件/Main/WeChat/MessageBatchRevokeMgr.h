@interface MessageBatchRevokeMgr : MMUserService <ISendMessageExt, IMsgExt, MMServiceProtocol>
{
    BOOL _isBatchRevoking; // +0x8
    BOOL _isRequesting; // +0x9
    MemoryMappedKV * _recordMMKV; // +0x10
    NSRecursiveLock * _recordIndexLock; // +0x18
    unsigned long long _recordIndex; // +0x20
    unsigned long long _deletedLocalMsgCount; // +0x28
    NSMutableArray * _waitingSvrIdRevokingList; // +0x30
    NSMutableArray * _avaliableRevokingList; // +0x38
    MMUIViewController * _currentViewController; // +0x40
    unsigned long long _batchRevokingScene; // +0x48
    unsigned long long _reportInterval; // +0x50
}
- (void)reportSimpleAction:(unsigned long long)arg1 scene:(unsigned long long)arg2 interval:(unsigned long long)arg3;
- (void)reportAction:(unsigned long long)arg1 scene:(unsigned long long)arg2 interval:(unsigned long long)arg3 result:(unsigned long long)arg4 allRevokingCount:(unsigned long long)arg5 sucCount:(unsigned long long)arg6 failCount:(unsigned long long)arg7;
- (void)addBatchSendForUser:(id)arg1 record:(id)arg2 identifier:(id)arg3;
- (void)removeBatchSendForUser:(id)arg1 record:(id)arg2;
- (id)getRevokeBatchIdentifierFromUser:(id)arg1 scene:(unsigned long long)arg2;
- (id)getRevokeBatchIdentifierFromMsgWrap:(id)arg1;
- (id)getBatchSendRecordForUser:(id)arg1 msg:(id)arg2;
- (unsigned long long)getRevokeBatchSceneFor:(id)arg1;
- (id)indexOfMsgWrap:(id)arg1 user:(id)arg2;
- (void)resetBatchRevokingStatus;
- (void)ensureLoading:(id)arg1;
- (BOOL)batchRevokeMsg:(id)arg1 MsgWrapList:(id)arg2 viewController:(id)arg3 actionInterval:(unsigned long long)arg4;
- (int)getSendingSendStatusWithMsg:(id)arg1;
- (void)deleteLocalProcessRevokeMsg:(id)arg1;
- (id)getWatingSvrIdRevokeInfoWithMessage:(id)arg1;
- (id)getRevokeInfoWithSvrID:(long long)arg1;
- (BOOL)deleteWaitingSvrIdRevokeInfoWithMessage:(id)arg1;
- (void)OnMsgGotSvrId:(id)arg1;
- (void)checkBatchRevoke;
- (void)realDoBatchRevoke;
- (void)OnSendMessageSuccess:(id)arg1;
- (void)OnSendMessageFail:(id)arg1;
- (void)OnMsgSendFail:(id)arg1;
- (void)OnMsgSendSuccess:(id)arg1;
- (void)onGetSvrIdWithUploadMsg:(id)arg1 SvrId:(unsigned long long)arg2;
- (void)onRevokeMsg:(id)arg1;
- (void)onServiceInit;
- (void)onServiceClearData;
- (BOOL)isBatchRevokeEnabled;
- (id)recordMMKV;
- (void)setRecordMMKV:(id)arg1;
- (id)recordIndexLock;
- (void)setRecordIndexLock:(id)arg1;
- (unsigned long long)recordIndex;
- (void)setRecordIndex:(unsigned long long)arg1;
- (BOOL)isBatchRevoking;
- (void)setIsBatchRevoking:(BOOL)arg1;
- (BOOL)isRequesting;
- (void)setIsRequesting:(BOOL)arg1;
- (unsigned long long)deletedLocalMsgCount;
- (void)setDeletedLocalMsgCount:(unsigned long long)arg1;
- (id)waitingSvrIdRevokingList;
- (void)setWaitingSvrIdRevokingList:(id)arg1;
- (id)avaliableRevokingList;
- (void)setAvaliableRevokingList:(id)arg1;
- (id)currentViewController;
- (void)setCurrentViewController:(id)arg1;
- (unsigned long long)batchRevokingScene;
- (void)setBatchRevokingScene:(unsigned long long)arg1;
- (unsigned long long)reportInterval;
- (void)setReportInterval:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
