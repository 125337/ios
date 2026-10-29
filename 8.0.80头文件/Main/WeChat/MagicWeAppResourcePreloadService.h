@interface MagicWeAppResourcePreloadService : MMUserService <WAAppTaskMgrExt, MMServiceProtocol>
{
    NSMutableDictionary * _taskMap; // +0x8
    NSObject<OS_dispatch_queue> * _lockQueue; // +0x10
    unsigned long long _nextTaskId; // +0x18
    NSMutableArray * _deliveringTasks; // +0x20
    MagicWeAppResourcePreloadReporter * _preloadReporter; // +0x28
    MagicWeAppResourcePreloadExperiment * _preloadExperiment; // +0x30
}
+ (BOOL)isRDMEnvVersion:(id)arg1;
+ (BOOL)isReleaseEnvVersion:(id)arg1;
+ (BOOL)isSupportedEnvVersion:(id)arg1 appVersion:(unsigned int)arg2;
- (void)onServiceInit;
- (void)onServiceClearData;
- (BOOL)task:(id)arg1 usesPackageInfoCacheForAppId:(id)arg2 version:(unsigned long long)arg3 debugMode:(unsigned long long)arg4;
- (BOOL)isPackageInfoCacheInUseForAppId:(id)arg1 version:(unsigned long long)arg2 debugMode:(unsigned long long)arg3;
- (void)deliverAndKeepPackageInfoCacheForTask:(id)arg1 block:(id /* block */)arg2;
- (void)invalidateTasksForAppId:(id)arg1 envVersion:(id)arg2 reason:(id)arg3;
- (void)onAppPackageDidBeSweep:(id)arg1 debugMode:(unsigned long long)arg2;
- (id)normalizedSubpackage:(id)arg1;
- (double)now;
- (unsigned int)requestResultForUnsupportedEnvVersion:(id)arg1 appVersion:(unsigned int)arg2;
- (id)normalizedEnvVersion:(id)arg1;
- (id)keyForAppId:(id)arg1 envVersion:(id)arg2 appVersion:(unsigned int)arg3 subpackage:(id)arg4;
- (id)targetWithAppId:(id)arg1 envVersion:(id)arg2 appVersion:(unsigned int)arg3 subpackage:(id)arg4 appServiceType:(unsigned int)arg5;
- (void)preloadAppWithAppId:(id)arg1 envVersion:(id)arg2 appVersion:(unsigned int)arg3 subpackage:(id)arg4 appServiceType:(unsigned int)arg5;
- (void)startOrJoinPreloadWithTarget:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)isResult:(id)arg1 compatibleWithVersion:(unsigned int)arg2 task:(id)arg3 launchId:(unsigned long long)arg4;
- (void)consumePreparedIfExistsWithAppId:(id)arg1 envVersion:(id)arg2 appVersion:(unsigned int)arg3 subpackage:(id)arg4 completion:(id /* block */)arg5;
- (id)consumeResultWithTask:(id)arg1 preloadResult:(id)arg2 success:(BOOL)arg3 consumeState:(unsigned int)arg4 waitStartTime:(double)arg5 preloadExperimentEnabled:(unsigned int)arg6 errorMessage:(id)arg7;
- (long long)costMsFrom:(double)arg1 to:(double)arg2;
- (BOOL)isCodePackageUsableForTask:(id)arg1 invalidationReason:(unsigned int *)arg2;
- (BOOL)isTaskUsableForDelivery:(id)arg1;
- (void)consumePreparedIfExistsWithAppId:(id)arg1 envVersion:(id)arg2 appVersion:(unsigned int)arg3 subpackage:(id)arg4 launchId:(unsigned long long)arg5 completion:(id /* block */)arg6;
- (void)scheduleRunningTaskTimeoutForKey:(id)arg1 task:(id)arg2;
- (void)finishTaskWithKey:(id)arg1 task:(id)arg2 success:(BOOL)arg3 errMsg:(id)arg4 result:(id)arg5;
- (void)scheduleCleanupForKey:(id)arg1 taskId:(unsigned long long)arg2 delay:(double)arg3;
- (BOOL)removeIfExpiredTask:(id)arg1 forKey:(id)arg2 now:(double)arg3 scene:(id)arg4;
- (void)reportPreloadRequestForTask:(id)arg1 requestResult:(unsigned int)arg2;
- (void)reportPreloadRequestForTarget:(id)arg1 requestResult:(unsigned int)arg2;
- (void)finishConsumeWithContext:(id)arg1 task:(id)arg2 consumeState:(unsigned int)arg3 success:(BOOL)arg4 preloadResult:(id)arg5 waitStartTime:(double)arg6 errorMessage:(id)arg7 completion:(id /* block */)arg8;
- (void)reportPreloadRequestWithContext:(id)arg1;
- (void)reportPreloadConsumeWithContext:(id)arg1;
- (id)taskMap;
- (void)setTaskMap:(id)arg1;
- (id)lockQueue;
- (void)setLockQueue:(id)arg1;
- (unsigned long long)nextTaskId;
- (void)setNextTaskId:(unsigned long long)arg1;
- (id)deliveringTasks;
- (void)setDeliveringTasks:(id)arg1;
- (id)preloadReporter;
- (void)setPreloadReporter:(id)arg1;
- (id)preloadExperiment;
- (void)setPreloadExperiment:(id)arg1;
- (void).cxx_destruct;
@end
