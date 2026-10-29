@interface WAJSCoreService : WAJSNativeBufferBase <WAJSServicePluginContextProtocol, _TtP9WeAppCore26MagicAdMiniProgramCallback_, MMUDPHandleLogDelegate, MMTCPHandleLogDelegate, MMLockstepHandleLogDelegate, MMLockstepHandleReportDelegate, WXWASMLogDelegate, WXFileLoaderDelegate, wxAudioNativeLogDelegate, wxAudioFileLoaderDelegate, wxAudioStateDelegate, wxAudioCommonDelegate, WeMediaDelegate, WAMagicARAdaptorDelegate, WAMagicARPixelBufferDelegate, WeXNetLogDelegate, WeXNetAdaptorDelegate, WACronetHttpBindingHandleDelegate, WXFileLoaderDelegate, WAJSEventHandlerContextDelegate, WAJSServiceProtocol>
{
    unsigned int _workerFlowId; // +0x8
    unsigned int _debugModeType; // +0xc
    BOOL _isDebugAndVConsoleOpen; // +0x10
    BOOL _isIgnoreRemoteCheckDomain; // +0x11
    WxaExternalInfo * _wxaExternalInfo; // +0x18
    unsigned long long _appVersion; // +0x20
    unsigned int _appServiceMaxDataSize; // +0x28
    WAAppTaskExtInfo * _taskExtInfo; // +0x30
    NSString * _enterPath; // +0x38
    unsigned int _enterScene; // +0x40
    NSArray * _templates; // +0x48
    WAContact * _contact; // +0x50
    WAPackageConfig * _packageConfig; // +0x58
    unsigned long long _taskRunningState; // +0x60
    BOOL _jsThreadSuspended; // +0x68
    BOOL _jsThreadDying; // +0x69
    NSCondition * _condition; // +0x70
    NSString * lastError; // +0x78
    NSMutableSet * _setInjectedModule; // +0x80
    unsigned int _subContextId; // +0x88
    int _enterJsErrorFunctionCount; // +0x8c
    BOOL _stopReportJsErrorFunction; // +0x90
    NSString * _relativeServiceJSUrl; // +0x98
    BOOL _userScriptInjected; // +0xa0
    BOOL _extendedPrefixScriptInjected; // +0xa1
    MMUDPHandle * _udpHandle; // +0xa8
    MMTCPHandle * _tcpHandle; // +0xb0
    WASocketBindingHandle * _socketBindingHandle; // +0xb8
    WACronetHttpBindingHandle * _cronetHttpBindingHandle; // +0xc0
    WARequestConfig * _cronetRequestConfig; // +0xc8
    WADownloadFileConfig * _cronetDownloadConfig; // +0xd0
    WAUploadFileConfig * _cronetUploadConfig; // +0xd8
    BOOL _sharedCronetHttpBindingEnabled; // +0xe0
    MMLockstepHandle * _lockstepHandle; // +0xe8
    WXAudioNative * _wxaudionative; // +0xf0
    WeMediaApi * _wemedia_api; // +0xf8
    GameEngineApp * _gameEngineApp; // +0x100
    WasmAdaptor * _wasmAdaptor; // +0x108
    NSObject<IWXPhysxAdaptorAPI> * _physxAdaptor; // +0x110
    BOOL _isWasmInit; // +0x118
    BOOL _isGameEngineInit; // +0x119
    unsigned long long _closeTimeStampInMs; // +0x120
    unsigned int _adWorkerId; // +0x128
    WAMagicARAdaptor * _magicARAdaptor; // +0x130
    id /* block */ _magicARCheckAvailableBlock; // +0x138
    WAJSBindingUtilsAdaptor * _commonUtilsAdaptor; // +0x140
    WeXNetAdaptor * _mnxnetAdaptor; // +0x148
    BOOL _threadInjected; // +0x150
    BOOL _remoteDebugHasInjected; // +0x151
    BOOL _publiclibInjectFinished; // +0x152
    BOOL _m_bIsStartFromPreloadAppTask; // +0x153
    BOOL _shouldUseComponentLazyLoad; // +0x154
    BOOL _directInvokeJs; // +0x155
    BOOL _hasInjectErr; // +0x156
    BOOL _threadIdAssigned; // +0x157
    BOOL _directInvokeOc; // +0x158
    unsigned int _developerMarkedScene; // +0x15c
    unsigned int _preloadMoment; // +0x160
    unsigned int _coldlaunchCostTimeInMs; // +0x164
    unsigned int _aliveSeed; // +0x168
    unsigned int _threadId; // +0x16c
    unsigned int _codeCacheVersion; // +0x170
    NSString * _appID; // +0x178
    double _threadInjectTime; // +0x180
    JSVirtualMachine * _jsVirtualMachine; // +0x188
    WAProvideApiConfig * _provideApiCfg; // +0x190
    NSString * _instanceId; // +0x198
    id <WAJSServiceProtocol> _serviceProtocol; // +0x1a0
    id <WAJSCoreServiceDelegate> _delegate; // +0x1a8
    id <WAJSCoreServiceRemoteDelegate> _remoteDelegate; // +0x1b0
    WAWebViewController * _currentWebView; // +0x1b8
    id <IWASkylineRuntime> _skylineRuntime; // +0x1c0
    id <IWASkylineRuntime> _skylineRuntimeDestroying; // +0x1c8
    NSString * _serviceJSUrl; // +0x1d0
    WAJSContextPluginScheduler * _pluginScheduler; // +0x1d8
    unsigned long long _runningState; // +0x1e0
    WAJSCoreServiceOpenData * _launchData; // +0x1e8
    unsigned long long _preloadFinishTimeInMs; // +0x1f0
    NSMutableDictionary * _weAppWorkers; // +0x1f8
    WAApptaskPublicResLogic * _publicResLogic; // +0x200
    WAJSDebuggerConnection * _jsDebugConnection; // +0x208
    MMContext * _userContext; // +0x210
    NSThread * _thread; // +0x218
    NSMutableDictionary * _subContexts; // +0x220
    JSContext * _renderContext; // +0x228
    NSMutableDictionary * _workerFlows; // +0x230
    NSMutableDictionary * _timerObjs; // +0x238
    NSMutableSet * _eventHandlers; // +0x240
    NSMutableArray * _prevEvents; // +0x248
    NSMutableArray * _useCodeCacheFileNameListPubLib; // +0x250
    NSMutableArray * _useCodeCacheFileNameListUsr; // +0x258
    NSMutableDictionary * _extraInfo; // +0x260
    NSMutableDictionary * _dicCheckAliveBlock; // +0x268
    unsigned long long _xlog_pthreadId; // +0x270
    MMTimer * _stopCFRunLoopTimer; // +0x278
    NSMutableDictionary * _dicEventIdToSemaphore; // +0x280
    NSMutableDictionary * _dicEventIdToSyncResult; // +0x288
    WAJSCServiceInjectExtendScriptModel * _extendScriptModel; // +0x290
    WAJSThread * _jsDebugThread; // +0x298
    NSMutableArray * _preloadEvaluateRet; // +0x2a0
    NSMutableArray * _codeLaunchEvaluateRet; // +0x2a8
    NSMutableDictionary * _dictWXAudioExpt; // +0x2b0
    _TtC9WeAppCore25MagicAdMiniProgramService * _magicAdMiniProgramService; // +0x2b8
}
+ (void)setRefererInfo:(id)arg1 toDicParam:(id)arg2;
+ (void)setTransitInfo:(id)arg1 toDicParam:(id)arg2;
- (id)init;
- (void)dealloc;
- (id)description;
- (void)internalInit;
- (id)initForPreloadAppTask:(id)arg1;
- (void)sendEventToMBBiz:(id)arg1 event:(id)arg2 data:(id)arg3;
- (id)getPreloadAppLaunchConfigJSVarInjectTool;
- (id)getPreloadAppLaunchConfig;
- (void)injectPublicServiceJSForPreload;
- (unsigned int)preloadMoment;
- (void)loadAppConfig;
- (void)serviceThreadWillStart;
- (void)setThreadPriorityWithQosClass:(unsigned int)arg1 schedPriority:(int)arg2;
- (void)changeServiceThreadPriorityToHigh;
- (void)changeServiceThreadPriorityToNormal;
- (void)runThread:(id)arg1;
- (void)startServiceThread:(unsigned long long)arg1;
- (void)addServiceBlock:(id /* block */)arg1;
- (void)runServiceBlock:(id /* block */)arg1;
- (void)startServiceThread;
- (void)updateServiceThreadName;
- (void)updateContextName;
- (id)publibBytecodeIdentifierWithFileName:(id)arg1;
- (id)publibSourceUrlWithFileName:(id)arg1;
- (id)usrBytecodeIdentifierWithFileName:(id)arg1;
- (id)usrFileSourceUrlWithFileName:(id)arg1;
- (unsigned int)engineType;
- (BOOL)bytecodeEnbaled;
- (unsigned int)getCodeCacheVersion;
- (unsigned int)gameRenderMode;
- (void)serviceThread_checkAliveWithAliveJS:(id)arg1;
- (void)checkAlive:(id /* block */)arg1;
- (void)checkAliveReturn:(id)arg1;
- (void)checkAliveTimeOut:(id)arg1;
- (void)setCurrentWebView:(id)arg1;
- (void)injectNewJsDebugScript;
- (void)injectRemoteDebugIfNeeded:(id /* block */)arg1;
- (void)_injectRemoteDebugScript:(id)arg1;
- (void)startDebugNew;
- (void)stopDebugNew;
- (void)evaluateNewDebugScript:(id)arg1;
- (void)_evaluateNewDebugScript:(id)arg1;
- (void)setupWeixinWorker;
- (void)sendWorkerMessage:(unsigned int)arg1 msg:(id)arg2;
- (BOOL)shouldEnableJSContextInspectable:(id)arg1;
- (void)prepareJSContextInspectable:(id)arg1;
- (void)setupSubContext:(BOOL)arg1;
- (void)reportInitialUserScriptInjectReady;
- (void)injectExtendedScriptIfNeededWith:(id)arg1 contact:(id)arg2;
- (void)startAppBrand:(id)arg1 packageConfig:(id)arg2 extraInfo:(id)arg3;
- (void)preloadMagicAdMiniProgramServiceIfNeeded;
- (void)initMagicAdMiniProgramServiceIfNeeded;
- (void)setupContact:(id)arg1;
- (id)getWAAppTaskSystemCoverView;
- (void)jsApiEventHandler:(id)arg1 extraInfo:(id)arg2 callback:(id /* block */)arg3;
- (void)stopAppBrand:(BOOL)arg1;
- (void)registerLeakDetector;
- (void)stopAppBrandAndThread;
- (void)stopCFRunLoop;
- (void)startProvideApi:(id)arg1 extraInfo:(id)arg2;
- (void)stopProvideApi;
- (unsigned int)getThreadId;
- (void)asyncRunOperationBlockOnWorkThread:(id /* block */)arg1;
- (void)workThread_runOperationBlock:(id /* block */)arg1;
- (void)sendErrorEvent:(id)arg1;
- (void)sendReturnSyncEventToService:(id)arg1 webViewId:(unsigned int)arg2;
- (void)webviewApiResult:(id)arg1 handler:(id)arg2;
- (void)sendWebviewEventToService:(id)arg1 webViewId:(unsigned int)arg2;
- (void)sendJSEventToWorker:(id)arg1 param:(id)arg2 workerId:(unsigned int)arg3;
- (void)invokeThirdJSApiWithEventName:(id)arg1 param:(id)arg2 callbackId:(unsigned int)arg3 contextId:(unsigned int)arg4;
- (void)invokeThirdJSApiWithEventName:(id)arg1 param:(id)arg2 callbackId:(unsigned int)arg3 contextId:(unsigned int)arg4 workerId:(unsigned int)arg5;
- (void)invokeThirdJSApiCallbackWithEventName:(id)arg1 eventParams:(id)arg2 callbackId:(unsigned int)arg3 contextId:(unsigned int)arg4 workerId:(unsigned int)arg5;
- (void)sendThirdJSEventToService:(id)arg1 eventParams:(id)arg2;
- (void)sendJSEventToService:(id)arg1 param:(id)arg2 webViewId:(unsigned int)arg3;
- (void)sendJSEventToPreloadService:(id)arg1 param:(id)arg2;
- (void)sendJSEventToService:(id)arg1;
- (void)innerSendJSEventToService:(id)arg1;
- (void)workthread_sendJSEventToService:(id)arg1;
- (void)sendAppBrandEvent:(long long)arg1 param:(id)arg2 webviewID:(unsigned long long)arg3;
- (void)sendInnerAppBrandEvent:(long long)arg1 param:(id)arg2 webviewID:(unsigned long long)arg3;
- (void)sendInnerAppBrandEvent:(long long)arg1 serviceParam:(id)arg2 pluginParam:(id)arg3 webviewID:(unsigned long long)arg4;
- (id)makeSubscribeInvoker:(id)arg1 param:(id)arg2 webviewID:(unsigned int)arg3 isThirdAppEvent:(BOOL)arg4;
- (id)makeSubscribeInvoker:(id)arg1 param:(id)arg2 srcWebviewID:(unsigned int)arg3 dstWebviewID:(unsigned int)arg4 isThirdAppEvent:(BOOL)arg5;
- (void)performEventOnThread:(id)arg1;
- (void)performEventOnThread:(id)arg1 afterThreadInject:(BOOL)arg2;
- (BOOL)isJSInjected;
- (void)onAppBeforPushNavigation:(id)arg1 packageConfig:(id)arg2 extraInfo:(id)arg3;
- (void)tryInjectJavaScript;
- (id)getPermissionWithJSAPI:(id)arg1 appId:(id)arg2 byTempPermission:(id)arg3;
- (BOOL)checkJSAPIRunMode:(id)arg1;
- (BOOL)checkJSAPIRunInMainThread:(id)arg1;
- (void)checkUserAuthWithJSAPI:(id)arg1 permissionAppID:(id)arg2 model:(id)arg3 handler:(id /* block */)arg4 failHandler:(id /* block */)arg5 transferHandler:(id /* block */)arg6;
- (void)triggerStrictBanMode:(id)arg1;
- (void)setEnterPath:(id)arg1 withScene:(unsigned int)arg2 taskExtInfo:(id)arg3;
- (void)initJSContext:(id)arg1;
- (void)releaseMBBiz;
- (void)releaseJSContext;
- (void)releaseWorkerFlows;
- (void)injectJavaScript;
- (id)getServerModeInfo;
- (id)getAppLaunchConfigJSVarInjectToolForWebView:(BOOL)arg1;
- (id)getAppLaunchConfigForWebView:(BOOL)arg1;
- (id)getSystemInfo;
- (void)getScreenWidth:(double *)arg1 screenHeight:(double *)arg2;
- (id)getUserConfig;
- (id)getServiceSDKContentString;
- (id)getServiceSDKFilePath;
- (id)getServiceSubContextContentString:(BOOL)arg1;
- (id)getExtJSBeforeSubContextPublib;
- (id)getServiceSubContextFilePath:(BOOL)arg1;
- (id)getPrivateNativeContextJSString;
- (id)getPrivateNativeContextFilePath;
- (id)getPubLibEvaluateRet;
- (id)getUserScriptEvaluateRet;
- (id)wxAppInfoDicWithTemplate:(id)arg1 contactAttribute:(id)arg2;
- (id)getCurrentWebView;
- (id)genContextNameWithMainContext:(BOOL)arg1 contextId:(unsigned int)arg2;
- (id)genContextNameWithVMType:(id)arg1 vmId:(unsigned int)arg2 contextType:(id)arg3 contextId:(unsigned int)arg4;
- (void)reportJSError:(id)arg1;
- (void)reportJSErrorOnIsolatedContext:(id)arg1 context:(id)arg2;
- (void)initJSCProfiler:(id)arg1;
- (void)initOnJITMode;
- (void)initSocketBindingsWithNativeGlobal:(id)arg1;
- (void)initSharedCronetHttpBindingWithNativeGlobal:(id)arg1;
- (void)initNativeGlobal;
- (void)setNativeGlobalConfig;
- (BOOL)cronetHttpBindingCheckDomain:(id)arg1 type:(long long)arg2;
- (long long)cronetHttpBindingCheckIp:(id)arg1;
- (BOOL)cronetHttpBindingIsCellularNetworkActive;
- (long long)cronetHttpBindingDefaultTimeoutMillisecondsForType:(long long)arg1;
- (id)cronetHttpBindingFilterHeaders:(id)arg1 type:(long long)arg2;
- (id)cronetHttpBindingPhysicalPath:(id)arg1;
- (id)cronetHttpBindingDownloadFileExtension:(id)arg1 finalURL:(id)arg2;
- (id)cronetHttpBindingCachePath;
- (long long)cronetHttpBindingSaveTempFile:(id)arg1 extension:(id)arg2 resultPath:(id *)arg3;
- (long long)cronetHttpBindingSaveFile:(id)arg1 toPath:(id)arg2;
- (void)logError:(id)arg1 target:(long long)arg2;
- (void)logInfo:(id)arg1 target:(long long)arg2;
- (void)logWarning:(id)arg1 target:(long long)arg2;
- (void)logDebug:(id)arg1 target:(long long)arg2;
- (void)lockStepIDKeyStat:(const void *)arg1;
- (void)lockStepKVStat:(long long)arg1 kv:(id)arg2;
- (void)injectJSBaseForAppBrandThread:(id)arg1 sdkScript:(id)arg2 extendedScriptModel:(id)arg3 userScriptFile:(id)arg4 fromPreload:(BOOL)arg5;
- (void)markThreadInjected;
- (void)sendJsContextToSkylineServiceThread;
- (void)sendJsContextToSkyline;
- (void)setupSystemLog:(id)arg1;
- (BOOL)getFeaturePermission:(unsigned int)arg1 withappId:(id)arg2;
- (void)setupNativeClient:(id)arg1 withappId:(id)arg2;
- (void)setupInvokeHandler:(id)arg1 appId:(id)arg2 param:(id)arg3 callbackId:(unsigned int)arg4 contextId:(unsigned int)arg5 workerId:(unsigned int)arg6 responseUseBase64:(BOOL)arg7;
- (void)setupAPIBlock:(id)arg1 contextId:(unsigned int)arg2;
- (id)setupWeixinJSCore;
- (void)setupTimerBlock:(id)arg1;
- (void)contextWillBeDestroyed:(id)arg1;
- (BOOL)shouldReportPubLibCoverage;
- (void)reportPubLibCoverageIfNeededWithAppid:(id)arg1 publibStringVersion:(id)arg2 publibStringUpdateTime:(id)arg3;
- (void)workThread_reportPubLibCoverageIfNeededWithAppid:(id)arg1 publibStringVersion:(id)arg2 publibStringUpdateTime:(id)arg3;
- (void)workThread_reportPubLibCoverageForJSContext:(id)arg1 appid:(id)arg2 publibStringVersion:(id)arg3 publibStringUpdateTime:(id)arg4;
- (BOOL)isMonopolizeBackgroundAudio;
- (BOOL)isPlayingBackgroundAudio;
- (void)stopPlayingBackgroundAudio;
- (BOOL)isPlayingInnerAudio;
- (BOOL)isPlayingWxAudio;
- (BOOL)isPlayingWeMedia;
- (void)notifyJSInjectedOnMainThread:(id)arg1;
- (unsigned int)addTimer:(unsigned int)arg1 withTime:(float)arg2 isRepeat:(BOOL)arg3;
- (void)onTimer:(id)arg1;
- (void)endWithResult:(id)arg1 handler:(id)arg2;
- (void)endWithResult:(id)arg1 handler:(id)arg2 callbackID:(unsigned int)arg3 contextId:(unsigned int)arg4 workerId:(unsigned int)arg5 extraParams:(id)arg6;
- (void)workThread_invokeCallbackHandler:(id)arg1;
- (void)reportApiCallResult:(id)arg1;
- (void)reportRequstPaymentApiPreOKCallResult:(id)arg1 forEvent:(unsigned int)arg2;
- (void)removeHandler:(id)arg1;
- (id)getEventHandler:(id)arg1;
- (id)getAppId;
- (id)getWAContact;
- (void)sendResultBeforeEnd:(id)arg1 resultType:(long long)arg2 handler:(id)arg3;
- (id)getParentViewController;
- (unsigned long long)getLaunchScene;
- (id)getLaunchPagePath;
- (id)getCurrentPagePath;
- (id)getCurrentPageRelativePath;
- (BOOL)isParentViewControllerDidAppear:(id)arg1;
- (id)sourceOpenSDKAppID;
- (id)getCurrentPageQuery;
- (unsigned long long)getEnvironmentType;
- (unsigned int)getAppType;
- (unsigned long long)getAppVersion;
- (id)mtVersion;
- (unsigned int)getDebugModeType;
- (BOOL)isDebugAndVConsoleOpen;
- (void)setIsDebugAndVConsoleOpen:(BOOL)arg1;
- (BOOL)isIgnoreRemoteCheckDomain;
- (void)setIsIgnoreRemoteCheckDomain:(BOOL)arg1;
- (id)getWxaExternalInfo;
- (BOOL)isService;
- (BOOL)isGameApp;
- (BOOL)isGameClass;
- (BOOL)isHeadless;
- (BOOL)isAgentMode;
- (id)getAgentSessionId;
- (id)agentLocationMock;
- (id)getAgentTraceMsgid;
- (unsigned int)getCurTaskRunningState;
- (id)getCurPubResLogic;
- (void)setWxaExternalInfo:(id)arg1;
- (id)GetWeAppPluginByName:(id)arg1;
- (id)GetWeAppPluginIfExist:(id)arg1;
- (id)GetWebViewPluginByName:(id)arg1;
- (id)currentAppearance;
- (void)printConsoleLog:(id)arg1;
- (void)printConsoleLog:(id)arg1 level:(long long)arg2;
- (void)asyncPrintConsoleLogToCurrentWebView:(id)arg1;
- (void)onWeAppEnterBackground:(long long)arg1;
- (void)onWeAppEnterForeground:(id)arg1 isFromSystemAwake:(BOOL)arg2 useNewNavStack:(BOOL)arg3;
- (void)onRunningStateWillChanged:(unsigned long long)arg1;
- (void)onRunningStateDidChanged:(unsigned long long)arg1;
- (void)checkWorkingThreadStatusWhenRunningStateChanged;
- (void)suspendWorkingThread;
- (void)threadDidReceiveSuspend;
- (void)resumeWorkingThreadToDie:(BOOL)arg1;
- (void)resumeSocketBindingOnJSThread;
- (void)threadDidReceiveForeground;
- (void)threadDidReceiveBackground;
- (void)evaluateJavaScriptInIsolateContext:(id)arg1 timeout:(double)arg2 completion:(id /* block */)arg3;
- (void)setupExceptionHandler:(id)arg1 safeCompletion:(id /* block */)arg2;
- (BOOL)isPromise:(id)arg1;
- (void)handleAsyncResult:(id)arg1 timeout:(double)arg2 startTime:(double)arg3 safeCompletion:(id /* block */)arg4;
- (void)handleSyncResult:(id)arg1 startTime:(double)arg2 safeCompletion:(id /* block */)arg3;
- (id)convertJSError:(id)arg1;
- (BOOL)checkJSEventNeedCallUserInAgentMode:(id)arg1;
- (unsigned long long)checkJSEventNeedDelayInAgentMode:(id)arg1;
- (void)addDelayToAgentJSEvent:(id /* block */)arg1 jsapiFailHandler:(id /* block */)arg2 jsapiReplyHandler:(id /* block */)arg3 jsapiParams:(id)arg4 jsapiName:(id)arg5 eventType:(unsigned long long)arg6;
- (void)addDelayToForegroundJSAPI:(id /* block */)arg1 jsapiName:(id)arg2;
- (void)executeDelayToForegroundJSAPI;
- (void)trimNavigateJSAPIFromDelayToForegroundPool;
- (id)publicResLogic;
- (void)injectModuleAppServiceWithModuleName:(id)arg1;
- (void)workThread_injectModuleAppServiceScript:(id)arg1;
- (void)sendSubPkgReadyEvent:(id)arg1;
- (void)sendRemoteDebug:(id)arg1;
- (void)markSubPkgInjected:(id)arg1;
- (void)sendJsInvoker:(id)arg1;
- (void)evaluateJavascript:(id)arg1 withSourceURL:(id)arg2;
- (id)evaluateJavaScriptFromStringInRenderContext:(id)arg1;
- (void)evaluateJavascriptFile:(id)arg1 withSourceURL:(id)arg2;
- (BOOL)performOnService:(id)arg1 selector:(SEL)arg2 withObject:(id)arg3;
- (void)invokeOnServiceThreadImpl:(id /* block */)arg1;
- (void)invokeOnServiceThread:(id /* block */)arg1;
- (void)reportScriptInjectTime:(id)arg1 length:(long long)arg2 startTime:(unsigned long long)arg3 endTime:(unsigned long long)arg4 preload:(unsigned int)arg5 codeCacheDetail:(id)arg6;
- (void)reportScriptInjectTime:(id)arg1 length:(long long)arg2 startTime:(unsigned long long)arg3 endTime:(unsigned long long)arg4 preload:(unsigned int)arg5 engineType:(int)arg6 codeCacheDetail:(id)arg7 jitLiteMode:(unsigned int)arg8;
- (void)reportUserScriptInjectTime:(id)arg1 length:(long long)arg2 startTime:(unsigned long long)arg3 pluginId:(id)arg4 pluginVersion:(long long)arg5 codeCacheDetail:(id)arg6;
- (void)reportUserScriptInjectTime:(id)arg1 length:(long long)arg2 startTime:(unsigned long long)arg3 pluginId:(id)arg4 pluginVersion:(long long)arg5 engineType:(int)arg6 encryptLibCanUseBatchInject:(BOOL)arg7 codeCacheDetail:(id)arg8 jitLiteMode:(unsigned int)arg9;
- (void)recordUserScriptBatchInjectDetail:(id)arg1;
- (void)setColdlaunchCostTimeInMs:(unsigned int)arg1;
- (BOOL)isDidFinishColdLaunch;
- (void)didFinishColdLaunch;
- (void)pluginCodeUsageHit:(id)arg1 version:(unsigned long long)arg2;
- (id)getRemoteDelegate;
- (void)startRemoteDebug;
- (void)alterWillStop;
- (void)stopRemoteDebug;
- (void)webCore_invoke:(id)arg1 param:(id)arg2;
- (void)jSCore_publishHandler:(id)arg1 param:(id)arg2 webViewIDs:(id)arg3;
- (void)jSCore_invokeHandler:(id)arg1 param:(id)arg2 callbackID:(unsigned int)arg3 contextID:(unsigned int)arg4;
- (BOOL)isLegacyDebugMode;
- (BOOL)isNewDebugMode;
- (BOOL)hasLocalJSCore;
- (BOOL)hasRemoteDebugger;
- (void)onRemoteDebugClientMessage:(id)arg1 payload:(id)arg2 raw:(id)arg3;
- (void)onRemoteDebugPing;
- (BOOL)jsCore_setupJSCDebuggerConnection:(id /* block */)arg1 jsCoreIDWrap:(id)arg2;
- (void)jsCore_disconnectJSCoreIDWrap:(id)arg1;
- (void)jsCore_sendMessageToJSCDebugger:(id)arg1 jsCoreIDWrap:(id)arg2;
- (id)jsCoreForIDWrap:(id)arg1;
- (void)setupLazyInitMagicBrushCore;
- (void)releaseMagicBrushCore;
- (BOOL)isNativeWeApp;
- (BOOL)hasWebViewId:(unsigned long long)arg1;
- (id)systemTheme;
- (void)executeOnWorker:(unsigned int)arg1 invoker:(id)arg2;
- (id)getExtJSModels;
- (id)extJSBeforeSubContextPublib;
- (id)extJSBeforeMainContextPublib;
- (id)extJSOnTarget:(unsigned long long)arg1 atTiming:(unsigned long long)arg2;
- (id)extJSModelOnTarget:(unsigned long long)arg1 atTiming:(unsigned long long)arg2;
- (unsigned long long)getMainVMJSFootprintMemoryInBytes;
- (unsigned long long)getWorkersVMJSFootprintMemoryInBytes;
- (unsigned long long)getAllVMJSFootprintMemoryInBytes;
- (void)getMainVMJSFootprintMemoryInBytesWithCompletion:(id /* block */)arg1;
- (void)getWorkersVMJSFootprintMemoryInBytesWithCompletion:(id /* block */)arg1;
- (void)getAllVMJSFootprintMemoryInBytesWithCompletion:(id /* block */)arg1;
- (void)setupWeAppWorker;
- (void)sendWorkerMessageToService:(unsigned int)arg1 msg:(id)arg2;
- (id)getWeAppWorker:(unsigned int)arg1;
- (void)sendWeAppWorkerCreated:(unsigned int)arg1 error:(id)arg2;
- (void)initWASM:(id)arg1;
- (void)initGameEngine;
- (id)getTaskExtInfo;
- (id)geExtroInfo;
- (id)getArrUseCodeCacheFileNameListPubLib;
- (id)getArrUseCodeCacheFileNameListUsr;
- (id)getAudioNative;
- (id)getWeMediaApi;
- (void)weMediaLOG:(int)arg1 log:(const char *)arg2;
- (BOOL)weMediaGetExternalConfig:(id)arg1 defaultVal:(BOOL)arg2;
- (BOOL)weMediaTryStartAudioDevice:(unsigned long long)arg1;
- (void)weMediaTryStopAudioDevice:(unsigned long long)arg1;
- (id)weMediaGetAbsolutePath:(id)arg1;
- (BOOL)weMediaRegisterExternaImage:(const char *)arg1 dataLen:(unsigned long long)arg2 imageId:(int)arg3 width:(int)arg4 height:(int)arg5;
- (void)weMediaUnregisterExternaImage:(int)arg1;
- (id)getFileData:(id)arg1;
- (void)canPlayNowAndAutoActive:(unsigned long long)arg1 block:(id /* block */)arg2;
- (void)onWXAudioState:(int)arg1 audioId:(unsigned long long)arg2;
- (BOOL)onWXAudioGetABTestBool:(id)arg1 defaultVal:(BOOL)arg2;
- (id)getAudioFilePath:(id)arg1;
- (id)localPathByAudioData:(id)arg1 pathExtension:(id)arg2;
- (id)audioTmpPathByfileName:(id)arg1;
- (id)audioTmpRootPath;
- (id)wxaudioTmpRootPath;
- (unsigned int)adWorkerId;
- (void)onLibWorkerCreated:(unsigned int)arg1;
- (void)checkIsMagicARAvailableNeedCamera:(BOOL)arg1 completion:(id /* block */)arg2;
- (basic_string<char, std::char_traits<char>, std::allocator<char>>)getFilePath:(basic_string<char, std::char_traits<char>, std::allocator<char>>)arg1;
- (OSDConfig)magicarGetOSDConfig;
- (WAAppInfo)magicarGetAppInfo;
- (FaceConfig)magicarGetFaceConfig;
- (OCRConfig)magicarGetOCRConfig;
- (BodyConfig)magicarGetBodyConfig;
- (HandConfig)magicarGetHandConfig;
- (MonoDepthConfig)magicarGetDepthConfig;
- (VIOConfig)magicarGetWeslamConfig;
- (ShoeConfig)magicarGetShoeConfig;
- (void)OnCheckAccessCameraAndShowAlertFinish:(id)arg1;
- (void)modifyWebGLTexture:(OpaqueJSValue *)arg1 glTexture:(unsigned int)arg2;
- (void *)getEGLContext:(OpaqueJSValue *)arg1;
- (__CVBuffer *)getPixelBufferBy:(unsigned int)arg1;
- (unsigned int)developerMarkedScene;
- (void)setDeveloperMarkedScene:(unsigned int)arg1;
- (id)appID;
- (void)setAppID:(id)arg1;
- (double)threadInjectTime;
- (void)setThreadInjectTime:(double)arg1;
- (BOOL)threadInjected;
- (void)setThreadInjected:(BOOL)arg1;
- (BOOL)remoteDebugHasInjected;
- (void)setRemoteDebugHasInjected:(BOOL)arg1;
- (id)jsVirtualMachine;
- (void)setJsVirtualMachine:(id)arg1;
- (id)provideApiCfg;
- (void)setProvideApiCfg:(id)arg1;
- (BOOL)publiclibInjectFinished;
- (void)setPubliclibInjectFinished:(BOOL)arg1;
- (id)instanceId;
- (void)setInstanceId:(id)arg1;
- (id)serviceProtocol;
- (void)setServiceProtocol:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)remoteDelegate;
- (void)setRemoteDelegate:(id)arg1;
- (id)currentWebView;
- (id)skylineRuntime;
- (void)setSkylineRuntime:(id)arg1;
- (id)skylineRuntimeDestroying;
- (void)setSkylineRuntimeDestroying:(id)arg1;
- (id)serviceJSUrl;
- (void)setServiceJSUrl:(id)arg1;
- (id)pluginScheduler;
- (void)setPluginScheduler:(id)arg1;
- (unsigned long long)runningState;
- (void)setRunningState:(unsigned long long)arg1;
- (id)launchData;
- (void)setLaunchData:(id)arg1;
- (BOOL)m_bIsStartFromPreloadAppTask;
- (void)setM_bIsStartFromPreloadAppTask:(BOOL)arg1;
- (void)setPreloadMoment:(unsigned int)arg1;
- (unsigned long long)preloadFinishTimeInMs;
- (void)setPreloadFinishTimeInMs:(unsigned long long)arg1;
- (id)weAppWorkers;
- (void)setWeAppWorkers:(id)arg1;
- (void)setPublicResLogic:(id)arg1;
- (BOOL)shouldUseComponentLazyLoad;
- (void)setShouldUseComponentLazyLoad:(BOOL)arg1;
- (BOOL)directInvokeJs;
- (void)setDirectInvokeJs:(BOOL)arg1;
- (unsigned int)coldlaunchCostTimeInMs;
- (id)jsDebugConnection;
- (void)setJsDebugConnection:(id)arg1;
- (id)userContext;
- (void)setUserContext:(id)arg1;
- (id)thread;
- (void)setThread:(id)arg1;
- (id)subContexts;
- (void)setSubContexts:(id)arg1;
- (id)renderContext;
- (void)setRenderContext:(id)arg1;
- (id)workerFlows;
- (void)setWorkerFlows:(id)arg1;
- (BOOL)hasInjectErr;
- (void)setHasInjectErr:(BOOL)arg1;
- (id)timerObjs;
- (void)setTimerObjs:(id)arg1;
- (id)eventHandlers;
- (void)setEventHandlers:(id)arg1;
- (id)prevEvents;
- (void)setPrevEvents:(id)arg1;
- (id)useCodeCacheFileNameListPubLib;
- (void)setUseCodeCacheFileNameListPubLib:(id)arg1;
- (id)useCodeCacheFileNameListUsr;
- (void)setUseCodeCacheFileNameListUsr:(id)arg1;
- (id)extraInfo;
- (void)setExtraInfo:(id)arg1;
- (id)dicCheckAliveBlock;
- (void)setDicCheckAliveBlock:(id)arg1;
- (unsigned int)aliveSeed;
- (void)setAliveSeed:(unsigned int)arg1;
- (unsigned int)threadId;
- (void)setThreadId:(unsigned int)arg1;
- (BOOL)threadIdAssigned;
- (void)setThreadIdAssigned:(BOOL)arg1;
- (unsigned long long)xlog_pthreadId;
- (void)setXlog_pthreadId:(unsigned long long)arg1;
- (id)stopCFRunLoopTimer;
- (void)setStopCFRunLoopTimer:(id)arg1;
- (id)dicEventIdToSemaphore;
- (void)setDicEventIdToSemaphore:(id)arg1;
- (id)dicEventIdToSyncResult;
- (void)setDicEventIdToSyncResult:(id)arg1;
- (id)extendScriptModel;
- (void)setExtendScriptModel:(id)arg1;
- (unsigned int)codeCacheVersion;
- (void)setCodeCacheVersion:(unsigned int)arg1;
- (id)jsDebugThread;
- (void)setJsDebugThread:(id)arg1;
- (BOOL)directInvokeOc;
- (void)setDirectInvokeOc:(BOOL)arg1;
- (id)preloadEvaluateRet;
- (void)setPreloadEvaluateRet:(id)arg1;
- (id)codeLaunchEvaluateRet;
- (void)setCodeLaunchEvaluateRet:(id)arg1;
- (id)dictWXAudioExpt;
- (void)setDictWXAudioExpt:(id)arg1;
- (id)magicAdMiniProgramService;
- (void)setMagicAdMiniProgramService:(id)arg1;
- (void).cxx_destruct;
@end
