@interface WCJSApmManager : MMRootService <IMatrixCustomIssueExt, MMServiceProtocol>
{
    JSApmABTestItem * _abtest; // +0x8
    NSDateFormatter * _dateFormatter; // +0x10
}
+ (id)weappInfoForName:(id)arg1;
- (void)onServiceInit;
- (void)onServiceTerminate;
- (void)onServiceClearData;
- (void)onExptItemListChange;
- (void)setup;
- (void)setupBacktrace;
- (void)setupWatchdog;
- (void)setupPower;
- (void)setupRunLoopMonitor;
- (id)getDiagnosticDirectory;
- (id)generateFilePathWithType:(long long)arg1 ReportID:(id)arg2;
- (long long)getDumpType:(id)arg1;
- (id)getFileName:(id)arg1;
- (void)upload:(id)arg1;
- (void)onCustomIssue:(id)arg1 uploadComplete:(BOOL)arg2;
- (id)makeJsonArrayWithStack:(id)arg1;
- (void)reportWithStack:(id)arg1 type:(unsigned long long)arg2 weappInfo:(id)arg3 name:(id)arg4;
- (void)reportWithThreads:(id)arg1 type:(unsigned long long)arg2 weappInfo:(id)arg3 name:(id)arg4;
- (void)logKVWithID:(id)arg1 type:(unsigned long long)arg2 duration:(unsigned int)arg3;
- (void)setupJSC2;
- (id)abtest;
- (void)setAbtest:(id)arg1;
- (id)dateFormatter;
- (void)setDateFormatter:(id)arg1;
- (void).cxx_destruct;
@end

