@interface NSENewSyncServieMgr : MMUserService <INewSyncExt, IMsgExt, MMServiceProtocol>
{
    BOOL _isInsertingNSEMsg; // +0x8
    BOOL _isOpenNSENewSync; // +0x9
    BOOL _insertMsgDBResult; // +0xa
    unsigned long long _receiveNSENewSyncResultCount; // +0x10
    unsigned long long _receiveNSEAddMsgeCmdCount; // +0x18
    unsigned long long _receiveNewSyncMsgCount; // +0x20
    unsigned long long _insertNewSyncMsgCount; // +0x28
    unsigned long long _receiveNSEMsgCount; // +0x30
    unsigned long long _insertNSEMsgCount; // +0x38
    CMessageWrap * _lastNseMsgWrap; // +0x40
    NSMutableArray * _arrInvalidateMsgWrap; // +0x48
    unsigned long long _insertNSEMsgCost; // +0x50
    unsigned long long _newSyncBeginTimeInMs; // +0x58
    unsigned long long _insertNewSyncMsgTimeInMs; // +0x60
    unsigned long long _newSyncEndTimeInMs; // +0x68
    NSObject<OS_dispatch_queue> * _processQueue; // +0x70
}
- (void)onServiceInit;
- (void)startCheckNSESyncResult;
- (void)printNSEInsertMsg:(id)arg1 arrNewInsertMsg:(id)arg2;
- (BOOL)removeSyncBufferFile;
- (BOOL)removeSyncResultFile;
- (void)reportResultFileSize:(long long)arg1 isFromProcess:(BOOL)arg2;
- (void)reportWhenNewSyncEnd:(unsigned long long)arg1 isFromPush:(BOOL)arg2;
- (void)reportNseWhenNewSyncEnd:(unsigned long long)arg1 isFromPush:(BOOL)arg2;
- (void)onServiceEnterForeground;
- (void)onNewSyncBegin:(id)arg1;
- (void)onNewSyncProcessEnd:(BOOL)arg1;
- (void)reset;
- (void)onUpdateNewSyncBuffKey;
- (void)onNewSyncInsertMsg:(id)arg1;
- (void)onNewSyncReceiveMsg:(id)arg1 insertNewMsg:(id)arg2;
- (void)onMsgDBInitFinish;
- (BOOL)isInsertingNSEMsg;
- (void)setIsInsertingNSEMsg:(BOOL)arg1;
- (BOOL)isOpenNSENewSync;
- (void)setIsOpenNSENewSync:(BOOL)arg1;
- (unsigned long long)receiveNSENewSyncResultCount;
- (void)setReceiveNSENewSyncResultCount:(unsigned long long)arg1;
- (unsigned long long)receiveNSEAddMsgeCmdCount;
- (void)setReceiveNSEAddMsgeCmdCount:(unsigned long long)arg1;
- (unsigned long long)receiveNewSyncMsgCount;
- (void)setReceiveNewSyncMsgCount:(unsigned long long)arg1;
- (unsigned long long)insertNewSyncMsgCount;
- (void)setInsertNewSyncMsgCount:(unsigned long long)arg1;
- (unsigned long long)receiveNSEMsgCount;
- (void)setReceiveNSEMsgCount:(unsigned long long)arg1;
- (unsigned long long)insertNSEMsgCount;
- (void)setInsertNSEMsgCount:(unsigned long long)arg1;
- (id)lastNseMsgWrap;
- (void)setLastNseMsgWrap:(id)arg1;
- (id)arrInvalidateMsgWrap;
- (void)setArrInvalidateMsgWrap:(id)arg1;
- (unsigned long long)insertNSEMsgCost;
- (void)setInsertNSEMsgCost:(unsigned long long)arg1;
- (unsigned long long)newSyncBeginTimeInMs;
- (void)setNewSyncBeginTimeInMs:(unsigned long long)arg1;
- (unsigned long long)insertNewSyncMsgTimeInMs;
- (void)setInsertNewSyncMsgTimeInMs:(unsigned long long)arg1;
- (unsigned long long)newSyncEndTimeInMs;
- (void)setNewSyncEndTimeInMs:(unsigned long long)arg1;
- (BOOL)insertMsgDBResult;
- (void)setInsertMsgDBResult:(BOOL)arg1;
- (id)processQueue;
- (void)setProcessQueue:(id)arg1;
- (void).cxx_destruct;
@end
