@interface WCLongCacheCleanService : MMUserService <WCRawMediaTaskOperationDelegate, MMServiceProtocol>
{
    BOOL cancelled; // +0x8
    BOOL _bInRunning; // +0x9
    BOOL _bInLongRunning; // +0xa
    BOOL _bIsPositive; // +0xb
    BOOL _needWaitToGetAllRaw; // +0xc
    BOOL _bInHighPriority; // +0xd
    BOOL _cleanAllWeApp; // +0xe
    int _cacheRemoveEndType; // +0x10
    ChatLogRawMediaCache * _rawMediaCache; // +0x18
    WCRawMediaTaskOperation * _taskOperation; // +0x20
    unsigned long long _totalSize; // +0x28
    unsigned long long _currentSize; // +0x30
    NSArray * _ccArray; // +0x38
    NSArray * _fastDeleteArray; // +0x40
    NSObject<OS_dispatch_queue> * _shareDispatcQueue; // +0x48
    NSString * _overallSessionId; // +0x50
}
+ (BOOL)isSupportOriginMediaClean;
+ (id)convertChatLogInfoToRawTask:(id)arg1;
+ (id)convertDataItemsToChatLogInfo:(void *)arg1;
- (id)genSessionId;
- (id)getSessionId;
- (id)genOverallSessionId;
- (id)getOverallSessionId;
- (unsigned long long)getCurrentCleanSize;
- (unsigned long long)getTotalCleanSize;
- (id)getCurrentCleanContentReportJson;
- (id)getTotalCleanContentReportJson;
- (void)makeHighPriority;
- (void)makeDefaultPriority;
- (id)shareDispatcQueue;
- (void)addLongTask:(id)arg1 shortTask:(id)arg2 fastDeleteTask:(id)arg3 totalSize:(unsigned long long)arg4 cleanAllSend:(BOOL)arg5 cleanAllReceive:(BOOL)arg6 reportCleanContentJson:(id)arg7 cleanAllWeApp:(BOOL)arg8;
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
- (id)fastDeleteArray;
- (void)setFastDeleteArray:(id)arg1;
- (void)setShareDispatcQueue:(id)arg1;
- (BOOL)needWaitToGetAllRaw;
- (void)setNeedWaitToGetAllRaw:(BOOL)arg1;
- (BOOL)bInHighPriority;
- (void)setBInHighPriority:(BOOL)arg1;
- (id)overallSessionId;
- (void)setOverallSessionId:(id)arg1;
- (BOOL)cleanAllWeApp;
- (void)setCleanAllWeApp:(BOOL)arg1;
- (void).cxx_destruct;
@end
