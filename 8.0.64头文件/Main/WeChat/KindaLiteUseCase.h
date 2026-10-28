@interface KindaLiteUseCase : MMUseCase <KindaLiteStoreDelegate>
{
    long long _liteAppState; // +0x8
    id <MMUseCaseCallback> _callbackBlock; // +0x10
    id <MMKJSEvent> _jsEvent; // +0x18
    CameraScanViewController * _cameraScanVC; // +0x20
    NSString * _sessionId; // +0x28
    long long _liteAppUuid; // +0x30
    id /* block */ _stopUseCaseCompletion; // +0x38
}
+ (void)preload;
+ (id)convertDictionaryToKvData:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)start:(id)arg1 data:(id)arg2 callback:(id)arg3;
- (void)stop:(id /* block */)arg1;
- (void)startLiteApp:(id)arg1 data:(id)arg2;
- (void)onLiteAppCreate:(id)arg1;
- (void)setLiteAppStore:(id)arg1;
- (void)stopLiteApp;
- (void)onLiteAppStopped;
- (void)onLiteAppClosed;
- (void)onStartLiteAppFail;
- (void)onLiteAppRunning;
- (void)onLiteAppPaying;
- (void)onLiteAppPaySucceed;
- (void)fallbackCallback;
- (void)notify:(id)arg1;
- (void)preStepDidDestory;
- (void)OnStoreDispatch:(id)arg1 instanceId:(unsigned long long)arg2 actionName:(id)arg3 data:(id)arg4 callbackId:(int)arg5;
- (void)startNativeRoute:(id)arg1 delay:(int)arg2;
- (void)reportNativeStartUseCase:(id)arg1;
- (long long)liteAppState;
- (void)setLiteAppState:(long long)arg1;
- (id)callbackBlock;
- (void)setCallbackBlock:(id)arg1;
- (id)jsEvent;
- (void)setJsEvent:(id)arg1;
- (id)cameraScanVC;
- (void)setCameraScanVC:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (long long)liteAppUuid;
- (void)setLiteAppUuid:(long long)arg1;
- (id /* block */)stopUseCaseCompletion;
- (void)setStopUseCaseCompletion:(id /* block */)arg1;
- (void).cxx_destruct;
@end
