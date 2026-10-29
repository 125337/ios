@interface ScanQRCodeLogicController : BaseScanLogicController <CameraScanCombineDetectorRouterDelegate, ScanQRCodeUrlPrefixHandlerDelegate, CameraScannerStatusExt, CameraScanCodesContentViewDelegate, NewQRCodeScannerDelegate, UIImagePickerControllerDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, GetA8KeyLogicDelegate, ScanBarcodeExt>
{
    BOOL _hasCamera; // +0x18
    GetA8KeyLogic * _logic; // +0x20
    NSString * _desc; // +0x28
    BOOL _hasFoundCode; // +0x30
    NSString * _loadingText; // +0x38
    NSString * _alertText; // +0x40
    BOOL _showingMyQRCode; // +0x48
    BOOL _scanOnePictureMode; // +0x49
    BOOL _bIsScanFromAlbumImage; // +0x4a
    float _maxZoomFactor; // +0x4c
    float _originZoomFactor; // +0x50
    BOOL _bNeedCameraScan; // +0x54
    BOOL _hasPresentToOtherVC; // +0x55
    BOOL _bShowMyQRCode; // +0x56
    BOOL _isPreScanImageFinish; // +0x57
    BOOL _isHandlingCombineScanGoodsResult; // +0x58
    BOOL _isSupportMultiCodes; // +0x59
    BOOL _isScanCodesDirectOpenWhitelistLandingPage; // +0x5a
    BOOL _hasEnterTabOnce; // +0x5b
    BOOL _isHalfScreenItemFromAlbum; // +0x5c
    BOOL _hasUserClickedItemDisplayed; // +0x5d
    BOOL _hasReportedFirstBubbleCost; // +0x5e
    unsigned int _fromScene; // +0x60
    unsigned int _m_sourceType; // +0x64
    float _currZoomFactor; // +0x68
    unsigned int _zoomCount; // +0x6c
    unsigned int _multiCodesScanBarcodeEventID; // +0x70
    unsigned int _preScanTaskSequence; // +0x74
    unsigned int _scanGetA8keyScene; // +0x78
    unsigned int _scanSubScene; // +0x7c
    unsigned int _scanVersion; // +0x80
    unsigned int _scanGetA8KeyRequestId; // +0x84
    int _goodsCacheTime; // +0x88
    NSMutableArray * _markDotInfoListInScanFullImage; // +0x90
    NSMutableArray * _markDotInfoListAfterFilter; // +0x98
    NSString * _picUrl4Stat; // +0xa0
    NSString * _picEncKey4Stat; // +0xa8
    NSDictionary * _tryScanExtraInfo; // +0xb0
    NSString * _sourceWeAppAppid; // +0xb8
    BizScanTabBarInfo * _tabBarInfo; // +0xc0
    ScanQRCodeLogicParams * _logicParams; // +0xc8
    unsigned long long _expoFrom; // +0xd0
    long long _fromRawScene; // +0xd8
    NSString * _m_sourceInfo; // +0xe0
    NSString * _m_weappSourceInfo; // +0xe8
    CameraScanOperateReporter * _qrcodeOperateReporter; // +0xf0
    ScanQRCodeUrlPrefixRule * _m_urlPrefixRule; // +0xf8
    ScanCodeOcrHandler * _m_scanOcrHandler; // +0x100
    ScanOpenIMRoomReporter * _m_scanOpenIMRoomReporter; // +0x108
    MMUIViewController * _m_viewController; // +0x110
    ScanWXCodeUrlPrefixRule * _m_wxCodeUrlPrefixRule; // +0x118
    ScanQRCodeResultInfo * _offlineScanResult; // +0x120
    unsigned long long _longPressScanScene; // +0x128
    NSArray * _markDotInfoList; // +0x130
    unsigned long long _startDetectTimestamp; // +0x138
    unsigned long long _stopDetectTimestamp; // +0x140
    unsigned long long _zoomLastTimestamp; // +0x148
    unsigned long long _multiCodesSendCGIReq; // +0x150
    NSOperationQueue * _scanPicOperationQueue; // +0x158
    NSObject<OS_dispatch_semaphore> * _semaphore; // +0x160
    NSMutableDictionary * _dicDetectedBarCodeNoResult; // +0x168
    NSRecursiveLock * _lock; // +0x170
    NSString * _barcodeForShowScanGoodGuide; // +0x178
    long long _picFrom; // +0x180
    NSString * _scanResultString; // +0x188
    NSString * _scanGetA8keyCodeType; // +0x190
    NSString * _preset; // +0x198
    CameraScanCombineContentView * _goodCombineContentView; // +0x1a0
    CameraScanCombineDetectorRouter * _combineDetectorRouter; // +0x1a8
    unsigned long long _routeFrameCount; // +0x1b0
    NSString * _svrInfoGuideText; // +0x1b8
    NSString * _svrDetObjGuideText; // +0x1c0
    CameraScanCombineConfig * _combineConfig; // +0x1c8
    NSMutableDictionary * _dictHalfScreenVC; // +0x1d0
    unsigned long long _perloadCount; // +0x1d8
    NSMutableArray * _goodsCachePool; // +0x1e0
    MMTimer * _goodsCacheTimer; // +0x1e8
    NewQRCodeScanner * _scanner; // +0x1f0
}
+ (id)shareScanOnePicSerialQueue;
+ (id)tryCompressReportingImage:(id)arg1 withMaxLength:(unsigned long long)arg2;
- (BOOL)isCodeEnbaledInAppBrandWithFromMP:(BOOL)arg1;
- (BOOL)isAllowCodeWithExptKey:(id)arg1 isMpScene:(BOOL)arg2 defaultValue:(long long)arg3;
- (void)reportAppBrandScanCodeShow:(BOOL)arg1 isFromNative:(BOOL)arg2;
- (void)reportAppBrandScanCodeClickIfNeedWithFromNative:(BOOL)arg1;
- (id)getReportStr:(BOOL)arg1 isFromNative:(BOOL)arg2 isClick:(BOOL)arg3;
- (unsigned long long)getCurrentReportCodeType;
- (void)setupContentViewOnCatagoryGoodCombine;
- (void)setupCombineContentView;
- (void)setupCombineConfig;
- (void)startScanOnCatagoryGoodCombine;
- (void)stopScanOnCatagoryGoodCombine;
- (void)contentViewDisappearOnCatagoryGoodCombine;
- (void)contentViewAppearOnCatagoryGoodCombineFromSwitchTab:(BOOL)arg1;
- (void)handleCapturePixelBufferOnCatagoryGoodCombine:(id)arg1;
- (void)handleCodeScannerDetectCodes:(id)arg1;
- (unsigned long long)genCurrentSkipFrameCount;
- (BOOL)shouldShowInfoLabelOnCatagoryGoodCombine;
- (id)combineInfoText;
- (void)openViewCtrlWithItemViewModel:(id)arg1 isFromAlbum:(BOOL)arg2;
- (BOOL)needChangeSceneForNewUI:(long long)arg1 itemVM:(id)arg2;
- (void)distributeScanGoodsResult:(id)arg1 isFromAlbum:(BOOL)arg2;
- (void)openHalfScreenViewCtrlWithItemViewModel:(id)arg1 isFromAlbum:(BOOL)arg2;
- (void)onDetectScanGoodItemFound:(id)arg1;
- (void)onDetectScanGoodItemUpload:(id)arg1;
- (void)onDetectScanGoodItemRetrieval:(id)arg1;
- (void)onDetectScanGoodItemAskForPreload:(id)arg1;
- (void)onDetectScanGoodItemFail:(id)arg1 errCode:(unsigned int)arg2;
- (void)onDetectScanMixItem:(id)arg1 errCode:(unsigned int)arg2;
- (void)onDetectScanMixTextItem:(id)arg1 errCode:(unsigned int)arg2;
- (void)addItemToContentView:(id)arg1;
- (void)addItemToCachePool:(id)arg1;
- (void)startCacheTimerIfNeeded;
- (void)flushCachePool;
- (id)selectValidItemFromCachePool;
- (void)stopCacheTimer;
- (long long)getGoodsType:(id)arg1 hasTitle:(BOOL)arg2;
- (void)onDetectScanGoodItemFromAlbum:(id)arg1;
- (void)onSendImageInfoFail:(id)arg1 errorCode:(long long)arg2 errorMsg:(id)arg3 isNetworkError:(BOOL)arg4;
- (void)onExposeWithItem:(id)arg1 hasTitle:(BOOL)arg2;
- (void)handleAppendGoodItemDetailViewWithItemVM:(id)arg1 index:(unsigned long long)arg2;
- (BOOL)canHandleOpen:(id)arg1;
- (void)handleOpenGoodItemDetailViewWithItemVM:(id)arg1 index:(unsigned long long)arg2;
- (id)scanGoodsHalfScreenVCWithReqKey:(id)arg1 detectSessionId:(id)arg2 isPreloadScene:(BOOL)arg3 isFromAlbum:(BOOL)arg4;
- (void)handleScanOnePictureEventInCombineTab;
- (void)handleScanOnePictureAndCodeDetectedEventInCombineTab;
- (void)scanOnePictureOnCatagoryGoodCombine:(id)arg1;
- (void)detectSuccessBeforeMarkDotAnimation:(id)arg1;
- (void)startScanOnePictureLoadingBlock;
- (void)stopScanOnePictureLoadingBlock;
- (void)prepareForHandlingResult;
- (void)onHalfScreenPage:(id)arg1 contentTopChanged:(double)arg2;
- (void)onHalfScreenPageWillClose:(id)arg1 action:(long long)arg2;
- (void)onHalfScreenPageDidClose:(id)arg1 action:(long long)arg2;
- (void)generateCombineImageAndBlurImage:(id)arg1;
- (void)updateGoodsContentWithHalfScreenTop:(double)arg1 animateDuration:(double)arg2;
- (CGPoint)calcuateCustomViewPointWithHalfScreenTop:(double)arg1;
- (void)generateCombineImageAndBlurImageForFoldList;
- (void)preloadScanGoodItemTemplateWithItemViewModel:(id)arg1;
- (void)clearPreloadedData;
- (void)onVCDidReceiveMemoryWarningOnCatagoryGoodCombine;
- (void)reportOnVCBePopedOnCatagoryGoodCombine;
- (id)curCombineReportBaseInfo;
- (unsigned long long)barcodeFailBlockTime;
- (void)didClose:(id)arg1 session:(id)arg2;
- (id)initWithViewController:(id)arg1 logicParams:(id)arg2;
- (void)onCameraScannerViewDidInit:(id)arg1;
- (void)onCameraScannerViewDidRecover:(id)arg1;
- (void)setViewController:(id)arg1;
- (void)setIsFromAlbum:(BOOL)arg1;
- (void)dealloc;
- (int)scanCodeType;
- (void)releaseSemaphore;
- (void)startScan;
- (void)restartScan;
- (void)stopScan;
- (BOOL)shouldPopSelfAtPresented;
- (void)setCropRect;
- (CGRect)getDrawCropRect;
- (CGRect)getNewDrawCropRect;
- (id)getInfoText;
- (float)getDefaultInfoLabelBottomPadding;
- (BOOL)isCollisionWithAnyMarkDotView;
- (float)getModifiedInfoLabelBottomPadding;
- (double)getTorchBottomPadding;
- (id)getLoadingText;
- (id)getAlertText;
- (float)getPreviewScale;
- (void)onMyQRCodeButtonClicked;
- (void)startLoadingCheck;
- (void)scanOnePicture:(id)arg1;
- (BOOL)shouldDoAnimationWhenDismiss;
- (BOOL)shouldShowInfoLabel;
- (BOOL)shouldPopFromStack;
- (void)onRotate;
- (void)tryScanOnePicture:(id)arg1;
- (void)tryScanOnePicture:(id)arg1 extraInfo:(id)arg2;
- (void)tryScanOnePicture:(id)arg1 imgData:(id)arg2 extraInfo:(id)arg3;
- (void)getScanPicOperationQueueReady;
- (void)doScanQRCode:(id)arg1;
- (BOOL)getScanResult:(double)arg1;
- (void)reportScanMultiCodesWithOpType:(int)arg1;
- (void)showScanResult;
- (void)showScanResultWithMarkDotInfo:(id)arg1;
- (void)doLongPressScanReportIfNeed;
- (id)getResultData;
- (id)getResultType;
- (BOOL)isFoundWeAppWXCode;
- (BOOL)isFoundWeAppCode;
- (BOOL)isFoundWeAppQRCode;
- (BOOL)isFoundBrandQRCode;
- (BOOL)isFoundGroupChatQRCode;
- (BOOL)isFoundWeChatWorkGroupQRCode;
- (BOOL)isFoundWeWorkGroupInternalQRCode;
- (BOOL)isFoundPersonalQRCode;
- (BOOL)isFoundWeChatWorkQRCode;
- (BOOL)isFoundPaymentQRCode;
- (BOOL)isFoundFinderQRCode;
- (BOOL)isFoundRewardWXCode;
- (BOOL)isMatchQRCodePrefix:(id)arg1;
- (BOOL)isMatchWXCodePrefix:(id)arg1;
- (BOOL)isPrefixMatch:(id)arg1;
- (id)fileScanDebugInfoString;
- (BOOL)isFoundBarCode;
- (BOOL)isFoundMultiQRCode;
- (void)reportAfterCameraViewControlelrExitOrDetectedCodes:(long long)arg1;
- (void)reportAfterCameraViewControlelrBePoped;
- (void)reportEngineStatWithScene:(unsigned int)arg1 scanType:(long long)arg2;
- (void)reportEngineStatWhenWorkFlowEndWithSourceScene:(long long)arg1;
- (void)idKeyReportDetectSuccessInfo:(BOOL)arg1;
- (void)idKeyReportMultiCodesSelectDotViewInfo:(BOOL)arg1;
- (void)idKeyReportMultiCodesSelctCancelInfo;
- (void)tryScanHistoryResult:(id)arg1 type:(id)arg2 version:(unsigned int)arg3;
- (BOOL)isShowErrorView;
- (BOOL)isHandlingMultiCodes;
- (BOOL)isShowScanGoodsGuide;
- (BOOL)isShowMyQRCode;
- (BOOL)isSameQRCodeInMult;
- (BOOL)isHasQRCode;
- (BOOL)isHasWXCode;
- (BOOL)isHasBarCode;
- (BOOL)isSameQRCodeTypeInMult;
- (BOOL)shouldSendOfflineScanResultMessage;
- (BOOL)isInScanSceneAndUseCameraScan;
- (void)onDetectCodesWithMarkDotInfoList:(id)arg1 isCameraScan:(BOOL)arg2;
- (void)onDetectCodesWithMarkDotInfoList:(id)arg1 isCameraScan:(BOOL)arg2 geometry:(id)arg3;
- (CGSize)getContentViewSize;
- (BOOL)isOneWhitelistAndOtherNormal:(id)arg1;
- (BOOL)isOneWhitelistAndOtherBlacklist:(id)arg1;
- (void)calcuateYunyingType:(id)arg1 retWhitelistCount:(unsigned long long *)arg2 retBlacklistCount:(unsigned long long *)arg3 retNormalCount:(unsigned long long *)arg4;
- (void)openLandingPageWithMarkDotInfo:(id)arg1 isShowMultiCodes:(BOOL)arg2;
- (void)openLandingPageWithMarkDotInfo:(id)arg1 isShowMultiCodes:(BOOL)arg2 businessScene:(id)arg3;
- (void)openQRCodeOrWXCodeLandingPage:(id)arg1 isShowMultiCodes:(BOOL)arg2;
- (void)openQRCodeOrWXCodeLandingPage:(id)arg1 isShowMultiCodes:(BOOL)arg2 businessScene:(id)arg3;
- (void)handleOcrReport:(id)arg1 codeType:(id)arg2 codeRect:(CGRect)arg3 getA8KeyScene:(int)arg4 getA8KeyRequestId:(unsigned int)arg5;
- (void)handleOcrReport:(id)arg1 codeType:(id)arg2 codeRect:(CGRect)arg3 getA8KeyScene:(int)arg4 getA8KeyRequestId:(unsigned int)arg5 reportType:(unsigned long long)arg6;
- (BOOL)shouldHandleHKWalletCGPUrl:(id)arg1;
- (void)handleHKWalletScanCodeRoute:(id)arg1 getA8keyScene:(unsigned int)arg2;
- (void)continueGetA8key;
- (BOOL)isPaymentCodeWitResultString:(id)arg1 codeType:(id)arg2 andTryGetPaymentCodeType:(char *)arg3;
- (void)doDetectSuccessSoundEffect;
- (void)delayPerformStartCGIHandleAnimation;
- (void)cancelPerformStartCGIHandleAnimation;
- (void)startCGIHandleAnimation:(id)arg1;
- (void)startCGIHandleAnimation:(id)arg1 ShouldShowSubtitle:(BOOL)arg2;
- (void)stopCGIHandleAnimation;
- (void)reportPayCodeWithUrl:(id)arg1 codeType:(id)arg2;
- (id)p_encodedReportField:(id)arg1;
- (void)openBarCodeLandingPage:(id)arg1 isShowMultiCodes:(BOOL)arg2;
- (unsigned int)convertMode2ScanBarcodeMode;
- (unsigned int)convertEnterScene2ScanBarcodeScene;
- (void)onDetectQRCode:(BOOL)arg1 zoomFactor:(float)arg2;
- (void)onRecievePixelBufferInCaptureDelegateThread:(id)arg1;
- (void)OnSendBarcode:(id)arg1 wordingItemList:(id)arg2 Err:(int)arg3;
- (id)guideInfoForWordingItemList:(id)arg1;
- (void)onGetA8KeyStart;
- (void)onGetA8KeyResultType:(unsigned int)arg1;
- (void)onGetA8KeyBarCodeType:(unsigned int)arg1;
- (void)onReportA8KeyQrCodeType:(unsigned int)arg1;
- (void)onReportA8KeyType:(unsigned int)arg1 codeType:(long long)arg2;
- (void)onGetA8KeyEnd;
- (void)onGetA8KeyFail;
- (void)onSearchContactStart;
- (void)onSearchContactEnd;
- (void)onSearchContactHandleEnd;
- (void)onSearchContactFail;
- (void)onSearchContactGetResult;
- (void)onGetProductInfoStart;
- (void)onGetProductInfoEnd;
- (void)onGetProductInfoHandleEnd;
- (id)onGetA8KeyWillOpenFinder;
- (void)onGetA8KeyWillOpenWeApp:(id)arg1;
- (void)onGetWeWorkKFInfo:(id)arg1;
- (void)onNeedStartScan;
- (void)onPresentToOtherVC;
- (id)sourceWeAppAppid;
- (id)sourceOpenIMContext;
- (unsigned long long)getSourceType;
- (id)onScanQRCodeUrlPrefixHandlerRequestViewController;
- (void)onScanQRCodeUrlPrefixHandlerStart;
- (void)onScanQRCodeUrlPrefixHandlerEnd;
- (void)onScanQRCodeUrlPrefixHandlerScanDismissAllLoading;
- (void)onScanQRCodeUrlPrefixHandlerDismiss;
- (void)onScanQRCodeUrlPrefixHandlerWithErrorMsg:(id)arg1;
- (void)onClickErrorAlertConfirm;
- (void)reportPrefixHandlerFailedCount;
- (void)onScanQRCodeUrlPrefixHandlerScanFinish;
- (void)onScanQRCodeUrlPrefixHandlerScanTerminate;
- (id)getScanQRCodeSourceWebViewControllerUrl;
- (id)getScanQRCodeSourceWebViewPayTraceInfo;
- (id)getScanQRCodeLogicParams;
- (void)p_appendResultInfoWithCurrentNetworkScene:(int)arg1;
- (void)p_appendResultInfoWithCurrentNetworkScene:(int)arg1 ShouldSendNotification:(BOOL)arg2;
- (void)onEnterTab;
- (void)scannerStartCapture;
- (void)scannerStopCapture;
- (void)imagePickerOpen;
- (void)imagePickerCancel;
- (void)setupContentView:(CGRect)arg1;
- (void)setupTabSwitchingView:(CGRect)arg1;
- (BOOL)isPointInContentButtonView:(CGPoint)arg1;
- (void)setCloseButtonBottom:(double)arg1 infoLableTop:(double)arg2;
- (void)contentViewAppearFromSwitchTab:(BOOL)arg1;
- (void)contentViewDisappear;
- (void)contentViewStartScanAnimation;
- (void)contentViewStopScanAnimation;
- (void)contentViewNetConnect;
- (void)contentViewNetDisconnect;
- (void)resetContentViewWhenStartScan;
- (void)onCancelButtonClicked:(id)arg1;
- (void)restartScanCode;
- (void)resetScanResultUI;
- (void)onMyQRButtonClicked:(id)arg1;
- (void)onSelectMarkDotInfo:(id)arg1;
- (void)onTryScanGoodsButtonClicked:(id)arg1;
- (void)snapshotImageShowOnSecondThenHidden;
- (void)onTipsIKnowButtonClicked:(id)arg1;
- (void)onClikcItemCardWithItemViewModel:(id)arg1 index:(unsigned long long)arg2;
- (void)onCanceItemOpenWithItemViewModel:(id)arg1 index:(unsigned long long)arg2;
- (void)onAppenItemCarkWithItemViewModel:(id)arg1 index:(unsigned long long)arg2;
- (void)cancelMultiCodesSendCGIReq;
- (void)resetContentViewAndStartScan;
- (void)reportScanCodeResultShowButton:(unsigned int)arg1;
- (void)reportScanCodeResultShowButton:(unsigned int)arg1 maskExitType:(unsigned int)arg2;
- (long long)reportScanLogicScene;
- (BOOL)isPreScanImageRatioChanged;
- (void)resetPreScanImageStatus;
- (void)reportTransferScanResult:(id)arg1 image:(id)arg2;
- (BOOL)isCameraScanMarkDotInfoWeAppCode:(id)arg1;
- (long long)curTabType;
- (BOOL)isEnableGoodCombine;
- (BOOL)isEnableAskAI;
- (void)onVCDidReceiveMemoryWarning;
- (void)onTapAtPoint:(id)arg1;
- (void)handleTapForDetectionFromGesture:(id)arg1;
- (BOOL)hasDetectBarCodeNoResult:(id)arg1;
- (void)saveBarCodeHasNoResult:(id)arg1;
- (unsigned int)uiSessionID;
- (void)centerLabelShowStart;
- (void)centerLabelShowEnd;
- (id)desc;
- (void)setDesc:(id)arg1;
- (BOOL)hasFoundCode;
- (void)setHasFoundCode:(BOOL)arg1;
- (unsigned int)fromScene;
- (void)setFromScene:(unsigned int)arg1;
- (id)markDotInfoListInScanFullImage;
- (void)setMarkDotInfoListInScanFullImage:(id)arg1;
- (id)markDotInfoListAfterFilter;
- (void)setMarkDotInfoListAfterFilter:(id)arg1;
- (id)picUrl4Stat;
- (void)setPicUrl4Stat:(id)arg1;
- (id)picEncKey4Stat;
- (void)setPicEncKey4Stat:(id)arg1;
- (id)tryScanExtraInfo;
- (void)setSourceWeAppAppid:(id)arg1;
- (id)tabBarInfo;
- (void)setTabBarInfo:(id)arg1;
- (id)logicParams;
- (void)setLogicParams:(id)arg1;
- (unsigned long long)expoFrom;
- (void)setExpoFrom:(unsigned long long)arg1;
- (long long)fromRawScene;
- (void)setFromRawScene:(long long)arg1;
- (unsigned int)m_sourceType;
- (void)setM_sourceType:(unsigned int)arg1;
- (id)m_sourceInfo;
- (void)setM_sourceInfo:(id)arg1;
- (id)m_weappSourceInfo;
- (void)setM_weappSourceInfo:(id)arg1;
- (BOOL)isPreScanImageFinish;
- (BOOL)isHandlingCombineScanGoodsResult;
- (void)setIsHandlingCombineScanGoodsResult:(BOOL)arg1;
- (id)qrcodeOperateReporter;
- (void)setQrcodeOperateReporter:(id)arg1;
- (id)m_urlPrefixRule;
- (void)setM_urlPrefixRule:(id)arg1;
- (id)m_scanOcrHandler;
- (void)setM_scanOcrHandler:(id)arg1;
- (id)m_scanOpenIMRoomReporter;
- (void)setM_scanOpenIMRoomReporter:(id)arg1;
- (id)m_viewController;
- (void)setM_viewController:(id)arg1;
- (id)m_wxCodeUrlPrefixRule;
- (void)setM_wxCodeUrlPrefixRule:(id)arg1;
- (id)offlineScanResult;
- (void)setOfflineScanResult:(id)arg1;
- (BOOL)isSupportMultiCodes;
- (void)setIsSupportMultiCodes:(BOOL)arg1;
- (BOOL)isScanCodesDirectOpenWhitelistLandingPage;
- (void)setIsScanCodesDirectOpenWhitelistLandingPage:(BOOL)arg1;
- (BOOL)hasEnterTabOnce;
- (void)setHasEnterTabOnce:(BOOL)arg1;
- (unsigned long long)longPressScanScene;
- (void)setLongPressScanScene:(unsigned long long)arg1;
- (id)markDotInfoList;
- (unsigned long long)startDetectTimestamp;
- (void)setStartDetectTimestamp:(unsigned long long)arg1;
- (unsigned long long)stopDetectTimestamp;
- (void)setStopDetectTimestamp:(unsigned long long)arg1;
- (float)currZoomFactor;
- (void)setCurrZoomFactor:(float)arg1;
- (unsigned int)zoomCount;
- (void)setZoomCount:(unsigned int)arg1;
- (unsigned long long)zoomLastTimestamp;
- (void)setZoomLastTimestamp:(unsigned long long)arg1;
- (unsigned long long)multiCodesSendCGIReq;
- (void)setMultiCodesSendCGIReq:(unsigned long long)arg1;
- (unsigned int)multiCodesScanBarcodeEventID;
- (void)setMultiCodesScanBarcodeEventID:(unsigned int)arg1;
- (unsigned int)preScanTaskSequence;
- (void)setPreScanTaskSequence:(unsigned int)arg1;
- (id)scanPicOperationQueue;
- (void)setScanPicOperationQueue:(id)arg1;
- (id)semaphore;
- (void)setSemaphore:(id)arg1;
- (id)dicDetectedBarCodeNoResult;
- (void)setDicDetectedBarCodeNoResult:(id)arg1;
- (id)lock;
- (void)setLock:(id)arg1;
- (id)barcodeForShowScanGoodGuide;
- (void)setBarcodeForShowScanGoodGuide:(id)arg1;
- (long long)picFrom;
- (void)setPicFrom:(long long)arg1;
- (id)scanResultString;
- (void)setScanResultString:(id)arg1;
- (unsigned int)scanGetA8keyScene;
- (void)setScanGetA8keyScene:(unsigned int)arg1;
- (unsigned int)scanSubScene;
- (void)setScanSubScene:(unsigned int)arg1;
- (id)scanGetA8keyCodeType;
- (void)setScanGetA8keyCodeType:(id)arg1;
- (unsigned int)scanVersion;
- (void)setScanVersion:(unsigned int)arg1;
- (unsigned int)scanGetA8KeyRequestId;
- (void)setScanGetA8KeyRequestId:(unsigned int)arg1;
- (id)preset;
- (void)setPreset:(id)arg1;
- (id)goodCombineContentView;
- (void)setGoodCombineContentView:(id)arg1;
- (id)combineDetectorRouter;
- (void)setCombineDetectorRouter:(id)arg1;
- (BOOL)isHalfScreenItemFromAlbum;
- (void)setIsHalfScreenItemFromAlbum:(BOOL)arg1;
- (unsigned long long)routeFrameCount;
- (void)setRouteFrameCount:(unsigned long long)arg1;
- (id)svrInfoGuideText;
- (void)setSvrInfoGuideText:(id)arg1;
- (id)svrDetObjGuideText;
- (void)setSvrDetObjGuideText:(id)arg1;
- (id)combineConfig;
- (void)setCombineConfig:(id)arg1;
- (id)dictHalfScreenVC;
- (void)setDictHalfScreenVC:(id)arg1;
- (unsigned long long)perloadCount;
- (void)setPerloadCount:(unsigned long long)arg1;
- (int)goodsCacheTime;
- (void)setGoodsCacheTime:(int)arg1;
- (id)goodsCachePool;
- (void)setGoodsCachePool:(id)arg1;
- (id)goodsCacheTimer;
- (void)setGoodsCacheTimer:(id)arg1;
- (BOOL)hasUserClickedItemDisplayed;
- (void)setHasUserClickedItemDisplayed:(BOOL)arg1;
- (BOOL)hasReportedFirstBubbleCost;
- (void)setHasReportedFirstBubbleCost:(BOOL)arg1;
- (id)scanner;
- (void)setScanner:(id)arg1;
- (void).cxx_destruct;
@end
