@interface WCCleanExService : MMUserService <MMServiceProtocol>
{
    WCFileIndexService * _fileIndexService; // +0x8
    long long _loadingState; // +0x10
    NSString * _currentLoadingDataSource; // +0x18
    NSObject<OS_dispatch_queue> * _serviceQueue; // +0x20
    NSObject<OS_dispatch_queue> * _listenerQueue; // +0x28
    NSMutableArray * _listeners; // +0x30
    NSMutableDictionary * _oneShotListeners; // +0x38
    NSObject<OS_dispatch_semaphore> * _chatLogSemaphore; // +0x40
    id _storageKV; // +0x48
}
+ (BOOL)enhancingCleanConfirm;
+ (long long)cleanReportVersion;
+ (id)getRelatedMemoryKV;
- (void)onServiceInit;
- (void)onServiceClearData;
- (id)init;
- (void)setupService;
- (void)cleanupService;
- (void)noteLatestTotalSize:(id)arg1 totalSize:(unsigned long long)arg2;
- (id)getCacheDataSources;
- (id)getAllTotalSizeRecords;
- (id)getLastTotalSizeRecordOfDatasource:(id)arg1;
- (id)getLastTotalSizeRecord;
- (id /* block */)addTotalSizeOneShotListener:(id /* block */)arg1;
- (BOOL)removeTotalSizeListener:(id /* block */)arg1;
- (void)notifyListeners:(id)arg1 totalSize:(unsigned long long)arg2;
- (void)startLoadingTask;
- (void)cancelLoadingTask;
- (unsigned long long)runLoadingTask:(id)arg1;
- (unsigned long long)calculateSizeFromFileIndex;
- (unsigned long long)calculateSizeFromFastList;
- (unsigned long long)calculateSizeFromChatLogDataMgr;
- (unsigned long long)calculateSizeFromReportClean;
- (BOOL)isLoading;
- (id)getCurrentLoadingDataSource;
- (long long)getLoadingState;
- (void)onChatLogDataLoadFinished;
- (void)onChatLogDataReloadItem;
- (id)fileIndexService;
- (void)setFileIndexService:(id)arg1;
- (long long)loadingState;
- (void)setLoadingState:(long long)arg1;
- (id)currentLoadingDataSource;
- (void)setCurrentLoadingDataSource:(id)arg1;
- (id)serviceQueue;
- (void)setServiceQueue:(id)arg1;
- (id)listenerQueue;
- (void)setListenerQueue:(id)arg1;
- (id)listeners;
- (void)setListeners:(id)arg1;
- (id)oneShotListeners;
- (void)setOneShotListeners:(id)arg1;
- (id)chatLogSemaphore;
- (void)setChatLogSemaphore:(id)arg1;
- (id)storageKV;
- (void)setStorageKV:(id)arg1;
- (void).cxx_destruct;
@end
