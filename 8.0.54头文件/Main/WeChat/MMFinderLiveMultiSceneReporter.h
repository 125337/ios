@interface MMFinderLiveMultiSceneReporter : MMUserService <MMServiceProtocol>
+ (void)reportForSplitView:(unsigned long long)arg1;
+ (void)reportForResumeAfterConflictWithOtherScene:(unsigned long long)arg1;
+ (void)reportForUnMuteAfterConflictWithOtherScene:(unsigned long long)arg1;
+ (void)reportHandleMonoConflictForMainSceneMono:(unsigned long long)arg1 subSceneMono:(unsigned long long)arg2 liveHandleResult:(unsigned long long)arg3 live:(unsigned long long)arg4;
+ (unsigned long long)transferToReportTypeFromMonoServiceBusiness:(unsigned long long)arg1;
- (void)onServiceInit;
- (void)onServiceClearData;
@end

