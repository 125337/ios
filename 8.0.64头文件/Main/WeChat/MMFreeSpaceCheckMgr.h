@interface MMFreeSpaceCheckMgr : MMRootService <MMDiskUsageScannerDelegate, IDiskUsageMgr, MMServiceProtocol>
{
    MMFreeSpaceCheckConfig * m_config; // +0x8
    MMTimer * m_checkFreeSpaceTimer; // +0x10
    unsigned long long _freeSizeLevelLow; // +0x18
    unsigned long long _freeSizeLevelLower; // +0x20
    unsigned long long _freeSizeLevelLowest; // +0x28
    unsigned long long _freeSizeLevelAutoCleanCache; // +0x30
    unsigned long long _freeSizeLevelDisable; // +0x38
    NSString * _tipsDisableThreshold; // +0x40
    unsigned long long _eLevel; // +0x48
    unsigned long long _deviceStorage; // +0x50
    unsigned long long _deviceFreeStorage; // +0x58
    unsigned int _eDeviceStorageLevel; // +0x60
    BOOL _bTipsing; // +0x64
    unsigned int _lastScanAppSizeTimeStamp; // +0x68
    basic_string<char, std::char_traits<char>, std::allocator<char>> _statfsPath; // +0x70
    NSURL * _volumnURL; // +0x88
    BOOL _bTestMode; // +0x90
    BOOL _isChecking; // +0x91
    MMDiskUsageScaner * _usageScanner; // +0x98
    unsigned long long _freeSizeLevelNeedShowAlert; // +0xa0
    unsigned long long _defaultDisableSize; // +0xa8
    unsigned long long _defaultAutoCleanCacheSize; // +0xb0
    NSObject<OS_dispatch_queue> * _checkQueue; // +0xb8
}
+ (BOOL)isSupportNewAlert;
+ (BOOL)willGetFreeSizeByStatfs;
+ (BOOL)willAutoCleanCache;
+ (id)workDir;
+ (id)configPath;
+ (id)testFilePath;
- (id)init;
- (void)onServiceInit;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)checkFreeSpace;
- (BOOL)getFreeSize:(unsigned long long *)arg1;
- (BOOL)getDiskSize:(unsigned long long *)arg1;
- (BOOL)isUrgentFreeSpace;
- (unsigned long long)getUrgentFreeSize;
- (BOOL)needShowStorageDisableAlert;
- (BOOL)isDiskFullStatus;
- (BOOL)getFreeSizeInstantlyFromStatFs:(unsigned long long *)arg1;
- (BOOL)getFreeSizeInstantly:(unsigned long long *)arg1;
- (void)checkStorageDiable;
- (id)getCheckQueue;
- (void)checkOtherUserUsedSpace;
- (void)checkFreeSpaceEx;
- (void)setup;
- (void)calFreeSpace;
- (void)onFreeSpaceNotEnough:(unsigned long long)arg1;
- (void)onFreeSpaceLow;
- (void)onFreeSpaceLower;
- (void)onFreeSpaceLowest;
- (BOOL)shouldTips;
- (void)startCheckDiskSize;
- (void)onDiskUsageMgrFinishOneScan:(id)arg1;
- (void)handleScanStat:(id)arg1;
- (void)createWorkDir;
- (void)loadConfig;
- (void)saveConfig;
- (void)goCleanView;
- (void)goCleanViewFromAnyPage;
- (void)StorageDisableAlertDismissed;
- (void)reportTipsType:(unsigned int)arg1 andTipsOpt:(unsigned int)arg2 important:(BOOL)arg3;
- (void)reportStorageAlertOnWhiteListUI:(int)arg1 scene:(id)arg2;
- (void)reportStorageAlert:(int)arg1 num:(unsigned long long)arg2;
- (void)reportOldStorageAlert:(int)arg1 alias:(id)arg2;
- (BOOL)bTestMode;
- (void)setBTestMode:(BOOL)arg1;
- (id)usageScanner;
- (void)setUsageScanner:(id)arg1;
- (unsigned long long)freeSizeLevelNeedShowAlert;
- (void)setFreeSizeLevelNeedShowAlert:(unsigned long long)arg1;
- (unsigned long long)defaultDisableSize;
- (void)setDefaultDisableSize:(unsigned long long)arg1;
- (unsigned long long)defaultAutoCleanCacheSize;
- (void)setDefaultAutoCleanCacheSize:(unsigned long long)arg1;
- (id)checkQueue;
- (void)setCheckQueue:(id)arg1;
- (BOOL)isChecking;
- (void)setIsChecking:(BOOL)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
