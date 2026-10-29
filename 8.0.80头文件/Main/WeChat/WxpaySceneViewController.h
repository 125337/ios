@interface WxpaySceneViewController : UIViewController <UIGestureRecognizerDelegate, WxpaySceneExtensionHost, WxpayRenderViewDelegate, WxpayLiveScene>
{
    UILabel * _errorLabel; // +0x8
    WxpayResolvedScene * _scene; // +0x10
    WxpayCall * _call; // +0x18
    WxpayRenderView * _renderView; // +0x20
    BOOL _packageWaiting; // +0x28
    NSDictionary * _downloadLoadingConfig; // +0x30
    BOOL _started; // +0x38
    BOOL _preparing; // +0x39
    BOOL _prepared; // +0x3a
    NSString * _openStatus; // +0x40
    NSString * _openMessage; // +0x48
    NSMutableArray * _openWaiters; // +0x50
    NSString * _preparationStatus; // +0x58
    NSString * _preparationMessage; // +0x60
    id /* block */ _onPrepared; // +0x68
    BOOL _finishing; // +0x70
    BOOL _pageCreated; // +0x71
    BOOL _forbidRightGesture; // +0x72
    BOOL _dragToClose; // +0x73
    BOOL _statusBarHidden; // +0x74
    BOOL _multiWindow; // +0x75
    unsigned long long _orientationMask; // +0x78
    UIScreenEdgePanGestureRecognizer * _backGesture; // +0x80
    UIPanGestureRecognizer * _dragCloseGesture; // +0x88
    NSDictionary * _lastReport; // +0x90
    id <WxpaySceneExtension> _extension; // +0x98
    BOOL _lifecycleAttached; // +0xa0
    BOOL _lifecycleOnScreen; // +0xa1
    BOOL _hostForeground; // +0xa2
    BOOL _appActive; // +0xa3
    BOOL _childCovered; // +0xa4
    BOOL _hostOccluded; // +0xa5
    BOOL _lifecycleDetached; // +0xa6
    BOOL _lifecyclePublished; // +0xa7
    long long _publishedLifecycleState; // +0xa8
    BOOL _publishedWindowFocused; // +0xb0
    BOOL _coveringOpener; // +0xb1
    BOOL _embeddedInHostView; // +0xb2
    BOOL _awaitingDismissal; // +0xb3
    UIViewController * _presentationContainer; // +0xb8
    unsigned long long _parentCallId; // +0xc0
}
- (id)initWithScene:(id)arg1 call:(id)arg2;
- (unsigned long long)callId;
- (id)sceneName;
- (BOOL)containerEventReady;
- (id)diagnosticLine;
- (void)setHostLoadingVisible:(BOOL)arg1 budgetMs:(long long)arg2;
- (void)notifyOccluded:(BOOL)arg1;
- (void)setCoveredByChild:(BOOL)arg1;
- (void)publishLiteAppGlobalEvent:(id)arg1 parameter:(id)arg2;
- (void)publishLiteAppGlobalEventToAllPages:(id)arg1 parameter:(id)arg2;
- (void)publishLiteAppGlobalEvent:(id)arg1 pageId:(unsigned long long)arg2 parameter:(id)arg3;
- (id)liteAppStoreAppId;
- (id)liteAppStoreSessionId;
- (void)dispatchLiteAppStoreAction:(id)arg1 appId:(id)arg2 paramsJSON:(id)arg3;
- (void)sendLiteAppStoreResultToPage:(unsigned long long)arg1 callbackId:(int)arg2 type:(id)arg3 resultJSON:(id)arg4;
- (void)loadView;
- (void)viewDidLoad;
- (void)startLoading;
- (void)notifyPackageWaiting:(BOOL)arg1;
- (void)clearLoadingHolds;
- (BOOL)loadingBlocksScene;
- (id)loadingCallContext;
- (id)payLoadingOptionsForStyle:(long long)arg1 text:(id)arg2;
- (id)payLoadingTitle:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)finishTakenDownByHost;
- (id)presentationAnchor;
- (void)whenOpened:(id /* block */)arg1;
- (void)settleOpen:(id)arg1 message:(id)arg2;
- (void)beginPreparation;
- (void)finishPreparationWithStatus:(id)arg1 message:(id)arg2;
- (void)startScene;
- (void)launchPreparedScene;
- (void)failScene:(id)arg1 status:(id)arg2;
- (void)cancelFromHost;
- (void)onForeground;
- (void)onBackground;
- (void)onApplicationDidBecomeActive;
- (void)onApplicationWillResignActive;
- (void)onMemoryWarning;
- (void)publishLifecycleWithReason:(long long)arg1;
- (void)publishLifecycleDetached;
- (void)publishLifecycleSnapshotForced:(BOOL)arg1 reason:(long long)arg2;
- (BOOL)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (BOOL)prefersHomeIndicatorAutoHidden;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)viewDidLayoutSubviews;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)renderViewDidCreatePage:(BOOL)arg1 pageId:(unsigned long long)arg2;
- (void)coverOpener;
- (void)uncoverOpener;
- (void)renderViewDidBecomeContentReady;
- (void)renderViewShowPayLoading:(BOOL)arg1 style:(long long)arg2 option:(id)arg3;
- (void)renderViewRequestsClose;
- (void)reportNoTerminalRow;
- (void)renderViewRequestsNavigateBack;
- (void)handleBackGesture:(id)arg1;
- (void)handleDragCloseGesture:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)renderViewSetStatusBarHidden:(BOOL)arg1;
- (void)renderViewSetPageOrientation:(long long)arg1;
- (void)renderViewSetForbidRightGesture:(BOOL)arg1;
- (void)renderViewSetDragToClose:(BOOL)arg1;
- (BOOL)renderViewDidReceiveStoreAction:(id)arg1 data:(id)arg2;
- (void)renderViewDidShowLiteApp;
- (void)sceneExtensionEmitKeepAliveResult:(id)arg1;
- (BOOL)sceneExtensionHostDeclaresResultMethod:(id)arg1;
- (void)sceneExtensionRecordReport:(id)arg1;
- (void)sceneExtensionCancel;
- (void)sceneExtensionStateChanged:(id)arg1;
- (void)sceneExtensionForwardResult:(id)arg1 method:(id)arg2;
- (void)forwardStoreResult:(id)arg1 method:(id)arg2;
- (void)finishAndDismissWithResult:(id)arg1 status:(id)arg2 message:(id)arg3;
- (double)beginExitMotion;
- (void)tearDownWithResult:(id)arg1 status:(id)arg2 message:(id)arg3;
- (void)completeWithResult:(id)arg1 status:(id)arg2 message:(id)arg3;
- (BOOL)isFinishing;
- (void)dealloc;
- (id)presentationContainer;
- (void)setPresentationContainer:(id)arg1;
- (BOOL)embeddedInHostView;
- (void)setEmbeddedInHostView:(BOOL)arg1;
- (unsigned long long)parentCallId;
- (void)setParentCallId:(unsigned long long)arg1;
- (BOOL)isAwaitingDismissal;
- (void).cxx_destruct;
@end
