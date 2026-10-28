@interface WAGameViewController : WAWebViewController <JITRuntimeDataTransferDelegate, JITRuntimeNativeRenderDelegate, WAGameActionSheetDelegate, WAOpenGLViewDelegate, WABindingDelegate, YYWebViewDelegate, WAWebViewMutiFuncMenuViewDataSource, WAWebViewMutiFuncMenuViewDelegate, WAPopInteractiveTransitionDelegate, MagicBrushCoreJSStuffDelegate, MagicBrushCoreResourceDelegate, MagicBrushCoreScreenCanvasDelegate, MagicBrushCVPixelBufferRTDelegate, WAGameEvaluatePopSheetDelegate, WAGameReviewPopSheetDelegate, MMWebImageViewDelegate>
{
    WAOpenGLView * _glView; // +0x238
    WAGameActionSheet * _gameSheet; // +0x240
    RCDraggableButton * _debugBtn; // +0x248
    YYWAWebView * _debugWebView; // +0x250
    MMWebImageView * _coverImageView; // +0x258
    UIView * _backgroundView; // +0x260
    BOOL _vConsoleVisible; // +0x268
    BOOL _useDebug; // +0x269
    float _mockprogress; // +0x26c
    WAGameRollProgressView * m_gameloadingAnimationView; // +0x270
    UILabel * _progressLabel; // +0x278
    unsigned long long _lockedOrientation; // +0x280
    long long _deviceOrientation; // +0x288
    BOOL _manualHideSplash; // +0x290
    BOOL _showStatusBar; // +0x291
    NSString * m_customProgressBarColor; // +0x298
    CADisplayLink * _timerMockLoadingProgress; // +0x2a0
    long long _fpsTestNum; // +0x2a8
    UILabel * _performance; // +0x2b0
    long long _reportPerformanceInterval; // +0x2b8
    BOOL _reportPerformance; // +0x2c0
    BOOL _lightPerformanceReport; // +0x2c1
    unsigned int _fpsLagWindowSize; // +0x2c4
    unsigned int _fpsLagWindowDiff; // +0x2c8
    unsigned int _fpsLowThreshold; // +0x2cc
    long long _reportCBFPSInterval; // +0x2d0
    long long _initMemory; // +0x2d8
    long long _initMemoryInFootprint; // +0x2e0
    unsigned int _sampleInterval; // +0x2e8
    unsigned int _sampleCounter; // +0x2ec
    unsigned int _sampleFpsLagCounter; // +0x2f0
    unsigned int _sampleFpsLowCounter; // +0x2f4
    list<unsigned int, std::allocator<unsigned int>> _sampleDataList; // +0x2f8
    int _sampleDataFpsAmount; // +0x310
    NSObject<OS_dispatch_queue> * _readfileQueue; // +0x318
    WAGameEvaluatePopSheet * _gameEvaluateView; // +0x320
    WAGameReviewPopSheet * _gameReviewView; // +0x328
    WCActionSheet * _liveExitAskActionSheet; // +0x330
    WCActionSheet * _liveExitConfirmActionSheet; // +0x338
    WAJITRuntime * _jitRuntime; // +0x340
    int _nativeRenderMainCanvasId; // +0x348
    BOOL _hadCallbackInitReadyFromPageCall; // +0x34c
    BOOL _vConsoleFnishLoad; // +0x34d
    NSMutableArray * _logs; // +0x350
    NSMutableArray * _delayedGestures; // +0x358
    BOOL _autoRotate; // +0x360
    GameEngineApp * _app; // +0x368
    BOOL _addedJITRuntime; // +0x370
    BOOL _jitMode; // +0x371
    BOOL _isNewReporting; // +0x372
    BOOL _nativeRenderEnterBackground; // +0x373
    BOOL _detectGameQualityIsPreload; // +0x374
    BOOL _detectGameQualityStarted; // +0x375
    BOOL _detectGameQualityPaused; // +0x376
    BOOL _allRotation; // +0x377
    unsigned int _developerMarkedScene; // +0x378
    int _frameCaptureRemainingCount; // +0x37c
    unsigned int _removeAtomStringFixGap; // +0x380
    unsigned int _lastRemoveAtomStringFixTimeInS; // +0x384
    int _mbMainCanvasContextType; // +0x388
    int _detectGameQualityFirstFrameWaitCount; // +0x38c
    long long _runningGameMode; // +0x390
    long long _frameCaptureState; // +0x398
    id <WAGameContextDelegate> _delegate; // +0x3a0
    NSMutableDictionary * _reportSceneMap; // +0x3a8
    long long _reportSceneId; // +0x3b0
    NSString * _reportExtraInfo; // +0x3b8
    NSString * _reportRuntimePlatformInfo; // +0x3c0
    UIView * _inputBackground; // +0x3c8
    id <WAGameKeyboardDelegate> _keyboardDelegate; // +0x3d0
    id <IWAEmoticonBoardService> _emoticonBoardService; // +0x3d8
    UIView * _emoticonBoardContainerView; // +0x3e0
    UIScreenEdgePanGestureRecognizer * _popBackGesture; // +0x3e8
    WAMenuPopInteractiveTransition * _dismissInteractiveTransition; // +0x3f0
    JITRuntimeTouchReceiverView * _jitRuntimeTouchReceiver; // +0x3f8
    MagicBrushCore * _mbCore; // +0x400
    MBGLView * _mbMainCanvasView; // +0x408
    MagicBrushGPURenderLayerRT * _mbRenderTarget; // +0x410
    NSMutableDictionary * _workerThreads; // +0x418
    NSMutableDictionary * _mbCaptureInfos; // +0x420
    NSMutableDictionary * _mbCanvasMap; // +0x428
    _NSRange _keyboardSelectedRange; // +0x430
}
+ (id)createLoadingView:(id)arg1 inView:(id)arg2;
+ (id)createLoadingView:(id)arg1 inView:(id)arg2 insertLoadingViewAtIndexZero:(BOOL)arg3;
+ (void)updateLoadingView:(id)arg1 bgView:(id)arg2 inView:(id)arg3;
+ (id)createLoadingImgView:(id)arg1 delegate:(id)arg2;
+ (id)getBundle;
- (id)downloadFile:(id)arg1 header:(id)arg2 filePath:(id)arg3 cleanMode:(BOOL)arg4 timeout:(unsigned int)arg5 workerId:(unsigned int)arg6 complete:(id /* block */)arg7 progress:(id /* block */)arg8 header:(id /* block */)arg9 useQuic:(BOOL)arg10 useHttp2:(BOOL)arg11 useCache:(BOOL)arg12 useProfile:(BOOL)arg13;
- (void)triggerDownloadResult:(id)arg1;
- (void)triggerDownloadProgress:(id)arg1;
- (void)triggerDownloadHeader:(id)arg1;
- (id)abortDownloadFile:(id)arg1;
- (void)readFileData:(id)arg1 position:(unsigned int)arg2 length:(unsigned int)arg3 workerId:(unsigned int)arg4 block:(id /* block */)arg5;
- (void)readFileDataSync:(id)arg1 block:(id /* block */)arg2;
- (void)getFileData:(id)arg1 position:(unsigned int)arg2 length:(unsigned int)arg3 completeHandler:(id /* block */)arg4;
- (void)onFileRead:(id)arg1;
- (id)connectWebSocket:(id)arg1 header:(id)arg2 subProtocols:(id)arg3 tcpNoDelay:(BOOL)arg4 perMessageDeflate:(BOOL)arg5 timeout:(unsigned int)arg6 useProfile:(BOOL)arg7 forceCellular:(BOOL)arg8 workerId:(unsigned int)arg9 openHandler:(id /* block */)arg10 messageHandler:(id /* block */)arg11 closeHandler:(id /* block */)arg12 errorHandler:(id /* block */)arg13;
- (void)send:(id)arg1 data:(id)arg2;
- (void)close:(id)arg1 code:(unsigned int)arg2 reason:(id)arg3;
- (void)onWebSocketError:(id)arg1;
- (void)onWebSocketOpen:(id)arg1;
- (void)onWebSocketMsg:(id)arg1;
- (void)onWebSocketClose:(id)arg1;
- (BOOL)isCurrentGameLiving;
- (void)onExitLivingGame;
- (void)checkLiveOnViewDidAppear;
- (BOOL)showCoverVCIfNeeded;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)gameLiveOnViewWillAppear:(BOOL)arg1;
- (void)gameLiveOnViewWillDisappear:(BOOL)arg1;
- (void)gameLiveOnSwitchBackgroundBySystem:(BOOL)arg1;
- (id)onPrompt:(id)arg1 defaultText:(id)arg2;
- (void)onPostMessage:(id)arg1 body:(id)arg2;
- (void)configNativeRender:(id)arg1 appId:(id)arg2;
- (void)onInsertView:(id)arg1;
- (void)onRenderTargetCreated:(id)arg1;
- (void)onProfilerFileGenerated:(id)arg1 type:(id)arg2;
- (void)onRequestCreateNativeCanvas:(int)arg1 width:(int)arg2 height:(int)arg3 isScreenCanvas:(BOOL *)arg4;
- (void)onJITFirstFrame:(int)arg1;
- (BOOL)useJITFirstFrameHideSplash;
- (void)notifyJITBackgroundState:(BOOL)arg1;
- (void)setupJITRuntimeView:(id)arg1;
- (void)setupJITRuntimeTouchInClient:(id)arg1;
- (void)setupJITRuntimeViewMinify:(id)arg1;
- (id)onMessage:(id)arg1 message:(id)arg2;
- (void)wkGameLiveRequest:(id)arg1;
- (void)wkEvaluateJavaScript:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)wkGameRecorderRequest:(id)arg1;
- (void)jitTriggerGC:(BOOL)arg1;
- (void)jitSimulateFullGC;
- (void)jitSimulateFullGCWithDeleteAllCode;
- (void)jitSimulateLowMemory;
- (void)jitDumpGCHeap;
- (void)onStartGLProfile:(id)arg1;
- (void)onStopGLProfile;
- (unsigned long long)setupFrameCaptureMode:(id)arg1;
- (void)onFrameCaptureOperate:(long long)arg1;
- (id)snapShotWindowImage;
- (id)snapShotWebviewImage;
- (id)snapShotInnerWebviewImage;
- (void)setMultiline:(BOOL)arg1;
- (BOOL)multiline;
- (void)setIsNumber:(BOOL)arg1;
- (BOOL)isNumber;
- (void)setKeyboardState:(unsigned long long)arg1;
- (unsigned long long)keyboardState;
- (BOOL)isEmoticonEnable;
- (void)setIsEmoticonEnable:(BOOL)arg1;
- (void)keyboardInsertString:(id)arg1 attributedString:(id)arg2;
- (void)hideKeyboard;
- (void)setKeyboardValue:(id)arg1;
- (BOOL)showKeyboard:(id)arg1 delegate:(id)arg2;
- (void)layoutInputBackgroundButtons:(id)arg1;
- (long long)getConfirmButton:(id)arg1;
- (id)getConfirmCaption:(id)arg1;
- (BOOL)onReturn:(id)arg1;
- (void)setFocus:(id)arg1;
- (void)keyboardOnConfirm;
- (void)keyboardWillShowNotification:(id)arg1;
- (void)keyboardWillHideNotification:(id)arg1;
- (void)keyboardDidShowNotification:(id)arg1;
- (void)keyboardDidHideNotification:(id)arg1;
- (void)textInputDidChange:(id)arg1;
- (void)keyboardOnEmoticonStateDidChanged:(BOOL)arg1;
- (BOOL)isSupportEmoticonBoard;
- (void)initEmoticonBoardService;
- (void)keyboardDidSelectSelfDefinedEmoticonWithMD5:(id)arg1 desc:(id)arg2 productId:(id)arg3 designerId:(id)arg4;
- (void)onClickEmoticonButton;
- (void)switchToEmoticonBoard;
- (void)switchToSystemKeyboard;
- (id)convertEmoticonAttributedTextToPlainText:(id)arg1;
- (void)keyboardDeleteBackward;
- (void)reloadEmoticonButtonImage:(unsigned long long)arg1;
- (void)setEmoticonButtonEnable:(BOOL)arg1;
- (id)getField;
- (void)changeTextViewColorForEmoticonState:(BOOL)arg1;
- (void)setKeyboardAppearance:(id)arg1 WithStr:(id)arg2;
- (void)setEmoticonBoardViewOverrideUserInterfaceStyle:(long long)arg1;
- (void)showEmoticonBoardViewContainerWithAnimateDuration:(double)arg1 curves:(unsigned long long)arg2;
- (void)removeField;
- (void)saveTextSelectRange;
- (id)getCurrentInputPlainText;
- (void)sendOnKeyboardHeightChangeEventWithHeight:(double)arg1 inputHeight:(double)arg2;
- (void)initDebugButton;
- (void)startMockLoadingProgressTimer;
- (void)invadateMockLoadingProgressTimer;
- (void)onTimerMockLoadingProgressTimer;
- (void)printGameFPS;
- (void)resetSubviews;
- (unsigned int)insertChildView:(id)arg1 viewId:(unsigned int)arg2 parentId:(unsigned int)arg3;
- (void)insertSubView:(id)arg1;
- (id)getCanvasImage:(unsigned int)arg1;
- (void)getCanvasImageAsync:(unsigned int)arg1 callback:(id /* block */)arg2;
- (id)getContentWithScaleFactor:(float)arg1;
- (void)setNavRightButtonHidden:(BOOL)arg1;
- (void)setLiteGameCapsuleButtonHidden:(BOOL)arg1;
- (void)showGameEvaluatePopSheetWithConfig:(id)arg1;
- (void)hideGameEvaluatePopSheet;
- (void)showGameReviewPopSheetWithConfig:(id)arg1;
- (void)hideGameReviewPopSheet;
- (id)processWebViewSceenShot2ThumbImage:(id)arg1;
- (void)initBackgroundViewIfNeeded:(BOOL)arg1;
- (void)showBackgroundView;
- (void)setupCoverImage;
- (void)updateUnderGameView:(id)arg1;
- (void)hideSplash;
- (void)setHideSplash:(BOOL)arg1;
- (void)adjustViewLayers;
- (BOOL)isShowStatusBar;
- (void)insertSubViewAboveWebView:(id)arg1;
- (BOOL)shouldUseSmallMenu;
- (double)getCapsuleMenuWidth;
- (double)getCapsuleMenuHeight;
- (CGRect)capsuleMenuOriginalFrame;
- (CGRect)capsuleMenuFrame;
- (CGRect)calculateCapsuleMenuFrame:(double)arg1 height:(double)arg2;
- (long long)capsuleMenuStyleMode;
- (void)onAgeAppropriateClick:(id)arg1;
- (void)setDeviceOrientation:(BOOL)arg1;
- (BOOL)isOrientationLanscape;
- (void)lockOrientation:(long long)arg1;
- (void)unlockOrientation;
- (void)resetOrientation;
- (void)onMenuShow;
- (void)hideShowVConsole;
- (void)shareGame;
- (void)onSwitchVConsole;
- (void)onAddToStar;
- (void)onCancelStar;
- (void)showTipsViewController:(id)arg1;
- (void)gameActionSheet:(id)arg1 clickedButtonTitle:(id)arg2;
- (void)gameActionSheetInfoCliked:(id)arg1;
- (void)gameActionSheetDidDismiss:(id)arg1;
- (void)showTipsViewWithTitle:(id)arg1 content:(id)arg2 tipsTag:(long long)arg3 delegate:(id)arg4;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 tipTag:(long long)arg3;
- (id)menubuttonTitleArray;
- (id)menuDebugButtonTitleArray;
- (BOOL)isInStarList;
- (id)pluginReportPageEvent;
- (struct)getPerformance;
- (void)updatePerf;
- (void)reportGamePerformanceInfo;
- (void)startNewGameReport;
- (void)stopNewGameReport;
- (void)reportNewGamePerformanceInfo;
- (void)collectReportInfo;
- (void)doNewReport;
- (void)reportCommandBufferFPS;
- (long long)getGameDuration;
- (void)doDetectGameQuality;
- (void)doDetectGameQualityIssueReport:(unsigned long long)arg1 subType:(unsigned int)arg2;
- (void)startDetectGameQuality:(BOOL)arg1;
- (void)stopDetectGameQuality;
- (void)pauseDetectGameQuality;
- (void)resumeDetectGameQuality;
- (void)updateReportSceneId:(int)arg1;
- (void)updateReportExtraInfo:(id)arg1;
- (void)updateReportRuntimePlatformInfo:(id)arg1;
- (id)initWithBaseURL:(id)arg1 query:(id)arg2 extraInfo:(id)arg3 delegate:(id)arg4;
- (id)initGameVCForPreloadAppTask:(id)arg1;
- (void)loadWithBaseURL:(id)arg1 query:(id)arg2 extraInfo:(id)arg3 delegate:(id)arg4;
- (void)internalInitWithBaseURL:(id)arg1 query:(id)arg2 extraInfo:(id)arg3 delegate:(id)arg4;
- (BOOL)isThisPageUsePreload;
- (id)getAppLaunchConfig;
- (id)getGLView;
- (id)getPreloadAppLaunchConfig;
- (id)getGameExtraInfo;
- (void)initOpenGLView:(id)arg1;
- (void)initMagicBrushCore:(id)arg1;
- (void)initOpenGLViewOnlyMainThreadPart:(id)arg1;
- (void)setupGLViewLandScape;
- (void)setupSinglePageMode;
- (void)webViewContentProcessDidTerminate:(id)arg1;
- (void)webViewDidFinishLoad:(id)arg1 navigation:(id)arg2;
- (unsigned long long)engineType;
- (unsigned int)getJITLiteMode;
- (void)configWithJITRuntime:(id)arg1 delegate:(id)arg2 config:(id)arg3;
- (void)configWithJITRuntimeForPreload:(id)arg1 config:(id)arg2;
- (void)injectGameScript:(id)arg1 app:(id)arg2;
- (void)injectSourceMap;
- (void)handleInjectGameScriptDataStartByPreload;
- (BOOL)isIndexDataLoaded;
- (BOOL)useTransparentNavibar;
- (void)viewDidLayoutSubviews;
- (BOOL)prefersHomeIndicatorAutoHidden;
- (unsigned long long)preferredScreenEdgesDeferringSystemGestures;
- (void)onWindowBecomeHidden:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)setFullScreen:(BOOL)arg1;
- (BOOL)isGameFunctionalPage;
- (BOOL)DismissMyselfAnimated:(BOOL)arg1;
- (void)onWeAppSwitchBackgroundBySystem:(BOOL)arg1;
- (void)handleEvent:(long long)arg1 userInfo:(id)arg2;
- (void)onLeaveWithCapsuleButton;
- (void)checkAndExitWithAction:(long long)arg1;
- (void)directlyOnAllExit;
- (void)directlyOnAllExitWithAction:(long long)arg1;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (unsigned long long)providedInterfaceOrientationMaskInIphone;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)applicationWillTerminate:(id)arg1;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (id)supportCodeCacheSourceUrlStringWithPublibFileName:(id)arg1;
- (id)publibBytecodeIdentifierWithFileName:(id)arg1;
- (void)gameKVReport:(unsigned int)arg1 logstr:(id)arg2;
- (void)log:(id)arg1 func:(const char *)arg2 line:(int)arg3;
- (void)jsLog:(id)arg1;
- (void)systemLog:(id)arg1;
- (void)onFrameTimeout:(int)arg1;
- (void)onFirstFrameRendered:(unsigned int)arg1;
- (void)onChildViewInserted:(id)arg1;
- (void)onCallbackInitReadyFromPageCall:(BOOL)arg1;
- (void)onFrameBegin;
- (void)onFrameEnd;
- (void)logError:(id)arg1 desc:(id)arg2 stack:(id)arg3;
- (BOOL)isFileExist:(id)arg1;
- (id)getFileData:(id)arg1;
- (id)createImageWithSvgData:(id)arg1 resize:(CGSize)arg2 scale:(double)arg3;
- (id)getCommandBufferScript;
- (void)stop:(BOOL)arg1;
- (__CVBuffer *)getPixelBuffer:(unsigned int)arg1;
- (BOOL)setCaptureDelegate:(unsigned int)arg1 mark:(unsigned int)arg2 options:(id)arg3 delegate:(id)arg4;
- (BOOL)isGameReadyForCapture;
- (void)captureMBCanvas:(unsigned int)arg1 mark:(unsigned int)arg2 delegate:(id)arg3;
- (void)onGameLiveStartPush;
- (void)onGameLiveStopPush;
- (void)onJsException:(id)arg1 stack:(id)arg2;
- (void)onJsLog:(id)arg1;
- (void)onLoadData:(id)arg1 withCallback:(id /* block */)arg2;
- (id)onLoadDataSync:(id)arg1;
- (void)onScreenCanvasCreated:(int)arg1;
- (void)onScreenCanvasGotContext:(int)arg1 contextType:(int)arg2;
- (void)onScreenCanvasStyleChange:(int)arg1 top:(float)arg2 left:(float)arg3 width:(float)arg4 height:(float)arg5 zIndex:(unsigned int)arg6;
- (void)onScreenCanvasRemove:(int)arg1;
- (void)onScreenCanvasFirstFrameRendered:(int)arg1;
- (void)onFrameAvailable:(__CVBuffer *)arg1 inRT:(id)arg2;
- (void)pauseGLView;
- (void)resumeGLView:(BOOL)arg1;
- (void)pauseGLOnly;
- (void)resumeGLOnly;
- (void)initSubContext:(OpaqueJSContext *)arg1;
- (BOOL)isUseCommandBufferInThisAppID;
- (BOOL)isReportCommandBufferPerformance;
- (void)onLoadImageOK:(id)arg1;
- (void)onCloseGameEvaluatePopSheet:(id)arg1;
- (void)writeGameEvaluateResult:(unsigned int)arg1 QuestionId:(id)arg2;
- (void)onCloseGameReviewPopSheet;
- (void)onJumpGameReviewPopSheet:(id)arg1;
- (void)writeGameReviewResult;
- (id)pageOrientation;
- (void)onPopBackInteractiveTransitionBegin:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)interactionControllerForDismissal:(id)arg1;
- (void)notifyOnBeginQuickReplyMsg;
- (void)notifyOnFinishQuickReplyMsg;
- (int)contentProcessID;
- (id)contentProcessInfo;
- (unsigned int)developerMarkedScene;
- (void)setDeveloperMarkedScene:(unsigned int)arg1;
- (BOOL)jitMode;
- (void)setJitMode:(BOOL)arg1;
- (long long)runningGameMode;
- (void)setRunningGameMode:(long long)arg1;
- (long long)frameCaptureState;
- (void)setFrameCaptureState:(long long)arg1;
- (int)frameCaptureRemainingCount;
- (void)setFrameCaptureRemainingCount:(int)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isNewReporting;
- (void)setIsNewReporting:(BOOL)arg1;
- (id)reportSceneMap;
- (void)setReportSceneMap:(id)arg1;
- (long long)reportSceneId;
- (void)setReportSceneId:(long long)arg1;
- (id)reportExtraInfo;
- (void)setReportExtraInfo:(id)arg1;
- (id)reportRuntimePlatformInfo;
- (void)setReportRuntimePlatformInfo:(id)arg1;
- (id)inputBackground;
- (void)setInputBackground:(id)arg1;
- (id)keyboardDelegate;
- (void)setKeyboardDelegate:(id)arg1;
- (id)emoticonBoardService;
- (void)setEmoticonBoardService:(id)arg1;
- (id)emoticonBoardContainerView;
- (void)setEmoticonBoardContainerView:(id)arg1;
- (_NSRange)keyboardSelectedRange;
- (void)setKeyboardSelectedRange:(_NSRange)arg1;
- (id)popBackGesture;
- (void)setPopBackGesture:(id)arg1;
- (id)dismissInteractiveTransition;
- (void)setDismissInteractiveTransition:(id)arg1;
- (unsigned int)removeAtomStringFixGap;
- (void)setRemoveAtomStringFixGap:(unsigned int)arg1;
- (unsigned int)lastRemoveAtomStringFixTimeInS;
- (void)setLastRemoveAtomStringFixTimeInS:(unsigned int)arg1;
- (BOOL)nativeRenderEnterBackground;
- (void)setNativeRenderEnterBackground:(BOOL)arg1;
- (id)jitRuntimeTouchReceiver;
- (void)setJitRuntimeTouchReceiver:(id)arg1;
- (id)mbCore;
- (void)setMbCore:(id)arg1;
- (id)mbMainCanvasView;
- (void)setMbMainCanvasView:(id)arg1;
- (int)mbMainCanvasContextType;
- (void)setMbMainCanvasContextType:(int)arg1;
- (id)mbRenderTarget;
- (void)setMbRenderTarget:(id)arg1;
- (BOOL)detectGameQualityIsPreload;
- (void)setDetectGameQualityIsPreload:(BOOL)arg1;
- (BOOL)detectGameQualityStarted;
- (void)setDetectGameQualityStarted:(BOOL)arg1;
- (BOOL)detectGameQualityPaused;
- (void)setDetectGameQualityPaused:(BOOL)arg1;
- (int)detectGameQualityFirstFrameWaitCount;
- (void)setDetectGameQualityFirstFrameWaitCount:(int)arg1;
- (BOOL)allRotation;
- (void)setAllRotation:(BOOL)arg1;
- (id)workerThreads;
- (void)setWorkerThreads:(id)arg1;
- (id)mbCaptureInfos;
- (void)setMbCaptureInfos:(id)arg1;
- (id)mbCanvasMap;
- (void)setMbCanvasMap:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
