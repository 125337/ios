@interface CameraScanViewController : MMUIViewController <MMImagePickerManagerDelegate, IVOIPUILogicMgrExt, CameraScannerStatusExt, MultiTalkMgrExt, WAUINavigationControllerDelegate, WCCameraModuleDelegate, CameraScanTabViewDelegate, UIGestureRecognizerDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, WCActionSheetDelegate, BaseScanLogicDelegate, CNetworkStatusExt>
{
    long long _cameraScanType; // +0x68
    long long _scanTabAction; // +0x70
    int _cameraScanCodeType; // +0x78
    BOOL _hideBottomBar; // +0x7c
    id <CameraScanUIDelegate> _delegate; // +0x80
    NSMutableDictionary * _logicDict; // +0x88
    unsigned int _beepSound; // +0x90
    BOOL _isManualCameraZoom; // +0x94
    OCRTransReport * _transReport; // +0x98
    BOOL _enableCombineTab; // +0xa0
    BOOL _isNetDisconnect; // +0xa1
    BOOL _bTorchViewHidden; // +0xa2
    BOOL _hasInit; // +0xa3
    BOOL _hasInvokedViewDidLoad; // +0xa4
    BOOL _isPickingImageFromAlbum; // +0xa5
    BOOL _isShowingAlertView; // +0xa6
    BOOL _isLoading; // +0xa7
    unsigned int _enterSessionID; // +0xa8
    unsigned int _tabSessionID; // +0xac
    CameraScanViewControllerOpenParams * _openParams; // +0xb0
    unsigned long long _enterScene; // +0xb8
    CameraScanBlurButtonWrapView * _albumButtonWrapView; // +0xc0
    UIImageView * _bgImageView; // +0xc8
    UILabel * _infoLabel; // +0xd0
    CameraScanTabView * _tabView; // +0xd8
    UIView * _tabMaskView; // +0xe0
    MMUIButton * _closeButton; // +0xe8
    MMUIButton * _torchButton; // +0xf0
    UILabel * _torchLabel; // +0xf8
    UILabel * _descLabel; // +0x100
    UIView * _alertBgView; // +0x108
    UILabel * _alertLabel; // +0x110
    UILabel * _smallAlertLabel; // +0x118
    RecentPhotoBubbleView * _recentPhotoBubbleView; // +0x120
    UISwipeGestureRecognizer * _leftSwipeGesture; // +0x128
    UISwipeGestureRecognizer * _rightSwipeGesture; // +0x130
    UITapGestureRecognizer * _doubleTapGesture; // +0x138
    CameraScannerViewWrapper * _cameraScannerWrapper; // +0x140
    BizScanTabBarInfo * _tabBarInfo; // +0x148
    CSCHoleMaskViewMgr * _holeMaskMgr; // +0x150
    unsigned long long _enterTimestampInMS; // +0x158
}
- (id)init;
- (id)initWithCameraScanType:(long long)arg1 presentModal:(BOOL)arg2 enterScene:(unsigned long long)arg3 bottomBarConfig:(unsigned long long)arg4 openParams:(id)arg5;
- (id)initWithCameraScanType:(long long)arg1 CodeType:(int)arg2 presentModal:(BOOL)arg3 enterScene:(unsigned long long)arg4 bottomBarConfig:(unsigned long long)arg5 openParams:(id)arg6;
- (void)initBottomBarHidden:(unsigned long long)arg1;
- (void)initMember;
- (void)dealloc;
- (void)initView;
- (void)onRecentPhotoButtonClicked;
- (void)tryHideRecentPhotoBubbleView;
- (void)setupBgImageView;
- (void)setupAlbumButtonWrapView;
- (void)setupCloseButton;
- (void)setupCommonViews;
- (void)shouldHideInteracitvesBtns:(BOOL)arg1;
- (void)initGesture;
- (BOOL)useTransparentNavibar;
- (void)viewDidLoad;
- (void)setupTabView;
- (BOOL)useBlackStatusbar;
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
- (void)updateTorchButtonFrame;
- (void)setupTorchViewsWithOutAddToSuperView;
- (void)showTorchButton;
- (void)tryHideTorchButton;
- (void)doHideTorchButton;
- (void)onTorchButtonClicked:(id)arg1;
- (void)showAndStartLoadingView:(id)arg1;
- (void)stopAndHideLoadingView;
- (void)setSwipeGestureEnable:(BOOL)arg1;
- (void)callSetupHoleMaskViewWithHoleFrame:(CGRect)arg1;
- (void)callSetHoleMaskViewHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)callDismissCamearaScanViewCotroller:(id /* block */)arg1;
- (void)callSetTabMaskViewHidden:(BOOL)arg1;
- (void)onIKnowItBtnClick;
- (void)showImagePicker;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)scanPickedImage:(id)arg1;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
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
- (id)getNavigationController;
- (void)onPushViewContoller:(id)arg1 animated:(BOOL)arg2;
- (void)onPopViewControllerCount:(int)arg1 animated:(BOOL)arg2;
- (void)onPresentModalViewController:(id)arg1 animated:(BOOL)arg2;
- (void)onDismissModalViewControllerAnimated:(BOOL)arg1;
- (void)onEdgePanGestureRecognizerChanged:(BOOL)arg1;
- (void)onPopFromStack;
- (void)onStartLoading;
- (void)onStopLoading;
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
- (id)getCodesLogicControllerIfCodesActive;
- (id)getGoodsLogicControllerIfCodesActive;
- (long long)businessTypeForEnterScene:(unsigned long long)arg1;
- (long long)businessSubTypeForScanTabAction:(long long)arg1;
- (BOOL)canShowTabBarItemScanGoods;
- (BOOL)canShowTabBarItemOCRTranslate;
- (BOOL)calScanGoodCombineSwicthState;
- (id)codeTabName;
- (void)didReceiveMemoryWarning;
- (void)onScanCodeFinish;
- (void)registerYReportSdk;
- (unsigned long long)authScene;
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
- (BOOL)enableCombineTab;
- (void)setEnableCombineTab:(BOOL)arg1;
- (id)albumButtonWrapView;
- (void)setAlbumButtonWrapView:(id)arg1;
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
- (id)leftSwipeGesture;
- (void)setLeftSwipeGesture:(id)arg1;
- (id)rightSwipeGesture;
- (void)setRightSwipeGesture:(id)arg1;
- (id)doubleTapGesture;
- (void)setDoubleTapGesture:(id)arg1;
- (id)cameraScannerWrapper;
- (void)setCameraScannerWrapper:(id)arg1;
- (id)tabBarInfo;
- (void)setTabBarInfo:(id)arg1;
- (id)holeMaskMgr;
- (void)setHoleMaskMgr:(id)arg1;
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
- (unsigned int)tabSessionID;
- (void)setTabSessionID:(unsigned int)arg1;
- (void).cxx_destruct;
@end

