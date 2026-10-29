@interface MMFinderLiveCTIDAuthHelper : NSObject <MMKernelExt>
{
    BOOL _waitingCallback; // +0x8
    BOOL _isAuthing; // +0x9
    id <MMFinderLiveCTIDAuthHelperDelegate> _delegate; // +0x10
    MMFinderLiveTaskId * _liveTaskId; // +0x18
    FinderLiveNetworkIdentityAuthParams * _params; // +0x20
    MMTimer * _timeoutTimer; // +0x28
}
+ (BOOL)isCTIDAppInstalled;
- (id)initWithLiveTaskId:(id)arg1 params:(id)arg2;
- (void)startAuth;
- (void)cancel;
- (void)dealloc;
- (void)onHandleOpenURL:(id)arg1 bundleID:(id)arg2;
- (void)uploadCallbackParams:(id)arg1;
- (BOOL)validateParams;
- (id)buildCTIDClientParameters;
- (void)notifyFailWithReason:(long long)arg1 resultCode:(id)arg2 resultDesc:(id)arg3;
- (void)notifySuccess;
- (void)teardown;
- (void)startTimeoutTimer;
- (void)stopTimeoutTimer;
- (void)onTimeoutTimerFired;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)liveTaskId;
- (void)setLiveTaskId:(id)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (BOOL)waitingCallback;
- (void)setWaitingCallback:(BOOL)arg1;
- (BOOL)isAuthing;
- (void)setIsAuthing:(BOOL)arg1;
- (id)timeoutTimer;
- (void)setTimeoutTimer:(id)arg1;
- (void).cxx_destruct;
@end
