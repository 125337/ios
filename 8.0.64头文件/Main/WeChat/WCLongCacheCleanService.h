@interface WCLongCacheCleanService : MMUserService <WCRawMediaTaskOperationDelegate, MMServiceProtocol>
{
    BOOL _bInRunning; // +0x8
    BOOL _bInLongRunning; // +0x9
    BOOL _bIsPositive; // +0xa
    BOOL _needWaitToGetAllRaw; // +0xb
    BOOL _bInHighPriority; // +0xc
    int _cacheRemoveEndType; // +0x10
    ChatLogRawMediaCache * _rawMediaCache; // +0x18
    WCRawMediaTaskOperation * _taskOperation; // +0x20
    unsigned long long _totalSize; // +0x28
    unsigned long long _currentSize; // +0x30
    NSMutableArray * _ccArray; // +0x38
    NSObject<OS_dispatch_queue> * _shareDispatcQueue; // +0x40
    NSString * _overallSessionId; // +0x48
}
+ (BOOL)isSupportOriginMediaClean;
+ (id)convertChatLogInfoToRawTask:(id)arg1;
+ (id)convertDataItemsToChatLogInfo:(void *)arg1;
- (id)genSessionId;
- (id)getSessionId;
- (id)genOverallSessionId;
- (id)getOverallSessionId;
- (id)getSavedOverallSessionId;
- (unsigned long long)getCurrentCleanSize;
- (unsigned long long)getTotalCleanSize;
- (id)getCurrentCleanContentReportJson;
- (id)getTotalCleanContentReportJson;
- (void)makeHighPriority;
- (void)makeDefaultPriority;
- (id)shareDispatcQueue;
- (void)addLongTask:(id)arg1 shortTask:(id)arg2 totalSize:(unsigned long long)arg3 cleanAllSend:(BOOL)arg4 cleanAllReceive:(BOOL)arg5 reportCleanContentJson:(id)arg6;
- (BOOL)checkShouldWaitAllSelectTask;
- (void)addAllSelectTask;
- (void)startRawOperation;
- (BOOL)isServiceRunning;
- (BOOL)isInLongRunningJob;
- (void)startRawService:(BOOL)arg1;
- (void)resetAllState;
- (void)stopRawService;
- (void)onRawMediaFinishOnetask:(id)arg1;
- (void)onRawMediaOperationTaskFinish:(id)arg1;
- (void)onChatLogDataLoadFinished;
- (int)cacheRemoveEndType;
- (void)setCacheRemoveEndType:(int)arg1;
- (BOOL)bInRunning;
- (void)setBInRunning:(BOOL)arg1;
- (BOOL)bInLongRunning;
- (void)setBInLongRunning:(BOOL)arg1;
- (BOOL)bIsPositive;
- (void)setBIsPositive:(BOOL)arg1;
- (id)rawMediaCache;
- (void)setRawMediaCache:(id)arg1;
- (id)taskOperation;
- (void)setTaskOperation:(id)arg1;
- (unsigned long long)totalSize;
- (void)setTotalSize:(unsigned long long)arg1;
- (unsigned long long)currentSize;
- (void)setCurrentSize:(unsigned long long)arg1;
- (id)ccArray;
- (void)setCcArray:(id)arg1;
- (void)setShareDispatcQueue:(id)arg1;
- (BOOL)needWaitToGetAllRaw;
- (void)setNeedWaitToGetAllRaw:(BOOL)arg1;
- (BOOL)bInHighPriority;
- (void)setBInHighPriority:(BOOL)arg1;
- (id)overallSessionId;
- (void)setOverallSessionId:(id)arg1;
- (void).cxx_destruct;
@end
