@interface TPAssetResourceLoader : NSObject <TPAssetResourceLoadingRequestDelegate, TPAssetResourceLoadingDataRequestDelegate>
{
    TPAssetProxyLoaderCallback * _proxyLoaderCallback; // +0x8
    BOOL _isOnSwitching; // +0x10
    int _taskId; // +0x14
    int _taskSequence; // +0x18
    id <TPAssetResourceLoaderDelegate> _delegate; // +0x20
    NSObject<OS_dispatch_queue> * _delegateQueue; // +0x28
    long long _definitionId; // +0x30
    NSString * _cacheDataDir; // +0x38
    NSRecursiveLock * _recursiveLock; // +0x40
    NSMutableArray * _loadingRequests; // +0x48
    TPWorkerQueue * _dataWriteQueue; // +0x50
    TPDownloadParamData * _downloadParamData; // +0x58
    NSMutableDictionary * _dicFileInfo; // +0x60
    NSMutableDictionary * _dicDataRanges; // +0x68
    NSMutableArray * _arrPendingMsg; // +0x70
    long long _lastLoadingRequestGroupTimestamp; // +0x78
    long long _currentLoadingRequestCount; // +0x80
}
- (id)initWithServiceType:(int)arg1;
- (id)getFileInfoWithFileName:(id)arg1;
- (BOOL)isUseAssetResourceLoader;
- (id)generateInformationRequest;
- (int)getDataReadyLenWithFileName:(id)arg1 fileId:(int)arg2 offset:(unsigned long long)arg3;
- (int)getDataWithFileName:(id)arg1 data:(char *)arg2 offset:(long long)arg3 size:(int)arg4;
- (void)onProxyStart:(int)arg1;
- (long long)getRequestLenWithFileName:(id)arg1 start:(long long)arg2 end:(long long)arg3;
- (int)onReceiveRequestMsg:(long long)arg1 end:(long long)arg2 fileName:(id)arg3;
- (int)onReceiveRequestMsg:(long long)arg1 end:(long long)arg2 fileName:(id)arg3 requestMeta:(BOOL)arg4;
- (id)getExistContainRequestWithOffset:(long long)arg1 length:(long long)arg2;
- (id)getCacheRangeInfoWithMsg:(id)arg1;
- (id)getMergeLoadingRequest:(long long)arg1 length:(long long)arg2;
- (void)startRequestWithMsg:(id)arg1;
- (void)cancelLoadingRequestWithNum:(int)arg1;
- (void *)getAssetResourceloaderProxyCallback;
- (void *)getAssetResourceLoaderProxyCallback;
- (void)setVideoInfo:(id)arg1;
- (long long)getDefinitionId;
- (void)setDefinitionId:(long long)arg1;
- (BOOL)isOnSwitching;
- (void)setIsOnSwitching:(BOOL)arg1;
- (int)getTaskId;
- (void)onStop;
- (void)dealloc;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (id)delegateQueue;
- (void)onLoadingRequestFinished:(id)arg1;
- (void)onGetContentInfo:(id)arg1;
- (void)onUpdateDataWithOffset:(unsigned long long)arg1 length:(unsigned long long)arg2 fileName:(id)arg3;
- (id)delegate;
- (void)setDelegateQueue:(id)arg1;
- (int)taskId;
- (void)setTaskId:(int)arg1;
- (int)taskSequence;
- (void)setTaskSequence:(int)arg1;
- (BOOL)isOnSwitching;
- (void)setIsOnSwitching:(BOOL)arg1;
- (long long)definitionId;
- (void)setDefinitionId:(long long)arg1;
- (id)cacheDataDir;
- (void)setCacheDataDir:(id)arg1;
- (id)recursiveLock;
- (void)setRecursiveLock:(id)arg1;
- (id)loadingRequests;
- (void)setLoadingRequests:(id)arg1;
- (id)dataWriteQueue;
- (void)setDataWriteQueue:(id)arg1;
- (id)downloadParamData;
- (void)setDownloadParamData:(id)arg1;
- (id)dicFileInfo;
- (void)setDicFileInfo:(id)arg1;
- (id)dicDataRanges;
- (void)setDicDataRanges:(id)arg1;
- (id)arrPendingMsg;
- (void)setArrPendingMsg:(id)arg1;
- (long long)lastLoadingRequestGroupTimestamp;
- (void)setLastLoadingRequestGroupTimestamp:(long long)arg1;
- (long long)currentLoadingRequestCount;
- (void)setCurrentLoadingRequestCount:(long long)arg1;
- (void).cxx_destruct;
@end
