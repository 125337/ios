@interface WCCleanReportService : MMUserService <MMServiceProtocol>
{
    atomic<bool> taskScheduled; // +0x8
    atomic<bool> immediateSubmitted; // +0x9
    atomic<bool> reporting; // +0xa
    atomic<long> lastReportTime; // +0x10
    int _batchPerReport; // +0x18
    int _reportsPerMin; // +0x1c
    MemoryMappedKV * _mmkv; // +0x20
    NSObject<OS_dispatch_queue> * _reportQueue; // +0x28
}
- (void)onServiceInit;
- (void)recordSvrId:(long long)arg1 forOperation:(int)arg2 time:(long long)arg3;
- (void)maybeScheduleAfterWrite;
- (void)runReportCycle;
- (void)doReport;
- (void)reportBatch:(id)arg1 withData:(id)arg2 keysToRemove:(id)arg3;
- (id)mmkv;
- (void)setMmkv:(id)arg1;
- (id)reportQueue;
- (void)setReportQueue:(id)arg1;
- (int)batchPerReport;
- (void)setBatchPerReport:(int)arg1;
- (int)reportsPerMin;
- (void)setReportsPerMin:(int)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
