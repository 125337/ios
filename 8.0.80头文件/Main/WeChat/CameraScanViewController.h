@interface CameraScanViewController : MMUIViewController <ScanAILogicControllerDelegate, MMImagePickerManagerDelegate, IVOIPUILogicMgrExt, CameraScannerStatusExt, MultiTalkMgrExt, WAUINavigationControllerDelegate, WCCameraModuleDelegate, MMUIViewControllerExt, CameraScanTabViewDelegate, CameraScanTipsViewDelegate, CameraScanAuthorizerDelegate, CameraScannerViewStatusDelegate, CameraScanEnergyTrackerDelegate, CameraScanServiceCameraExt, UIGestureRecognizerDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, WCActionSheetDelegate, BaseScanLogicDelegate, CNetworkStatusExt>
{
    long long _cameraScanType; // +0x70
    long long _scanTabAction; // +0x78
    int _cameraScanCodeType; // +0x80
    BOOL _hideBottomBar; // +0x84
    id <CameraScanUIDelegate> _delegate; // +0x88
    NSMutableDictionary * _logicDict; // +0x90
    unsigned int _beepSound; // +0x98
    BOOL _isManualCameraZoom; // +0x9c
    OCRTransReport * _transReport; // +0xa0
    BOOL _isNetDisconnect; // +0xa8
    BOOL _bTorchViewHidden; // +0xa9
    BOOL _hasInit; // +0xaa
    BOOL _hasInvokedViewDidLoad; // +0xab
    BOOL _delayPopSelfTillTopVCDidPush; // +0xac
    BOOL _isShowCameraErrorTips; // +0xad
    BOOL _isPickingImageFromAlbum; // +0xae
    BOOL _isShowingAlertView; // +0xaf
    BOOL _isLoading; // +0xb0
    BOOL _enableOperateReporter; // +0xb1
    BOOL _suppressNextFloatingButtonExpose; // +0xb2
    BOOL _enableScanAIUIV2; // +0xb3
    BOOL _scanAIFloatingButtonHadRedDotOnClick; // +0xb4
    BOOL _scanAIActiveRequestFromAlbum; // +0xb5
    BOOL _scanAIHalfScreenCaptureSessionSuspended; // +0xb6
    BOOL _scanAIHalfScreenVisible; // +0xb7
    BOOL _scanAIConversationActive; // +0xb8
    BOOL _enableCombineTab; // +0xb9
    BOOL _enableAskAI; // +0xba
    BOOL _forceTorchHide; // +0xbb
    unsigned int _enterSessionID; // +0xbc
    unsigned int _tabSessionID; // +0xc0
    CameraScanViewControllerOpenParams * _openParams; // +0xc8
    unsigned long long _enterScene; // +0xd0
    CameraScannerView * _cameraView; // +0xd8
    CameraScanService * _scanService; // +0xe0
    CameraOpButtonWrapView * _mixAlbumWrapView; // +0xe8
    UIImageView * _bgImageView; // +0xf0
    UILabel * _infoLabel; // +0xf8
    CameraScanTabView * _tabView; // +0x100
    UIView * _tabMaskView; // +0x108
    MMUIButton * _closeButton; // +0x110
    MMUIButton * _torchButton; // +0x118
    UILabel * _torchLabel; // +0x120
    UILabel * _descLabel; // +0x128
    UIView * _alertBgView; // +0x130
    UILabel * _alertLabel; // +0x138
    UILabel * _smallAlertLabel; // +0x140
    RecentPhotoBubbleView * _recentPhotoBubbleView; // +0x148
    long long _lastLayoutInterfaceOrientation; // +0x150
    double _lastDuoBottomOpHorizontalInset; // +0x158
    UISwipeGestureRecognizer * _leftSwipeGesture; // +0x160
    UISwipeGestureRecognizer * _rightSwipeGesture; // +0x168
    UITapGestureRecognizer * _singleTapGesture; // +0x170
    UITapGestureRecognizer * _doubleTapGesture; // +0x178
    CameraScannerViewWrapper * _cameraScannerWrapper; // +0x180
    BizScanTabBarInfo * _tabBarInfo; // +0x188
    MMUIViewController * _vcPushingAnotherVC; // +0x190
    CameraScanTipsView * _cameraErrorTipsView; // +0x198
    unsigned long long _enterTimestampInMS; // +0x1a0
    unsigned long long _enterTimestampIn1970MS; // +0x1a8
    double _vcInitTime; // +0x1b0
    CameraScanEnergyTracker * _energyTracker; // +0x1b8
    WCPayF2fHBHalfPageSheet * _f2fHbMigration; // +0x1c0
    CameraAskQuestionFloatingButtonView * _scanAIFloatingButton; // +0x1c8
    MMUIButton * _scanAICameraFlipButton; // +0x1d0
    MMUIButton * _scanAIHistoryButton; // +0x1d8
    CameraOpButtonWrapView * _scanAICameraFlipButtonWrapView; // +0x1e0
    CameraAIContentView * _scanAIContentView; // +0x1e8
    ScanAILogicController * _scanAILogicController; // +0x1f0
    ScanAIVideoIntentFacade * _scanAIVideoIntentFacade; // +0x1f8
    ScanAIVideoIntentFlowController * _scanAIVideoIntentFlowController; // +0x200
    UIImage * _scanAICapturedImage; // +0x208
    unsigned long long _scanAIFloatingButtonGestureState; // +0x210
    long long _scanAIActiveTriggerType; // +0x218
    unsigned long long _scanAIActiveRequestId; // +0x220
    unsigned long long _scanAIClickPreviewPendingRequestId; // +0x228
    NSNumber * _scanAIImageCDNUploadSampleResult; // +0x230
    CameraScanAIFlowContext * _scanAIRecognitionFlowContext; // +0x238
    CameraScanAIQBarInterceptContext * _scanAIQBarInterceptContext; // +0x240
    ScanAskQuestionRouteHelper * _scanAskQuestionRouteHelper; // +0x248
    id /* block */ _scanAIPendingHalfScreenWillAppearBlock; // +0x250
    id /* block */ _scanAIPendingHalfScreenShownBlock; // +0x258
    NSString * _scanAIPendingHalfScreenSourceId; // +0x260
    NSMutableArray * _scanAIPicIntentHistoryList; // +0x268
    unsigned long long _mixedSwitchValue; // +0x270
}
- (BOOL)isScanAIQBarIntercepting;
- (id)scanAIQBarInterceptOperationViews;
- (void)beginScanAIQBarInterceptWithSubtitle:(id)arg1 backgroundImage:(id)arg2 sourceImage:(id)arg3 flowContext:(id)arg4 resumeScanOnCancel:(BOOL)arg5 cancelAction:(id /* block */)arg6 askAIAction:(id /* block */)arg7;
- (void)endScanAIQBarInterceptAndResumeScan:(BOOL)arg1;
- (void)hideScanAIQBarInterceptOperationViews;
- (void)restoreScanAIQBarInterceptOperationViews;
- (void)cameraScanAIQBarInterceptViewDidPresent:(id)arg1;
- (void)cameraScanAIQBarInterceptViewDidDismiss:(id)arg1;
- (void)cameraScanAIQBarInterceptViewDidTapCancel:(id)arg1;
- (void)cameraScanAIQBarInterceptViewDidSwipeRight:(id)arg1;
- (void)cameraScanAIQBarInterceptViewDidTapBlankArea:(id)arg1;
- (void)cancelScanAIQBarInterceptWithReason:(id)arg1;
- (void)cameraScanAIQBarInterceptViewDidTapAskAI:(id)arg1;
- (void)setupAIComponents;
- (void)setupScanAILogicController;
- (void)setupScanAIVideoIntentDetection;
- (void)resetPicIntentHistoryList:(id)arg1;
- (void)setupScanAIFloatingButton;
- (id)scanAIPAGViewWithResourceName:(id)arg1;
- (void)setupScanAIHistoryButton;
- (void)setupScanAICameraFlipButton;
- (void)layoutScanAIFloatingButtonWithLeftOpView:(id)arg1 rightOpView:(id)arg2 centerY:(double)arg3;
- (void)layoutScanAICameraFlipButton;
- (void)layoutScanAIHistoryButton;
- (void)setScanAIFloatingButtonHidden:(BOOL)arg1;
- (void)tearDownScanAIHalfScreenSessionOnExit;
- (void)cancelScanAIOnStopScanIfNeeded;
- (BOOL)isInScanAIMode;
- (void)startScanAIVideoIntentSession;
- (void)stopScanAIVideoIntentSession;
- (void)handleScanAIVideoIntentImageBuffer:(__CVBuffer *)arg1;
- (id)scanAIFloatingButtonSubtitleForIntentType:(long long)arg1;
- (void)updateScanAIFloatingButtonSubtitleWithIntentResult:(id)arg1;
- (void)videoIntentFlowController:(id)arg1 didOutputResult:(id)arg2;
- (id)ensureScanAIContentView;
- (void)handleScanAIProcessingCancel;
- (void)suspendScanAIScanIfNeeded;
- (void)suspendScanAIHalfScreenCaptureSessionIfNeeded;
- (void)resumeScanAIScanIfNeeded;
- (void)prepareScanAIProcessingContentForClickRequestId:(unsigned long long)arg1;
- (void)showScanAIProcessingContentForClickRequestId:(unsigned long long)arg1 capturedImage:(id)arg2;
- (CGRect)scanAICameraFrameInContentView:(id)arg1;
- (void)showScanAILongPressPreparingContentForRequestId:(unsigned long long)arg1;
- (void)finishScanAIContentForRequestId:(unsigned long long)arg1 reason:(id)arg2;
- (void)finishScanAIContentForRequestId:(unsigned long long)arg1 reason:(id)arg2 resumeScan:(BOOL)arg3;
- (id)scanAIHalfScreenErrorToastTextForRouteResult:(long long)arg1 error:(id)arg2;
- (id)newScanAIFlowContextWithType:(unsigned long long)arg1 hasRedDot:(BOOL)arg2 isUsingFrontCamera:(BOOL)arg3;
- (void)uploadScanAIImageToCDN:(id)arg1 forFlowContext:(id)arg2;
- (BOOL)shouldUploadNonInterceptScanAIImage;
- (void)prepareNonInterceptImageCDNUploadIfNeeded:(id)arg1 flowContext:(id)arg2;
- (void)reportQBarInterceptExposureForFlowContext:(id)arg1 source:(id)arg2;
- (long long)qBarInterceptPicFromForFlowContext:(id)arg1;
- (void)reportQBarIntercept33924ExposureForFlowContext:(id)arg1;
- (void)reportQBarIntercept33924ClickWithViewId:(id)arg1;
- (void)reportScanAIFlowContext:(id)arg1 stageCode:(unsigned int)arg2 reason:(id)arg3 extraInfo:(id)arg4;
- (id)scanAIRecognitionFlowContextForRequestId:(unsigned long long)arg1;
- (void)interruptScanAIRecognitionFlowIfNeededWithReason:(id)arg1;
- (id)scanAIFlowReasonForLogicError:(id)arg1;
- (id)scanAIFlowReasonForRouteResult:(long long)arg1;
- (id)scanAICurrentCameraScannerView;
- (void)onScanAICameraFlipButtonClicked;
- (BOOL)hasActiveScanAIButtonFlow;
- (void)logScanAIButtonConflictWithAction:(id)arg1;
- (id)scanAILongPressStateName:(long long)arg1;
- (BOOL)scanAILongPressLocationInCancelArea:(CGPoint)arg1;
- (void)playScanAICaptureFeedbackHapticWithStyle:(long long)arg1;
- (BOOL)shouldPlayScanAILongPressCaptureFeedbackSound;
- (void)playScanAICaptureFeedbackSoundWithStyle:(long long)arg1 requestId:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)scheduleScanAILongPressVoiceStartAfterCaptureFeedbackForRequestId:(unsigned long long)arg1;
- (id)ensureScanAskQuestionRouteHelper;
- (unsigned long long)beginScanAIClickRequestWithSourceImage:(id)arg1 bypassClickPreview:(BOOL)arg2 playCaptureFeedback:(BOOL)arg3;
- (unsigned long long)beginScanAIClickRequestWithSourceImage:(id)arg1;
- (BOOL)startScanAIClickRequestWithAlbumImage:(id)arg1;
- (BOOL)startScanAIClickRequestWithAlbumImage:(id)arg1 halfScreenDidAppearCallback:(id /* block */)arg2;
- (BOOL)startScanAIClickRequestWithAlbumImage:(id)arg1 rescanCallback:(id /* block */)arg2;
- (BOOL)startScanAIClickRequestWithAlbumImage:(id)arg1 halfScreenDidAppearCallback:(id /* block */)arg2 rescanCallback:(id /* block */)arg3;
- (BOOL)startScanAIClickRequestWithAlbumImage:(id)arg1 halfScreenDidAppearCallback:(id /* block */)arg2 rescanCallback:(id /* block */)arg3 bypassClickPreview:(BOOL)arg4 flowContext:(id)arg5;
- (BOOL)scanAIConversationEntryEnabled;
- (void)onScanAIHistoryButtonClicked;
- (void)reportScanAIConversationRedirectWithReuseAction:(int)arg1;
- (void)finishScanAIConversationEntry;
- (void)onScanAIFloatingButtonClicked;
- (void)startScanAIFloatingButtonClickWithFlowContext:(id)arg1;
- (void)startScanAIFloatingButtonClickWithFlowContext:(id)arg1 bypassClickPreview:(BOOL)arg2 playCaptureFeedback:(BOOL)arg3;
- (void)resetScanAIFloatingButtonGestureStateSoon;
- (void)onScanAIFloatingButtonLongPressed:(id)arg1;
- (void)scanAIController:(id)arg1 didChangeState:(long long)arg2 requestId:(unsigned long long)arg3;
- (void)scanAIController:(id)arg1 didStartVoiceRequest:(unsigned long long)arg2;
- (void)scanAIController:(id)arg1 didReceiveVoiceText:(id)arg2 requestId:(unsigned long long)arg3;
- (void)scanAIController:(id)arg1 didCaptureImage:(id)arg2 requestId:(unsigned long long)arg3;
- (void)scanAIController:(id)arg1 didReadyResult:(id)arg2;
- (void)showScanAIFlutterHalfScreenWithController:(id)arg1 result:(id)arg2 intentResult:(id)arg3 intentType:(long long)arg4 enterScene:(int)arg5 flowContext:(id)arg6 routeHelper:(id)arg7 isClickResult:(BOOL)arg8 useConversationRoute:(BOOL)arg9;
- (id)scanAIBuildRouteShowDetailWithHelper:(id)arg1 didTriggerPrefetch:(BOOL)arg2;
- (void)scanAIController:(id)arg1 didFailWithError:(id)arg2 requestId:(unsigned long long)arg3;
- (void)armScanAIPendingHalfScreenFadeWithWillAppearBlock:(id /* block */)arg1 didAppearBlock:(id /* block */)arg2 sourceId:(id)arg3 requestId:(unsigned long long)arg4;
- (void)scheduleScanAIPendingHalfScreenShownFallbackWithSourceId:(id)arg1 requestId:(unsigned long long)arg2;
- (void)consumeScanAIPendingHalfScreenWillAppearBlockWithReason:(id)arg1;
- (void)consumeScanAIPendingHalfScreenShownBlockWithReason:(id)arg1;
- (void)clearScanAIPendingHalfScreenFadeBlocksWithReason:(id)arg1;
- (BOOL)shouldConsumeScanAIHalfScreenBroadcastWithSourceId:(id)arg1;
- (void)reportScanAIFloatingButtonExposeIfNeeded;
- (id)init;
- (id)initWithCameraScanType:(long long)arg1 presentModal:(BOOL)arg2 enterScene:(unsigned long long)arg3 bottomBarConfig:(unsigned long long)arg4 openParams:(id)arg5;
- (id)initWithCameraScanType:(long long)arg1 CodeType:(int)arg2 presentModal:(BOOL)arg3 enterScene:(unsigned long long)arg4 bottomBarConfig:(unsigned long long)arg5 openParams:(id)arg6;
- (void)initBottomBarHidden:(unsigned long long)arg1;
- (void)initMember;
- (void)dealloc;
- (void)initCameraView;
- (void)initView;
- (void)onRecentPhotoButtonClicked;
- (void)tryHideRecentPhotoBubbleView;
- (void)setupBgImageView;
- (void)setupMixedAlbumButtonWrapView;
- (void)setupCameraTipsView;
- (void)centerLabelShowStart;
- (void)centerLabelShowEnd;
- (void)hiddenCameraTips;
- (void)setCameraTipsHiddenForFlow:(BOOL)arg1;
- (void)switchFrontCamera;
- (void)setupCloseButton;
- (void)setupCommonViews;
- (void)shouldHideInteracitvesBtns:(BOOL)arg1;
- (void)initGesture;
- (BOOL)useTransparentNavibar;
- (void)viewDidLoad;
- (void)setupTabView;
- (BOOL)useBlackStatusbar;
- (BOOL)canShowMiniTaskStarFloatingView;
- (void)viewDidLayoutSubviews;
- (double)getCloseBtnCenterY;
- (void)realDidRotateFromInterfaceOrientation;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)UISplitViewWillChangeSplitMode;
- (void)viewDidTransitionToNewSize;
- (void)setScannerDelegate:(id)arg1 cameraScanType:(long long)arg2;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)viewWillBePushed:(BOOL)arg1;
- (void)viewDidBePushed:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (BOOL)shouldStopScanAndPopSelf;
- (void)stopScanAndPopSelf;
- (void)dismissSelfAndDoReset;
- (void)viewDidPush:(BOOL)arg1;
- (void)viewDidPresent:(BOOL)arg1;
- (void)enterBackground;
- (void)enterForeground;
- (void)startScan;
- (void)startActiveLogicScan;
- (void)stopScan;
- (void)restartScan;
- (void)cameraModuleInterruptionBegin:(id)arg1;
- (void)cameraModuleInterruptionEnd:(id)arg1;
- (long long)cameraModuleReportScene;
- (void)stopLoadingDark;
- (BOOL)hasScanLogicController:(long long)arg1;
- (id)getActiveLogicController;
- (id)getScanLogicController:(long long)arg1;
- (void)ensureHasInvokedViewDidLoad;
- (void)resetOldLogicController;
- (void)resetCameraZoomFactor;
- (void)switchToLogicController:(long long)arg1 fromAction:(long long)arg2;
- (void)openLogicController:(long long)arg1 tabAction:(long long)arg2;
- (void)initActiveLogicControllerFromSwitchTab:(BOOL)arg1;
- (BOOL)shouldResetScanWhenViewWillAppear;
- (BOOL)shouldResetScanWhenViewDidAppear;
- (void)updateWording;
- (void)showAlertWording:(id)arg1 Animated:(BOOL)arg2;
- (void)hideAlertWording;
- (float)getPreviewScale:(long long)arg1;
- (double)getTabViewHeight;
- (BOOL)isTorchViewHiddenNow;
- (float)getContentHeight;
- (CGRect)getContentRect;
- (void)onQRCodeAction:(id)arg1;
- (void)onOCRAlbumAction:(id)arg1;
- (BOOL)preViewControllerIsKindOf:(Class)arg1;
- (void)reportAfterExit;
- (void)reportAfterBePoped;
- (void)resetWhenAppearOrFromSwitchTab:(BOOL)arg1;
- (void)reportScanControlExposures;
- (void)reportWhenDisappear:(unsigned int)arg1;
- (void)updateTorchButtonFrame;
- (void)setupTorchViewsWithOutAddToSuperView;
- (void)showTorchButton;
- (void)tryHideTorchButton;
- (void)doHideTorchButton;
- (void)onTorchButtonClicked:(id)arg1;
- (void)showAndStartLoadingView:(id)arg1;
- (void)stopAndHideLoadingView;
- (void)setSwipeGestureEnable:(BOOL)arg1;
- (void)callDismissCamearaScanViewCotroller:(id /* block */)arg1;
- (void)callSetTabMaskViewHidden:(BOOL)arg1;
- (void)onIKnowItBtnClick;
- (void)showImagePicker;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)scanPickedImage:(id)arg1;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (BOOL)shouldInterceptTapGesture:(id)arg1;
- (BOOL)isInteractiveView:(id)arg1;
- (void)tapAtPoint:(id)arg1;
- (void)onDoubleTapGesture:(id)arg1;
- (void)onPinchGesture:(id)arg1;
- (void)onLeftSwipeGesture:(id)arg1;
- (void)onRightSwipeGesture:(id)arg1;
- (BOOL)isGestureInValidLocation:(id)arg1;
- (BOOL)shouldIgnoreSwipeGestureEvent:(id)arg1;
- (void)ReachabilityChange:(unsigned int)arg1;
- (BOOL)canScanInCurrentReachability;
- (void)onLowLightStatusChanged:(BOOL)arg1;
- (void)onBrightnessValueUpdate:(float)arg1;
- (void)onCameraScannerViewDidInit:(id)arg1;
- (void)onCameraScannerViewDidRecover:(id)arg1;
- (void)onCameraOutputTimeout:(long long)arg1;
- (id)getNavigationController;
- (void)onPushViewController:(id)arg1 animated:(BOOL)arg2;
- (void)onPopViewControllerCount:(int)arg1 animated:(BOOL)arg2;
- (void)onPresentModalViewController:(id)arg1 animated:(BOOL)arg2;
- (void)onDismissModalViewControllerAnimated:(BOOL)arg1;
- (void)onEdgePanGestureRecognizerChanged:(BOOL)arg1;
- (void)onPopFromStack;
- (void)onStartLoading;
- (void)onStopLoading;
- (void)onCameraTipsAvoidanceFlowChanged:(id)arg1 active:(BOOL)arg2;
- (void)onDetectSuccess;
- (id)getMainViewController;
- (void)onUpdateWording;
- (void)setInfoLabelHidden:(BOOL)arg1 bAnim:(BOOL)arg2;
- (void)onShowAlertWording;
- (void)onScanInUnreachableNetworkStatus;
- (void)onScanRequestTimeout;
- (void)onSetCameraZoomFactor:(double)arg1;
- (double)getZoomFactor;
- (void)voipWindowMinimized;
- (void)voipWindowMaximized;
- (BOOL)shouldHandleDetectResult:(id)arg1;
- (BOOL)isGoodsLogicCtrlActiveAndHandlingResult;
- (BOOL)isScanCodeLogicCtrlActiveAndShowingError;
- (BOOL)isScanCodeLogicCtrlActiveAndHandlingMultiCodes;
- (BOOL)isScanCodeLogicCtrlActiveAndShowingScanGoodsGuide;
- (BOOL)isScanCodeLogicCtrlActiveAndShowingMyQRCode;
- (BOOL)isOCRTransLogicCtrActive;
- (void)onFetchedLastAssetOriginImage:(id)arg1 ThumbImage:(id)arg2;
- (BOOL)shouldViewControllerDisplayRecentPhotoBubble;
- (void)tabSwitchWithDiffValue:(long long)arg1 tabAction:(long long)arg2;
- (void)stopCurrLogicCtrlHandler;
- (void)startLogicCtrlHandler:(long long)arg1 tabAction:(long long)arg2;
- (unsigned int)getUISessionID;
- (long long)currentCameraTabTypeForReport;
- (void)reportSwitchToTab:(long long)arg1 tabAction:(long long)arg2;
- (void)onVideoVoipViewDidAppear:(id)arg1;
- (void)onVideoVoipViewDisappear;
- (void)onVoipMinimized;
- (void)onVoipMaximized;
- (void)onInviteMultiTalk;
- (void)onMultiTalkMinimized;
- (void)onMultiTalkMaximized;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)tabView:(id)arg1 didSelectTag:(unsigned long long)arg2 fromAction:(long long)arg3;
- (BOOL)isForbidSwitchTabIndex;
- (BOOL)navigationController:(id)arg1 shouldUsePresentWhenPushViewController:(id)arg2 animated:(BOOL)arg3 scene:(unsigned long long)arg4;
- (BOOL)isNetworkDisconnect;
- (BOOL)isActiveLogicController:(id)arg1;
- (void)onCloseButtonClicked;
- (void)onAlbumButtonClicked;
- (void)onMyQRButtonClicked;
- (void)onTakePhotoButtonClicked;
- (void)setCommonViewsOfLogicController:(id)arg1;
- (void)resetCommonViewsLogicController:(id)arg1;
- (double)duoExpandedBottomOpHorizontalInset;
- (id)getCodesLogicControllerIfCodesActive;
- (id)getGoodsLogicControllerIfCodesActive;
- (long long)businessTypeForEnterScene:(unsigned long long)arg1;
- (long long)businessSubTypeForScanTabAction:(long long)arg1;
- (BOOL)canShowTabBarItemOCRTranslate;
- (BOOL)calScanGoodCombineSwicthState;
- (BOOL)calScanAskAISwitchState;
- (id)codeTabName;
- (void)didReceiveMemoryWarning;
- (void)onScanCodeFinish;
- (void)registerYReportSdk;
- (unsigned long long)authScene;
- (void)MMUIViewControllerWillPushOrPresent:(id)arg1;
- (void)MMUIViewControllerDidPushOrPresent:(id)arg1;
- (void)requrireCameraAuthorize;
- (void)releaseCameraAuthorize;
- (void)authorizeNeedCancel;
- (BOOL)hasCurrentVCAuthorized:(SEL)arg1;
- (void)onCameraRuntimeError:(id)arg1;
- (void)onCameraStartRunning:(id)arg1;
- (void)onCameraStopRunning:(id)arg1;
- (void)onCameraInterrupted:(id)arg1;
- (void)onCameraInterruptionEnded:(id)arg1;
- (void)shouldShowF2FHBMigrationSheet;
- (void)onCameraOutputFrame;
- (void)energyTracker:(id)arg1 didUpdateLiveData:(id)arg2;
- (long long)cameraScanType;
- (void)setCameraScanType:(long long)arg1;
- (BOOL)hideBottomBar;
- (void)setHideBottomBar:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (int)cameraScanCodeType;
- (id)openParams;
- (void)setOpenParams:(id)arg1;
- (unsigned long long)enterScene;
- (void)setEnterScene:(unsigned long long)arg1;
- (id)cameraView;
- (void)setCameraView:(id)arg1;
- (id)scanService;
- (void)setScanService:(id)arg1;
- (id)mixAlbumWrapView;
- (void)setMixAlbumWrapView:(id)arg1;
- (id)bgImageView;
- (void)setBgImageView:(id)arg1;
- (BOOL)isNetDisconnect;
- (void)setIsNetDisconnect:(BOOL)arg1;
- (id)infoLabel;
- (void)setInfoLabel:(id)arg1;
- (id)tabView;
- (void)setTabView:(id)arg1;
- (id)tabMaskView;
- (void)setTabMaskView:(id)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (id)torchButton;
- (void)setTorchButton:(id)arg1;
- (id)torchLabel;
- (void)setTorchLabel:(id)arg1;
- (BOOL)bTorchViewHidden;
- (void)setBTorchViewHidden:(BOOL)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)alertBgView;
- (void)setAlertBgView:(id)arg1;
- (id)alertLabel;
- (void)setAlertLabel:(id)arg1;
- (id)smallAlertLabel;
- (void)setSmallAlertLabel:(id)arg1;
- (id)recentPhotoBubbleView;
- (void)setRecentPhotoBubbleView:(id)arg1;
- (BOOL)hasInit;
- (void)setHasInit:(BOOL)arg1;
- (BOOL)hasInvokedViewDidLoad;
- (void)setHasInvokedViewDidLoad:(BOOL)arg1;
- (long long)lastLayoutInterfaceOrientation;
- (void)setLastLayoutInterfaceOrientation:(long long)arg1;
- (double)lastDuoBottomOpHorizontalInset;
- (void)setLastDuoBottomOpHorizontalInset:(double)arg1;
- (id)leftSwipeGesture;
- (void)setLeftSwipeGesture:(id)arg1;
- (id)rightSwipeGesture;
- (void)setRightSwipeGesture:(id)arg1;
- (id)singleTapGesture;
- (void)setSingleTapGesture:(id)arg1;
- (id)doubleTapGesture;
- (void)setDoubleTapGesture:(id)arg1;
- (id)cameraScannerWrapper;
- (void)setCameraScannerWrapper:(id)arg1;
- (id)tabBarInfo;
- (void)setTabBarInfo:(id)arg1;
- (id)vcPushingAnotherVC;
- (void)setVcPushingAnotherVC:(id)arg1;
- (BOOL)delayPopSelfTillTopVCDidPush;
- (void)setDelayPopSelfTillTopVCDidPush:(BOOL)arg1;
- (id)cameraErrorTipsView;
- (void)setCameraErrorTipsView:(id)arg1;
- (BOOL)isShowCameraErrorTips;
- (void)setIsShowCameraErrorTips:(BOOL)arg1;
- (BOOL)isPickingImageFromAlbum;
- (void)setIsPickingImageFromAlbum:(BOOL)arg1;
- (BOOL)isShowingAlertView;
- (void)setIsShowingAlertView:(BOOL)arg1;
- (BOOL)isLoading;
- (void)setIsLoading:(BOOL)arg1;
- (unsigned int)enterSessionID;
- (void)setEnterSessionID:(unsigned int)arg1;
- (unsigned long long)enterTimestampInMS;
- (void)setEnterTimestampInMS:(unsigned long long)arg1;
- (unsigned long long)enterTimestampIn1970MS;
- (void)setEnterTimestampIn1970MS:(unsigned long long)arg1;
- (unsigned int)tabSessionID;
- (void)setTabSessionID:(unsigned int)arg1;
- (BOOL)enableOperateReporter;
- (void)setEnableOperateReporter:(BOOL)arg1;
- (double)vcInitTime;
- (void)setVcInitTime:(double)arg1;
- (id)energyTracker;
- (void)setEnergyTracker:(id)arg1;
- (id)f2fHbMigration;
- (void)setF2fHbMigration:(id)arg1;
- (BOOL)suppressNextFloatingButtonExpose;
- (void)setSuppressNextFloatingButtonExpose:(BOOL)arg1;
- (BOOL)enableScanAIUIV2;
- (void)setEnableScanAIUIV2:(BOOL)arg1;
- (id)scanAIFloatingButton;
- (void)setScanAIFloatingButton:(id)arg1;
- (id)scanAICameraFlipButton;
- (void)setScanAICameraFlipButton:(id)arg1;
- (id)scanAIHistoryButton;
- (void)setScanAIHistoryButton:(id)arg1;
- (id)scanAICameraFlipButtonWrapView;
- (void)setScanAICameraFlipButtonWrapView:(id)arg1;
- (id)scanAIContentView;
- (void)setScanAIContentView:(id)arg1;
- (id)scanAILogicController;
- (void)setScanAILogicController:(id)arg1;
- (id)scanAIVideoIntentFacade;
- (void)setScanAIVideoIntentFacade:(id)arg1;
- (id)scanAIVideoIntentFlowController;
- (void)setScanAIVideoIntentFlowController:(id)arg1;
- (id)scanAICapturedImage;
- (void)setScanAICapturedImage:(id)arg1;
- (unsigned long long)scanAIFloatingButtonGestureState;
- (void)setScanAIFloatingButtonGestureState:(unsigned long long)arg1;
- (long long)scanAIActiveTriggerType;
- (void)setScanAIActiveTriggerType:(long long)arg1;
- (unsigned long long)scanAIActiveRequestId;
- (void)setScanAIActiveRequestId:(unsigned long long)arg1;
- (unsigned long long)scanAIClickPreviewPendingRequestId;
- (void)setScanAIClickPreviewPendingRequestId:(unsigned long long)arg1;
- (BOOL)scanAIFloatingButtonHadRedDotOnClick;
- (void)setScanAIFloatingButtonHadRedDotOnClick:(BOOL)arg1;
- (BOOL)scanAIActiveRequestFromAlbum;
- (void)setScanAIActiveRequestFromAlbum:(BOOL)arg1;
- (BOOL)scanAIHalfScreenCaptureSessionSuspended;
- (void)setScanAIHalfScreenCaptureSessionSuspended:(BOOL)arg1;
- (BOOL)scanAIHalfScreenVisible;
- (void)setScanAIHalfScreenVisible:(BOOL)arg1;
- (BOOL)scanAIConversationActive;
- (void)setScanAIConversationActive:(BOOL)arg1;
- (id)scanAIImageCDNUploadSampleResult;
- (void)setScanAIImageCDNUploadSampleResult:(id)arg1;
- (id)scanAIRecognitionFlowContext;
- (void)setScanAIRecognitionFlowContext:(id)arg1;
- (id)scanAIQBarInterceptContext;
- (void)setScanAIQBarInterceptContext:(id)arg1;
- (id)scanAskQuestionRouteHelper;
- (void)setScanAskQuestionRouteHelper:(id)arg1;
- (id /* block */)scanAIPendingHalfScreenWillAppearBlock;
- (void)setScanAIPendingHalfScreenWillAppearBlock:(id /* block */)arg1;
- (id /* block */)scanAIPendingHalfScreenShownBlock;
- (void)setScanAIPendingHalfScreenShownBlock:(id /* block */)arg1;
- (id)scanAIPendingHalfScreenSourceId;
- (void)setScanAIPendingHalfScreenSourceId:(id)arg1;
- (id)scanAIPicIntentHistoryList;
- (void)setScanAIPicIntentHistoryList:(id)arg1;
- (BOOL)enableCombineTab;
- (void)setEnableCombineTab:(BOOL)arg1;
- (unsigned long long)mixedSwitchValue;
- (void)setMixedSwitchValue:(unsigned long long)arg1;
- (BOOL)enableAskAI;
- (void)setEnableAskAI:(BOOL)arg1;
- (BOOL)forceTorchHide;
- (void)setForceTorchHide:(BOOL)arg1;
- (void).cxx_destruct;
@end
