@interface WAPreloadAppTaskMgr : MMUserService <MMServiceProtocol>
{
    WAPreloadAppTask * _preloadTask; // +0x8
    BOOL _preloadTaskTerminatedToAvoidBOOM; // +0x10
    unsigned long long _lastPreloadWebViewCheckAliveSuccessTimeStampInMs; // +0x18
    WACircleProgressLoadingViewController * _cachedWeappLoading; // +0x20
    WASimulatedNativeWeAppLoadingViewController * _cachedSimulatedNativeLoading; // +0x28
    WAAppTaskCapsuleMenu * _cachedCapsuleMenu; // +0x30
}
+ (BOOL)isCloseClientPreload;
+ (unsigned int)preloadDegradeType;
+ (unsigned int)preloadInjectValueForPreloadMoment:(unsigned int)arg1;
+ (unsigned int)preloadReportTypeForServicePreload:(unsigned int)arg1 webViewPreload:(unsigned int)arg2 silentOpen:(BOOL)arg3;
+ (unsigned int)servicePreloadMomentFromPreloadType:(unsigned int)arg1;
- (void)onServiceEnterForeground;
- (void)onServiceClearData;
- (void)giveBackPreloadAppTaskWebView:(id)arg1;
- (void)timerCheckPreloadTaskIfNeeded;
- (void)checkPreloadWebViewAliveIfNeededShouldIgnoreGap:(BOOL)arg1;
- (void)reportPreloadWebViewAliveFailed:(id)arg1 subType:(unsigned long long)arg2;
- (void)createPreloadAppTaskWebView:(unsigned int)arg1;
- (void)createPreloadAppTaskService:(unsigned int)arg1;
- (id)getPreloadTask;
- (void)detachCurrentPreloadTask;
- (void)releasePreloadTask;
- (void)releasePreloadTaskWaitQuit:(BOOL)arg1;
- (void)releasePreloadWebView;
- (void)genNewPreloadTaskIfNoTask;
- (void)genNewPreloadTaskIfNoTaskByMoment:(unsigned int)arg1;
- (void)genNewDegradePreloadTaskIfNoTask;
- (void)mainThread_genNewPreloadTaskIfNoTask:(unsigned int)arg1;
- (void)preloadComponents:(unsigned int)arg1;
- (void)preCreateLoading;
- (void)preCreateCapsuleMenu;
- (void)preCreateWeAppLoading;
- (void)preCreateSimulatedNativeLoading;
- (void)preCreateLaunchService;
- (void)genNewPreloadTaskWebViewIfNoTaskWebView;
- (void)genNewPreloadTaskWebViewIfNoTaskWebView:(unsigned int)arg1;
- (void)genNewPreloadTaskServiceIfNoTaskService;
- (void)genNewPreloadTaskServiceIfNoTaskService:(unsigned int)arg1;
- (id)getAndDettachPreloadCapsuleMenu;
- (id)getAndDettachPreloadCircleProgressLoadingViewController;
- (id)getAndDettachPreloadSimulatedNativeLoadingViewController;
- (BOOL)preloadTaskTerminatedToAvoidBOOM;
- (void)setPreloadTaskTerminatedToAvoidBOOM:(BOOL)arg1;
- (unsigned long long)lastPreloadWebViewCheckAliveSuccessTimeStampInMs;
- (void)setLastPreloadWebViewCheckAliveSuccessTimeStampInMs:(unsigned long long)arg1;
- (id)cachedWeappLoading;
- (void)setCachedWeappLoading:(id)arg1;
- (id)cachedSimulatedNativeLoading;
- (void)setCachedSimulatedNativeLoading:(id)arg1;
- (id)cachedCapsuleMenu;
- (void)setCachedCapsuleMenu:(id)arg1;
- (void).cxx_destruct;
@end

