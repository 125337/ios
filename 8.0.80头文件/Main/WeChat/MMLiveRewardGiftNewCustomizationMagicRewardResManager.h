@interface MMLiveRewardGiftNewCustomizationMagicRewardResManager : NSObject <_TtP6WeChat16IMRCodeUpdateExt_, _TtP6WeChat18IMRServiceListener_>
{
    BOOL _hasResourceTaskChecking; // +0x8
    NSMutableDictionary * _taskDict; // +0x10
}
- (id)init;
- (void)dealloc;
- (void)registerExtensions;
- (void)unRegisterExtensions;
- (void)addListener;
- (void)removeListener;
- (unsigned long long)getCacheResourceState:(id)arg1;
- (BOOL)isCacheResourceStateSupported:(id)arg1;
- (void)checkMagicRewardResourceState:(id)arg1;
- (void)checkMagicRewardResourceState:(id)arg1 callback:(id /* block */)arg2 maxWaitTime:(double)arg3 useCacheStateIfSupport:(BOOL)arg4;
- (void)resetAllTasks;
- (BOOL)isCurrentHasResourceTaskChecking;
- (void)innerCheckMagicRewardResourceState:(id)arg1 callback:(id /* block */)arg2 maxWaitTime:(double)arg3 useCacheStateIfSupport:(BOOL)arg4;
- (void)updateResourceTasksCheckingState;
- (BOOL)getCurrentResourceTasksCheckingState;
- (void)checkMagicEngineCodeResource:(id)arg1;
- (void)prepareMagicEngineResource:(id)arg1;
- (unsigned long long)transferPrepareResourceResultToCheckResult:(long long)arg1;
- (unsigned long long)transferPrepareResourceResultToState:(long long)arg1;
- (id)createCheckTaskWithResource:(id)arg1;
- (void)updateMagicEngineResTagWithCheckTask:(id)arg1;
- (void)addCheckTask:(id)arg1 withKey:(id)arg2;
- (id)getCheckTaskWithKey:(id)arg1;
- (id)getCheckTaskList;
- (void)checkAllTaskMagicRewardResourceState;
- (id)getCheckTaskWithGiftName:(id)arg1;
- (id)taskDict;
- (void)onCodeUpdateSuccess:(id)arg1;
- (void)onCodeUpdateFail:(long long)arg1;
- (void)onEnvPrepared;
- (void)onEnvDestroyed;
- (void)onEnvResUpdatedWithGiftName:(id)arg1;
- (void)onEnvErrorWithErrType:(long long)arg1 errMsg:(id)arg2;
- (void)setTaskDict:(id)arg1;
- (BOOL)hasResourceTaskChecking;
- (void)setHasResourceTaskChecking:(BOOL)arg1;
- (void).cxx_destruct;
@end
