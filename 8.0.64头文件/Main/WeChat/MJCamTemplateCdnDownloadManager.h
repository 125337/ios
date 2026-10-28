@interface MJCamTemplateCdnDownloadManager : NSObject <OMJCDNBridgeServiceDelegate>
{
    OMJCDNBridgeService * _cdnBridgeService; // +0x8
    long long _maxDownloadTaskCount; // +0x10
    NSMutableOrderedSet * _waitingTasks; // +0x18
    NSMutableOrderedSet * _runningTasks; // +0x20
}
- (id)init;
- (void)dealloc;
- (C2CDownloadRequest)mjRequestToCndRequest:(id)arg1;
- (void)checkWaitingTasks;
- (BOOL)startCdnDownload:(id)arg1;
- (void)cdnBridgeService:(id)arg1 beginDownload:(id)arg2;
- (void)cdnBridgeService:(id)arg1 cancelDownload:(id)arg2;
- (void)cdnBridgeService:(id)arg1 beginUpload:(id)arg2;
- (void)cdnBridgeService:(id)arg1 cancelUpload:(id)arg2;
- (void)didCompleteWithTaskKey:(id)arg1;
- (void)didFailureWithTaskKey:(id)arg1 errorCode:(long long)arg2;
- (void)didTaskProgressUpdate:(id)arg1 downloadLength:(long long)arg2 totalLength:(long long)arg3;
- (id)cdnBridgeService;
- (void)setCdnBridgeService:(id)arg1;
- (long long)maxDownloadTaskCount;
- (void)setMaxDownloadTaskCount:(long long)arg1;
- (id)waitingTasks;
- (void)setWaitingTasks:(id)arg1;
- (id)runningTasks;
- (void)setRunningTasks:(id)arg1;
- (void).cxx_destruct;
@end
