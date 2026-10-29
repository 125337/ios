@interface MMDiskUsageScaner : NSObject
{
    BOOL _backgroundTaskEnabled; // +0x8
    unsigned int _slowDownCheckSubFileNum; // +0xc
    unsigned int _slowDownSleepMillisecond; // +0x10
    int _scannerStatus; // +0x14
    id <MMDiskUsageScannerDelegate> _delegate; // +0x18
    NSString * _currentAppRootPath; // +0x20
    MMDiskUsageScanStat * _scanStat; // +0x28
    MMDiskExptConfig * _exptConfig; // +0x30
    NSObject<OS_dispatch_queue> * _workQueue; // +0x38
    WCBackgroundTaskBasedQueue * _bgtQueue; // +0x40
}
- (id)init;
- (void)dealloc;
- (void)startWithScanConfig:(id)arg1;
- (void)stop;
- (BOOL)isRunning;
- (BOOL)scanBeginWithRootFolderWithScanConfig:(id)arg1 withScanData:(id)arg2;
- (void)handleDeleteFolder:(id)arg1 withParentPath:(id)arg2 withScanStat:(id)arg3;
- (void)scanFolderBegin:(id)arg1 withParentPath:(id)arg2 withScanConfig:(id)arg3 withScanStat:(id)arg4 depth:(int)arg5;
- (void)scanFileInFolder:(id)arg1 withParentPath:(id)arg2 withScanConfig:(id)arg3 withScanStat:(id)arg4;
- (void)scanSubFolder:(id)arg1 withParentPath:(id)arg2 withScanConfig:(id)arg3 withScanStat:(id)arg4 depth:(int)arg5;
- (BOOL)deleteFile:(id)arg1 matchInfo:(MMBizMatchInfo)arg2 inFolder:(id)arg3 withScanConfig:(id)arg4 fileSize:(unsigned long long *)arg5 logicFileSize:(unsigned long long *)arg6 withScanStat:(id)arg7 latestTimeInterval:(long long *)arg8;
- (void)addBizFileStat:(id)arg1 bizType:(long long)arg2 fileSize:(unsigned long long)arg3 fileInterval:(long long)arg4;
- (void)addBizDelFileStat:(id)arg1 bizType:(long long)arg2 delFileSize:(unsigned long long)arg3;
- (void)addSpecialFileStat:(id)arg1 filePath:(id)arg2 bizType:(long long)arg3 fileSize:(unsigned long long)arg4;
- (void)p_addMsgImageTypeStat:(id)arg1 filePath:(id)arg2 bizType:(long long)arg3 fileSize:(unsigned long long)arg4;
- (void)addFileTypeInUseStat:(id)arg1 fileTypeInUse:(int)arg2 fileSize:(unsigned long long)arg3;
- (void)addFileClassStat:(id)arg1 fileClassType:(int)arg2 fileSize:(unsigned long long)arg3;
- (long long)latestTimeWithCurTime:(long long)arg1 accessTime:(long long)arg2 modifyTime:(long long)arg3 changeTime:(long long)arg4 birthTime:(long long)arg5;
- (void)reportUnknowFile:(id)arg1 accessTime:(long long)arg2 modifyTime:(long long)arg3 changeTime:(long long)arg4 birthTime:(long long)arg5 fileSize:(unsigned long long)arg6;
- (void)reportUnknowDir:(id)arg1 fileNum:(unsigned int)arg2 fileSize:(unsigned long long)arg3;
- (void)reportUnknowPath:(id)arg1 fileNum:(unsigned int)arg2 totalFileSize:(unsigned long long)arg3 latestFileTime:(unsigned int)arg4;
- (void)registerBackgroundNotification;
- (void)UnRegisterBackgroundNotifications;
- (void)onWillSuspend:(id)arg1;
- (void)appDidBecomeActive:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned int)slowDownCheckSubFileNum;
- (void)setSlowDownCheckSubFileNum:(unsigned int)arg1;
- (unsigned int)slowDownSleepMillisecond;
- (void)setSlowDownSleepMillisecond:(unsigned int)arg1;
- (id)currentAppRootPath;
- (void)setCurrentAppRootPath:(id)arg1;
- (id)scanStat;
- (void)setScanStat:(id)arg1;
- (id)exptConfig;
- (void)setExptConfig:(id)arg1;
- (int)scannerStatus;
- (void)setScannerStatus:(int)arg1;
- (id)workQueue;
- (void)setWorkQueue:(id)arg1;
- (BOOL)backgroundTaskEnabled;
- (void)setBackgroundTaskEnabled:(BOOL)arg1;
- (id)bgtQueue;
- (void)setBgtQueue:(id)arg1;
- (void).cxx_destruct;
@end

