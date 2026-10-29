@interface WCMemoryStatRecord : NSObject
{
    BOOL m_isCurrentRun; // +0x8
    BOOL m_isMemoryLogging; // +0x9
    NSString * m_basePath; // +0x10
    MatrixMemoryFile * m_memoryFile; // +0x18
    WCMemoryStatRecordBaseInfo * m_baseInfo; // +0x20
    shared_ptr<std::vector<vm_region_info>> m_vmRegions; // +0x28
    NSLock * m_infoLock; // +0x38
    NSLock * m_dumpingLock; // +0x40
}
+ (id)newRecordForCurrentRun;
+ (id)loadRecordByPath:(id)arg1;
- (id)initWithBaseInfo:(id)arg1;
- (id)initWithPath:(id)arg1;
- (void)initMemoryFile;
- (void)setUserScene:(id)arg1;
- (void)setVMRegions:(shared_ptr<std::vector<vm_region_info>>)arg1;
- (unsigned long long)launchTime;
- (id)recordID;
- (void)onMemoryLoggingStart;
- (void)onMemoryLoggingStop;
- (void)setMemoryDataInvalid;
- (BOOL)isMemoryDataValid;
- (void)dumpVMRegions;
- (void)generateAllocationsReportWithCustomInfo:(id)arg1 callback:(id /* block */)arg2;
- (void)generateLeaksReportWithCustomInfo:(id)arg1 callback:(id /* block */)arg2;
- (BOOL)loadBaseInfo;
- (BOOL)saveBaseInfo;
- (BOOL)loadFromFile;
- (void)initPaths;
- (id)recordBasePath;
- (id)recordInfoPath;
- (id)memoryDataPath;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

