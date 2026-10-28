@interface MsgImgFullScreenViewController : MMUIViewController <GetQRCodeInfoLogicDelegate, MMScrollActionSheetDelegate, RecentForwardScrollViewDelegate, MinimizationTransitionControllerDelegate, BaseScanLogicDelegate, WCC2CVideoPlayerViewDelegate, WCC2CVideoPlayerViewTouchDelegate, MsgImgDataLogicDelegate, ForwardMessageLogicDelegate, EditImageForwardAndEditLogicDelegate, WCImageTranslateDelegate, WCActionSheetDelegate, OCRTransHalfScreenViewControllerDelegate, QRCodeInMultiDisplayViewDelegate, WAWxMaterialRefreshExt, MMActionSheetQRCodeRowViewDelegate, MMActionSheetImgSourceRowViewDelegate, WCFinderPostViewControllerDelegate, C2CVideoDownloadMgrExt, WCC2CImageScrollViewDelegate, MsgImgFullScreenExpireViewDelegate, SendToWeAppAppDeviceSheetViewDelegate, UIViewControllerTransitioningDelegate, MsgImgFullScreenContainerDelegate, IDownloadImageExt, IMsgExt, IMsgRevokeExt>
{
    NSMutableDictionary * m_dicMsgStatus; // +0x70
    NSMutableDictionary * m_dicTryshowTime; // +0x78
    NSMutableDictionary * _dicImageDownloadedPercent; // +0x80
    UIView * _backgroundView; // +0x88
    MsgImgFullScreenContainer * pagingScrollView; // +0x90
    NSString * m_nsChatName; // +0x98
    double _bottomMarginBorder; // +0xa0
    double _bottomRightPadding; // +0xa8
    double _bottomLeftPadding; // +0xb0
    UIView * _bottomBar; // +0xb8
    CAGradientLayer * _bottomBarMaskLayer; // +0xc0
    double _fastBrowseOffset; // +0xc8
    id <MsgImgFullScreenViewControllerDelegate> m_delegate; // +0xd0
    CMessageWrap * _nextHDImgMsg; // +0xd8
    BOOL _isHDImgLoading; // +0xe0
    SightIconView * _progressView; // +0xe8
    BOOL _allowRotate; // +0xf0
    BOOL _isFromMsgContentView; // +0xf1
    BOOL _isRotating; // +0xf2
    BOOL _bNeedEditAtStart; // +0xf3
    WCImageTranslateLogic * _imgTranslateLogic; // +0xf8
    MsgImgDelayEntryReporter * _delayEntryReporter; // +0x100
    MsgImgPreviewData * m_msgImgPreviewData; // +0x108
    BOOL m_bAnimateShowing; // +0x110
    long long _orientationWhenInit; // +0x118
    BOOL m_bIsEditMode; // +0x120
    int m_qrcodeActionSheetIndex; // +0x124
    MMUIActivityIndicatorView * m_preLoadingView; // +0x128
    MMUIActivityIndicatorView * m_nextLoadingView; // +0x130
    MsgImgDataLogic * m_dataLogic; // +0x138
    NSMutableSet * m_revokedMsgIDSet; // +0x140
    ShareDataToOpenSDKController * m_shareOpenSDKController; // +0x148
    BOOL m_bCloseForViewDetail; // +0x150
    CMessageWrap * m_oForwardMessageWrap; // +0x158
    unsigned int m_videoOperateStatus; // +0x160
    BOOL m_bShouldAutoPlayVideo; // +0x164
    BOOL m_bSoundable; // +0x165
    unsigned int _startTime; // +0x168
    unsigned long long m_startDownloadTime; // +0x170
    BOOL m_downloadingHd; // +0x178
    EditImageForwardAndEditLogicController * m_editImageLogicController; // +0x180
    unsigned int _needEditImageIndex; // +0x188
    NSString * m_fromUsr; // +0x190
    BOOL _isClosing; // +0x198
    double _lastPageId; // +0x1a0
    unsigned int _lastMsgLocalId; // +0x1a8
    unsigned int m_tapOpenMsgLocalId; // +0x1ac
    BOOL _needResumeVideoWhenAppear; // +0x1b0
    CameraScanCodesMarkDotView * _qrCodeDotView; // +0x1b8
    BOOL _isHandlingQRCodeFastEntry; // +0x1c0
    BOOL _enableDragToClose; // +0x1c1
    BOOL _enablePressToShowSheet; // +0x1c2
    WCActionSheet * m_actionSheet; // +0x1c8
    BOOL m_bShow; // +0x1d0
    CGRect m_originFrame; // +0x1d8
    UIView * m_snapShotImgView; // +0x1f8
    UIView * _bottomButtonsContainerView; // +0x200
    BOOL m_bToolViewsHidden; // +0x208
    BOOL m_hasPreviewVideo; // +0x209
    BOOL _bForbidBounces; // +0x20a
    BOOL _isShowSingleMsg; // +0x20b
    BOOL _bForbidRotateToPortraitWhenExit; // +0x20c
    BOOL _bForbidTransToOriginRectWhenExitIfOrientationChanged; // +0x20d
    BOOL _bIsNotMoreMsgImgBrowseView; // +0x20e
    BOOL _bUpdateForVoiceOver; // +0x20f
    BOOL _m_hasShowSpamTips; // +0x210
    BOOL _isFromReferedMsg; // +0x211
    BOOL _haveMaterialButton; // +0x212
    BOOL _canLongPress; // +0x213
    BOOL _isUrlInfoHasUpdated; // +0x214
    BOOL _lockRotate; // +0x215
    NSMutableDictionary * m_videoViewDic; // +0x218
    unsigned long long m_eType; // +0x220
    unsigned long long m_eScene; // +0x228
    NSArray * _scanCodePrefixBlackList; // +0x230
    unsigned long long _m_eSubScene; // +0x238
    ScanQRCodeLogicController * _scanQRCodeLogic; // +0x240
    unsigned long long _transitioningStyle; // +0x248
    BrandMpVideoReporter * _brandMpVideoReporter; // +0x250
    HDImageExpireReporter * _imageExpireReporter; // +0x258
    MMTimer * _sliderUpdateTimer; // +0x260
    ForwardMessageLogicController * _m_forwardLogicController; // +0x268
    SightIconView * _iconView; // +0x270
    UIView * _middleExpireTipsView; // +0x278
    UILabel * _middleExpireTipsLabel; // +0x280
    QRCodeInMultiDisplayView * _qrCodeMultiView; // +0x288
    NSString * _materialFileExt; // +0x290
    MsgImgSearchPhashMemCache * _phashMemCache; // +0x298
    CMessageWrap * _lastSearchPhashFailedMessageWrap; // +0x2a0
    CMessageWrap * _lastMsgWrap; // +0x2a8
    id /* block */ _customBottomLeftActioin; // +0x2b0
    id /* block */ _customBottomLeftString; // +0x2b8
    NSMutableDictionary * _m_imageViewDic; // +0x2c0
    NSMutableDictionary * _m_expireViewDic; // +0x2c8
    WCActionSheetRecentItemsManager * _itemsManager; // +0x2d0
    NSMutableDictionary * _reportParams; // +0x2d8
    MPCustomInteractiveHandler * _interactiveHandler; // +0x2e0
    MPDragDownGestureHandler * _dragDownLeaveGestureHandler; // +0x2e8
    id <MsgImgFullScreenTransitionDelegate> _transitionDelegate; // +0x2f0
    id <MsgImgFullScreenTransitionComponent> _transitionComponent; // +0x2f8
    UIView * _maskView; // +0x300
    GetQRCodeInfoLogic * _qrCodeInfoLogic; // +0x308
    MMScrollActionSheet * _scrollActionSheet; // +0x310
    NSMutableArray * _arrItems1; // +0x318
    NSMutableArray * _arrItems2; // +0x320
    OCRTransHalfScreenViewController * _ocrHalfScreenViewCtrl; // +0x328
    MiniRecTransitionController * _minimizationTransitionController; // +0x330
    MsgImgMinimizeHandler * _minimizationHandler; // +0x338
}
- (void)markDisplayTranslateResult:(id)arg1;
- (void)unmarkDisplayTranslateResult:(id)arg1;
- (BOOL)_isDisplayTranslateResult:(id)arg1;
- (id)markTranslateSet;
- (BOOL)isPreTranslateDetected;
- (void)onClickTranslateButton:(id)arg1;
- (void)handleClickActionSheetItemTranslate;
- (void)handleClickActionSheetItemCancelTranslate;
- (void)handleClickActionSheetItemChangeTranslateLang;
- (void)handleClickActionSheetItemTranslateFeedback;
- (void)showActionSheetFromTranslateImg;
- (void)internalHandleTranslate;
- (void)showTranslateImg;
- (void)onTranslateWordInImage;
- (void)reportTranslateMenuClick:(id)arg1;
- (id)getTranslateImgIdentifier:(id)arg1;
- (void)onShowTranslateImage:(id)arg1;
- (void)getTranslateImgInfo:(id)arg1 fileId:(id *)arg2 aesKey:(id *)arg3;
- (void)onStartAnimateTranslateImage:(id)arg1;
- (void)onFinishAnimateTranslateImage:(id)arg1;
- (void)onCancelTranslateImage:(id)arg1;
- (void)onPreDetectWordSuccess:(id)arg1;
- (void)onInitForCategoryTransitioning;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)mmNavigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (BOOL)dragDownGestureHandler:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)onCustomInteractiveTransitioningBegin:(id)arg1;
- (void)onPresentAnimatedTransitioningFinish;
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (void)animationEnded:(BOOL)arg1;
- (void)animateTranslateTransition:(id)arg1 fromVC:(id)arg2 toVC:(id)arg3 fromView:(id)arg4 toView:(id)arg5;
- (void)animateMsgTransition:(id)arg1 fromVC:(id)arg2 toVC:(id)arg3 fromView:(id)arg4 toView:(id)arg5;
- (void)animateTransition:(id)arg1 fromVC:(id)arg2 toVC:(id)arg3 fromView:(id)arg4 toView:(id)arg5;
- (void)animateShowWithOriginRectInScreen:(CGRect)arg1;
- (void)animateShowWithOriginRectInScreen:(CGRect)arg1 msgTransition:(BOOL)arg2;
- (void)animateHideWithOrientation:(long long)arg1 PreviewData:(id)arg2;
- (void)setupScrollableActionSheetCanForward:(BOOL)arg1;
- (void)cancelQRCodeInfoCallback;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)scrollActionSheetDidTapTransparent:(id)arg1;
- (void)scrollActionSheetDidCancel:(id)arg1;
- (void)scrollActionSheetWillDismiss:(id)arg1;
- (void)actionSheet:(id)arg1 didTapedVerticalRowInfo:(id)arg2;
- (void)getQRCodeInfo:(unsigned int)arg1 codeStr:(id)arg2;
- (void)onTimeout:(id)arg1;
- (void)onGetQRCodeInfoResultFailure:(unsigned int)arg1;
- (void)onGetQRCodeInfoResultSuccess:(unsigned int)arg1 qrCodeInfoItem:(id)arg2;
- (void)updateRowInfoUseDefaultInfo:(unsigned int)arg1;
- (void)clickRFItemCallBack:(id)arg1;
- (void)relayoutScrollSheet;
- (void)handleClickAddToMultiFloating;
- (void)doAddToMultiFloatingFromTaskData:(id)arg1;
- (id)minimizeTaskData;
- (void)handleRemoveFromStackForMultiFloating;
- (id)minimizeSnapshotForMsg:(id)arg1;
- (void)minimizationInteractivePopGestureRecognizerDidBegin;
- (void)minimizationInteractivePopToMinimizeTask:(BOOL)arg1;
- (void)initEditModeView;
- (void)initBackgroundView;
- (id)getTitleBackGroundView;
- (void)initBackBarButton;
- (void)initSelectCheckButton;
- (id)getSelectCheckButton;
- (void)changeSelectedButtonInEditMode;
- (void)setTopBarHiddenAnimated:(BOOL)arg1;
- (void)OnSelectedButtonDone;
- (void)OnClickBackBarButton:(id)arg1;
- (void)onSingleTapViewInEditMode;
- (void)onSingleTapVideoViewInEditMode;
- (void)onUserClickVideoInEditMode;
- (void)pageDidChangedInEditMode;
- (void)onFullScreenItemDragBeginInEditMode;
- (void)onFullScreenItemDragEndInEditMode;
- (void)onOpenBrandMpPage:(id)arg1 enterIdForReport:(unsigned int)arg2;
- (void)onOpenBrandProfile:(id)arg1;
- (void)reportBrandMpVideoIfNeedWithOpType:(unsigned long long)arg1;
- (unsigned long long)convertESceneToBrandMpVideoReportScene;
- (void)tryReportBrandMpVideoShareSuccessEventIfNeed;
- (BOOL)isShowEnterMpPageBtn:(id)arg1;
- (id)contactByUsrName:(id)arg1;
- (void)advancePreloadMpDataIfNeed;
- (id)initWithParam:(id)arg1;
- (id)getCurrentMsgWrap;
- (id)getOpenMsgWrap;
- (id)middleExpireTipsView;
- (void)updateExpireTipsView;
- (id)middleExpireTipsLabel;
- (id)getCurrentScrollView:(id)arg1;
- (BOOL)isImgMsg:(id)arg1;
- (void)handlePushOrPresentTransitioningFinish;
- (BOOL)isCurrentPageError;
- (void)stopImageDownload;
- (BOOL)hasDownloadHDImg:(id)arg1;
- (void)report17560WithType:(int)arg1 msgWrap:(id)arg2;
- (void)registerYReportSdk;
- (void)tryShowDownloadingView;
- (void)animateHideDownloadingView;
- (void)animateShowMiddleExpireTipsViewWithTips:(id)arg1;
- (void)animateHideHDDownloadStatus:(id)arg1;
- (void)animateHideHDDownloadStatusOnComplete:(float)arg1 msgWrap:(id)arg2;
- (void)updateCurrentImageDownloadStatus;
- (void)updateHDDownloadingStatus:(float)arg1 msgWrap:(id)arg2;
- (void)animateShowButton;
- (void)setIsFromMsgContentView:(BOOL)arg1;
- (void)setBForbidBounces:(BOOL)arg1;
- (void)updateToolbar;
- (id)maskView;
- (id)getCurrentDraggingContentView;
- (void)handleDidAppearForMinimize;
- (id)getImageViewWithMsgWrap:(id)arg1;
- (id)getCurrentImageView;
- (BOOL)hidesStatusBar;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidPushOrPresent:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillPush:(BOOL)arg1;
- (void)viewWillPresent:(BOOL)arg1;
- (void)viewWillBePresented:(BOOL)arg1;
- (void)viewWillBeDismissed:(BOOL)arg1;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)viewWillBePushed:(BOOL)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (BOOL)useCustomNavibar;
- (BOOL)shouldHideNavigationBar;
- (void)adjustViewAndNavBarRect;
- (id)tagForActivePage;
- (void)onSingleTap:(id)arg1;
- (void)onFullScreenItemDragToClose;
- (void)closeVC;
- (id)addActionSheetItem:(unsigned int)arg1 iconImage:(id)arg2 title:(id)arg3 toArray:(id)arg4;
- (void)sortActionSheetItem;
- (long long)compareActionSheetItemInfo:(id)arg1 b:(id)arg2;
- (void)configScrollableActionSheet:(id)arg1 scene:(unsigned int)arg2;
- (void)showActionSheetIfNeed:(id)arg1 scene:(unsigned int)arg2;
- (void)onLongPress:(id)arg1;
- (void)onClickShareBtn:(id)arg1;
- (void)onClickMoreBtn:(id)arg1;
- (void)onLongPressBegin:(id)arg1;
- (BOOL)syncVideoAllDataWithPlayerByOperateMode:(unsigned int)arg1 messageWrap:(id)arg2;
- (void)handleClickActionSheetItemScan;
- (void)handleClickActionSheetItemOCR;
- (void)setupOCRHalfScreenViewCtrl:(id)arg1 msgWrap:(id)arg2;
- (void)onImageDetectUploadFinish:(unsigned int)arg1 context:(id)arg2 detectMediaInfo:(id)arg3;
- (void)onImageDetectOCRFinish:(unsigned int)arg1 jsonStr:(id)arg2 reqKey:(id)arg3 ocrResultType:(long long)arg4;
- (void)showOCRHalfScreenViewCtrl;
- (void)handleClickActionSheetItemShareFriend:(id)arg1;
- (void)handleClickActionSheetItemFavorite;
- (void)handleClickActionSheetItemSaveImageToAlbum;
- (void)internalSaveImageToAlbum:(id)arg1;
- (void)handleClickActionSheetItemSaveVideoToAlbum;
- (void)handleClickActionSheetItemSearchImage;
- (void)handleClickActionSHeetItemCircleToSearch;
- (void)handleClickActionSheetItemOpen;
- (void)handleClickActionSheetItemEdit;
- (void)handleClickActionSheetItemMessageLocation;
- (void)handleClickActionSheetItemImageFastBrowse;
- (void)handleClickActionSheetItemShareTimeline;
- (void)handleClickActionSheetItemCancel;
- (void)handleClickForwardToFinderClub;
- (void)_onFinderRowViewDidClick;
- (void)imageForwardToFinder;
- (void)videoForwardToFinder;
- (id)getImgInfoName:(id)arg1;
- (id)getImgInfoTime:(id)arg1;
- (void)checkVideoSteamDownloadStatus;
- (void)initBottomBar;
- (BOOL)canShowImageFastBrowse;
- (void)reportSaveLocalMediaItem;
- (BOOL)isClicfgOn;
- (void)refreshWAWxMaterialAppInfo:(id)arg1;
- (void)tryAddWAOpenWxMaterialButtonWhenPopMenu:(BOOL)arg1;
- (BOOL)addWAOpenWxMaterialButton:(id)arg1 openType:(unsigned int)arg2;
- (void)addUseOtherApp;
- (void)handleClickUseOtherApp;
- (void)realHandleClickUseOtherApp;
- (void)handleClickWeAppListOpenMaterial;
- (void)handleClickWeAppOpenMaterial:(id)arg1;
- (void)newHandleClickWeAppOpenMaterial:(id)arg1;
- (void)handleRemoveFromStack;
- (void)handleClickDevice:(id)arg1;
- (void)handleClickMMScrollActionSheetItem:(id)arg1;
- (void)weAppOpenMaterial:(id)arg1;
- (void)adujstViewForImageAppMsg;
- (void)onBackButtonClicked:(id)arg1;
- (void)onMoreButtonClicked:(id)arg1;
- (void)showActionSheetViewForAppMsg;
- (BOOL)showActionSheetBeforeSaveToAlbum;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (double)updateBottomBarAndViews;
- (void)addShadowToView:(id)arg1;
- (void)updateSliderAlpha;
- (void)onCancelCurrentDownload;
- (void)initScrollView;
- (void)updateLoadingView;
- (void)updateMsgArray:(id)arg1;
- (void)ensurePageOffsetWithMsg:(id)arg1;
- (void)ensurePageOffsetWithPageCount:(unsigned int)arg1 atIndex:(unsigned int)arg2;
- (void)preLoad:(id)arg1;
- (void)initLogic:(id)arg1;
- (void)uninitLogic;
- (void)adjustSubviewRects;
- (void)dealloc;
- (unsigned int)getStatusFor:(id)arg1;
- (void)setStatusFor:(id)arg1 status:(unsigned int)arg2;
- (id)getMsgFor:(unsigned int)arg1;
- (unsigned int)getIndexFor:(id)arg1;
- (id)getImageFor:(id)arg1;
- (id)getImageFor:(id)arg1 isHD:(BOOL *)arg2;
- (id)getOriginImageFor:(id)arg1 isHD:(BOOL *)arg2;
- (void)asyncLoadHDImage:(id)arg1;
- (void)doLoadHDImage:(id)arg1;
- (void)doUpdateHDImage:(id)arg1;
- (id)hdrImageFromData:(id)arg1;
- (id)getThumbImageFor:(id)arg1;
- (id)getThumbOrDefaultImageFor:(id)arg1;
- (id)getProgressJpeg:(id)arg1;
- (id)getImageForDetect:(id)arg1;
- (void)setVideoInitialTime:(double)arg1;
- (void)setVideoThumbImage:(id)arg1;
- (id)curImgSearchReporter;
- (id)transitionComponent;
- (void)updateTransitionComponent;
- (void)OnDownloadImageFail:(id)arg1;
- (void)OnDownloadImageExpired:(id)arg1;
- (void)OnDownloadImageOk:(id)arg1;
- (void)OnDownloadImagePart:(id)arg1 PartLen:(unsigned int)arg2 TotalLen:(unsigned int)arg3;
- (void)OnDownloadImagePartNew:(id)arg1 PartLen:(unsigned int)arg2 TotalLen:(unsigned int)arg3 TryShow:(BOOL)arg4;
- (void)OnImageSaveAlbumSuccess:(id)arg1;
- (void)OnImageSaveAlbumError:(id)arg1;
- (void)OnDownloadForSaveAlbumFail:(id)arg1 Expired:(BOOL)arg2;
- (void)startDownloadImageForSaveAlbum;
- (void)startDownloadImg:(BOOL)arg1 forIndex:(unsigned int)arg2;
- (void)onViewHDImage:(id)arg1;
- (void)onViewQuickMsgSoure:(id)arg1;
- (void)onImgMsgLocate;
- (void)onImgFastBrowse:(id)arg1;
- (void)onClickSavedPhotosAlbumButton;
- (void)preDetectWordInImage;
- (void)preSearchPhash:(id)arg1;
- (void)PreScanQRCode:(id)arg1;
- (void)PreScanQRCode:(id)arg1 withSecondScanCallbackBlock:(id /* block */)arg2;
- (void)imageForScanQRCodeAtPage:(unsigned int)arg1 isClipImage:(BOOL *)arg2 clipRect:(CGRect *)arg3 returnBlock:(id /* block */)arg4;
- (BOOL)hasSufficientMemoryWithImageWidth:(double)arg1 imageHeight:(double)arg2;
- (BOOL)isNeedClipQRCodeScanImageForSize:(CGSize)arg1;
- (void)saveVideoToAlbum:(id)arg1;
- (void)internalSaveVideoToAlbum:(id)arg1;
- (void)showAlertViewForNetDisconnected;
- (id)uuidAtPage:(unsigned int)arg1;
- (id)imageAtPage:(unsigned int)arg1;
- (id)imagePathAtPage:(unsigned int)arg1;
- (id)liveVideoPathAtPage:(unsigned int)arg1;
- (void)clearImageMemoryOnChangePage;
- (void)clearVideoMemoryOnChangePage;
- (void)clearExpireViewOnChangePage;
- (void)onChangePage;
- (void)pageDidChanged;
- (void)multiImageScrollViewWillBeginDragging;
- (void)ImageScrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)ImageScrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)multiImageScrollViewDidScroll;
- (void)multiImageScrollViewDidEndScrolling;
- (void)setUnStatbleViewsHidden:(BOOL)arg1;
- (void)animateHideViewsWhenBeginDrag;
- (void)animateHideViewsAfterSeconds;
- (void)animateHideViews:(BOOL)arg1;
- (void)animateShowViews;
- (void)animateShowViewsWhenEndDrag;
- (void)delayStartDownloadImg:(id)arg1;
- (id)generatePlayerViewWithMsg:(id)arg1 frame:(CGRect)arg2;
- (void)addDebugLabelToSuperView:(id)arg1 msg:(id)arg2;
- (id)viewAtPage:(unsigned int)arg1 frame:(CGRect)arg2;
- (void)tryShowProgressJpegForIndex:(unsigned int)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)relayoutOnTransition;
- (void)viewDidTransitionToNewSize;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnModMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgBeRemoved:(id)arg1 msg:(id)arg2 index:(unsigned int)arg3;
- (void)OnMsgBeRemoved:(id)arg1 n64MsgId:(long long)arg2 FromRevoked:(BOOL)arg3;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgRevoked:(id)arg1 n64MsgId:(long long)arg2;
- (void)onPushViewContoller:(id)arg1 animated:(BOOL)arg2;
- (void)onStopLoading;
- (void)onScanEnds;
- (void)didShowScanResult;
- (void)onGetA8KeyFail;
- (void)onClickPlayAttachVideo:(id)arg1;
- (void)onWCC2CVideoPlayerViewClickDetail:(id)arg1;
- (void)onToolViewHiddenChangeTo:(BOOL)arg1;
- (void)onGetVideoViewBottomLineCenterY:(double *)arg1 leftPartWidth:(double *)arg2 rightPartWidth:(double *)arg3 rightPartMargin:(double *)arg4;
- (BOOL)IsShowSingleMsg;
- (void)onGetEMsgScene:(unsigned long long *)arg1;
- (void)onReceiveVideoFinishMsg:(id)arg1;
- (double)getBottomRightMargin;
- (void)onDownloadVideoSuccess:(id)arg1;
- (void)onWCC2CVideoPlayerViewSingleTap:(id)arg1;
- (void)onWCC2CVideoPlayerViewDragToClose:(id)arg1;
- (void)onFullScreenSingleTap;
- (void)statLevelFullScreenSight;
- (void)onWCC2CVideoPlayerViewLongPress:(id)arg1;
- (void)startPlayVideo;
- (void)stopPlayVideo;
- (BOOL)needShowLocateBtn;
- (BOOL)onMsgImgDataMatch:(id)arg1;
- (void)animateHideWithCompletion:(id /* block */)arg1;
- (void)animateHide;
- (void)animateHideWithFadeout;
- (void)hideWithoutAnimate;
- (void)onCurrentPageMsgReMoved:(id)arg1;
- (void)OnMsgDownloadVideoSuccess:(id)arg1 MsgWrap:(id)arg2;
- (id)getCurrentPlayerView;
- (id)getPlayerViewWithMsgWrap:(id)arg1;
- (void)onFullScreenItemChangeAlpha:(double)arg1;
- (void)onFullScreenDragBegin;
- (void)onFullScreenDragCancel;
- (void)onFullScreenDragEnd;
- (void)setToolViewAlpha:(double)arg1;
- (void)forwardMessage:(id)arg1 toContact:(id)arg2;
- (void)startEditImage:(BOOL)arg1;
- (void)onUserClickVideo:(id)arg1 inFullScreenView:(BOOL)arg2;
- (id)getCurrentViewController;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (id)m_forwardLogicController;
- (id)genReportParams;
- (id)itemsManager;
- (void)onShowingEditView;
- (void)onDismissEditView;
- (unsigned long long)preferredScreenEdgesDeferringSystemGestures;
- (void)onStatStartDownload:(BOOL)arg1;
- (void)onStatDownloadFinish:(int)arg1;
- (id)getTranlateMidImgIdentifer:(id)arg1;
- (void)onStartAnimateOCRImage;
- (void)onFinishAnimateOCRImage;
- (id)genDetectWordActionSheetItemList;
- (BOOL)canShowDownloadButton;
- (BOOL)canShowQRCodeButton;
- (BOOL)shouldShowCreateFinderContactAction;
- (BOOL)isSupportImageDetectFastEntry;
- (BOOL)isSupportImagePreScanFastEntry;
- (BOOL)isQrCodeBeginDetect;
- (BOOL)isQrCodeDetected;
- (BOOL)shouldShowTranslateEntryWithSource:(int)arg1;
- (BOOL)shouldShowOCREntry;
- (BOOL)isSearchPhashDetected;
- (BOOL)isSearchHeatImage;
- (BOOL)shouldShowSearchPhashBtn;
- (BOOL)shouldShowSearchBubbleView;
- (BOOL)shouldShowQrCodeEntry;
- (BOOL)shouldUseTranslateButton;
- (BOOL)shouldUseQrCodeButton;
- (void)notifyPreDetectWordFinish;
- (void)notifySearchPhashDetectFinish;
- (void)notifyQrCodeDetectFinish;
- (void)updateDetectResultUI;
- (void)resetPreDetectButton;
- (void)asyncDetectImageIfNeeded:(BOOL)arg1;
- (void)onClickQrCodeButton:(id)arg1;
- (void)onClickImgSourceButton:(id)arg1;
- (void)onClickMPScreenshotSourceButton:(unsigned int)arg1;
- (void)onClickWeAppScreenshotButton;
- (void)enterWeAppByScreenshotContextInfoWithScene:(unsigned long long)arg1;
- (void)handleSecondScanOnClickQrCodeButton;
- (void)handleSingleCodeOnClickQrCodeButton;
- (void)internalHandleScanCode;
- (void)delayQRCodeLoading;
- (void)onStartHandleQRCode;
- (BOOL)showQRCodeDotView;
- (void)onSelectMarkDotInfo:(id)arg1;
- (void)removeQRCodeDotView;
- (void)layoutQRCodeDotView;
- (void)makeFeedBack;
- (void)refreshDetectResult;
- (void)reportClickWithEntryType:(unsigned int)arg1;
- (void)reportFastEntryClickResult:(BOOL)arg1;
- (void)safeReportQRCodeFastEntryClickResult:(BOOL)arg1;
- (id)currPageMessageWrap;
- (id)phashStrForCurrPageMessageWrap;
- (id)phashInfoForCurrPageMessageWrap;
- (void)openSearchViewController:(id)arg1;
- (void)startImageCircleToSearch:(unsigned long long)arg1;
- (void)startImageSearchWithsource:(long long)arg1;
- (void)onHalfScreenPageDidClose:(id)arg1 action:(long long)arg2;
- (void)showQRCodeMultiDisplayView;
- (void)updateQRCodeMultiView;
- (id)getDataOfDotViewInfoFilterWithScanFinishBlock:(id /* block */)arg1;
- (void)onDotViewClicked:(id)arg1;
- (void)onCancelBtnClicked:(id)arg1;
- (void)dismissQRCodeMultiView;
- (void)onAudioMonoServiceBussinessAdded:(id)arg1 inMainScene:(BOOL)arg2;
- (void)onTappedRowInfo:(id)arg1;
- (void)onActionSheetQRCodeRowViewBanned;
- (void)onTappedRowImgSource;
- (void)presentImgSourceWebVC:(unsigned int)arg1;
- (void)accessibilityScroll;
- (void)setLockRotate:(BOOL)arg1;
- (void)postViewControllerFromVC:(id)arg1 postSession:(id)arg2;
- (void)onVideoDownloadComplete:(id)arg1 isRaw:(BOOL)arg2 taskInfo:(id)arg3;
- (BOOL)isDisplayTranslateResult:(id)arg1;
- (void)onClickCloseButton:(id)arg1;
- (void)onClickMoreButton:(id)arg1;
- (void)onClickWeAppButton;
- (void)onClickShareButton:(id)arg1;
- (void)onClickDownloadButton:(id)arg1;
- (void)onClickToCancelSaveVideo;
- (void)onClickImgFastBrowseButton:(id)arg1;
- (BOOL)canShowShareButton;
- (BOOL)canShowImgFastBrowseButton;
- (BOOL)canShowMoreButton;
- (void)onFullScreenLongPress;
- (void)onFullScreenClose;
- (void)clickOnOpenOtherApp:(id)arg1;
- (void)clickOnWeApp:(id)arg1;
- (void)clickOnDevice:(id)arg1;
- (id)m_nsChatName;
- (void)setM_nsChatName:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (BOOL)allowRotate;
- (void)setAllowRotate:(BOOL)arg1;
- (BOOL)isFromMsgContentView;
- (id)m_videoViewDic;
- (void)setM_videoViewDic:(id)arg1;
- (BOOL)m_hasPreviewVideo;
- (void)setM_hasPreviewVideo:(BOOL)arg1;
- (unsigned long long)m_eType;
- (void)setM_eType:(unsigned long long)arg1;
- (unsigned long long)m_eScene;
- (void)setM_eScene:(unsigned long long)arg1;
- (id)bottomButtonsContainerView;
- (void)setBottomButtonsContainerView:(id)arg1;
- (BOOL)bForbidBounces;
- (id)scanCodePrefixBlackList;
- (void)setScanCodePrefixBlackList:(id)arg1;
- (unsigned long long)m_eSubScene;
- (void)setM_eSubScene:(unsigned long long)arg1;
- (BOOL)isShowSingleMsg;
- (void)setIsShowSingleMsg:(BOOL)arg1;
- (BOOL)bForbidRotateToPortraitWhenExit;
- (void)setBForbidRotateToPortraitWhenExit:(BOOL)arg1;
- (BOOL)bForbidTransToOriginRectWhenExitIfOrientationChanged;
- (void)setBForbidTransToOriginRectWhenExitIfOrientationChanged:(BOOL)arg1;
- (id)scanQRCodeLogic;
- (void)setScanQRCodeLogic:(id)arg1;
- (BOOL)bIsNotMoreMsgImgBrowseView;
- (void)setBIsNotMoreMsgImgBrowseView:(BOOL)arg1;
- (unsigned long long)transitioningStyle;
- (void)setTransitioningStyle:(unsigned long long)arg1;
- (id)brandMpVideoReporter;
- (void)setBrandMpVideoReporter:(id)arg1;
- (id)imageExpireReporter;
- (void)setImageExpireReporter:(id)arg1;
- (BOOL)bUpdateForVoiceOver;
- (void)setBUpdateForVoiceOver:(BOOL)arg1;
- (BOOL)m_hasShowSpamTips;
- (void)setM_hasShowSpamTips:(BOOL)arg1;
- (id)sliderUpdateTimer;
- (void)setSliderUpdateTimer:(id)arg1;
- (void)setM_forwardLogicController:(id)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (void)setMiddleExpireTipsView:(id)arg1;
- (void)setMiddleExpireTipsLabel:(id)arg1;
- (id)qrCodeMultiView;
- (void)setQrCodeMultiView:(id)arg1;
- (BOOL)isFromReferedMsg;
- (void)setIsFromReferedMsg:(BOOL)arg1;
- (BOOL)haveMaterialButton;
- (void)setHaveMaterialButton:(BOOL)arg1;
- (id)materialFileExt;
- (void)setMaterialFileExt:(id)arg1;
- (BOOL)canLongPress;
- (void)setCanLongPress:(BOOL)arg1;
- (id)phashMemCache;
- (void)setPhashMemCache:(id)arg1;
- (id)lastSearchPhashFailedMessageWrap;
- (void)setLastSearchPhashFailedMessageWrap:(id)arg1;
- (id)lastMsgWrap;
- (void)setLastMsgWrap:(id)arg1;
- (id /* block */)customBottomLeftActioin;
- (void)setCustomBottomLeftActioin:(id /* block */)arg1;
- (id /* block */)customBottomLeftString;
- (void)setCustomBottomLeftString:(id /* block */)arg1;
- (id)m_imageViewDic;
- (void)setM_imageViewDic:(id)arg1;
- (id)m_expireViewDic;
- (void)setM_expireViewDic:(id)arg1;
- (void)setItemsManager:(id)arg1;
- (id)reportParams;
- (void)setReportParams:(id)arg1;
- (id)interactiveHandler;
- (void)setInteractiveHandler:(id)arg1;
- (id)dragDownLeaveGestureHandler;
- (void)setDragDownLeaveGestureHandler:(id)arg1;
- (id)transitionDelegate;
- (void)setTransitionDelegate:(id)arg1;
- (void)setTransitionComponent:(id)arg1;
- (void)setMaskView:(id)arg1;
- (id)qrCodeInfoLogic;
- (void)setQrCodeInfoLogic:(id)arg1;
- (BOOL)isUrlInfoHasUpdated;
- (void)setIsUrlInfoHasUpdated:(BOOL)arg1;
- (id)scrollActionSheet;
- (void)setScrollActionSheet:(id)arg1;
- (id)arrItems1;
- (void)setArrItems1:(id)arg1;
- (id)arrItems2;
- (void)setArrItems2:(id)arg1;
- (BOOL)lockRotate;
- (id)ocrHalfScreenViewCtrl;
- (void)setOcrHalfScreenViewCtrl:(id)arg1;
- (id)minimizationTransitionController;
- (void)setMinimizationTransitionController:(id)arg1;
- (id)minimizationHandler;
- (void)setMinimizationHandler:(id)arg1;
- (void).cxx_destruct;
@end
