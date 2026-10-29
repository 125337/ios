@interface WAJSGameService : WAJSCoreService <JITRuntimeDelegate, JITRuntimeDataTransferDelegate, JITRuntimeJsApiHandlerDelegate, WAJITBindingMediaModuleDelegate, WAGameContextDelegate>
{
    NSObject<OS_dispatch_queue> * _jitProxyQueue; // +0x10
    NSMutableDictionary * _jitProxyPendingTask; // +0x18
    BOOL _useXHRTransferJSEvent; // +0x20
    BOOL _workingThreadPaused; // +0x21
    NSMutableArray * _blockedResults; // +0x28
    NSMutableArray * _blockedEvents; // +0x30
    unsigned int _instContextId; // +0x38
    NSObject<IWXEngineAPI> * _gameEngine; // +0x40
    unsigned long long _closeTimeStampInMs; // +0x48
    WAContact * _contact; // +0x50
    BOOL _jitMode; // +0x58
    BOOL _jitRuntimeLifecycleManagedByOpener; // +0x59
    BOOL _remoteDebugHasPing; // +0x5a
    int _gamePowerMode; // +0x5c
    unsigned long long _jitDebugSwitch; // +0x60
    WAJITRuntime * _jitRuntime; // +0x68
    unsigned long long _jitBeginTimeStampInMs; // +0x70
    NSObject<OS_dispatch_semaphore> * _waitForDebuggerSema; // +0x78
    long long _wkFeatureVersion; // +0x80
    NSThread * _thread; // +0x88
    MMTimer * _remoteDebugTimer; // +0x90
}
+ (unsigned long long)getFeatBit:(BOOL)arg1 enableNativeRender:(BOOL)arg2 enableMetal:(BOOL)arg3;
- (void)loadWAGameFrameHTML:(id)arg1;
- (id)makeWAGameSubContextFrameHTML;
- (id)makeJITWxConfig:(BOOL)arg1;
- (void)invokeJITCallbackHandler:(id)arg1 handler:(id)arg2 callbackID:(unsigned int)arg3 contextId:(unsigned int)arg4 workerId:(unsigned int)arg5;
- (id)onPrompt:(id)arg1 defaultText:(id)arg2;
- (void)onAlertMessage:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)onPostMessage:(id)arg1 body:(id)arg2;
- (void)loadImageWithURL:(id)arg1 completion:(id /* block */)arg2;
- (void)onXHRRequest:(id)arg1;
- (void)onEvaluateJavaScript:(id)arg1 completionHandler:(id /* block */)arg2;
- (BOOL)isVaildXHRFilePath:(id)arg1;
- (void)onLoad:(id)arg1 jitRuntimeView:(id)arg2;
- (void)realOnLoad:(id)arg1 jitRuntimeView:(id)arg2;
- (void)onTerminate;
- (void)onBatchReport:(id)arg1;
- (id)getBrotiData:(id)arg1;
- (id)jitProxyQueue;
- (id)jitProxyPendingTask;
- (void)processInvokeHandler:(id)arg1 param:(id)arg2 callbackId:(unsigned int)arg3 workerId:(unsigned int)arg4;
- (void)report15815:(unsigned long long)arg1 end:(unsigned long long)arg2 fileName:(id)arg3 size:(unsigned long long)arg4;
- (void)report21822:(unsigned long long)arg1 end:(unsigned long long)arg2 injectCost:(unsigned long long)arg3 nativeRenderer:(BOOL)arg4 injectSuccess:(BOOL)arg5;
- (id)buildGameBridgeScript:(id)arg1 enableEvaluateWithURL:(BOOL)arg2;
- (id)loadGameBridgeFromCache;
- (id)init;
- (id)initWithPreloadedJITRuntimeFromWAJSGameService:(id)arg1 isGamePowerMode:(BOOL)arg2;
- (id)initForPreloadAppTask:(id)arg1 jitMode:(BOOL)arg2;
- (void)dealloc;
- (void)startServiceThread;
- (void)injectGameScript:(id)arg1;
- (void)injectGameScriptForPreload:(id)arg1;
- (void)firePreloadedService:(id)arg1;
- (void)firePreloadedGameView:(id)arg1;
- (void)checkJITModeUpdateForPreload:(BOOL)arg1;
- (void)commonInit:(id)arg1;
- (void)initJITRuntime:(id)arg1;
- (void)prepareJITRuntimeInspectable;
- (void)closeJITRuntimeInspectable;
- (BOOL)shouldEnableJITRuntimeInspectable;
- (void)initJSCore:(id)arg1;
- (void)injectNewJsDebugScript;
- (void)evaluateNewDebugScript:(id)arg1;
- (void)onRemoteDebugClientMessage:(id)arg1 payload:(id)arg2 raw:(id)arg3;
- (void)onRemoteDebugPing;
- (void)onRemoteDebugTimerCallback;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)workThread_reportPubLibCoverageIfNeededWithAppid:(id)arg1 publibStringVersion:(id)arg2 publibStringUpdateTime:(id)arg3;
- (void)stopAppBrandAndThread;
- (void)stopAppBrand:(BOOL)arg1;
- (BOOL)isGameClass;
- (void)getScreenWidth:(double *)arg1 screenHeight:(double *)arg2;
- (void)asyncRunOperationBlockOnWorkThread:(id /* block */)arg1;
- (void)printConsoleLog:(id)arg1;
- (void)printConsoleLog:(id)arg1 level:(long long)arg2;
- (void)sendWorkerMessage:(unsigned int)arg1 msg:(id)arg2;
- (void)onWeAppEnterBackground:(long long)arg1;
- (void)onWeAppEnterForeground:(id)arg1 isFromSystemAwake:(BOOL)arg2;
- (void)sendJsInvoker:(id)arg1;
- (void)sendErrorEvent:(id)arg1;
- (void)sendInnerAppBrandEvent:(long long)arg1 serviceParam:(id)arg2 pluginParam:(id)arg3 webviewID:(unsigned long long)arg4;
- (void)innerSendJSEventToService:(id)arg1;
- (void)sendJSEventToWorker:(id)arg1 param:(id)arg2 workerId:(unsigned int)arg3;
- (void)invokeCallbackHandler:(id)arg1;
- (void)endWithResult:(id)arg1 handler:(id)arg2 callbackID:(unsigned int)arg3 contextId:(unsigned int)arg4 workerId:(unsigned int)arg5 extraParams:(id)arg6;
- (void)invokeJSCCallbackHandler:(id)arg1 handler:(id)arg2 callbackID:(unsigned int)arg3 contextId:(unsigned int)arg4 extraParams:(id)arg5;
- (id)getAppId;
- (OpaqueJSContext *)getContext;
- (id)getJSContext;
- (void)onAfterGameBridgeScriptEvaluated;
- (OpaqueJSValue *)getNativeGlobal;
- (shared_ptr<magicbrush::MagicBrushCore>)getMBCore;
- (void)tryInjectJavaScript;
- (id)getAppLaunchConfigJSVarInjectToolForWebView:(BOOL)arg1;
- (id)getPreloadAppLaunchConfig;
- (void)suspendWorkingThread;
- (void)resumeWorkingThreadToDie:(BOOL)arg1;
- (BOOL)weMediaRegisterExternaImage:(const char *)arg1 dataLen:(unsigned long long)arg2 imageId:(int)arg3 width:(int)arg4 height:(int)arg5;
- (void)weMediaUnregisterExternaImage:(int)arg1;
- (int)getGamePowerMode;
- (BOOL)jitMode;
- (void)setJitMode:(BOOL)arg1;
- (unsigned long long)jitDebugSwitch;
- (void)setJitDebugSwitch:(unsigned long long)arg1;
- (id)jitRuntime;
- (void)setJitRuntime:(id)arg1;
- (unsigned long long)jitBeginTimeStampInMs;
- (void)setJitBeginTimeStampInMs:(unsigned long long)arg1;
- (id)waitForDebuggerSema;
- (void)setWaitForDebuggerSema:(id)arg1;
- (long long)wkFeatureVersion;
- (void)setWkFeatureVersion:(long long)arg1;
- (BOOL)jitRuntimeLifecycleManagedByOpener;
- (void)setJitRuntimeLifecycleManagedByOpener:(BOOL)arg1;
- (id)thread;
- (void)setThread:(id)arg1;
- (id)remoteDebugTimer;
- (void)setRemoteDebugTimer:(id)arg1;
- (BOOL)remoteDebugHasPing;
- (void)setRemoteDebugHasPing:(BOOL)arg1;
- (int)gamePowerMode;
- (void)setGamePowerMode:(int)arg1;
- (void).cxx_destruct;
@end
