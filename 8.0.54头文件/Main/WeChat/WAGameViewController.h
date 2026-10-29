@interface WAGameViewController : WAWebViewController <JITRuntimeDataTransferDelegate, JITRuntimeNativeRenderDelegate, WAGameActionSheetDelegate, WAOpenGLViewDelegate, WABindingDelegate, YYWebViewDelegate, WAWebViewMutiFuncMenuViewDataSource, WAWebViewMutiFuncMenuViewDelegate, WAPopInteractiveTransitionDelegate, MagicBrushCoreJSStuffDelegate, MagicBrushCoreResourceDelegate, MagicBrushCoreScreenCanvasDelegate, MagicBrushCVPixelBufferRTDelegate, WAGameEvaluatePopSheetDelegate, WAGameReviewPopSheetDelegate, MMWebImageViewDelegate>
{
    WAOpenGLView * _glView; // +0x228
    WAGameActionSheet * _gameSheet; // +0x230
    RCDraggableButton * _debugBtn; // +0x238
    YYWAWebView * _debugWebView; // +0x240
    MMWebImageView * _coverImageView; // +0x248
    UIView * _backgroundView; // +0x250
    BOOL _vConsoleVisible; // +0x258
    BOOL _useDebug; // +0x259
    float _mockprogress; // +0x25c
    WAGameRollProgressView * m_gameloadingAnimationView; // +0x260
    UILabel * _progressLabel; // +0x268
    unsigned long long _lockedOrientation; // +0x270
    long long _deviceOrientation; // +0x278
    BOOL _manualHideSplash; // +0x280
    BOOL _showStatusBar; // +0x281
    NSString * m_customProgressBarColor; // +0x288
    CADisplayLink * _timerMockLoadingProgress; // +0x290
    long long _fpsTestNum; // +0x298
    UILabel * _performance; // +0x2a0
    long long _reportPerformanceInterval; // +0x2a8
    BOOL _reportPerformance; // +0x2b0
    BOOL _lightPerformanceReport; // +0x2b1
    unsigned int _fpsLagWindowSize; // +0x2b4
    unsigned int _fpsLagWindowDiff; // +0x2b8
    unsigned int _fpsLowThreshold; // +0x2bc
    long long _reportCBFPSInterval; // +0x2c0
    long long _initMemory; // +0x2c8
    long long _initMemoryInFootprint; // +0x2d0
    unsigned int _sampleInterval; // +0x2d8
    unsigned int _sampleCounter; // +0x2dc
    unsigned int _sampleFpsLagCounter; // +0x2e0
    unsigned int _sampleFpsLowCounter; // +0x2e4
    list<unsigned int, std::allocator<unsigned int>> _sampleDataList; // +0x2e8
    int _sampleDataFpsAmount; // +0x300
    NSObject<OS_dispatch_queue> * _readfileQueue; // +0x308
    WAGameEvaluatePopSheet * _gameEvaluateView; // +0x310
    WAGameReviewPopSheet * _gameReviewView; // +0x318
    WCActionSheet * _liveExitAskActionSheet; // +0x320
    WCActionSheet * _liveExitConfirmActionSheet; // +0x328
    WAJITRuntime * _jitRuntime; // +0x330
    int _nativeRenderMainCanvasId; // +0x338
    BOOL _hadCallbackInitReadyFromPageCall; // +0x33c
    BOOL _vConsoleFnishLoad; // +0x33d
    NSMutableArray * _logs; // +0x340
    NSMutableArray * _delayedGestures; // +0x348
    BOOL _autoRotate; // +0x350
    GameEngineApp * _app; // +0x358
    BOOL _addedJITRuntime; // +0x360
    BOOL _jitMode; // +0x361
    BOOL _nativeRenderEnterBackground; // +0x362
    BOOL _detectGameQualityIsPreload; // +0x363
    BOOL _detectGameQualityStarted; // +0x364
    BOOL _detectGameQualityPaused; // +0x365
    BOOL _allRotation; // +0x366
    unsigned int _developerMarkedScene; // +0x368
    int _frameCaptureRemainingCount; // +0x36c
    unsigned int _removeAtomStringFixGap; // +0x370
    unsigned int _lastRemoveAtomStringFixTimeInS; // +0x374
    int _mbMainCanvasContextType; // +0x378
    int _detectGameQualityFirstFrameWaitCount; // +0x37c
    unsigned int _jitLiteMode; // +0x380
    long long _runningGameMode; // +0x388
    long long _frameCaptureState; // +0x390
    id <WAGameContextDelegate> _delegate; // +0x398
    UIView * _inputBackground; // +0x3a0
    id <WAGameKeyboardDelegate> _keyboardDelegate; // +0x3a8
    id <IWAEmoticonBoardService> _emoticonBoardService; // +0x3b0
    UIView * _emoticonBoardContainerView; // +0x3b8
    UIScreenEdgePanGestureRecognizer * _popBackGesture; // +0x3c0
    WAMenuPopInteractiveTransition * _dismissInteractiveTransition; // +0x3c8
    JITRuntimeTouchReceiverView * _jitRuntimeTouchReceiver; // +0x3d0
    MagicBrushCore * _mbCore; // +0x3d8
    MBGLView * _mbMainCanvasView; // +0x3e0
    MagicBrushEAGLLayerRT * _mbRenderTarget; // +0x3e8
    NSMutableDictionary * _workerThreads; // +0x3f0
    NSMutableDictionary * _mbCaptureInfos; // +0x3f8
    NSMutableDictionary * _mbCanvasMap; // +0x400
    _NSRange _keyboardSelectedRange; // +0x408
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
- (id)processBuffer:(id)arg1 extBuffer:(id)arg2;
- (void)jitSwapWindow;
- (void)jitCreateNativeCanvas:(int)arg1 width:(int)arg2 height:(int)arg3 isScreenCanvas:(BOOL)arg4;
- (void)jitResizeNativeCanvas:(int)arg1 width:(int)arg2 height:(int)arg3;
- (void)jitNativeCanvasGetContext:(int)arg1 contextId:(int)arg2 contextType:(id)arg3 options:(id)arg4;
- (void)jitDestroyNativeCanvas:(int)arg1;
- (void)jitNativeCanvasSetStyle:(int)arg1 x:(float)arg2 y:(float)arg3 width:(float)arg4 height:(float)arg5 zIndex:(int)arg6;
- (id)jitNativeCanvasToDataURL:(int)arg1 type:(id)arg2 encoderOptions:(float)arg3;
- (void)jitLoadImage:(int)arg1 withSrc:(id)arg2 callback:(id /* block */)arg3;
- (void)jitDestroyImage:(int)arg1;
- (id)jitLoadCustomFont:(id)arg1;
- (void)onInsertView:(id)arg1;
- (void)onRenderTargetCreated:(id)arg1;
- (void)onProfilerFileGenerated:(id)arg1 type:(id)arg2;
- (void)onJITFirstFrame:(int)arg1;
- (BOOL)useJITFirstFrameHideSplash;
- (void)notifyJITBackgroundState:(BOOL)arg1;
- (void)setupJITRuntimeView:(id)arg1;
- (void)setupJITRuntimeTouchInClient:(id)arg1;
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
- (void)reportCommandBufferFPS;
- (long long)getGameDuration;
- (void)doDetectGameQuality;
- (void)doDetectGameQualityIssueReport:(unsigned long long)arg1 subType:(unsigned int)arg2;
- (void)startDetectGameQuality:(BOOL)arg1;
- (void)stopDetectGameQuality;
- (void)pauseDetectGameQuality;
- (void)resumeDetectGameQuality;
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
- (unsigned int)jitLiteMode;
- (void)setJitLiteMode:(unsigned int)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

