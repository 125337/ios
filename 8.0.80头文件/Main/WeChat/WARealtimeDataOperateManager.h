@interface WARealtimeDataOperateManager : MMUserService <MMServiceProtocol>
{
    BOOL _isRequesting; // +0x8
    unsigned int _lastUploadTimeStamp; // +0xc
    WARealtimeDataOperationBufferPool * _operationPool; // +0x10
    NSObject<OS_dispatch_source> * _timerSource; // +0x18
    NSObject<OS_dispatch_queue> * _workerQueue; // +0x20
}
- (void)dealloc;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)addOperation:(id)arg1;
- (void)workerThreadAddOperation:(id)arg1;
- (BOOL)bufferSizeReachLimit;
- (BOOL)reachUploadTimeGap;
- (BOOL)hasImmediateOperation;
- (BOOL)isRequesting;
- (BOOL)shouldUploadOperations;
- (void)timerCheck;
- (void)checkOperationPool;
- (void)workerThread_checkOperationPool;
- (void)operateRealtimeData:(id)arg1;
- (void)processFailedOperations:(id)arg1 errorCode:(int)arg2 errMsg:(id)arg3;
- (void)reportWithOperation:(id)arg1 action:(unsigned long long)arg2;
- (void)reenqueueOperations:(id)arg1;
- (void)abandonOperations:(id)arg1 errCode:(int)arg2 errMsg:(id)arg3;
- (void)callResultForOperations:(id)arg1 errCode:(int)arg2 errMsg:(id)arg3;
- (void)notifyOperationsResultWithAppid:(id)arg1 operationsIdList:(id)arg2 errCode:(int)arg3 errMsg:(id)arg4 dataSize:(unsigned long long)arg5;
- (void)mainthread_callExtensionWithAppid:(id)arg1 operationsIdList:(id)arg2 errCode:(int)arg3 errMsg:(id)arg4 dataSize:(unsigned long long)arg5;
- (void)releaseTimer;
- (void)resetTimer;
- (void)onWXARealtimeReportResponse:(id)arg1;
- (void)addNotification;
- (void)removeNotification;
- (void)willEnterForeground;
- (id)operationPool;
- (void)setOperationPool:(id)arg1;
- (unsigned int)lastUploadTimeStamp;
- (void)setLastUploadTimeStamp:(unsigned int)arg1;
- (id)timerSource;
- (void)setTimerSource:(id)arg1;
- (void)setIsRequesting:(BOOL)arg1;
- (id)workerQueue;
- (void)setWorkerQueue:(id)arg1;
- (void).cxx_destruct;
@end
