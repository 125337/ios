@interface WCUserFileScanService : MMUserService <WXGImportMessageNotification, MMServiceProtocol>
{
    BOOL _bUseCache; // +0x8
    WCUserFileScanOperation * _fileScanOperation; // +0x10
    WCHardlinkFileInfoDB * _infoDB; // +0x18
    unsigned long long _totalScanFileCount; // +0x20
    unsigned long long _totalScanFileSize; // +0x28
    unsigned long long _totalHitCacheCount; // +0x30
    unsigned long long _currentHardlinkFileCount; // +0x38
    unsigned long long _currentHardlinkFileSaveSize; // +0x40
    NSMutableDictionary * _currentHardlinkCountInfo; // +0x48
    NSMutableDictionary * _currentHardlinkSizeInfo; // +0x50
    unsigned long long _nHardlinkFileCount; // +0x58
    unsigned long long _nHardlinkFileSaveSize; // +0x60
    NSMutableDictionary * _nHardlinkCountInfo; // +0x68
    NSMutableDictionary * _nHardlinkSizeInfo; // +0x70
    NSMutableDictionary * _cleanUselessSizeInfo; // +0x78
    NSMutableDictionary * _cleanUselessCountInfo; // +0x80
    double _scanFileStartTime; // +0x88
    double _scanFileEndTime; // +0x90
    double _hardlinkStartTime; // +0x98
    double _hardlinkEndTime; // +0xa0
    unsigned long long _totalNotConfirmCount; // +0xa8
    unsigned long long _totalNotGetMp4Md5Count; // +0xb0
    WCHardlinkFileCache * _fileInfoCache; // +0xb8
    unsigned long long _totalInsertDBCount; // +0xc0
    MMTimer * _fileScanTimer; // +0xc8
    NSMutableSet * _inodeNumSet; // +0xd0
    NSCountedSet * _fileMD5Set; // +0xd8
}
+ (BOOL)canLetFileInfoHardLink:(id)arg1 with:(id)arg2;
+ (id)getDetailInfoFromInfoDict:(id)arg1 prefix:(id)arg2 suffix:(id)arg3 isSize:(BOOL)arg4;
+ (id)getRelatedMemoryKV;
+ (BOOL)getStateOfHardLinkDone;
+ (void)setStateOfHardLinkDone:(BOOL)arg1;
+ (void)setCurrentLink:(id)arg1 with:(id)arg2;
+ (void)removeLinkInfo;
+ (id)getBeLinkedInfo;
+ (id)getLinkToInfo;
+ (void)saveLastFinishTime:(unsigned int)arg1;
+ (unsigned int)lastFinishTime;
+ (BOOL)isSupportTakeHardLink;
+ (BOOL)isSupportCleanUselessFile;
+ (long long)getTimeIntervalForOneAllHardlink;
- (void)scanServiceBegin;
- (void)scanServiceBeginUseCache:(BOOL)arg1;
- (void)scanChatLogFile;
- (void)cleanUselessFile:(id)arg1 fileStat:(stat)arg2;
- (void)hardlinkFile;
- (void)finishHardlink;
- (id)getFileMD5:(id)arg1 withType:(unsigned long long)arg2 withSize:(unsigned long long)arg3;
- (BOOL)confirmFileInfo:(id)arg1;
- (void)syncAtomicHardlink:(id)arg1;
- (id)getFinishScanInfo;
- (void)onImportMessageSuccess;
- (BOOL)rejectScan;
- (void)hardlinkScanPhase;
- (void)setupScan;
- (void)onServiceInit;
- (void)onServiceTerminate;
- (id)fileScanOperation;
- (void)setFileScanOperation:(id)arg1;
- (id)infoDB;
- (void)setInfoDB:(id)arg1;
- (unsigned long long)totalScanFileCount;
- (void)setTotalScanFileCount:(unsigned long long)arg1;
- (unsigned long long)totalScanFileSize;
- (void)setTotalScanFileSize:(unsigned long long)arg1;
- (unsigned long long)totalHitCacheCount;
- (void)setTotalHitCacheCount:(unsigned long long)arg1;
- (unsigned long long)currentHardlinkFileCount;
- (void)setCurrentHardlinkFileCount:(unsigned long long)arg1;
- (unsigned long long)currentHardlinkFileSaveSize;
- (void)setCurrentHardlinkFileSaveSize:(unsigned long long)arg1;
- (id)currentHardlinkCountInfo;
- (void)setCurrentHardlinkCountInfo:(id)arg1;
- (id)currentHardlinkSizeInfo;
- (void)setCurrentHardlinkSizeInfo:(id)arg1;
- (unsigned long long)nHardlinkFileCount;
- (void)setNHardlinkFileCount:(unsigned long long)arg1;
- (unsigned long long)nHardlinkFileSaveSize;
- (void)setNHardlinkFileSaveSize:(unsigned long long)arg1;
- (id)nHardlinkCountInfo;
- (void)setNHardlinkCountInfo:(id)arg1;
- (id)nHardlinkSizeInfo;
- (void)setNHardlinkSizeInfo:(id)arg1;
- (id)cleanUselessSizeInfo;
- (void)setCleanUselessSizeInfo:(id)arg1;
- (id)cleanUselessCountInfo;
- (void)setCleanUselessCountInfo:(id)arg1;
- (double)scanFileStartTime;
- (void)setScanFileStartTime:(double)arg1;
- (double)scanFileEndTime;
- (void)setScanFileEndTime:(double)arg1;
- (double)hardlinkStartTime;
- (void)setHardlinkStartTime:(double)arg1;
- (double)hardlinkEndTime;
- (void)setHardlinkEndTime:(double)arg1;
- (unsigned long long)totalNotConfirmCount;
- (void)setTotalNotConfirmCount:(unsigned long long)arg1;
- (unsigned long long)totalNotGetMp4Md5Count;
- (void)setTotalNotGetMp4Md5Count:(unsigned long long)arg1;
- (id)fileInfoCache;
- (void)setFileInfoCache:(id)arg1;
- (BOOL)bUseCache;
- (void)setBUseCache:(BOOL)arg1;
- (unsigned long long)totalInsertDBCount;
- (void)setTotalInsertDBCount:(unsigned long long)arg1;
- (id)fileScanTimer;
- (void)setFileScanTimer:(id)arg1;
- (id)inodeNumSet;
- (void)setInodeNumSet:(id)arg1;
- (id)fileMD5Set;
- (void)setFileMD5Set:(id)arg1;
- (void).cxx_destruct;
@end
