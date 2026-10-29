@interface MMDiskUsageMgr : MMUserService <MMDiskUsageScannerDelegate, MMDiskUsageRepoterDelegate, MMServiceProtocol>
{
    BOOL m_fastListCancelled; // +0x8
    BOOL _shouldToScan; // +0x9
    BOOL _shouldReport; // +0xa
    BOOL _useFastListToReport; // +0xb
    NSObject<OS_dispatch_queue> * _workQueue; // +0x10
    MMTimer * _finishScanTimer; // +0x18
    MMDiskUsageScaner * _scanner; // +0x20
    MMFolderWrapCacheData * _sharedCache; // +0x28
    MMDiskUsageReporter * _reporter; // +0x30
    MMDiskUsageConfigHandler * _configHandler; // +0x38
    MMDiskUsageStatus * _diskUsageStatus; // +0x40
    MMDiskCommonUsageScanner * _appGroupScanner; // +0x48
    NSObject<OS_dispatch_queue> * _fastListWorkQueue; // +0x50
}
+ (unsigned int)getUrgentLevel;
- (void)asyncGetDiskScanData;
- (id)sharedCacheData;
- (void)dealloc;
- (void)clearData;
- (id)workQueue;
- (id)configHandler;
- (id)diskUsageStatus;
- (void)onServiceClearData;
- (void)onServiceTerminate;
- (void)onServiceInit;
- (void)onServiceEnterForeground;
- (BOOL)shouldDiskUsageReport;
- (void)reportIfNeeded;
- (void)onReportFinished;
- (void)wholeWechatReport;
- (void)startWholeScan:(BOOL)arg1 quickScan:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)wholeWechatScan:(BOOL)arg1;
- (void)scheduleCompressVideoBGTask;
- (void)finishScanPhase;
- (BOOL)rejectScan;
- (void)startFinishScanDiskWithUrgentLevel:(unsigned int)arg1;
- (void)startFastListScanForReportImpl:(BOOL)arg1 timeToScanAll:(BOOL)arg2 shouldSleep:(BOOL)arg3 cancelled:(BOOL *)arg4;
- (void)startFastListScanForReportImpl:(BOOL)arg1 timeToScanAll:(BOOL)arg2;
- (void)startFastListScanForReport;
- (void)stopScanDisk;
- (void)markLastForceCleanTmpTime;
- (BOOL)p_shouldForceCleanTmp;
- (BOOL)p_shouldFinishScanWithUrgentLevel:(unsigned int)arg1;
- (void)startScanAppGroup;
- (void)onDiskUsageScanStart;
- (void)onDiskUsageScanFinishedWithScanStat:(id)arg1;
- (void)onDiskUsageScanCancel;
- (BOOL)checkRunTooFrequently:(id)arg1;
- (BOOL)ifForceWholeWechatScanForDebug;
- (BOOL)ifStoreToFileIndexService;
- (void)setWorkQueue:(id)arg1;
- (id)finishScanTimer;
- (void)setFinishScanTimer:(id)arg1;
- (id)scanner;
- (void)setScanner:(id)arg1;
- (id)sharedCache;
- (void)setSharedCache:(id)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (void)setConfigHandler:(id)arg1;
- (void)setDiskUsageStatus:(id)arg1;
- (id)appGroupScanner;
- (void)setAppGroupScanner:(id)arg1;
- (BOOL)shouldToScan;
- (void)setShouldToScan:(BOOL)arg1;
- (BOOL)shouldReport;
- (void)setShouldReport:(BOOL)arg1;
- (BOOL)useFastListToReport;
- (void)setUseFastListToReport:(BOOL)arg1;
- (id)fastListWorkQueue;
- (void)setFastListWorkQueue:(id)arg1;
- (void).cxx_destruct;
@end
