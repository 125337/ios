@interface MemoryStatManager : MMRootService <MMKernelExt, IExptServiceExt, WCMemoryStatPluginDelegate, MMServiceProtocol>
{
    NSRecursiveLock * m_lock; // +0x8
    NSString * m_rootDir; // +0x10
    NSString * m_pluginConfigPath; // +0x18
    NSString * m_autoDumpConfigPath; // +0x20
    NSString * m_autoDumpDataPath; // +0x28
    NSMutableString * m_launchLog; // +0x30
    MemoryStatPluginConfig * m_pluginConfig; // +0x38
    MemoryStatAutoDumpConfig * m_autoDumpConfig; // +0x40
    unsigned long long m_userMode; // +0x48
    MemoryStatReporter * m_reporter; // +0x50
    WCMemoryStatPlugin * m_plugin; // +0x58
    WCMemoryStatRecord * m_lastRecord; // +0x60
    BOOL m_memoryLoggingEnabled; // +0x68
    BOOL m_allocationsLoggerEnabled; // +0x69
    BOOL m_leaksCheckerEnabled; // +0x6a
    BOOL m_mallocGuardEnabled; // +0x6b
    BOOL m_fasterZoneEnabled; // +0x6c
    BOOL m_isLastTimeFOOM; // +0x6d
    BOOL m_isLastTimeBOOM; // +0x6e
    unsigned long long m_lastUserType; // +0x70
    unsigned long long m_lastMaxUserType; // +0x78
    NSMutableDictionary * m_lastCustomInfo; // +0x80
    MMTimer * m_allocationsAutoDumpTimer; // +0x88
    MMTimer * m_leaksAutoCheckTimer; // +0x90
    long long m_lastDumpTimestamp; // +0x98
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)checkAndRecord;
- (void)startPlugin;
- (void)startVMRegionsLoggingIfNeeded;
- (BOOL)checkDeviceSatisfied;
- (void)startMemoryLoggingIfNeeded;
- (void)startMallocGuardIfNeeded;
- (void)enableAllocationsLoggerIfNeeded;
- (void)enableLeaksCheckerIfNeeded;
- (void)startFasterZoneIfNeeded;
- (BOOL)isMemoryStatManualEnabled;
- (void)setMemoryStatManualEnabled:(BOOL)arg1;
- (BOOL)isMemoryStatDisable;
- (void)setMemoryStatDisable:(BOOL)arg1;
- (void)enableMallocGuard;
- (BOOL)shouldEnterMemoryReport;
- (void)uploadLastRecord:(id)arg1;
- (id)recordList;
- (BOOL)uploadRecord:(id)arg1;
- (id)customInfoForLiveReport:(unsigned int)arg1;
- (id)customInfoForLastReport:(id)arg1;
- (id)customInfoCommonReport;
- (void)allocationsDumpAndReport:(id)arg1;
- (void)leaksCheckAndReport:(id)arg1;
- (void)disablePluginTemporarily;
- (void)onSignalCrash;
- (void)onIPXX:(id)arg1;
- (void)handleIPXXInBackground:(int)arg1;
- (void)addUserType:(unsigned long long)arg1;
- (void)removeUserType:(unsigned long long)arg1;
- (void)setCustomInfoWithKey:(id)arg1 value:(id)arg2;
- (unsigned long long)preGetMemoryStatDataSize;
- (unsigned long long)cleanMemoryStatData;
- (void)startAllocationsAutoDumpTimer;
- (void)onAllocationsAutoDumpTimerCallback:(id)arg1;
- (id)autoDumpDataFileNameWithID:(unsigned long long)arg1;
- (void)startLeaksAutoCheckTimer;
- (void)onLeaksAutoCheckTimerCallback:(id)arg1;
- (void)loadPluginConfig;
- (void)loadAutoDumpConfig;
- (void)savePluginConfigDelay;
- (void)savePluginConfig;
- (void)saveAutoDumpConfig;
- (void)handleAppFirstBecomeActive:(id)arg1;
- (void)doIDKeyReport:(int)arg1 value:(int)arg2;
- (void)onAuthOK;
- (void)onExptItemListChange;
- (void)setupPlguinStrategyFromXLab;
- (void)setupAutoDumpStrategyFromXLab;
- (id)currUsrName;
- (unsigned int)currUin;
- (void)onMemoryStatPlugin:(id)arg1 hasError:(int)arg2;
- (id)onMemoryStatPluginGetCustomInfo:(id)arg1;
- (void).cxx_destruct;
@end
