@interface WebViewSanboxSessionTask : MMObject <PBMessageObserverDelegate>
{
    BOOL _hasSetupTask; // +0x8
    BOOL _isWorkQueueUnload; // +0x9
    BOOL _isWorkQueueSuspend; // +0xa
    BOOL _isTaskReleased; // +0xb
    BOOL _mainThread_hasContextCreated; // +0xc
    id <WebViewSanboxSessionTaskDelegate> _mainThread_delegate; // +0x10
    WebViewWebComVerifyInfo * _webComptInfo; // +0x18
    WebvViewWebComPublicLibInfo * _webComptPublicLibInfo; // +0x20
    NSRecursiveLock * _taskStateLock; // +0x28
    unsigned long long _startUpEventTime; // +0x30
    NSMutableArray * _arrEventInfos; // +0x38
    NSMutableDictionary * _dictEventInfo; // +0x40
    NSURLSession * _downloadUrlSession; // +0x48
    id /* block */ _mainThread_downloadCompleteBlock; // +0x50
    WebViewSanboxTaskAuthInfo * _authInfo; // +0x58
    id /* block */ _mainThread_updateAuthCompleteBlock; // +0x60
    NSArray * _arrPermissionList; // +0x68
    NSMutableDictionary * _dictApiName2Index; // +0x70
    JSContext * _context; // +0x78
    NSMutableDictionary * _workThread_dictTimers; // +0x80
    NSRecursiveLock * _timmerAccessLock; // +0x88
    id /* block */ _mainThread_setupContextCompleteBlocks; // +0x90
    NSString * _name; // +0x98
    NSString * _webAppId; // +0xa0
    NSString * _webSourceUrl; // +0xa8
    NSString * _mainFrameSessionId; // +0xb0
    unsigned long long _performance_configFinishTs; // +0xb8
    id /* block */ _skelonReadyBlock; // +0xc0
    id /* block */ _comptReadyBlock; // +0xc8
    NSObject<OS_dispatch_queue> * _workQueue; // +0xd0
    NSRecursiveLock * _workQueueStateLock; // +0xd8
    WebViewSanboxSessionTaskDebugControl * _debugControl; // +0xe0
}
- (void)downloadAppContextResouce:(id)arg1 fileMd5:(id)arg2 completeBlock:(id /* block */)arg3;
- (void)workQueue_downloadAppContextResouce:(id)arg1 fileMd5:(id)arg2;
- (void)onDownloadResult:(BOOL)arg1 downloadInfo:(id)arg2 errCode:(long long)arg3 errMsg:(id)arg4;
- (void)workQueue_onDownloadResult:(BOOL)arg1 downloadInfo:(id)arg2 errCode:(long long)arg3 errMsg:(id)arg4;
- (void)workQueue_onDownloadResult:(BOOL)arg1 downloadInfo:(id)arg2 isSyncDownload:(BOOL)arg3 errCode:(long long)arg4 errMsg:(id)arg5;
- (void)setupDownloadSession;
- (void)releaseDownloadSession;
- (id)dirOfWebSanboxAppCtxRes;
- (id)dirForTaskDirAppCtxServiceJs;
- (id)pathForTaskDirAppCtxServiceJsWithFileMd5:(id)arg1;
- (void)onTaskPerformanceStartup;
- (void)recordEvent:(id)arg1;
- (void)reportWebComptEventFlow:(id)arg1;
- (void)printPerformance;
- (void)reportTaskWebComptEvent:(unsigned int)arg1;
- (void)setupTaskCoreWithInitConfigData:(id)arg1 completeBlock:(id /* block */)arg2;
- (void)workQueue_setupContextWithInitConfigData:(id)arg1;
- (void)registTaskForComptWithAppCtxScript:(id)arg1;
- (void)launchTaskOnComptAuthed;
- (void)patchTagNameList:(id)arg1;
- (void)injectSanboxContextPublicScript;
- (void)workQueue_updateConfigResult:(id)arg1;
- (void)injectTaskLaunchEvent;
- (void)injectAppContextServiceScript:(id)arg1;
- (id)sanboxContextBridge;
- (void)setupJSErrorHandler;
- (void)setupInvokeApiBlock:(id)arg1;
- (void)setupSendMessageApiBlock:(id)arg1;
- (void)setupReportApiBlock:(id)arg1;
- (void)setupLogApiBlock:(id)arg1;
- (void)setupCommCgiApiBlock:(id)arg1;
- (void)setupTimerApiBlock:(id)arg1;
- (void)setupRefreshAuthApiBlock:(id)arg1;
- (void)setupReportJsExceptionApiBlock:(id)arg1;
- (void)setupPerformanceApiBlock:(id)arg1;
- (void)unloadContext;
- (id)genSpecificMatrixArray:(id)arg1;
- (void)sendMessageStringToContext:(id)arg1;
- (void)dispatchEventToContext:(id)arg1 params:(id)arg2;
- (void)callBackInvokeApiResult:(id)arg1 params:(id)arg2;
- (void)sendErrorEventToContext:(long long)arg1 errMsg:(id)arg2;
- (void)requestCommonCgi:(id)arg1 requestString:(id)arg2;
- (void)onResponseCommCgi:(id)arg1;
- (void)callCommCgiErrorEvent:(id)arg1 errorType:(int)arg2 errorCode:(int)arg3 errMsg:(id)arg4;
- (void)callCommCgiResponseResult:(id)arg1 responseStr:(id)arg2;
- (unsigned int)workQueue_addTimer:(unsigned int)arg1 withTime:(double)arg2 isRepeat:(BOOL)arg3;
- (void)onTimer:(id)arg1;
- (void)workQueue_clearTimerWithTimerId:(unsigned int)arg1;
- (void)clearAllTimers;
- (void)workQueue_clearAllTimers;
- (id)timerWithTimerId:(unsigned int)arg1;
- (void)addTimer:(id)arg1 withTimerId:(unsigned int)arg2;
- (void)removeTimerWithTimerId:(unsigned int)arg1;
- (id)popAllTimers;
- (void)popAllTimersAndInvalidateInWorkQueue;
- (void)handleJsContextException:(id)arg1 stack:(id)arg2 errLine:(long long)arg3 errColumn:(long long)arg4;
- (void)onResponseJSErrReport:(id)arg1;
- (void)workQueue_RefressAuth:(id)arg1;
- (id)dictionaryFromAuthInfo:(id)arg1;
- (void)sandboxContextEvaluateScript:(id)arg1;
- (id)workQueue_evaluateScript:(id)arg1 sourceURL:(id)arg2;
- (void)udpateTaskAuth:(id)arg1 completeBlock:(id /* block */)arg2;
- (void)refreshTaskAuth:(id)arg1 completeBlock:(id /* block */)arg2;
- (void)doRequestTaskAuthWithUrl:(id)arg1;
- (void)onResponseUpdateTaskRequest:(id)arg1;
- (void)onAuthComplete:(BOOL)arg1 authInfo:(id)arg2;
- (void)savePermissionList:(id)arg1;
- (unsigned char)getJSApiPermission:(id)arg1;
- (long long)getPermissionIndex:(id)arg1;
- (id)init;
- (id)initWithName:(id)arg1 appId:(id)arg2 webSourceUrl:(id)arg3 webSessionId:(id)arg4;
- (void)dealloc;
- (id)taskWebComptName;
- (id)taskMainFrameSessionId;
- (void)releaseTask;
- (void)setTaskStateReleased;
- (BOOL)isTaskReleased;
- (void)createWorkQueue;
- (BOOL)isOnWorkQueue;
- (void)unloadWorkQueue;
- (void)suspendWorkQueue;
- (void)resumeWorkQueue;
- (BOOL)isWorkQueueSuspend;
- (BOOL)isWorkQueueUnload;
- (void)startUpTaskWithConfigData:(id)arg1 debugControl:(id)arg2 skelonReadyBlock:(id /* block */)arg3 comptReadyBlock:(id /* block */)arg4;
- (void)taskStartUp_downloadAppContextResouce:(id)arg1 pkgMd5:(id)arg2;
- (void)taskStartUp_requestTaskAuthInfo:(id)arg1;
- (void)responseMainFrameSkeletonStartupResult:(BOOL)arg1 errCode:(long long)arg2 errMsg:(id)arg3;
- (void)responseMainFrameComptRegisterResult:(BOOL)arg1 errCode:(long long)arg2 errMsg:(id)arg3;
- (id)authUrl;
- (void)mainThread_handleContextJsApiInvoke:(id)arg1 params:(id)arg2 callBackId:(id)arg3;
- (void)mainThread_handleContextSendMessage:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)excuteBlockOnWorkQueueWhenNotDealloc:(id /* block */)arg1;
- (id)mainThread_delegate;
- (void)setMainThread_delegate:(id)arg1;
- (id)webComptInfo;
- (void)setWebComptInfo:(id)arg1;
- (id)webComptPublicLibInfo;
- (void)setWebComptPublicLibInfo:(id)arg1;
- (BOOL)hasSetupTask;
- (void)setHasSetupTask:(BOOL)arg1;
- (void)setIsWorkQueueUnload:(BOOL)arg1;
- (void)setIsWorkQueueSuspend:(BOOL)arg1;
- (void)setIsTaskReleased:(BOOL)arg1;
- (id)taskStateLock;
- (void)setTaskStateLock:(id)arg1;
- (unsigned long long)startUpEventTime;
- (void)setStartUpEventTime:(unsigned long long)arg1;
- (id)arrEventInfos;
- (void)setArrEventInfos:(id)arg1;
- (id)dictEventInfo;
- (void)setDictEventInfo:(id)arg1;
- (id)downloadUrlSession;
- (void)setDownloadUrlSession:(id)arg1;
- (id /* block */)mainThread_downloadCompleteBlock;
- (void)setMainThread_downloadCompleteBlock:(id /* block */)arg1;
- (id)authInfo;
- (void)setAuthInfo:(id)arg1;
- (id /* block */)mainThread_updateAuthCompleteBlock;
- (void)setMainThread_updateAuthCompleteBlock:(id /* block */)arg1;
- (id)arrPermissionList;
- (void)setArrPermissionList:(id)arg1;
- (id)dictApiName2Index;
- (void)setDictApiName2Index:(id)arg1;
- (id)context;
- (void)setContext:(id)arg1;
- (id)workThread_dictTimers;
- (void)setWorkThread_dictTimers:(id)arg1;
- (id)timmerAccessLock;
- (void)setTimmerAccessLock:(id)arg1;
- (BOOL)mainThread_hasContextCreated;
- (void)setMainThread_hasContextCreated:(BOOL)arg1;
- (id /* block */)mainThread_setupContextCompleteBlocks;
- (void)setMainThread_setupContextCompleteBlocks:(id /* block */)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)webAppId;
- (void)setWebAppId:(id)arg1;
- (id)webSourceUrl;
- (void)setWebSourceUrl:(id)arg1;
- (id)mainFrameSessionId;
- (void)setMainFrameSessionId:(id)arg1;
- (unsigned long long)performance_configFinishTs;
- (void)setPerformance_configFinishTs:(unsigned long long)arg1;
- (id /* block */)skelonReadyBlock;
- (void)setSkelonReadyBlock:(id /* block */)arg1;
- (id /* block */)comptReadyBlock;
- (void)setComptReadyBlock:(id /* block */)arg1;
- (id)workQueue;
- (void)setWorkQueue:(id)arg1;
- (id)workQueueStateLock;
- (void)setWorkQueueStateLock:(id)arg1;
- (id)debugControl;
- (void)setDebugControl:(id)arg1;
- (void).cxx_destruct;
@end

