@interface MMFreeSpaceCheckMgr : MMRootService <MMDiskUsageScannerDelegate, IDiskUsageMgr, MMServiceProtocol>
{
    MMFreeSpaceCheckConfig * m_config; // +0x8
    MMTimer * m_checkFreeSpaceTimer; // +0x10
    unsigned long long _freeSizeLevelLow; // +0x18
    unsigned long long _freeSizeLevelLower; // +0x20
    unsigned long long _freeSizeLevelLowest; // +0x28
    unsigned long long _eLevel; // +0x30
    unsigned long long _deviceStorage; // +0x38
    unsigned long long _deviceFreeStorage; // +0x40
    unsigned int _eDeviceStorageLevel; // +0x48
    BOOL _bTipsing; // +0x4c
    unsigned int _lastScanAppSizeTimeStamp; // +0x50
    basic_string<char, std::char_traits<char>, std::allocator<char>> _statfsPath; // +0x58
    NSURL * _volumnURL; // +0x70
    MMDiskUsageScaner * _usageScanner; // +0x78
}
+ (id)workDir;
+ (id)configPath;
+ (id)testFilePath;
- (id)init;
- (void)onServiceInit;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (BOOL)getFreeSize:(unsigned long long *)arg1;
- (BOOL)getDiskSize:(unsigned long long *)arg1;
- (BOOL)isUrgentFreeSpace;
- (unsigned long long)getUrgentFreeSize;
- (void)checkOtherUserUsedSpace;
- (void)checkFreeSpaceEx;
- (void)setup;
- (void)calFreeSpace;
- (void)onFreeSpaceLow;
- (void)onFreeSpaceLower;
- (void)onFreeSpaceLowest;
- (BOOL)shouldTips;
- (void)startCheckDiskSize;
- (void)onDiskUsageMgrFinishOneScan:(id)arg1;
- (void)onDiskUsageScanCancel;
- (void)onDiskUsageScanStart;
- (void)onDiskUsageScanFinishedWithScanStat:(id)arg1;
- (void)handleScanStat:(id)arg1;
- (void)createWorkDir;
- (void)loadConfig;
- (void)saveConfig;
- (void)goCleanView;
- (void)reportTipsType:(unsigned int)arg1 andTipsOpt:(unsigned int)arg2 important:(BOOL)arg3;
- (id)usageScanner;
- (void)setUsageScanner:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

