@interface EdgeComputingReporter : NSObject <PBMessageObserverDelegate>
{
    EdgeComputingRtReportCache * m_realtimeReportCache; // +0x8
    unsigned long long m_reportPeriod; // +0x10
    unsigned long long m_lastReportTime; // +0x18
}
- (id)init;
- (void)cahceRtStrData:(id)arg1 withLogID:(unsigned int)arg2 withConfigID:(id)arg3;
- (void)cacheRtFieldData:(id)arg1 withLogID:(unsigned int)arg2 withConfigID:(id)arg3;
- (void)batchRtReport;
- (void)kvReportStrData:(id)arg1 withLogID:(unsigned int)arg2;
- (void)kvReportFieldData:(id)arg1 withLogID:(unsigned int)arg2;
- (void)rtKVReportStrData:(id)arg1 withLogID:(unsigned int)arg2;
- (void)rtKVReportFieldData:(id)arg1 withLogID:(unsigned int)arg2;
- (void)realRtReport;
- (BOOL)reportItemsByCgi:(id)arg1;
- (void)reportItemsByKv:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onSuccess:(id)arg1 withNextPeriod:(unsigned long long)arg2 withDropFlags:(id)arg3;
- (void)onFailure:(id)arg1;
- (void)onRealTimeKVReportSucceedWithWrap:(id)arg1;
- (void)onRealTimeKVReportFailedWithWrap:(id)arg1;
- (void).cxx_destruct;
@end
