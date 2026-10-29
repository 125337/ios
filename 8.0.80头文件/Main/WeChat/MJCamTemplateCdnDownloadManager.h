@interface MJCamTemplateCdnDownloadManager : NSObject <OMJCDNBridgeServiceDelegate>
{
    BOOL _isCheckingWaitingTasks; // +0x8
    OMJCDNBridgeService * _cdnBridgeService; // +0x10
    long long _maxDownloadTaskCount; // +0x18
    NSMutableOrderedSet * _waitingTasks; // +0x20
    NSMutableOrderedSet * _runningTasks; // +0x28
}
- (id)init;
- (void)dealloc;
- (void)resetForAccountChange;
- (C2CDownloadRequest)mjRequestToCndRequest:(id)arg1;
- (void)checkWaitingTasks;
- (BOOL)startCdnDownload:(id)arg1;
- (void)cdnBridgeService:(id)arg1 beginDownload:(id)arg2;
- (void)cdnBridgeService:(id)arg1 cancelDownload:(id)arg2;
- (void)cdnBridgeService:(id)arg1 cancelDownload:(id)arg2 callbackToken:(unsigned long long)arg3;
- (void)cdnBridgeService:(id)arg1 beginUpload:(id)arg2;
- (void)cdnBridgeService:(id)arg1 cancelUpload:(id)arg2;
- (void)cdnBridgeService:(id)arg1 cancelUpload:(id)arg2 callbackToken:(unsigned long long)arg3;
- (void)didCompleteWithTaskKey:(id)arg1 callbackToken:(unsigned long long)arg2;
- (void)didFailureWithTaskKey:(id)arg1 callbackToken:(unsigned long long)arg2 errorCode:(long long)arg3;
- (void)notifyDownloadFailureWithTaskKey:(id)arg1 callbackToken:(unsigned long long)arg2 errorCode:(long long)arg3;
- (void)didTaskProgressUpdate:(id)arg1 callbackToken:(unsigned long long)arg2 downloadLength:(long long)arg3 totalLength:(long long)arg4;
- (BOOL)containsTaskWithTaskKey:(id)arg1;
- (BOOL)containsTaskWithTaskKey:(id)arg1 callbackToken:(unsigned long long)arg2 inTasks:(id)arg3;
- (id)removeTaskWithTaskKey:(id)arg1 callbackToken:(unsigned long long)arg2 fromTasks:(id)arg3;
- (BOOL)removeRunningTaskWithTaskKey:(id)arg1 callbackToken:(unsigned long long)arg2;
- (id)cdnBridgeService;
- (void)setCdnBridgeService:(id)arg1;
- (long long)maxDownloadTaskCount;
- (void)setMaxDownloadTaskCount:(long long)arg1;
- (BOOL)isCheckingWaitingTasks;
- (void)setIsCheckingWaitingTasks:(BOOL)arg1;
- (id)waitingTasks;
- (void)setWaitingTasks:(id)arg1;
- (id)runningTasks;
- (void)setRunningTasks:(id)arg1;
- (void).cxx_destruct;
@end
