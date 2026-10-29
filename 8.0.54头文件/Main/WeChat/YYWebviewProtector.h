@interface YYWebviewProtector : MMRootService <MMServiceProtocol>
{
    long long _xpcFailWkCount; // +0x8
}
+ (void)reportBecomeUnresponsiveEvent:(id)arg1;
+ (void)reportDetectXpcDisableEvent:(id)arg1;
+ (void)reportDidJudgeDetectFailedEvent:(id)arg1;
+ (void)reportDidUseNonPersistentDataStore;
+ (void)reportDidUseKillNetworkProcess:(id)arg1;
+ (void)reportDidCheckMpAliveOK:(id)arg1;
+ (void)reportDidCheckMpAliveFailed:(id)arg1;
+ (void)reportDidCheckMpAliveRecovery:(BOOL)arg1 url:(id)arg2;
+ (long long)wxXpcAliveDetectType;
+ (long long)wxXpcDisableFixType;
+ (long long)wkXpcDisableStateCount;
+ (long long)wkXpcDisableDetectTimeoutInMs;
+ (void)forceKillNetworkProcess;
+ (BOOL)enableUIViewSnapshotHook;
+ (BOOL)disableUIViewSnapshotAfterScreenUpdates;
+ (void)reportDidTakeSnapshotAfterUpdates;
- (void)increateXpcDisableCheckCount:(id)arg1;
- (BOOL)shouldUseModifiedConfig;
- (long long)xpcFailWkCount;
- (void)setXpcFailWkCount:(long long)arg1;
@end

