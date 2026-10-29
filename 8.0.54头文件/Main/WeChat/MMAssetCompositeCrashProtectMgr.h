@interface MMAssetCompositeCrashProtectMgr : MMRootService <MMServiceProtocol>
{
    NSArray * _concernedRebootTypes; // +0x8
}
+ (id)runningTaskInfo;
+ (void)saveRunningTaskInfo:(id)arg1;
+ (id)defaultMMkv;
+ (id)defaultMMKVMapID;
- (void)onServiceInit;
- (void)checkRunningTask;
- (void)startMonitorTask:(id)arg1;
- (void)endMonitorTask:(id)arg1;
- (BOOL)isTaskSafe:(id)arg1;
- (id)concernedRebootTypes;
- (void)setConcernedRebootTypes:(id)arg1;
- (void).cxx_destruct;
@end

