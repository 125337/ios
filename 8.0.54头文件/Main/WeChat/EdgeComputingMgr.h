@interface EdgeComputingMgr : MMUserService <MMServiceProtocol, IEdgeComputingDataSourceReceiver, EdgeComputingConfigListener>
{
    EdgeComputingConfigService * configService; // +0x8
    EdgeComputingDataSourceService * dataSourceService; // +0x10
    id <IEdgeComputingDataCacheProtocol> normalDataCache; // +0x18
    id <IEdgeComputingDataCacheProtocol> instantDataCache; // +0x20
    EdgeComputingDataStorage * dataStorage; // +0x28
    EdgeComputingReporter * reporter; // +0x30
    EdgeComputingConfigBreaker * configBreaker; // +0x38
    EdgeComputingRunRecord * runRecord; // +0x40
    EdgeComputingThresholdController * thresholdController; // +0x48
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onServiceEnterBackground;
- (void)onReceiveData:(id)arg1 withConfig:(id)arg2 withTime:(unsigned long long)arg3;
- (id)edgeComputing:(id)arg1 withConfig:(id)arg2 withDatas:(id)arg3 withPeriodStartTime:(unsigned long long)arg4 withPeriodEndTime:(unsigned long long)arg5;
- (id)edgeComputing:(id)arg1 withConfig:(id)arg2 withData:(id)arg3 withReportTimeEC:(unsigned long long)arg4 withPeriodStartTime:(unsigned long long)arg5 withPeriodEndTime:(unsigned long long)arg6;
- (void)handlePeriodTask;
- (void)handleRegularTask:(id)arg1;
- (void)executeInstantTask;
- (void)executeUnInstantTask;
- (void)executeSqlTask;
- (id)getConfigService;
- (id)getThresholdController;
- (void)onScriptConfigUpdate:(id)arg1;
- (void)onScriptConfigOffline:(id)arg1;
- (void)onScriptConfigSame:(id)arg1;
- (void)onSqlConfigUpdate:(id)arg1;
- (void)onSqlConfigOffline:(id)arg1;
- (void)onSqlConfigSame:(id)arg1;
- (id)edgeComputing:(id)arg1 andData:(id)arg2;
- (void).cxx_destruct;
@end

