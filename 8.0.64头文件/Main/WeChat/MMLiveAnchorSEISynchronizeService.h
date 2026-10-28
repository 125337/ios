@interface MMLiveAnchorSEISynchronizeService : MMUserService <MMServiceProtocol>
{
    NSMutableArray * _synchronizeObjList; // +0x8
    MMLiveTaskId * _taskId; // +0x10
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)registerWithTaskId:(id)arg1;
- (void)unRegisterWithTaskId:(id)arg1;
- (void)startSynchronizeFromObj:(id)arg1;
- (void)stopSynchronizeFromObj:(id)arg1;
- (id)handleSynchronizedAnchorSEIMsg:(id)arg1 taskId:(id)arg2;
- (id)liveTask;
- (id)synchronizeObjList;
- (void)synchronizeAnchorSeiInfo;
- (double)getNextSynchronizeInterval;
- (BOOL)containSEISynchronizeDelegate:(id)arg1;
- (void)addSEISynchronizeDelegate:(id)arg1;
- (void)removeSEISynchronizeDelegate:(id)arg1;
- (void)setSynchronizeObjList:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (void).cxx_destruct;
@end
