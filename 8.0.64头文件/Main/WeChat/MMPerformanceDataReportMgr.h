@interface MMPerformanceDataReportMgr : MMRootService <MMResourceMgrExt, MMServiceProtocol, MMPackageDownloadMgrExt, MMKernelExt>
{
    NSMutableDictionary * m_dicCostTimeItems; // +0x8
    NSMutableDictionary * m_dicCostMemoryItems; // +0x10
    NSDictionary * m_dicCostTimeReportIdKey; // +0x18
    NSDictionary * m_dicCostMemoryReportIdKey; // +0x20
    Package * m_packageDownload; // +0x28
    unsigned long long m_uAllTotalCostTimeKey; // +0x30
    unsigned long long m_uAllTotalCountKey; // +0x38
    NSString * m_nsAllDes; // +0x40
    unsigned long long m_uDeviceTotalCostTimeKey; // +0x48
    unsigned long long m_uDeviceTotalCountKey; // +0x50
    NSString * m_nsDeviceDes; // +0x58
    BOOL m_bActive; // +0x60
}
- (void)onServiceInit;
- (void)willSuspend;
- (void)didBecomeActive;
- (void)stop;
- (void)start;
- (void)registerExtension;
- (void)startLogPerformanceData:(unsigned long long)arg1 onCase:(unsigned long long)arg2 withTag:(id)arg3;
- (void)endLogPerformanceData:(unsigned long long)arg1 onCase:(unsigned long long)arg2 withTag:(id)arg3;
- (void)setCurrentTimeOnCase:(unsigned long long)arg1 withTag:(id)arg2;
- (void)setCurrentMemoryOnCase:(unsigned long long)arg1 withTag:(id)arg2;
- (void)reportCostTimeOnKey:(id)arg1;
- (void)reportCostMemoryOnKey:(id)arg1;
- (void)reportCostTimeToIdKey:(unsigned int)arg1 caseID:(unsigned long long)arg2;
- (void)reportCostMemoryToIdKey:(unsigned int)arg1 caseID:(unsigned long long)arg2;
- (void)reportCostData:(unsigned int)arg1 ToCaseId:(unsigned long long)arg2;
- (void)reportCostData:(unsigned int)arg1 ToIdKey:(unsigned int)arg2 ToKeyRange:(id)arg3 ToRange:(id)arg4;
- (void)reportCostData:(unsigned int)arg1 ToIdKey:(unsigned int)arg2 ToMainKey:(unsigned int)arg3 ToKeyRange:(id)arg4 ToRange:(id)arg5;
- (id)getReportIdKeyEx:(XmlReaderNode_t *)arg1;
- (void)getKeyInfo:(XmlReaderNode_t *)arg1;
- (void)loadIdKeyInfo;
- (id)getIdKeyContent;
- (void)onResUpdateFinish:(long long)arg1 resType:(unsigned int)arg2 subResType:(unsigned int)arg3;
- (void).cxx_destruct;
@end
