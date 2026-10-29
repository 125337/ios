@interface WCDBManager : NSObject <WCSQLiteLintDataSourceDelegate>
{
    NSMutableSet * m_tableUsageRecord; // +0x8
    NSMutableDictionary * m_traceConfigs; // +0x10
    long long m_diskIOErrorCount; // +0x18
    map<WCDBTag, WCDBRouterInfo *, std::less<WCDBTag>, std::allocator<std::pair<const WCDBTag, WCDBRouterInfo *>>> _taggedRouterInfos; // +0x20
    set<WCDBTag, std::less<WCDBTag>, std::allocator<WCDBTag>> _criticalRouterTags; // +0x38
    set<WCDBTag, std::less<WCDBTag>, std::allocator<WCDBTag>> _retrievableTags; // +0x50
    map<std::pair<WCDBTag, WCTErrorCode>, std::vector<int>, std::less<std::pair<WCDBTag, WCTErrorCode>>, std::allocator<std::pair<const std::pair<WCDBTag, WCTErrorCode>, std::vector<int>>>> _errorIdkeys; // +0x68
    NSMutableDictionary * _monitorDatabases; // +0x80
    NSObject<OS_dispatch_queue> * _sqliteLintQueue; // +0x88
    double _sqlCostLowerBound; // +0x90
    MemoryMappedKV * m_kv; // +0x98
    NSMutableDictionary * _customRecoverHandlers; // +0xa0
    map<WCDBTag, int, std::less<WCDBTag>, std::allocator<std::pair<const WCDBTag, int>>> _retrieveTimesIdkeys; // +0xa8
    map<WCDBTag, int, std::less<WCDBTag>, std::allocator<std::pair<const WCDBTag, int>>> _retrieveScoreIdkeys; // +0xc0
    BOOL _needReportRetrieve; // +0xd8
    double _mechanicTime; // +0xe0
    double _mechanicSize; // +0xe8
    double _mechanicScore; // +0xf0
    int _mechanicCount; // +0xf8
    int _mechanicWalCount; // +0xfc
    int _mechanicTotalPageCount; // +0x100
    double _fullCrawlTime; // +0x108
    double _fullCrawlSize; // +0x110
    double _fullCrawlScore; // +0x118
    int _fullCrawlCount; // +0x120
    int _fullCrawlTotalPageCount; // +0x124
    BOOL _showWhereDatabase; // +0x128
    NSArray * _routerInfos; // +0x130
}
+ (id)compressRecordPathFor:(long long)arg1;
+ (void)tryReportCompressionError:(id)arg1;
+ (id)tryRecordTimeOnChainCall:(id /* block */)arg1 ofType:(int)arg2 ofTag:(int)arg3;
+ (id)shared;
+ (BOOL)isWCDBBuiltinTable:(id)arg1;
+ (void)safeInvokeProgressHandler:(id /* block */)arg1 withProgress:(double)arg2 andIncrement:(double)arg3;
+ (id)wcdbRecordDir;
+ (id)wcdbUserRecordDir;
+ (void)report:(id)arg1;
+ (void)tryReportKV:(id)arg1;
+ (void)tryReportIDKey:(id)arg1;
+ (void)printCorruptDBHeader:(id)arg1;
+ (void)tryReportAutoAddColumn:(id)arg1;
+ (id)repairRecordInfoPath;
+ (void)tryRecordBackupSize:(id)arg1;
+ (unsigned long long)getThreadCPUTime;
+ (id)getOrCreateBackupInfo;
+ (void)saveBackupInfo:(id)arg1;
+ (id)backupRecordInfoPath;
+ (void)tryReportBackupError:(id)arg1;
- (id)getVacuumInfosWithFreeSpace:(unsigned long long)arg1;
- (id)databaseFromVacuumInfo:(id)arg1;
- (id)getVacuumInfo:(int)arg1 withFreeSize:(unsigned long long)arg2;
- (id)getVacuumInfo:(int)arg1 path:(id)arg2 withFreeSize:(unsigned long long)arg3;
- (BOOL)executeVacuum:(id)arg1 freedSize:(long long *)arg2 progress:(id /* block */)arg3;
- (unsigned long long)saveMessageDBFreelistSizeToMMKV;
- (int)allMessageDBIncrementalVacuumFlag;
- (unsigned long long)currentMessageDBFreelistSize;
- (long long)incrementalVacuumAllMessageDB:(int)arg1;
- (unsigned long long)saveFtsDBFreelistSizeToMMKV;
- (int)ftsDBIncrementalVacuumFlag;
- (unsigned long long)currentFtsDBFreelistSize;
- (long long)incrementalVacuumFtsDB:(int)arg1;
- (void)reportUsage:(id)arg1;
- (void)reportDBUsage:(unsigned long long)arg1;
- (void)enumerateAllDatabases:(id /* block */)arg1;
- (unsigned long long)getMsgReportType:(unsigned int)arg1 dbTag:(int)arg2;
- (unsigned long long)getAppMsgReportType:(id)arg1;
- (void)reportMsgUsage;
- (long long)getMsgCountFrom:(id)arg1;
- (BOOL)shouldTraceDataBase:(int)arg1;
- (double)getSQLTraceRecordForTag:(int)arg1;
- (void)saveSQLTraceRecordForTag:(int)arg1;
- (void)tryLoadTraceConfigs;
- (id)extracted:(id)arg1;
- (void)traceDiskIOError;
- (void)traceError:(id)arg1;
- (void)traceEmptyElement:(id)arg1;
- (id)getDataOfDict:(unsigned long long)arg1;
- (basic_string<char, std::char_traits<char>, std::allocator<char>>)genDictKey;
- (id)decryptDict:(id)arg1 verifyMD5:(id)arg2;
- (id)decompressDictData:(id)arg1;
- (BOOL)tryRegisterDict:(unsigned long long)arg1;
- (BOOL)hasStartCompress:(int)arg1;
- (BOOL)shouldClearCompressedKey:(int)arg1;
- (BOOL)rollbackCompressionForDatabase:(int)arg1 progress:(id /* block */)arg2;
- (int)getCompressionIDKey:(int)arg1;
- (void)markAsCompressBegin:(int)arg1;
- (void)markAsCompressFinish:(int)arg1;
- (void)recordTimeOfCRUD;
- (id)blockOfRecordingCRUD:(int)arg1;
- (id)initOnce;
- (BOOL)isCriticalRouter:(int)arg1;
- (id)routerInfoWithTag:(int)arg1;
- (void)registerCustomRecoverHandler:(id /* block */)arg1 forTag:(int)arg2;
- (void)unregisterCustomRecoverHandlerForTag:(int)arg1;
- (id /* block */)customRecoverHandlerForTag:(int)arg1;
- (BOOL)recover:(id)arg1 withProgressHandler:(id /* block */)arg2 reportAfterFinished:(BOOL)arg3;
- (id)getRetrievableDatabaseInfos;
- (BOOL)containsDeposited;
- (BOOL)removeDepositedDatabase;
- (id)getCorruptedCriticalDatabaseInfos;
- (id)getAndCheckCorruptedDatabaseInfosWithProgressHandler:(id /* block */)arg1;
- (void)enableAutoRecovering:(id)arg1;
- (void)tryRecordRetrieveInfo:(id)arg1;
- (void)configABTest;
- (void)updateABTest;
- (void)updateKey:(id)arg1 withExpt:(id)arg2;
- (id)getABTest:(id)arg1;
- (id)kvStorage;
- (BOOL)rollbackBrandMsgDatabase:(id /* block */)arg1;
- (BOOL)rollbackMessageDatabase:(id /* block */)arg1;
- (void)exitApplication;
- (void)enableNewSync:(BOOL)arg1;
- (void)enableIdleTimer:(BOOL)arg1;
- (void)clearInitMark;
- (void)onIPxx:(id)arg1;
- (void)asyncShowUsageForDatabase:(int)arg1 withCompleteHandler:(id /* block */)arg2;
- (void)enableTraceForDatabase:(int)arg1;
- (const void *)errorIdkeys;
- (void)reportMatrixIssue:(id)arg1;
- (void)monitorDatabase:(id)arg1;
- (BOOL)excuteSQL:(id)arg1 onDB:(id)arg2 withCallback:(id /* block */)arg3;
- (void)tracePerformance:(id)arg1 withCost:(double)arg2 onDatabase:(id)arg3;
- (id)getOrCreateRepairInfos;
- (void)saveRepairInfo:(id)arg1;
- (id)routerInfos;
- (BOOL)showWhereDatabase;
- (void)setShowWhereDatabase:(BOOL)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
