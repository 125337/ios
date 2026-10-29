@interface MMDiskUsageScaner : NSObject
{
    BOOL _isInBackground; // +0x8
    int _scannerStatus; // +0xc
    unsigned int _slowDownCheckSubFileNum; // +0x10
    unsigned int _slowDownSleepMillisecond; // +0x14
    id <MMDiskUsageScannerDelegate> _delegate; // +0x18
    NSString * _currentAppRootPath; // +0x20
    MMDiskUsageScanStat * _scanStat; // +0x28
    MMDiskExptConfig * _exptConfig; // +0x30
    NSObject<OS_dispatch_queue> * _workQueue; // +0x38
    NSObject<OS_dispatch_semaphore> * _concurrentSemaphore; // +0x40
    NSRecursiveLock * _lock; // +0x48
    NSMutableDictionary * _hardlinkInodeDict; // +0x50
    NSMutableDictionary * _cowFileDict; // +0x58
    MMFolderWrapCacheData * _wrapCacheData; // +0x60
    NSArray * _sessionArray; // +0x68
    NSMutableDictionary * _userNameDirHashDict; // +0x70
    NSMutableDictionary * _c2CFileItemDict; // +0x78
    MMLRUCache * _msgLruCache; // +0x80
    unsigned long long _startScanTime; // +0x88
    NSMutableArray * _flattFilePaths; // +0x90
    NSObject<OS_dispatch_queue> * _reportSerialQueue; // +0x98
    long long _suspensionCheckFileCount; // +0xa0
}
+ (long long)latestTimeWithCurTime:(long long)arg1 accessTime:(long long)arg2 modifyTime:(long long)arg3 changeTime:(long long)arg4 birthTime:(long long)arg5;
+ (void)markCleanCache;
+ (void)markCleanChatLog;
- (id)init;
- (void)startWithScanConfig:(id)arg1;
- (void)startWithScanConfig:(id)arg1 completion:(id /* block */)arg2;
- (void)stop;
- (BOOL)isRunning;
- (BOOL)scanBeginWithRootFolderWithScanConfig:(id)arg1 withScanData:(id)arg2;
- (BOOL)waitingForScanFinish:(id)arg1 withScanConfig:(id)arg2;
- (void)handleDeleteFolder:(id)arg1 withFolderPath:(id)arg2 withScanStat:(id)arg3;
- (void)scanFolderBegin:(id)arg1 withParentPath:(id)arg2 withScanConfig:(id)arg3 withScanStat:(id)arg4 depth:(int)arg5;
- (void)onScanFileInFolderFinish:(id)arg1 withScanStat:(id)arg2;
- (BOOL)scanFileInFolder:(id)arg1 withFolderPath:(id)arg2 withScanConfig:(id)arg3;
- (void)mergeFolderStat:(id)arg1 intoScanStat:(id)arg2;
- (BOOL)isFileCanNotChangeSize:(id)arg1;
- (void)scanSubFolder:(id)arg1 withFolderPath:(id)arg2 withScanConfig:(id)arg3 withScanStat:(id)arg4 depth:(int)arg5;
- (BOOL)deleteFile:(id)arg1 matchInfo:(MMBizMatchInfo)arg2 inFolder:(id)arg3 withScanConfig:(id)arg4 fileSize:(unsigned long long *)arg5 logicFileSize:(unsigned long long *)arg6 latestTimeInterval:(long long *)arg7;
- (void)addBizFileStat:(id)arg1 bizType:(long long)arg2 fileSize:(unsigned long long)arg3 fileInterval:(long long)arg4;
- (void)addBizDelFileStat:(id)arg1 bizType:(long long)arg2 delFileSize:(unsigned long long)arg3;
- (void)addFileTypeInUseStat:(id)arg1 fileTypeInUse:(int)arg2 fileSize:(unsigned long long)arg3;
- (void)addFileClassStat:(id)arg1 fileClassType:(int)arg2 fileSize:(unsigned long long)arg3;
- (void)addFileOtherDataBizStat:(id)arg1 bizType:(long long)arg2 fileSize:(unsigned long long)arg3;
- (void)addFileCacheDataBizStat:(id)arg1 bizType:(long long)arg2 fileSize:(unsigned long long)arg3;
- (void)registerBackgroundNotification;
- (void)onWillSuspend:(id)arg1;
- (void)appDidBecomeActive:(id)arg1;
- (void)onDidEnterBackground:(id)arg1;
- (void)onWillEnterForeground:(id)arg1;
- (unsigned long long)getLastWholeWechatScanTime;
- (unsigned long long)getLastWholeWechatReportTime;
- (unsigned long long)getLastReportCacheAndOtherDataFastTime;
- (void)saveLastReportCacheAndOtherDataFastTime;
- (void)saveLastWholeWechatReportTime;
- (void)markEnterNewStorageUsageView;
- (void)saveOtherDataDetail:(id)arg1;
- (id)getOtherDataDetail;
- (void)saveOtherDataDictSize:(unsigned long long)arg1;
- (void)saveCacheDataDetail:(id)arg1;
- (id)getCacheDataDetail;
- (void)saveCacheDataDictSize:(unsigned long long)arg1;
- (void)reportLastWholeWechatDataAsync;
- (void)reportLastWholeWechatData;
- (void)reportWxamConvertResult;
- (void)reportAutoCleanRawMedia:(unsigned long long)arg1 cleanedRawVideoSize:(unsigned long long)arg2;
- (id)getMessageWithLruCache:(id)arg1 MsgLocalId:(id)arg2;
- (void)saveExistC2CFileData;
- (long long)getReportValueFromMMKV:(id)arg1;
- (void)analyseC2CFile:(id)arg1 FolderPath:(id)arg2 FileName:(id)arg3 BizType:(long long)arg4;
- (id)getFileItemKey:(id)arg1;
- (long long)getKeyFileSize:(unsigned long long)arg1;
- (id)jsonStringFromDict:(id)arg1;
- (id)jsonDictFromString:(id)arg1;
- (BOOL)isTop50FileExt:(id)arg1;
- (int)getSendFileScene:(unsigned int)arg1 ForwardType:(unsigned int)arg2;
- (void)saveConvertWxamResult:(unsigned long long)arg1 CompressedSize:(unsigned long long)arg2;
- (BOOL)ifForceWholeWechatScanForDebug;
- (BOOL)storeOnlyChatLogFilesToFileIndexService;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (int)scannerStatus;
- (void)setScannerStatus:(int)arg1;
- (BOOL)isInBackground;
- (void)setIsInBackground:(BOOL)arg1;
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
- (id)workQueue;
- (void)setWorkQueue:(id)arg1;
- (id)concurrentSemaphore;
- (void)setConcurrentSemaphore:(id)arg1;
- (id)lock;
- (void)setLock:(id)arg1;
- (id)hardlinkInodeDict;
- (void)setHardlinkInodeDict:(id)arg1;
- (id)cowFileDict;
- (void)setCowFileDict:(id)arg1;
- (id)wrapCacheData;
- (void)setWrapCacheData:(id)arg1;
- (id)sessionArray;
- (void)setSessionArray:(id)arg1;
- (id)userNameDirHashDict;
- (void)setUserNameDirHashDict:(id)arg1;
- (id)c2CFileItemDict;
- (void)setC2CFileItemDict:(id)arg1;
- (id)msgLruCache;
- (void)setMsgLruCache:(id)arg1;
- (unsigned long long)startScanTime;
- (void)setStartScanTime:(unsigned long long)arg1;
- (id)flattFilePaths;
- (void)setFlattFilePaths:(id)arg1;
- (id)reportSerialQueue;
- (void)setReportSerialQueue:(id)arg1;
- (long long)suspensionCheckFileCount;
- (void)setSuspensionCheckFileCount:(long long)arg1;
- (void).cxx_destruct;
@end
