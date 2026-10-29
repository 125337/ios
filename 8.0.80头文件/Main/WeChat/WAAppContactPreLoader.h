@interface WAAppContactPreLoader : MMUserService <WAAppTaskVersionFallBackExt, WALimitModeHelperDelegate, WALoadingViewControllerDelegate, WACapsuleMenuDelegate, WAAppTansitionControllerDelegate, MMServiceProtocol>
{
    WAAppTaskHandlerWrapper * m_handlerWrapper; // +0x8
    WAAppOpenParameter * m_openInfo; // +0x10
    WAAppTaskExtInfo * m_taskExtInfo; // +0x18
    WAAppTrialInfoLoader * m_trialInfoLoader; // +0x20
    id <IWALimitModeHelper> m_limitModeHelper; // +0x28
    WAContact * m_pendingContact; // +0x30
    BOOL m_isAppContactLoading; // +0x38
    BOOL _isPreRendering; // +0x39
    MMUIViewController * _loadingVC; // +0x40
}
- (void)onServiceInit;
- (void)onServiceTerminate;
- (void)onServiceClearData;
- (void)openAppWithQRFullUrl:(id)arg1 fromScene:(unsigned long long)arg2 preScene:(unsigned long long)arg3 preSceneNote:(id)arg4 codeScene:(unsigned long long)arg5 onSuccess:(id /* block */)arg6 onFailed:(id /* block */)arg7;
- (void)openAppWithQRFullUrl:(id)arg1 fromScene:(unsigned long long)arg2 preScene:(unsigned long long)arg3 preSceneNote:(id)arg4 codeScene:(unsigned long long)arg5 extraSceneNote:(id)arg6 FromWeAppAppid:(id)arg7 FromViwController:(id)arg8 handlerWrapper:(id)arg9;
- (void)openAppWithQRFullUrl:(id)arg1 fromScene:(unsigned long long)arg2 preScene:(unsigned long long)arg3 preSceneNote:(id)arg4 codeScene:(unsigned long long)arg5 extraSceneNote:(id)arg6 FromWeAppAppid:(id)arg7 FromViwController:(id)arg8 extraParams:(id)arg9 hostExtraData:(id)arg10 handlerWrapper:(id)arg11;
- (BOOL)checkIfNeedBandJumpAppFromLongPressCode:(id)arg1 ToAppServiceType:(unsigned int)arg2;
- (BOOL)isMainPackageDownloadedForNotifyInfo:(id)arg1;
- (void)wrapVersionUpdateNotificationForHandlerWrapper:(id)arg1 appId:(id)arg2 debugMode:(unsigned long long)arg3;
- (void)openDebugAppFromQRCdoe:(id)arg1 fromScene:(unsigned long long)arg2 Params:(id)arg3 UserName:(id)arg4 OpenInfo:(id)arg5 handlerWrapper:(id)arg6;
- (void)openAppWithJSONString:(id)arg1 fromScene:(unsigned long long)arg2 sceneNote:(id)arg3 brandAppId:(id)arg4;
- (void)openAppWithJSONString:(id)arg1 fromScene:(unsigned long long)arg2 sceneNote:(id)arg3 brandAppId:(id)arg4 navigationController:(id)arg5;
- (void)openAppWithMPLinkString:(id)arg1 fromScene:(unsigned long long)arg2 sceneNote:(id)arg3 preScene:(unsigned long long)arg4 preSceneNote:(id)arg5 onSuccess:(id /* block */)arg6 onFailed:(id /* block */)arg7;
- (void)openAppWithMPLinkString:(id)arg1 fromScene:(unsigned long long)arg2 sceneNote:(id)arg3 preScene:(unsigned long long)arg4 preSceneNote:(id)arg5 chatType:(unsigned long long)arg6 onSuccess:(id /* block */)arg7 onFailed:(id /* block */)arg8;
- (void)openAppWithMPLinkString:(id)arg1 forbidAlert:(BOOL)arg2 fromScene:(unsigned long long)arg3 sceneNote:(id)arg4 preScene:(unsigned long long)arg5 preSceneNote:(id)arg6 chatType:(unsigned long long)arg7 onSuccess:(id /* block */)arg8 onFailed:(id /* block */)arg9;
- (void)openAppWithMPLinkString:(id)arg1 forbidAlert:(BOOL)arg2 fromScene:(unsigned long long)arg3 sceneNote:(id)arg4 preScene:(unsigned long long)arg5 preSceneNote:(id)arg6 chatType:(unsigned long long)arg7 extraParams:(id)arg8 hostExtraData:(id)arg9 onSuccess:(id /* block */)arg10 onFailed:(id /* block */)arg11;
- (void)openApp:(id)arg1 taskExtInfo:(id)arg2 onSuccess:(id /* block */)arg3 onFailed:(id /* block */)arg4;
- (void)inner_openApp:(id)arg1 taskExtInfo:(id)arg2 handlerWrapper:(id)arg3;
- (void)openApp:(id)arg1 taskExtInfo:(id)arg2 handlerWrapper:(id)arg3;
- (void)fetchMtForkInfoThenOpenApp:(id)arg1 taskExtInfo:(id)arg2 handlerWrapper:(id)arg3;
- (void)reOpenApp:(id)arg1 taskExtInfo:(id)arg2 onSuccess:(id /* block */)arg3 onFailed:(id /* block */)arg4;
- (void)reOpenApp:(id)arg1 taskExtInfo:(id)arg2 handlerWrapper:(id)arg3;
- (BOOL)checkTaskShouldReOpenedAndDoReport:(id)arg1;
- (BOOL)isNeedSyncUpdateContact:(id)arg1 getReason:(unsigned long long *)arg2;
- (BOOL)isContactExpired:(id)arg1;
- (BOOL)isPkgExistForContact:(id)arg1;
- (BOOL)isPagePathInvalid:(id)arg1;
- (void)ensureValidLaunchParams:(id)arg1;
- (void)updateTestParameterIfNeeded:(id)arg1;
- (void)updateTestParameterAfterGetContactIfNeeded:(id)arg1 contact:(id)arg2;
- (void)updateSheetParameterBeforeHotLaunch:(id)arg1 prevTask:(id)arg2;
- (void)firstLoadWeAppContact;
- (void)migrateToTargetWeAppIfHaveForContact:(id)arg1;
- (BOOL)canUseEarlyLoading:(id)arg1;
- (void)checkContactValidAndEnterApp:(id)arg1;
- (void)enterAppWithContact:(id)arg1;
- (void)openDebugModeAppWithContact:(id)arg1 notifyInfo:(id)arg2;
- (void)enterDevelopModeWeApp:(id)arg1;
- (void)enterRDMModeWeApp:(id)arg1;
- (void)loadTrialInfoWithNotifyInfo:(id)arg1 contact:(id)arg2 isSyncLoad:(BOOL)arg3;
- (void)applyPendingTrialInfoIfNeeded:(id)arg1;
- (void)checkAndTriggerPreCheckCacheVersionIfNeeded:(id)arg1;
- (void)checkAndTriggerPreParallelDownloadIfNeeded:(id)arg1;
- (void)finalyOpenAppWithContact:(id)arg1;
- (void)cancelReqeustInfo;
- (void)cancelSilentOpenRequestInfoForUsername:(id)arg1 appid:(id)arg2;
- (void)preRenderAppWithAppId:(id)arg1 userName:(id)arg2 pagePath:(id)arg3 debugMode:(unsigned long long)arg4 fromScene:(unsigned long long)arg5 sceneNote:(id)arg6 handoff:(id)arg7 completion:(id /* block */)arg8;
- (void)clearState;
- (void)dealloc;
- (void)initTaskExtInfoIfNeed:(id)arg1;
- (id)topNavOnMainWindow;
- (void)registOpenAppStatInfo:(id)arg1;
- (id)queryParamDictFromFullUrl:(id)arg1;
- (void)showDeviceForbbidenWebView;
- (void)showOverSeaForbbidenWebView;
- (void)openErrWebViewControllerWithUrl:(id)arg1 navigationController:(id)arg2;
- (void)showLoadingViewController;
- (void)hideLoadingViewController;
- (void)setLoadingVC:(id)arg1;
- (void)showErrTipsViewControllerWithTitle:(id)arg1 content:(id)arg2;
- (void)showLoadErrViewControlelrWithTitle:(id)arg1 content:(id)arg2 onNav:(id)arg3;
- (BOOL)tryBlockedByLimitModeWithContact:(id)arg1;
- (void)checkContactShouldBeBlockedInLimitedMode:(id)arg1;
- (BOOL)checkContactShouldBeBlockedInLimitedModeForMinimize:(id)arg1;
- (void)callGetContactSuccHandler;
- (void)callGetContactFailHandlerWithReason:(unsigned long long)arg1;
- (void)onTaskVersionFallBackTickWithUsername:(id)arg1 appid:(id)arg2 reason:(unsigned long long)arg3;
- (void)reportFallbackToLocalContact:(id)arg1 reason:(unsigned long long)arg2;
- (void)reportForceAsyncUpdateContactWithReason:(unsigned long long)arg1;
- (void)showWeAppLoadingViewWithContact:(id)arg1;
- (id)genWALoadingViewControllerWithContact:(id)arg1;
- (id)genCapsuleMenuWithContact:(id)arg1 superview:(id)arg2;
- (void)onMenuMore;
- (void)onMenuExit:(long long)arg1;
- (void)onMenuLongPressMore;
- (void)onMenuLongPressExit;
- (void)onAppBrandLoadingViewReturn:(id)arg1;
- (void)onLoadingAnimationDone;
- (void)onLimitModeExitWithAppId:(id)arg1 isVerified:(BOOL)arg2;
- (void)onSystemWillResignActive:(id)arg1;
- (void)onSystemEnterBackground:(id)arg1;
- (BOOL)presentationControllerNeedZoom;
- (BOOL)presentationControllerNeedMask;
- (BOOL)dismissControllerNeedZoom;
- (BOOL)dismissControllerNeedMask;
- (id)getJumpFromAppTask;
- (id)loadingVC;
- (BOOL)isPreRendering;
- (void)setIsPreRendering:(BOOL)arg1;
- (void).cxx_destruct;
@end
