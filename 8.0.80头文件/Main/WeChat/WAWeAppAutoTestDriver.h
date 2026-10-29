@interface WAWeAppAutoTestDriver : NSObject
{
    double _settleInterval; // +0x8
    MMContext * _userContext; // +0x10
}
+ (id)sharedDriver;
- (id)init;
- (void)configureWithPayloadData:(id)arg1;
- (id)launchRequestForIdentity:(long long)arg1;
- (id)launchRequestFromData:(id)arg1 fallbackIdentity:(long long)arg2;
- (void)launchMiniProgramWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)navigateTask:(id)arg1 toRelativeURL:(id)arg2 completion:(id /* block */)arg3;
- (void)dismissTaskToHost:(id)arg1 completion:(id /* block */)arg2;
- (id)taskWithAppID:(id)arg1;
- (id)currentForegroundTask;
- (void)killAllTasksWithCompletion:(id /* block */)arg1;
- (unsigned long long)taskCount;
- (void)waitForSettleWithReason:(id)arg1 completion:(id /* block */)arg2;
- (void)waitForInterval:(double)arg1 completion:(id /* block */)arg2;
- (void)submitOpenMiniProgramWhenReadyWithRequest:(id)arg1 retry:(unsigned long long)arg2 openRetry:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (void)submitOpenMiniProgramWithRequest:(id)arg1 navigationController:(id)arg2 openRetry:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (void)waitForNoTasksAfterKillAllWithRetry:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)complete:(BOOL)arg1 error:(id)arg2 completion:(id /* block */)arg3;
- (void)completeLaunch:(id)arg1 error:(id)arg2 completion:(id /* block */)arg3;
- (id)errorWithDescription:(id)arg1;
- (id)stringValueForKeys:(id)arg1 fromData:(id)arg2;
- (long long)integerValue:(id)arg1 defaultValue:(long long)arg2;
- (double)settleInterval;
- (void)setSettleInterval:(double)arg1;
- (id)userContext;
- (void)setUserContext:(id)arg1;
- (void).cxx_destruct;
@end
