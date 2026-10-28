@interface WCCanvasPageViewController : MMUIViewController <WCCanvasComponentDelegate, WCActionSheetDelegate, ForwardMessageLogicDelegate, WCCommitViewResultDelegate, UIViewControllerAnimatedTransitioning, UINavigationControllerDelegate, WCCanvasImageLoaderObserver, ViewLocationDelegate, FavForwardLogicDelegate, WCCanvasDynamicDataLoaderDelegate, MMWebImageViewDelegate, MMProductControllerExt, YYWebViewDelegate, WCNetworkMediaPlayerDelegate, WCCanvasActionSheetDelegate, WCCanvasFloatViewDelegate, WCCanvasRandomEncoreViewDelegate, WCCanvasRandomPickCardBottomViewDelegate, WCCanvasFlyingFlipAnimationViewDelegate, WCWeAppBizTempSessionHelperDelegate, BaseScanLogicDelegate, PAGViewListener, IAppDataExt, ICanvasMusicMgrExt, MMTableViewDelegate, UITableViewDelegate, UITableViewDataSource, UIScrollViewDelegate>
{
    WCDataItem * m_dataItem; // +0x70
    MMTableView * m_tableView; // +0x78
    CMessageWrap * m_msgWrap; // +0x80
    WCAdvertiseInfo * m_advertiseInfo; // +0x88
    MMLoadingView * _loadingView; // +0x90
    ForwardMessageLogicController * m_forwardLogic; // +0x98
    MMUIWindow * m_fullScreenWindow; // +0xa0
    BOOL m_bShowSelfView; // +0xa8
    BOOL m_bForbidFavMenu; // +0xa9
    BOOL _m_bAllowFirstSightVoice; // +0xaa
    BOOL _shouldGenForwardAdXml; // +0xab
    BOOL _shouldHideNavigationWhenPop; // +0xac
    BOOL _halfScreenReachedTopFlag; // +0xad
    BOOL _halfScreenForbidPanUp; // +0xae
    BOOL _forbidBackToBizApp; // +0xaf
    BOOL _m_bClickedCloseBtn; // +0xb0
    BOOL _m_bHasTryDownloadAllPage; // +0xb1
    BOOL _m_bHasDrag; // +0xb2
    BOOL _isKeyboardShowing; // +0xb3
    BOOL _isKeyboardDidShow; // +0xb4
    BOOL _hasShowFloatView; // +0xb5
    BOOL _isActionSheetShow; // +0xb6
    BOOL _isFloatViewInvisible; // +0xb7
    BOOL _shouldDetectBottomSwipeAction; // +0xb8
    BOOL _shouldForbidRefreshTwistComponent; // +0xb9
    BOOL _adDataHasChange; // +0xba
    BOOL _isViewAppear; // +0xbb
    BOOL _didCanvasViewFullyAppear; // +0xbc
    BOOL _didCanvasViewInBackground; // +0xbd
    BOOL _qrCodeScanDirectJump; // +0xbe
    BOOL _floatJumpViewHadSwipeJumped; // +0xbf
    BOOL _isEncoreAnimationPlaying; // +0xc0
    BOOL _shouldResumeEncoreStatus; // +0xc1
    BOOL _isTheFirstTimeToTwistFromShareScene; // +0xc2
    BOOL _isAdAntiAbuse; // +0xc3
    int _m_canvasPageScene; // +0xc4
    int _m_originCanvasScene; // +0xc8
    unsigned int _specialTransitioningType; // +0xcc
    unsigned int _beginTimeDownloadFirstImage; // +0xd0
    UIView * m_originView; // +0xd8
    MMWebImageView * m_FirstViewToAnimate; // +0xe0
    UIView * m_topView; // +0xe8
    WCCanvasArrowDownIcon * m_arrowDownIcon; // +0xf0
    UIImageView * m_topMaskView; // +0xf8
    UIImage * m_arrowDownImage; // +0x100
    UIView * m_originViewCopyToShowAnimation; // +0x108
    NSString * sessionId; // +0x110
    NSString * statBuffer; // +0x118
    id <WCCanvasPageViewControllerDelegate> _m_delegate; // +0x120
    NSString * _m_thumbUrl; // +0x128
    NSDictionary * _extraInfo; // +0x130
    NSString * _currentCanvasId; // +0x138
    NSString * _fromCanvasId; // +0x140
    WCAdExpressionGestureJumpExtInfo * _gestureExtInfo; // +0x148
    double _videoContinuePlayInterval; // +0x150
    long long _outClickedIndex; // +0x158
    NSString * _bizAppId; // +0x160
    unsigned long long _canvasPresentationStyle; // +0x168
    UIImage * _canvasSnapShot; // +0x170
    UIImage * _originSnapShot; // +0x178
    UIImage * _cardBottomSnapShot; // +0x180
    UIView * _originCellView; // +0x188
    MMProgressViewEx * _progressLoadingView; // +0x190
    UIImageView * _m_canvasBackgroundView; // +0x198
    PAGView * _m_transitionAnimationView; // +0x1a0
    UIButton * _m_scrollDownArea; // +0x1a8
    NSMutableArray * _m_arrowDownIconHasShowList; // +0x1b0
    NSMutableDictionary * _m_dicCellIdToHeight; // +0x1b8
    MMTimer * _timer; // +0x1c0
    UIButton * _m_fullScreenExitButton; // +0x1c8
    WCCanvasDynamicDataLoader * _dynamicLoader; // +0x1d0
    NSMutableDictionary * _URL2BgImageViewMap; // +0x1d8
    WCCanvasComponentItem * _m_oFirstVideoComponentItem; // +0x1e0
    WCCanvasActionSheet * _actionSheet; // +0x1e8
    WCWeAppBizTempSessionHelper * _bizSessionHelper; // +0x1f0
    NSMutableDictionary * _m_dicH5UrlToPreloadWebview; // +0x1f8
    WCCanvasReportMgr * _m_reportMgr; // +0x200
    MMUIView * _fixIphoneXView; // +0x208
    WCCanvasFloatView * _floatView; // +0x210
    WCCanvasPassthroughContainerView * _floatContainerView; // +0x218
    WCCanvasFloatScrollView * _floatScrollView; // +0x220
    WCCanvasFloatConversionBarView * _floatConversionBar; // +0x228
    WCCanvasFloatSidebarView * _floatSidebar; // +0x230
    WCCanvasFloatActionBaseView * _manuallyFloatView; // +0x238
    WCCanvasFloatActionBtnView * _floatActionView; // +0x240
    NSString * _sharedUxinfo; // +0x248
    unsigned long long _qrScanComponentType; // +0x250
    NSString * _qrExtInfo; // +0x258
    ScanQRCodeLogicController * _scanQRCodeLogic; // +0x260
    WCActionSheetWithScanWXCode * _actionSheetWithWXCode; // +0x268
    WCCanvasComponent * _destComponentForSpecialAnim; // +0x270
    MMTimer * _exposureReportTimer; // +0x278
    id /* block */ _qrCodeScanCompleteCallback; // +0x280
    WCCanvasFloatJumpView * _floatJumpView; // +0x288
    double _floatJumpViewInitPositionY; // +0x290
    WCCanvasRandomEncoreView * _randomEncoreView; // +0x298
    WCCanvasRandomPickCardBottomView * _pickCardBottomView; // +0x2a0
    NSString * _previousRandomCardIdForQuickSwitchAnimation; // +0x2a8
    unsigned long long _previousRandomPickCardRemainCount; // +0x2b0
    long long _previousRandomPickCardClickedIndex; // +0x2b8
    WCAdRandomPickCardLogic * _randomPickCardLogic; // +0x2c0
    WCAdRandomPickCardItemInfo * _randomPickCardVanishingItemInfo; // +0x2c8
    WCAdRandomPickCardItemInfo * _randomPickCardStayPutItemInfo; // +0x2d0
    unsigned long long _randomPickCardPendingState; // +0x2d8
    WCCanvasMusicMgr * _musicMgr; // +0x2e0
    MMBarButtonItem * _backgroundMusicButton; // +0x2e8
    NSString * _backgroundMusicId; // +0x2f0
    WCStatTimerHelper * _backgroundMusicStayTimeHelper; // +0x2f8
    WCAdCanvasExtraParams * _extraParams; // +0x300
    CGPoint _offsetBeforeDragging; // +0x308
    CGPoint _fromOffsetBeforeScoll; // +0x318
    CGPoint _toOffsetAfterScroll; // +0x328
    CGPoint _contentOffsetWhenKeyboardWillShow; // +0x338
    CGRect _outOriginRectInScreen; // +0x348
    CGRect _originCardFrameInScreen; // +0x368
    CGRect _originRectInScreen; // +0x388
}
- (id)initWithDataItem:(id)arg1 advertiseInfo:(id)arg2 originView:(id)arg3 enterScene:(int)arg4;
- (id)initWithMsgWrap:(id)arg1 advertiseInfo:(id)arg2 originView:(id)arg3 enterScene:(int)arg4;
- (void)commonInit;
- (void)updateAdCanvasPages;
- (void)updateCanvasAuth;
- (BOOL)hasTableViewAlreadyReachBottom;
- (void)updateSharedUxinfo;
- (BOOL)checkNeedUpdateSharedUxinfo;
- (void)preloadScanGoodsResIfNeeded;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidBePushed:(BOOL)arg1;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (void)notifyVisibleComponentsWillDisappear;
- (void)notifyVisibleComponentsCloseBtnClick;
- (void)notifyVisibleComponentsDidAppear;
- (void)addPreloadWebviewInCacheArray:(id)arg1 andKey:(id)arg2;
- (void)tryPreloadWebview;
- (void)tryClearAllCacheWebview;
- (id)getCacheWebviewWithUrl:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewDidBeDismissed:(BOOL)arg1;
- (void)doReport13387;
- (void)assembleExtraInfo;
- (void)tryToReportExitWithLeaveType;
- (void)dealloc;
- (BOOL)useTransparentNavibar;
- (id)navigationBarBackgroundColor;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)initTableView;
- (void)initNavigationItem;
- (void)initPushingNavigationItem;
- (void)initTopBar;
- (void)initFirstCellView;
- (void)tryToInitCanvasBgView;
- (void)tryInitSectionBgView;
- (void)addBlurView:(id)arg1 page:(id)arg2;
- (void)updateArrowDownImageWithSection:(long long)arg1;
- (void)initView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)didTableViewEndDecelerating;
- (CGRect)rectForSection:(id)arg1 section:(long long)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)onBtnCloseCanvasPage;
- (void)closeCanvasPageWithAnimation;
- (BOOL)isFloatViewWithWebStoreComponent;
- (void)setIsActionSheetShow:(BOOL)arg1;
- (void)clearQRScanActionSheet;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)favCavasPage;
- (void)checkCompatibleAndSendCanvasPageToFriend;
- (void)checkCompatibleAndSendCanvasPageToFriendWithTitle:(id)arg1 desc:(id)arg2 thumbUrl:(id)arg3 redEnvelopInfo:(id)arg4;
- (void)sendCanvasPageToFriendWithTitle:(id)arg1 desc:(id)arg2 thumbUrl:(id)arg3 redEnvelopInfo:(id)arg4 dynamicLoadCanvasXml:(id)arg5;
- (id)genUploadTask;
- (id)genStatExtString;
- (id)getCanvasXml;
- (void)checkCompatibleAndShareCanvasPageToTimeline;
- (void)shareCanvasPageToTimeline:(id)arg1;
- (void)onMoreBtnClicked;
- (void)onClickRightBarCanvasItem;
- (id)fetchCanvasTableView;
- (id)fetchFloatContainerView;
- (double)canvasInsetsTop;
- (BOOL)isCanvasInHalfScreenMode;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)loadingAfterForwardMessageOK;
- (id)getThumbUrl;
- (void)onCancelForwardForForwardView:(id)arg1;
- (void)onDoneForwardForForwardView:(id)arg1;
- (id)getReportMgr;
- (id)getMusicMgr;
- (BOOL)isCanvasOpenedInShareScene;
- (BOOL)isCanvasOpenedFromH5;
- (BOOL)isCanvasOpenedFromPreview;
- (id)getAdUxInfoByWhetherUseSharedFirst:(BOOL)arg1;
- (id)getAdUxInfo;
- (id)getWeAppSceneNoteForComponentItem:(id)arg1;
- (void)reloadData;
- (void)reloadDataImmediately;
- (void)getCanvasScene:(int *)arg1;
- (id)getCanvasOriginScene;
- (void)jumpStreamVideoForSightComponent:(id)arg1;
- (void)updateVideoComponentPlayingState:(BOOL)arg1;
- (void)updateDestComponentForSpecialAnimWith:(id)arg1;
- (BOOL)onComponentShouldHideRandomLayoutChosenComponent;
- (void)canvasComponent:(id)arg1 willJumpToCanvas:(id)arg2 canvasId:(id)arg3 pageScene:(int)arg4;
- (BOOL)canvasComponent:(id)arg1 willJumpToDynamicCanvas:(id)arg2 canvasLoadParams:(id)arg3;
- (void)showLoading;
- (void)showLoadingWithAutoHideInterval:(double)arg1;
- (void)showLoadingWithText:(id)arg1 delayAnimation:(double)arg2 block:(BOOL)arg3 autoHideInterval:(double)arg4;
- (void)hideLoading;
- (void)canvasComponentItem:(id)arg1 willExistAndJumpUrl:(id)arg2;
- (void)canvasJumpWeAppWithUsername:(id)arg1 path:(id)arg2 type:(int)arg3 sceneNote:(id)arg4 isHalfScreenMode:(BOOL)arg5;
- (void)canvasJumpUrl:(id)arg1 componentItem:(id)arg2 animationType:(int)arg3;
- (id)appendParamsToUrl:(id)arg1 andUpdateExtraInfo:(id)arg2 withComponentItem:(id)arg3;
- (void)canvasComponent:(id)arg1 willPresentUrl:(id)arg2;
- (void)canvasComponent:(id)arg1 willAddViewController:(id)arg2;
- (void)canvasComponent:(id)arg1 willShowViewController:(id)arg2;
- (BOOL)canvasComponent:(id)arg1 isChildViewController:(id)arg2;
- (void)onCloseCanvasByComponent:(id)arg1;
- (id)getBackGroundColorWhenLoading:(long long)arg1;
- (BOOL)isCurSectionBlackMoreThanWhite:(long long)arg1;
- (BOOL)onComponentIsCanvasVisible;
- (BOOL)shouldVideoComponentTryToPlay:(long long)arg1;
- (BOOL)isCurrentCanvasVCTheTopVC;
- (BOOL)shouldVideoLayerRasterize;
- (BOOL)shouldHideVideoFullScreenButton;
- (double)fetchVideoContinuePlayIntervalForComponentItem:(id)arg1;
- (long long)fetchPreviousClickedIndexForComponentItem:(id)arg1;
- (long long)fetchPreviousClickedIndex;
- (void)showDownArrowAfterPushed;
- (void)showDownArrowAnimateWithSection:(long long)arg1;
- (void)showScrollDownAreaWithSection:(long long)arg1;
- (void)showScrollDownAreaWithAnimation;
- (void)delayShowScrollDownAreaWithNumber:(id)arg1;
- (void)handleScrollDownAreaClickEvent:(id)arg1;
- (void)tryShowDownArrowAnimate:(long long)arg1;
- (BOOL)canShowDownArrow:(long long)arg1;
- (BOOL)shouldShowArrowDownIconWithCurrentOffset;
- (void)tryShowArrowDownIconWithCurrentOffsetAndLastComponent;
- (void)resumeTableViewUserInteraction;
- (BOOL)forbidCustomAnimation;
- (BOOL)shouldUseCustomAnimation;
- (BOOL)shouldShowSpecialAnimatedTransitioning;
- (void)hideDownArrowIcon;
- (void)clearDownArrowIcon;
- (BOOL)shouldShowScrollDownArea;
- (double)fetchScrollDownAreaDelayTime;
- (void)clearScrollDownArea;
- (void)lightScrollDownArea:(long long)arg1;
- (void)dimScrollDownArea:(long long)arg1;
- (void)jumpToLocationPage:(id)arg1;
- (void)jumpToPhonePage:(id)arg1;
- (void)showActionSheet:(id)arg1 body:(id)arg2 withIcon:(id)arg3 hideHeader:(BOOL)arg4 showCancelAction:(BOOL)arg5;
- (void)hideActionSheet;
- (void)actionSheetCancel:(id)arg1;
- (void)jumpToWeAppBizTempSessionWithInfo:(id)arg1;
- (id)tryAppendAdParamsForWeappPath:(id)arg1;
- (void)jumpToWeAppInHalfScreenWithInfo:(id)arg1 sceneNote:(id)arg2;
- (void)jumpToCanvasInHalfScreenWithInfo:(id)arg1 uxInfo:(id)arg2 noStore:(BOOL)arg3;
- (void)tryToUpdateTwistCardId:(BOOL)arg1;
- (void)initFloatComponents;
- (BOOL)shouldComponentAddToFloatView:(id)arg1;
- (BOOL)shouldComponentAddToFloatScrollView:(id)arg1;
- (BOOL)shouldComponentAddToFloatJumpView:(id)arg1;
- (BOOL)shouldComponentAddToFloatConversionView:(id)arg1;
- (BOOL)shouldComponentAddToFloatSidebarView:(id)arg1;
- (BOOL)shouldComponentAddToManuallyFloatView:(id)arg1;
- (void)updateFloatActionViewStatus;
- (void)notifyVisibleFloatComponentsWillAppear;
- (void)notifyVisibleFloatComponentsWillDisappear;
- (void)setTableViewScrollEnabled:(BOOL)arg1;
- (BOOL)onComponentTryToControlManuallyFloatView:(BOOL)arg1;
- (void)onComponentVideoPlayEnd:(id)arg1 isFullScreen:(BOOL)arg2;
- (void)updateFloatJumpViewVisibility:(BOOL)arg1;
- (void)initRandomEncoreView;
- (void)initPickCardBottomView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (BOOL)isLastCellInSection:(id)arg1;
- (BOOL)isFirstCellInSection:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (BOOL)isCurrentVCFromCanvasAd;
- (BOOL)isSearchCanvas;
- (BOOL)getUseSnsCdnDownloadMode:(id)arg1;
- (id)getSnsId;
- (id)fetchCanvasId;
- (id)getUxInfo;
- (unsigned int)getAdType;
- (id)getCellIdentifierAtIndexPath:(id)arg1;
- (id)getBackGroundColorAtSection:(long long)arg1;
- (id)getCanvasComponentItemAtIndexPath:(id)arg1;
- (void)tryToCancelLoadFirstImage;
- (int)getOriginCanvasScene;
- (id)shareTitleForAdInfo:(id)arg1;
- (id)shareDescForAdInfo:(id)arg1;
- (void)notifyComponentHasAppearInMainScreenFromOffset:(CGPoint)arg1 toOffset:(CGPoint)arg2;
- (void)notifyFullyAppearOrDisappearComponetInMainScreen;
- (void)notifyComponetWithAppearedFactorInMainScreen;
- (void)DidEnterBackground:(id)arg1;
- (void)WillEnterForeground:(id)arg1;
- (void)animateShowWithOriginRectInScreen:(CGRect)arg1;
- (void)animateShowStep2WithFinalFrame:(CGRect)arg1;
- (void)animateHideWithOrientation:(long long)arg1;
- (id)generateFakeImageViewForFirstView:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (BOOL)needUseOldAnimation;
- (BOOL)canPlayOldAnimation;
- (void)animateTransition:(id)arg1;
- (void)transitionFromBottom:(id)arg1 fromVC:(id)arg2 toVC:(id)arg3 fromView:(id)arg4 toView:(id)arg5;
- (void)animateTransition:(id)arg1 fromVC:(id)arg2 toVC:(id)arg3 fromView:(id)arg4 toView:(id)arg5;
- (void)setRelatedAnimationView:(id)arg1 contentHidden:(BOOL)arg2;
- (void)newAnimateTransition:(id)arg1 fromVC:(id)arg2 toVC:(id)arg3 fromView:(id)arg4 toView:(id)arg5;
- (void)animationEnded:(BOOL)arg1;
- (void)eggAnimateTransition:(id)arg1 fromVC:(id)arg2 toVC:(id)arg3 fromView:(id)arg4 toView:(id)arg5;
- (void)twistAnimateTransition:(id)arg1 fromVC:(id)arg2 toVC:(id)arg3 fromView:(id)arg4 toView:(id)arg5;
- (void)eggHugeDiskAnimateTransition:(id)arg1 fromVC:(id)arg2 toVC:(id)arg3 fromView:(id)arg4 toView:(id)arg5 hugeDiskInfo:(id)arg6;
- (void)twistAnimateAsyncShowCanvasView:(id)arg1 delay:(double)arg2;
- (void)twistAnimateStage1WithContainerView:(id)arg1 hugeDiskView:(id)arg2 clockwise:(BOOL)arg3 delay:(double)arg4;
- (void)twistAnimateStage2WithContainerView:(id)arg1 hugeDiskView:(id)arg2 clockwise:(BOOL)arg3;
- (void)twistAnimateStage2InHugeDiskView:(id)arg1 containerView:(id)arg2 clockwise:(BOOL)arg3;
- (void)twistAnimateFlipSpecialView:(id)arg1 containerView:(id)arg2 clockwise:(BOOL)arg3;
- (void)specialAnimateResetSpecialCardStatus;
- (void)simpleTwistAnimateTransition:(id)arg1 fromVC:(id)arg2 toVC:(id)arg3 fromView:(id)arg4 toView:(id)arg5;
- (void)eggSimpleTwistAnimateTransition:(id)arg1 fromVC:(id)arg2 toVC:(id)arg3 fromView:(id)arg4 toView:(id)arg5 simpleTwistInfo:(id)arg6;
- (void)shakeAnimateTransition:(id)arg1 fromVC:(id)arg2 toVC:(id)arg3 fromView:(id)arg4 toView:(id)arg5;
- (void)eggDropCardAnimateTransition:(id)arg1 fromVC:(id)arg2 toVC:(id)arg3 fromView:(id)arg4 toView:(id)arg5 dropCardInfo:(id)arg6;
- (void)shakeAnimateShowCanvasView:(id)arg1;
- (id)eggDropCardAnimateGenerateFallingDownViewWithFlipBackView:(id)arg1 dropCardInfo:(id)arg2;
- (void)shakeAnimateTryToPlayFireworksAnimationInView:(id)arg1 dropCardInfo:(id)arg2;
- (void)tryToPlayTransitionAnimationForFilePath:(id)arg1 inView:(id)arg2;
- (void)shakeAnimateStartFallingDownWithView:(id)arg1 containerView:(id)arg2;
- (void)shakeAnimateSpecialCardStartFallingDownWithView:(id)arg1 center:(CGPoint)arg2;
- (void)shakeAnimateUpdateFlipBackView:(id)arg1;
- (id)eggAnimateGenerateFlipBackView;
- (CGPoint)shakeAnimateFetchFallingDownCardCenterFromView:(id)arg1;
- (id)fetchTransitionAnimationFilePathFromDropCardInfo:(id)arg1;
- (void)simpleShakeAnimateTransition:(id)arg1 fromVC:(id)arg2 toVC:(id)arg3 fromView:(id)arg4 toView:(id)arg5;
- (void)eggPagThemeAnimateTransition:(id)arg1 fromVC:(id)arg2 toVC:(id)arg3 fromView:(id)arg4 toView:(id)arg5 pagThemeInfo:(id)arg6;
- (void)simpleShakeAnimateTryToPlayFireworksAnimationInView:(id)arg1 pagThemeInfo:(id)arg2;
- (void)longPressAnimateTransition:(id)arg1 fromVC:(id)arg2 toVC:(id)arg3 fromView:(id)arg4 toView:(id)arg5;
- (void)eggRandomSpriteAnimateTransition:(id)arg1 fromVC:(id)arg2 toVC:(id)arg3 fromView:(id)arg4 toView:(id)arg5 randomSprite:(id)arg6;
- (void)dragImageAnimateTransition:(id)arg1 fromVC:(id)arg2 toVC:(id)arg3 fromView:(id)arg4 toView:(id)arg5;
- (void)simpleZoomAnimateTransition:(id)arg1 fromVC:(id)arg2 toVC:(id)arg3 fromView:(id)arg4 toView:(id)arg5;
- (void)simpleRightToLeftAnimateTransition:(id)arg1 fromVC:(id)arg2 toVC:(id)arg3 fromView:(id)arg4 toView:(id)arg5;
- (void)shakeOutAnimateTransition:(id)arg1 fromVC:(id)arg2 toVC:(id)arg3 fromView:(id)arg4 toView:(id)arg5;
- (void)eggHugeDiskImprovedAnimateTransition:(id)arg1 fromVC:(id)arg2 toVC:(id)arg3 fromView:(id)arg4 toView:(id)arg5 hugeDiskInfo:(id)arg6;
- (void)simpleZoomWithMediaAnimateTransition:(id)arg1 fromVC:(id)arg2 toVC:(id)arg3 fromView:(id)arg4 toView:(id)arg5;
- (void)eggFlyingFlipAnimateTransition:(id)arg1 fromVC:(id)arg2 toVC:(id)arg3 fromView:(id)arg4 toView:(id)arg5 flyingFlipInfo:(id)arg6;
- (void)flyingFlipAnimateAsyncShowCanvasView:(id)arg1 delay:(double)arg2;
- (id)flyingFlipAnimateGenerateFlipBackView;
- (void)randomEncoreFireFlyingFlipAction;
- (void)onFlyingFlipAnimationStage1DoneWithFlyingView:(id)arg1 containerView:(id)arg2;
- (id)fetchTransitionAnimationFilePathFromPagThemeInfo:(id)arg1;
- (id)fetchTimeLineCurrentSnapshotImageForView:(id)arg1;
- (id)fetchTimeLineOriginSnapshotImageForView:(id)arg1;
- (id)fetchRelatedAnimationViewForOriginView:(id)arg1;
- (id)fetchCanvasSnapshotImage:(BOOL)arg1 returnNewFrame:(CGRect *)arg2;
- (void)onAnimationEnd:(id)arg1;
- (void)onAnimationCancel:(id)arg1;
- (void)cleanUpTransitionAnimation;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)animateHide;
- (void)hideWithoutAnimate;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)shouldInteractivePop;
- (unsigned int)getComponentDownloadScene;
- (id)progressLoadingView;
- (id)m_fullScreenExitButton;
- (id)dynamicLoader;
- (id)URL2BgImageViewMap;
- (id)m_reportMgr;
- (id)musicMgr;
- (id)floatContainerView;
- (void)onExitBtnClicked;
- (void)onCanvasDynamicDataReturn:(id)arg1;
- (void)onUpdateCanvasStateResult:(BOOL)arg1 cleanLocalCache:(unsigned int)arg2;
- (void)onFavProductReturn:(unsigned int)arg1 errMsg:(id)arg2;
- (void)onUxCanvasDynamicXMLReturn:(id)arg1 error:(int)arg2 forCanvasId:(id)arg3;
- (void)updatePage:(id)arg1 usingDynamicInfo:(id)arg2;
- (BOOL)updateComponent:(id)arg1 usingDynamicInfo:(id)arg2;
- (void)updateGroup:(id)arg1 usingDynamicInfo:(id)arg2;
- (void)componentSizeDidChanged;
- (void)onComponentTryToShareWithType:(long long)arg1;
- (void)tryToNoticeShareComponentClickedEventWithType:(long long)arg1;
- (void)onComponentTryToShareRedEnvelopWithGiveCardId:(id)arg1 title:(id)arg2 desc:(id)arg3 thumbUrl:(id)arg4;
- (id)fetchRandomLayoutChosenRandomCardId;
- (id)fetchRandomLayoutComponentItemItself;
- (id)onComponentFetchHalfScreenJumpInfo;
- (void)onFetchTwistCardId:(id)arg1 cardExtInfo:(id)arg2 componentExtInfo:(id)arg3;
- (void)updateCanvasWithTwistCardId:(id)arg1 cardExtInfo:(id)arg2 componentExtInfo:(id)arg3;
- (void)updateCanvasWithTwistCardId:(id)arg1 cardExtInfo:(id)arg2 componentExtInfo:(id)arg3 forceUpdate:(BOOL)arg4;
- (void)onResetRandomLayoutChosenCardId;
- (BOOL)isGivenTwistCardIdValid:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)ImageDidFail:(id)arg1;
- (void)stopLoadingAndShowAnimation;
- (void)animateShowAfterFirstImageDownloaded;
- (void)exposureCurrentScreen;
- (void)onUpdateSharedUxinfo:(id)arg1;
- (void)updateAdData;
- (void)onSendLocationToFriendWithViewController:(id)arg1;
- (id)getFavForawrdViewController;
- (void)onLoadImageOK:(id)arg1;
- (void)onTrySetStatusBarHiddenForCanvasAd;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2 navigation:(id)arg3;
- (id)getPreInjectScriptStr;
- (void)onClosePlayer;
- (BOOL)needHiddenMoreMenu;
- (BOOL)stopAtLastVideoFrameWhenPlayEnd;
- (void)onMediaPlayer:(id)arg1 playerStateChange:(long long)arg2;
- (id)getAutoShowFloatLayoutComponent;
- (id)getFloatComponentByCID:(id)arg1;
- (void)checkAutoShowFloatLayoutView;
- (void)triggerToShowFloatView:(id)arg1 triggerId:(id)arg2;
- (void)addFloatViewWithComponentItem:(id)arg1;
- (void)tryRemoveFloatView;
- (void)tryToDetectBottomSwipeAction;
- (void)tryToDisableBottomSwipeAction;
- (void)tryToFiredBottomSwipeAction;
- (void)fireBottomSwipeAction;
- (void)updateFloatJumpView;
- (void)onRandomEncoreInitDone;
- (id)onRandomEncoreFetchViewToNotice;
- (void)onRandomEncoreViewSwitchToNormalState:(BOOL)arg1;
- (void)onRandomEncoreActionFired;
- (void)onRandomEncoreActionCanceled;
- (void)reportForRandomEncoreActionWithResult:(BOOL)arg1;
- (void)randomEncoreResetAllViews;
- (void)randomEncoreFireHugeDiskAction;
- (void)randomEncoreFireShakeAction;
- (void)tryToSaveRandomPickCardWithCardId:(id)arg1 cardExtInfo:(id)arg2 componentExtInfo:(id)arg3;
- (void)tryToSaveDefaultRandomPickCardWithComponentItem:(id)arg1;
- (void)tryToUpdateRandomPickCardSortedItemsForPageId:(id)arg1 cardId:(id)arg2;
- (id)randomPickCardLogic;
- (id)fetchFirstComponentForType:(int)arg1;
- (id)randomPickFetchRandomPickCardComponent;
- (id)fetchRandomPickCardTitleComponent;
- (id)fetchRandomLayoutComponent;
- (id)fetchRandomPickComponentCardInfo;
- (unsigned long long)fetchRandomPickComponentCardsRemainCount;
- (id)fetchDefaultComponentItemForTwistAnimation;
- (id)onRandomPickCardComponentFetchRandomPickCardLogic;
- (void)onRandomPickCardComponentDidClick:(id)arg1 isPicked:(BOOL)arg2 index:(unsigned long long)arg3;
- (BOOL)onRandomPickCardComponentIsCardSelectedWithCardId:(id)arg1;
- (BOOL)onRandomPickCardComponentIsCardSelectedPreviouslyWithCardId:(id)arg1;
- (BOOL)onRandomPickCardComponentIsReadyToPlayQuickSwitchAnimation;
- (void)onRandomPickCardComponentQuickSwitchAnimationIsDone;
- (void)onRandomPickCardComponentVanishingItemViewReadyToFillUp;
- (id)onRandomPickCardComponentFetchVanishingItemInfo;
- (void)onRandomPickCardComponentUpdateVanishingItemInfoWith:(id)arg1;
- (void)onRandomPickCardComponentUpdateStayPutItemWithInfo:(id)arg1;
- (id)onRandomPickCardComponentFetchLastStayPutItemInfo;
- (unsigned long long)onRandomPickCardFetchCardPendingState;
- (void)onRandomPickCardComponentCleanCardPendingInfo;
- (unsigned long long)onRandomPickCardFetchRemainCount;
- (BOOL)onRandomPickCardIsARedEnvelopGiveCardPicked;
- (BOOL)onRandomPickCardIsARedEnvelopReceiveCardPicked;
- (id)onComponentFetchRandomPickComponentCardInfo;
- (void)onRandomPickCardEncoreActionFired;
- (void)randomEncoreFireHugeDiskImprovedAction;
- (void)randomPickCardTryToShowFriendlyToast;
- (void)onRandomPickCardBottomViewInitDone;
- (unsigned long long)onRandomPickCardBottomViewFetchRemainCount;
- (void)onRandomPickCardBottomViewSwitchToNormalState:(BOOL)arg1;
- (void)onRandomPickCardBottomViewButtonClicked;
- (void)startBizTempSessionLoadingView;
- (void)stopBizTempSessionLoadingView;
- (void)bizTempSessionJumpWithSuccess:(id)arg1;
- (void)bizTempSessionEndWithSuccess:(id)arg1;
- (void)bizTempSessionEndWithError:(id)arg1;
- (id)getTempSessionNavigationController;
- (void)onCloseBtnClick;
- (void)onFloatViewDidAppear;
- (void)onFloatViewDisapper;
- (void)onBtnComponentClick:(long long)arg1;
- (void)onFloatViewWillDisappear;
- (void)resetSightViewVoice:(BOOL)arg1;
- (void)onComponentBeClicked:(id)arg1;
- (id)fetchAdvertiseInfo;
- (id)fetchDataItem;
- (id)scanQRCodeLogic;
- (unsigned int)convertComponentTypeToSourceType:(unsigned long long)arg1;
- (id)getQRLogic:(unsigned long long)arg1;
- (void)preScanImage:(id)arg1 url:(id)arg2 type:(unsigned long long)arg3 encKey:(id)arg4;
- (void)onPureImageLongPressWithImage:(id)arg1 url:(id)arg2 componentType:(unsigned long long)arg3 qrExtInfo:(id)arg4 directJump:(BOOL)arg5 scanComplete:(id /* block */)arg6;
- (BOOL)isFountQRResult;
- (unsigned long long)getAdQRResultType;
- (unsigned long long)convertComponentTypeToExtType:(unsigned long long)arg1 isForClick:(BOOL)arg2;
- (void)checkAndShowQRCodeDialog:(BOOL)arg1;
- (void)showQrScanResult:(BOOL)arg1;
- (void)scanQRCode:(id)arg1 url:(id)arg2 type:(unsigned long long)arg3;
- (void)doQRScanReport:(unsigned long long)arg1 qrUrl:(id)arg2 qrResultUrl:(id)arg3 directJump:(BOOL)arg4;
- (void)showAuthManagementView;
- (void)doTwistGetTwistCardIdResultReportWithResult:(BOOL)arg1;
- (void)doShakeGetCardIdResultReportWithResult:(BOOL)arg1 isEncoreShake:(BOOL)arg2;
- (void)onScanEnds;
- (void)onResignActive;
- (void)onApplicationDidBecomeActive;
- (void)doShareToContactReport:(id)arg1;
- (void)doShareToTimelineReport;
- (void)doShareReportInner:(int)arg1 toUser:(id)arg2;
- (void)tryToDoAdCanvasExposureReport;
- (void)doAdCanvasValidExposureReport;
- (BOOL)needToReportAdCanvasExposure;
- (void)doAdCanvasExposureReport:(BOOL)arg1;
- (void)addJumpTransitionAnimationFromBottom;
- (void)pushViewController:(id)arg1 animationType:(int)arg2;
- (void)initBackBizAppNavLeftItem;
- (void)updateBackBizAppNavLeftItem:(id)arg1;
- (void)onClickBackBizApp;
- (void)OnAppInfoChanged:(id)arg1;
- (void)onMusicPlayError:(id)arg1 errorInfo:(id)arg2;
- (void)onMusicPlayStatusChanged:(id)arg1 playState:(long long)arg2;
- (id)fetchBackgroundMusicItem;
- (id)createBackgroundMusicButton:(id)arg1;
- (void)initBackgroundMusic;
- (BOOL)shouldBackgroundMusicAutoPlay:(id)arg1 allowVideoVoice:(BOOL)arg2;
- (void)onBackgroundMusicButtonClicked;
- (void)updateBackgroundMusicButtonState:(long long)arg1;
- (void)tryToReportBackgroundMusicComponent;
- (void)tryToReportMusicComponent;
- (void)setOriginRectInScreen:(CGRect)arg1;
- (void)loadCompatibleCanvasXmlForShare:(id /* block */)arg1;
- (id)removeStaticCanvasShareInfo:(id)arg1;
- (id)processDynamicShareAdXml:(id)arg1 isShare:(BOOL)arg2;
- (void)setHalfScreenReachedTopFlag:(BOOL)arg1;
- (void)updateFloatViewInHalfScreenMode;
- (void)tryToShowFloatConversionBar;
- (void)tryToShowFloatSidebar;
- (id)fetchCanvasDynamicInfo;
- (id)m_dataItem;
- (void)setM_dataItem:(id)arg1;
- (BOOL)m_bShowSelfView;
- (void)setM_bShowSelfView:(BOOL)arg1;
- (id)m_originView;
- (void)setM_originView:(id)arg1;
- (id)m_FirstViewToAnimate;
- (void)setM_FirstViewToAnimate:(id)arg1;
- (id)m_topView;
- (void)setM_topView:(id)arg1;
- (id)m_arrowDownIcon;
- (void)setM_arrowDownIcon:(id)arg1;
- (BOOL)m_bForbidFavMenu;
- (void)setM_bForbidFavMenu:(BOOL)arg1;
- (id)m_topMaskView;
- (void)setM_topMaskView:(id)arg1;
- (id)m_msgWrap;
- (void)setM_msgWrap:(id)arg1;
- (id)m_advertiseInfo;
- (void)setM_advertiseInfo:(id)arg1;
- (id)m_arrowDownImage;
- (void)setM_arrowDownImage:(id)arg1;
- (id)m_originViewCopyToShowAnimation;
- (void)setM_originViewCopyToShowAnimation:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)statBuffer;
- (void)setStatBuffer:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_thumbUrl;
- (void)setM_thumbUrl:(id)arg1;
- (int)m_canvasPageScene;
- (id)extraInfo;
- (void)setExtraInfo:(id)arg1;
- (BOOL)m_bAllowFirstSightVoice;
- (void)setM_bAllowFirstSightVoice:(BOOL)arg1;
- (int)m_originCanvasScene;
- (void)setM_originCanvasScene:(int)arg1;
- (id)currentCanvasId;
- (void)setCurrentCanvasId:(id)arg1;
- (id)fromCanvasId;
- (void)setFromCanvasId:(id)arg1;
- (id)gestureExtInfo;
- (void)setGestureExtInfo:(id)arg1;
- (BOOL)shouldGenForwardAdXml;
- (void)setShouldGenForwardAdXml:(BOOL)arg1;
- (BOOL)shouldHideNavigationWhenPop;
- (void)setShouldHideNavigationWhenPop:(BOOL)arg1;
- (unsigned int)specialTransitioningType;
- (void)setSpecialTransitioningType:(unsigned int)arg1;
- (double)videoContinuePlayInterval;
- (void)setVideoContinuePlayInterval:(double)arg1;
- (long long)outClickedIndex;
- (void)setOutClickedIndex:(long long)arg1;
- (CGRect)outOriginRectInScreen;
- (void)setOutOriginRectInScreen:(CGRect)arg1;
- (id)bizAppId;
- (void)setBizAppId:(id)arg1;
- (unsigned long long)canvasPresentationStyle;
- (void)setCanvasPresentationStyle:(unsigned long long)arg1;
- (BOOL)halfScreenReachedTopFlag;
- (BOOL)halfScreenForbidPanUp;
- (void)setHalfScreenForbidPanUp:(BOOL)arg1;
- (BOOL)forbidBackToBizApp;
- (void)setForbidBackToBizApp:(BOOL)arg1;
- (CGPoint)offsetBeforeDragging;
- (void)setOffsetBeforeDragging:(CGPoint)arg1;
- (CGPoint)fromOffsetBeforeScoll;
- (void)setFromOffsetBeforeScoll:(CGPoint)arg1;
- (CGPoint)toOffsetAfterScroll;
- (void)setToOffsetAfterScroll:(CGPoint)arg1;
- (CGRect)originCardFrameInScreen;
- (void)setOriginCardFrameInScreen:(CGRect)arg1;
- (id)canvasSnapShot;
- (void)setCanvasSnapShot:(id)arg1;
- (id)originSnapShot;
- (void)setOriginSnapShot:(id)arg1;
- (id)cardBottomSnapShot;
- (void)setCardBottomSnapShot:(id)arg1;
- (id)originCellView;
- (void)setOriginCellView:(id)arg1;
- (CGRect)originRectInScreen;
- (void)setProgressLoadingView:(id)arg1;
- (id)m_canvasBackgroundView;
- (void)setM_canvasBackgroundView:(id)arg1;
- (id)m_transitionAnimationView;
- (void)setM_transitionAnimationView:(id)arg1;
- (id)m_scrollDownArea;
- (void)setM_scrollDownArea:(id)arg1;
- (id)m_arrowDownIconHasShowList;
- (void)setM_arrowDownIconHasShowList:(id)arg1;
- (id)m_dicCellIdToHeight;
- (void)setM_dicCellIdToHeight:(id)arg1;
- (BOOL)m_bClickedCloseBtn;
- (void)setM_bClickedCloseBtn:(BOOL)arg1;
- (BOOL)m_bHasTryDownloadAllPage;
- (void)setM_bHasTryDownloadAllPage:(BOOL)arg1;
- (unsigned int)beginTimeDownloadFirstImage;
- (void)setBeginTimeDownloadFirstImage:(unsigned int)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (void)setM_fullScreenExitButton:(id)arg1;
- (void)setDynamicLoader:(id)arg1;
- (void)setURL2BgImageViewMap:(id)arg1;
- (BOOL)m_bHasDrag;
- (void)setM_bHasDrag:(BOOL)arg1;
- (id)m_oFirstVideoComponentItem;
- (void)setM_oFirstVideoComponentItem:(id)arg1;
- (id)actionSheet;
- (void)setActionSheet:(id)arg1;
- (id)bizSessionHelper;
- (void)setBizSessionHelper:(id)arg1;
- (CGPoint)contentOffsetWhenKeyboardWillShow;
- (void)setContentOffsetWhenKeyboardWillShow:(CGPoint)arg1;
- (BOOL)isKeyboardShowing;
- (void)setIsKeyboardShowing:(BOOL)arg1;
- (BOOL)isKeyboardDidShow;
- (void)setIsKeyboardDidShow:(BOOL)arg1;
- (id)m_dicH5UrlToPreloadWebview;
- (void)setM_dicH5UrlToPreloadWebview:(id)arg1;
- (void)setM_reportMgr:(id)arg1;
- (id)fixIphoneXView;
- (void)setFixIphoneXView:(id)arg1;
- (id)floatView;
- (void)setFloatView:(id)arg1;
- (BOOL)hasShowFloatView;
- (void)setHasShowFloatView:(BOOL)arg1;
- (BOOL)isActionSheetShow;
- (BOOL)isFloatViewInvisible;
- (void)setIsFloatViewInvisible:(BOOL)arg1;
- (void)setFloatContainerView:(id)arg1;
- (id)floatScrollView;
- (void)setFloatScrollView:(id)arg1;
- (id)floatConversionBar;
- (void)setFloatConversionBar:(id)arg1;
- (id)floatSidebar;
- (void)setFloatSidebar:(id)arg1;
- (id)manuallyFloatView;
- (void)setManuallyFloatView:(id)arg1;
- (id)floatActionView;
- (void)setFloatActionView:(id)arg1;
- (BOOL)shouldDetectBottomSwipeAction;
- (void)setShouldDetectBottomSwipeAction:(BOOL)arg1;
- (BOOL)shouldForbidRefreshTwistComponent;
- (void)setShouldForbidRefreshTwistComponent:(BOOL)arg1;
- (BOOL)adDataHasChange;
- (void)setAdDataHasChange:(BOOL)arg1;
- (id)sharedUxinfo;
- (void)setSharedUxinfo:(id)arg1;
- (unsigned long long)qrScanComponentType;
- (void)setQrScanComponentType:(unsigned long long)arg1;
- (id)qrExtInfo;
- (void)setQrExtInfo:(id)arg1;
- (void)setScanQRCodeLogic:(id)arg1;
- (id)actionSheetWithWXCode;
- (void)setActionSheetWithWXCode:(id)arg1;
- (id)destComponentForSpecialAnim;
- (void)setDestComponentForSpecialAnim:(id)arg1;
- (BOOL)isViewAppear;
- (void)setIsViewAppear:(BOOL)arg1;
- (BOOL)didCanvasViewFullyAppear;
- (void)setDidCanvasViewFullyAppear:(BOOL)arg1;
- (BOOL)didCanvasViewInBackground;
- (void)setDidCanvasViewInBackground:(BOOL)arg1;
- (id)exposureReportTimer;
- (void)setExposureReportTimer:(id)arg1;
- (id /* block */)qrCodeScanCompleteCallback;
- (void)setQrCodeScanCompleteCallback:(id /* block */)arg1;
- (BOOL)qrCodeScanDirectJump;
- (void)setQrCodeScanDirectJump:(BOOL)arg1;
- (id)floatJumpView;
- (void)setFloatJumpView:(id)arg1;
- (double)floatJumpViewInitPositionY;
- (void)setFloatJumpViewInitPositionY:(double)arg1;
- (BOOL)floatJumpViewHadSwipeJumped;
- (void)setFloatJumpViewHadSwipeJumped:(BOOL)arg1;
- (id)randomEncoreView;
- (void)setRandomEncoreView:(id)arg1;
- (id)pickCardBottomView;
- (void)setPickCardBottomView:(id)arg1;
- (BOOL)isEncoreAnimationPlaying;
- (void)setIsEncoreAnimationPlaying:(BOOL)arg1;
- (BOOL)shouldResumeEncoreStatus;
- (void)setShouldResumeEncoreStatus:(BOOL)arg1;
- (id)previousRandomCardIdForQuickSwitchAnimation;
- (void)setPreviousRandomCardIdForQuickSwitchAnimation:(id)arg1;
- (unsigned long long)previousRandomPickCardRemainCount;
- (void)setPreviousRandomPickCardRemainCount:(unsigned long long)arg1;
- (long long)previousRandomPickCardClickedIndex;
- (void)setPreviousRandomPickCardClickedIndex:(long long)arg1;
- (void)setRandomPickCardLogic:(id)arg1;
- (id)randomPickCardVanishingItemInfo;
- (void)setRandomPickCardVanishingItemInfo:(id)arg1;
- (id)randomPickCardStayPutItemInfo;
- (void)setRandomPickCardStayPutItemInfo:(id)arg1;
- (unsigned long long)randomPickCardPendingState;
- (void)setRandomPickCardPendingState:(unsigned long long)arg1;
- (BOOL)isTheFirstTimeToTwistFromShareScene;
- (void)setIsTheFirstTimeToTwistFromShareScene:(BOOL)arg1;
- (void)setMusicMgr:(id)arg1;
- (id)backgroundMusicButton;
- (void)setBackgroundMusicButton:(id)arg1;
- (id)backgroundMusicId;
- (void)setBackgroundMusicId:(id)arg1;
- (id)backgroundMusicStayTimeHelper;
- (void)setBackgroundMusicStayTimeHelper:(id)arg1;
- (BOOL)isAdAntiAbuse;
- (void)setIsAdAntiAbuse:(BOOL)arg1;
- (id)extraParams;
- (void)setExtraParams:(id)arg1;
- (void).cxx_destruct;
@end
