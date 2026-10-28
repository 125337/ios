@interface WAAppTaskLoader : NSObject <WALoadingViewControllerDelegate, WAAppTaskLoaderContextDelegate, WACacheVersionPreCheckerMgrExt, WACustomLoadingViewControllerDelegate>
{
    NSString * _appID; // +0x8
    WAAppTaskLoaderContext * _context; // +0x10
    id /* block */ _completeHandler; // +0x18
    id <WAAppTaskLoaderDelegate> _loaderDelegate; // +0x20
    WASerialWorkFlow * _firstPageWorkFlow; // +0x28
    WASerialWorkFlow * _childPageWorkFlow; // +0x30
    WASerialWorkFlow * _forceRelaunchWorkFlow; // +0x38
    id /* block */ _forceRelaunchCompleteHandler; // +0x40
    WAAppTaskLoaderContext * _forceRelaunchContext; // +0x48
    id <WAMinimizeDelegate> _minimizeDelegate; // +0x50
    WALoadingViewController * _loadingVC; // +0x58
    id /* block */ _preCheckCacheVersionCompletion; // +0x60
}
+ (id /* block */)blockWeAppOverseaPrivacyConfirm;
+ (id /* block */)blockSetupAppServiceAndWebView;
+ (id)genLoadingVCWithContext:(id)arg1;
+ (CGRect)calcWeAppNavFrameInSheetModeWithContext:(id)arg1 nav:(id)arg2;
+ (id /* block */)blockFetchPreloadAppServiceIfPossible;
+ (id /* block */)blockInsertHeadlessView;
+ (id /* block */)blockPushHeadlessWebView;
+ (id /* block */)blockShowLoadingView;
+ (id /* block */)blockWaitSplashAd;
+ (id /* block */)blockWaitSplashAdTimeout;
+ (id /* block */)blockPushWebView;
+ (id /* block */)blockPushWebViewTimeout;
+ (id /* block */)blockWaitPreCheckCacheVersion;
+ (id /* block */)blockCheckCacheVersion;
+ (id /* block */)blockCheckLaunchPermissionInfo;
+ (id /* block */)blockCheckPluginPermissionInfo;
+ (id /* block */)blockCheckABTestPermissionInfo;
+ (id /* block */)blockCheckSyncUpdatePubLib;
+ (id /* block */)blockPageInitReady;
+ (id /* block */)blockPageReadyTimeoutWithMillisecond:(long long)arg1;
+ (id /* block */)blockSetupChildWebView;
+ (id /* block */)blockPushChildWebView;
+ (id /* block */)blockPushChildWebViewTimeout;
- (id)initWithAppID:(id)arg1;
- (void)dealloc;
- (void)loadFirstPageWithDelegate:(id)arg1 context:(id)arg2 completeHandler:(id /* block */)arg3;
- (void)loadChildPageWithDelegate:(id)arg1 context:(id)arg2 completeHandler:(id /* block */)arg3;
- (id)ignoreWebViewDidAppearListOnReloadFirstPage;
- (void)forceRelaunchUpdatePackageWithDelegate:(id)arg1 context:(id)arg2 completeHandler:(id /* block */)arg3;
- (id)appID;
- (void)callCompleteHandler:(unsigned int)arg1 message:(id)arg2;
- (void)callCompleteHandler:(unsigned int)arg1 detail:(unsigned int)arg2 message:(id)arg3;
- (void)runHeadlessFirstPageWorkFlow;
- (void)runSilentFirstPageWorkFlow;
- (void)runFirstPageWorkFlow;
- (void)finalyRunFirstPageWorkFlow;
- (void)cancelFirstPageWorkFlow;
- (void)cancelChildPageWorkFlow;
- (void)cancelForceRelaunchWorkFlow;
- (void)runChildPageWorkFlow;
- (void)removeChildWebViewOnFail;
- (void)cancelLoadingAndJumpToH5:(id)arg1;
- (void)cancelLoadingAndJumpToRetryPage:(id)arg1;
- (void)cancelLoadingAndJumpToViewController:(id)arg1 detail:(unsigned int)arg2 msg:(id)arg3;
- (void)cancelLoadingAndAlertMsg:(id)arg1 title:(id)arg2;
- (void)relaunchToLatestVersion;
- (void)rebootInLoading;
- (void)relaunchToMigrateTargetWeAppId:(id)arg1;
- (void)onWANavigationControllerInsertToHeadless:(id)arg1;
- (void)abortFirstPageLoadingWithErrorMessage:(id)arg1;
- (void)cancelFirstPageLoadingWithErrorMessage:(id)arg1;
- (void)abortChildPageLoadingWithErrorMessage:(id)arg1;
- (BOOL)shouldColdLaunchUseWeakLoading;
- (BOOL)setupAppServiceAndWebViewWithAppID:(id)arg1 contact:(id)arg2 packageConfig:(id)arg3 baseURL:(id)arg4 pageRelativeURL:(id)arg5 getWebView:(id *)arg6;
- (void)setupTaskForSpecificPageMode;
- (void)onBeforePushWebView;
- (BOOL)needChildWebviewDidPushCallback;
- (void)onDidPushChildWebView:(id)arg1 animated:(BOOL)arg2;
- (void)onPushWebViewDidAppear;
- (void)getChildWebView:(id *)arg1 withRelativeURL:(id)arg2 childExtraInfo:(id)arg3 fromParentWebView:(id)arg4;
- (void)removeChildWebView:(id)arg1 fromParentWebView:(id)arg2;
- (void)removeParentWebView:(id)arg1 fromChildWebView:(id)arg2;
- (void)removeAllParentWebViewFromChild:(id)arg1 andGetRemovedWebView:(id *)arg2;
- (id)getIgnoreOtherWebViewListOnReloadFirstPage;
- (void)onDidPresentWithPresentingViewController:(id)arg1;
- (void)onWillShowLoadingViewControllerWithPresentingViewController:(id)arg1;
- (void)onDidShowLoadingViewControllerWithPresentingViewController:(id)arg1;
- (void)navigationControllerDidChangeTo:(id)arg1 shouldRestoreCurrentNavigationController:(BOOL)arg2;
- (void)didFinishCheckInfoDatasWithResult:(id)arg1;
- (void)packageCheckedSuccess:(BOOL)arg1 downloadedInfoDatas:(id)arg2;
- (void)fetchPreloadAppServiceIfPossibleWithContact:(id)arg1;
- (BOOL)setupConfigDataWithAppID:(id)arg1 contact:(id)arg2 packageConfig:(id)arg3 relativeURL:(id)arg4 relyPluginInfoDatas:(id)arg5 isLazyLoad:(BOOL)arg6 entryPackages:(id)arg7;
- (void)setupCertFileAndPredownloadGameWithAppID:(id)arg1 contact:(id)arg2 packageConfig:(id)arg3 isLazyLoad:(BOOL)arg4;
- (id)getLoadingViewController;
- (void)popLoadingView;
- (void)removeLoadingViewSlient;
- (void)releaseLoadingView;
- (void)resetLoadingViewDelegate;
- (BOOL)isSilentOpen;
- (void)cancelPreOpenProcess;
- (void)cancelSilentRelaunchProcess;
- (void)onAppBrandLoadingViewReturn:(id)arg1;
- (void)preCheckerContext:(id)arg1 didFinishPreCheckWithResult:(id)arg2;
- (void)onCustomLoadingVCRequestFullScreen:(id)arg1;
- (void)onCustomLoadingVCViewSizeTransitionStart:(id)arg1;
- (void)onCustomLoadingVCViewSizeTransitionComplete:(id)arg1;
- (BOOL)isRunningInSheetMode;
- (unsigned long long)capsuleMenuType;
- (BOOL)canExpandToStatusBarTop;
- (BOOL)isEmbedModeExpandedToFullScreen;
- (BOOL)isSheetModeExpandedToStatusBarTop;
- (CGSize)getPortraitSheetSize;
- (CGSize)getLandscapeSheetSize;
- (id)context;
- (void)setContext:(id)arg1;
- (id)minimizeDelegate;
- (void)setMinimizeDelegate:(id)arg1;
- (id)loadingVC;
- (void)setLoadingVC:(id)arg1;
- (id /* block */)preCheckCacheVersionCompletion;
- (void)setPreCheckCacheVersionCompletion:(id /* block */)arg1;
- (void).cxx_destruct;
@end
