@interface EdgeComputingMonitor : MMObject
+ (void)monitorProcess:(id)arg1 withProcess:(unsigned int)arg2 withReportTimeEC:(unsigned long long)arg3;
+ (void)statComputingCostTime:(id)arg1 withCostTime:(unsigned long long)arg2 withDataSzie:(unsigned long long)arg3;
+ (void)statCacheCostTime:(id)arg1 withCostTime:(unsigned long long)arg2 withDataSzie:(unsigned long long)arg3;
+ (void)statStorageCostTime:(id)arg1 withCostTime:(unsigned long long)arg2 withDataSzie:(unsigned long long)arg3;
+ (void)statSQLQueryCostTime:(id)arg1 withCostTime:(unsigned long long)arg2 withDataSzie:(unsigned long long)arg3;
+ (void)statRegularWorkTime:(unsigned long long)arg1 withDataSzie:(unsigned long long)arg2;
+ (void)statRegularScriptWorkTime:(unsigned long long)arg1 withDataSzie:(unsigned long long)arg2;
+ (void)statRegularSqlWorkTime:(unsigned long long)arg1 withDataSzie:(unsigned long long)arg2;
+ (void)statSingleScriptWorkTime:(id)arg1 withCostTime:(unsigned long long)arg2 withDataSzie:(unsigned long long)arg3;
+ (void)statInstantWorkTime:(unsigned long long)arg1 withDataSzie:(unsigned long long)arg2;
+ (void)statJsApiCostTime:(unsigned long long)arg1 withType:(unsigned long long)arg2;
+ (void)statScriptConfigParseError:(BOOL)arg1;
+ (void)statSqlConfigParseError:(BOOL)arg1;
+ (void)statScriptDownloadSuccess:(BOOL)arg1;
+ (void)reportScriptErrorLog:(id)arg1;
+ (void)statStorageAmount:(id)arg1 withAmount:(unsigned long long)arg2;
+ (void)statRejectDataLimit:(id)arg1 withAmount:(unsigned long long)arg2;
+ (void)statRealReportProcess:(unsigned int)arg1;
+ (BOOL)isMonitorOpen;
+ (void)updateCurConfigId:(id)arg1;
@end

