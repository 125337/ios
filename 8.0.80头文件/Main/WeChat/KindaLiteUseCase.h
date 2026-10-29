@interface KindaLiteUseCase : MMUseCase <KindaLiteStoreDelegate, KindaLiteEffects>
{
    BOOL _useWxpayKit; // +0x8
    BOOL _kitCancelRequested; // +0x9
    BOOL _hasInvokedCallback; // +0xa
    BOOL _discardedBeforeStart; // +0xb
    NSString * _sessionId; // +0x10
    id <MMUseCaseCallback> _callbackBlock; // +0x18
    id <MMKJSEvent> _jsEvent; // +0x20
    CameraScanViewController * _cameraScanVC; // +0x28
    MMLiteAppViewController * _liteAppVC; // +0x30
    long long _liteAppUuid; // +0x38
    NSString * _useCaseUrl; // +0x40
    NSString * _nativeReportSessionId; // +0x48
    NSString * _reqKey; // +0x50
    id /* block */ _stopUseCaseCompletion; // +0x58
    id /* block */ _stopTimeoutBlock; // +0x60
    KindaLiteStateMachine * _fsm; // +0x68
    NSString * _outerAppid; // +0x70
}
+ (id)convertDictionaryToKvData:(id)arg1;
- (id)initWithSessionId:(id)arg1;
- (void)dealloc;
- (id)description;
- (long long)liteAppState;
- (void)start:(id)arg1 data:(id)arg2 callback:(id)arg3;
- (void)stop:(id /* block */)arg1;
- (void)cancelKitCashierAfterStopTimeout;
- (void)startLiteApp:(id)arg1 data:(id)arg2;
- (BOOL)needCashierStartLoading:(id)arg1 data:(id)arg2;
- (BOOL)needKitStartLoading:(id)arg1 data:(id)arg2;
- (void)openCashierViaKit:(id)arg1 query:(id)arg2 entryGray:(id)arg3 needStartLoading:(BOOL)arg4;
- (id)stringFromTimestamp:(unsigned long long)arg1;
- (unsigned long long)appColdStartTime;
- (unsigned long long)accountLoginSuccessTime;
- (unsigned long long)firstPreloadTime;
- (unsigned long long)lastEnterForegroundTime;
- (void)onLiteAppCreate:(id)arg1;
- (void)setLiteAppStore:(id)arg1;
- (void)stopLiteApp;
- (void)onLiteAppStopped;
- (void)onLiteAppClosed;
- (void)onStartLiteAppFail;
- (void)reportAppPayLiteFunnel:(long long)arg1;
- (void)onLiteAppRunning;
- (void)onLiteAppPaying;
- (void)onLiteAppPaySucceed;
- (void)fallbackCallback;
- (void)notify:(id)arg1;
- (void)preStepDidDestory;
- (void)OnStoreDispatch:(id)arg1 instanceId:(unsigned long long)arg2 actionName:(id)arg3 data:(id)arg4 callbackId:(int)arg5;
- (BOOL)handleStoreAction:(id)arg1 data:(id)arg2;
- (void)markDiscardedBeforeStart;
- (void)startNativeRoute:(id)arg1 delay:(int)arg2;
- (void)reportNativeStartUseCase:(id)arg1;
- (void)reportStopKindaLiteUseCaseTimeout;
- (void)reportStopKindaLiteUseCaseSuccess;
- (void)effectStartLiteApp:(id)arg1 data:(id)arg2;
- (void)effectPublishStop;
- (void)effectOnLiteAppStopped;
- (void)effectOnLiteAppRunning;
- (void)effectOnLiteAppPaying;
- (void)effectOnLiteAppPaySucceed;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (BOOL)useWxpayKit;
- (void)setUseWxpayKit:(BOOL)arg1;
- (id)callbackBlock;
- (void)setCallbackBlock:(id)arg1;
- (id)jsEvent;
- (void)setJsEvent:(id)arg1;
- (id)cameraScanVC;
- (void)setCameraScanVC:(id)arg1;
- (id)liteAppVC;
- (void)setLiteAppVC:(id)arg1;
- (long long)liteAppUuid;
- (void)setLiteAppUuid:(long long)arg1;
- (BOOL)kitCancelRequested;
- (void)setKitCancelRequested:(BOOL)arg1;
- (id)useCaseUrl;
- (void)setUseCaseUrl:(id)arg1;
- (id)nativeReportSessionId;
- (void)setNativeReportSessionId:(id)arg1;
- (id)reqKey;
- (void)setReqKey:(id)arg1;
- (BOOL)hasInvokedCallback;
- (void)setHasInvokedCallback:(BOOL)arg1;
- (BOOL)discardedBeforeStart;
- (void)setDiscardedBeforeStart:(BOOL)arg1;
- (id /* block */)stopUseCaseCompletion;
- (void)setStopUseCaseCompletion:(id /* block */)arg1;
- (id /* block */)stopTimeoutBlock;
- (void)setStopTimeoutBlock:(id /* block */)arg1;
- (id)fsm;
- (void)setFsm:(id)arg1;
- (id)outerAppid;
- (void)setOuterAppid:(id)arg1;
- (void).cxx_destruct;
@end
