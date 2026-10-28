@interface MMDiskUsageScaner : NSObject
{
    int _scannerStatus; // +0x8
    unsigned int _slowDownCheckSubFileNum; // +0xc
    unsigned int _slowDownSleepMillisecond; // +0x10
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
    unsigned long long _midImgWxamCount; // +0x68
    unsigned long long _midImgWxamSize; // +0x70
    unsigned long long _midImgTotalCount; // +0x78
    unsigned long long _midImgTotalSize; // +0x80
    unsigned long long _rawImgSize; // +0x88
    unsigned long long _rawVideoSize; // +0x90
    unsigned long long _compressedWxamCount; // +0x98
    unsigned long long _compressedWxamSize; // +0xa0
    unsigned long long _wildFileCount; // +0xa8
    unsigned long long _wildFileSize; // +0xb0
    unsigned long long _cleanedRawImgSize; // +0xb8
    unsigned long long _cleanedRawVideoSize; // +0xc0
    NSArray * _sessionArray; // +0xc8
    NSMutableDictionary * _userNameDirHashDict; // +0xd0
    NSMutableDictionary * _c2CFileItemDict; // +0xd8
    MMLRUCache * _msgLruCache; // +0xe0
    unsigned long long _startScanTime; // +0xe8
}
+ (long long)latestTimeWithCurTime:(long long)arg1 accessTime:(long long)arg2 modifyTime:(long long)arg3 changeTime:(long long)arg4 birthTime:(long long)arg5;
+ (void)markCleanCache;
+ (void)markCleanChatLog;
- (id)init;
- (void)startWithScanConfig:(id)arg1;
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
- (void)registerBackgroundNotification;
- (void)onWillSuspend:(id)arg1;
- (void)appDidBecomeActive:(id)arg1;
- (unsigned long long)getLastWholeWechatScanTime;
- (unsigned long long)getLastWholeWechatReportTime;
- (void)saveLastWholeWechatReportTime;
- (void)markEnterNewStorageUsageView;
- (void)reportLastWholeWechatData;
- (void)reportWildFile:(BOOL)arg1;
- (void)reportWxamConvertResult;
- (void)reportAutoCleanRawMedia;
- (id)getMessageWithLruCache:(id)arg1 MsgLocalId:(id)arg2;
- (void)reportExistC2CFile;
- (long long)getReportValueFromMMKV:(id)arg1;
- (void)analyseC2CFile:(id)arg1 FileName:(id)arg2 BizType:(long long)arg3;
- (id)getFileItemKey:(id)arg1;
- (long long)getKeyFileSize:(unsigned long long)arg1;
- (id)jsonStringFromDict:(id)arg1;
- (BOOL)isTop50FileExt:(id)arg1;
- (int)getSendFileScene:(unsigned int)arg1 ForwardType:(unsigned int)arg2;
- (void)saveConvertWxamResult:(unsigned long long)arg1 CompressedSize:(unsigned long long)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (int)scannerStatus;
- (void)setScannerStatus:(int)arg1;
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
- (unsigned long long)midImgWxamCount;
- (void)setMidImgWxamCount:(unsigned long long)arg1;
- (unsigned long long)midImgWxamSize;
- (void)setMidImgWxamSize:(unsigned long long)arg1;
- (unsigned long long)midImgTotalCount;
- (void)setMidImgTotalCount:(unsigned long long)arg1;
- (unsigned long long)midImgTotalSize;
- (void)setMidImgTotalSize:(unsigned long long)arg1;
- (unsigned long long)rawImgSize;
- (void)setRawImgSize:(unsigned long long)arg1;
- (unsigned long long)rawVideoSize;
- (void)setRawVideoSize:(unsigned long long)arg1;
- (unsigned long long)compressedWxamCount;
- (void)setCompressedWxamCount:(unsigned long long)arg1;
- (unsigned long long)compressedWxamSize;
- (void)setCompressedWxamSize:(unsigned long long)arg1;
- (unsigned long long)wildFileCount;
- (void)setWildFileCount:(unsigned long long)arg1;
- (unsigned long long)wildFileSize;
- (void)setWildFileSize:(unsigned long long)arg1;
- (unsigned long long)cleanedRawImgSize;
- (void)setCleanedRawImgSize:(unsigned long long)arg1;
- (unsigned long long)cleanedRawVideoSize;
- (void)setCleanedRawVideoSize:(unsigned long long)arg1;
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
- (void).cxx_destruct;
@end
