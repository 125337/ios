@interface WAWebViewController : MMUIViewController <WAWebViewPluginContextProtocol, WAAppActionSheetDelegate, MMTipsViewControllerDelegate, MMScrollActionSheetDelegate, WARecentForwardScrollViewHelperDelegate, WAWebViewMutiFuncMenuViewDelegate, WAPopInteractiveTransitionDelegate, UIGestureRecognizerDelegate, IUiUtilExt, WAAppTaskCloseExt, CNetworkStatusExt, IMMLanguageMgrExt, WACapsuleMenuDataSource, WAAppTaskSystemCoverViewDataSource, WASkylineViewDelegate, YYWAWebViewSyncJSAPIDelegate, WAWebViewJSLogicDelegate, UIScrollViewDelegate, YYWebViewDelegate, YYWAWebViewDelegate, WAOrientationSuggestionWindowDelegate>
{
    BOOL _bIsStatusBarBlack; // +0x68
    UIView * _webViewContainer; // +0x70
    UIView<YYWebViewInterface> * webView; // +0x78
    NSString * m_initUrl; // +0x80
    WAWebViewJSLogicImpl * m_jsLogicImpl; // +0x88
    NSMutableDictionary * m_jsInitInfo; // +0x90
    NSString * m_preloadBaseURL; // +0x98
    NSString * m_preloadPageRelativeURL; // +0xa0
    NSString * m_preloadPageQuery; // +0xa8
    NSString * m_preloadFrameURL; // +0xb0
    NSString * m_preloadIndexURL; // +0xb8
    BOOL m_isPreloadFrameLoaded; // +0xc0
    BOOL m_isPreloadIndexLoaded; // +0xc1
    NSDictionary * m_dicPageAttribute; // +0xc8
    NSString * m_pageOrientation; // +0xd0
    long long m_videoFullScreenOrientation; // +0xd8
    long long m_beforeVideoFullScreenOrientation; // +0xe0
    BOOL m_isViewWillAppearAlready; // +0xe8
    BOOL m_isViewDidAppear; // +0xe9
    BOOL m_isSetPreloadViewAttribute; // +0xea
    BOOL m_isFinishLoaded; // +0xeb
    BOOL m_isWxConfigInjected; // +0xec
    NSString * m_nsCurrentUrl; // +0xf0
    UIView * _loadingCoverClipView; // +0xf8
    UIImageView * _loadingCoverImageView; // +0x100
    MMProgressViewEx * _loadingCoverLoadingView; // +0x108
    UIView * _prevVCSnapshot; // +0x110
    UIView * _prevVCMask; // +0x118
    MMUIButton * _quitButton; // +0x120
    WAWebViewMutiFuncMenuView * _menuView; // +0x128
    WAWebViewMenuNavBarProperties * _navBarProperties; // +0x130
    UIView * _tailBgView; // +0x138
    BOOL _bIsDraggingScroll; // +0x140
    double _fLastStartOffsetY; // +0x148
    BOOL _bFullScreen; // +0x150
    BOOL _bHideStatusBar; // +0x151
    long long _eContentMode; // +0x158
    long long _eNavBarFloatingMode; // +0x160
    BOOL m_bConfiguredToShowHomeButton; // +0x168
    BOOL m_bDisableSwipeBack; // +0x169
    WACircleProgressLoadingViewController * _fakeLoadingVC; // +0x170
    UIScreenEdgePanGestureRecognizer * _popBackInteractivePopGesture; // +0x178
    UIScreenEdgePanGestureRecognizer * _popBackRightInteractivePopGesture; // +0x180
    WAMenuPopInteractiveTransition * _popBackInteractiveTransition; // +0x188
    WAMenuPopInteractiveTransition * _popBackRightInteractiveTransition; // +0x190
    BOOL _useRightInteractiveTransition; // +0x198
    UIView * _webInfoTopView; // +0x1a0
    WABaseInfoToast * _webViewToast; // +0x1a8
    WAWebErrorView * _webViewErrorView; // +0x1b0
    WAAppActionSheet * _actionSheet; // +0x1b8
    WAMenuScrollActionSheet * _scrollActionSheet; // +0x1c0
    WAEvaluatePopSheet * _evaluatePopSheet; // +0x1c8
    long long _loadPageFrameStartTime; // +0x1d0
    long long _loadPageIndexStartTime; // +0x1d8
    long long _pageFrameLength; // +0x1e0
    BOOL m_bWebviewReceiveTerminateSignal; // +0x1e8
    BOOL m_bWebviewReceiveTerminateSignalManually; // +0x1e9
    WACacheVersionChecker * _moduleCacheVersionChecker; // +0x1f0
    NSMutableDictionary * _moduleLoadingCheckers; // +0x1f8
    BOOL _isModuleDataLoaded; // +0x200
    BOOL _isLoadingModuleData; // +0x201
    NSString * _strOfPreloadTaskPageFrameJS; // +0x208
    BOOL _initialRenderCacheSended; // +0x210
    NSString * _wasmProfileFile; // +0x218
    id _wasmProfileActionSheet; // +0x220
    UILongPressGestureRecognizer * m_longPressGestureRecognizer; // +0x228
    BOOL m_bIFrame; // +0x230
    long long m_loadingCount; // +0x238
    BOOL m_bIsBeingPopedFromNewMainFrame; // +0x240
    NSDictionary * _cacheRouteInfo; // +0x248
    long long _orientation; // +0x250
    BOOL m_bWebViewTerminatedManually; // +0x258
    BOOL _bHasSupplyAppInfo; // +0x259
    CGSize _lastWebViewSize; // +0x260
    BOOL _shouldHideHomeButton; // +0x270
    BOOL _hasCheckHomeButtonStat; // +0x271
    BOOL _shouldDelayCheckHideHomeButton; // +0x272
    id <IWAFileViewService> _fileProxy; // +0x278
    UIImageView * _shadowView; // +0x280
    BOOL m_isLanscape; // +0x288
    BOOL m_bIsInsertCamera; // +0x289
    BOOL m_bIsInsertLivePusher; // +0x28a
    BOOL m_bIsFromPreloadTaskWithNotAppInfo; // +0x28b
    BOOL _m_bIsBottomBannerVisible; // +0x28c
    BOOL _m_bIsDelayPushWebView; // +0x28d
    BOOL _renderCacheAccepted; // +0x28e
    BOOL _m_bIsRecoverReloaded; // +0x28f
    BOOL _presentingClose; // +0x290
    BOOL _isFirstInitReadyReported; // +0x291
    BOOL _detectedWhiteScreen; // +0x292
    BOOL _hasReportedDisappearDoubleCheckWhiteScreen; // +0x293
    BOOL _reportedWebViewAliveFailed; // +0x294
    BOOL _reportedWebViewAliveFailedThenAlive; // +0x295
    BOOL _isAppWxssInjected; // +0x296
    BOOL _disableAutoRsetPopGesture; // +0x297
    BOOL _notResetWhenWebviewRemoved; // +0x298
    BOOL _routeRewrited; // +0x299
    BOOL _isInterceptingInteractivePopBack; // +0x29a
    BOOL _isInterceptingLeftButtonBack; // +0x29b
    BOOL _isInterceptingNavigateBackJsApi; // +0x29c
    BOOL _isCapturingSnapshot; // +0x29d
    BOOL _isCppProfileStarted; // +0x29e
    BOOL _isCppProfileStarting; // +0x29f
    BOOL _isCppProfileStopping; // +0x2a0
    BOOL _isJSCProfileStarted; // +0x2a1
    BOOL _isViewDidFirstAppear; // +0x2a2
    unsigned int m_uiWebviewID; // +0x2a4
    unsigned int _m_uiWebviewIDBeforeRewriteRoute; // +0x2a8
    unsigned int _foregroundTerminatedReloadCount; // +0x2ac
    unsigned int _tagNativeMax; // +0x2b0
    unsigned int _preloadMoment; // +0x2b4
    unsigned int _whiteScreenColorRatio; // +0x2b8
    unsigned int _whiteScreenAliveFailedCount; // +0x2bc
    float _moduleLoadingProgress; // +0x2c0
    unsigned int _aliveSeed; // +0x2c4
    id <WAWebViewDelegate><WAMinimizeDelegate> m_delegate; // +0x2c8
    NSMutableDictionary * m_extraInfo; // +0x2d0
    NSMutableDictionary * _extraParams; // +0x2d8
    WAApptaskPublicResLogic * _publicResLogic; // +0x2e0
    long long _enmPullRefreshMode; // +0x2e8
    WAProvideApiConfig * _provideApiCfg; // +0x2f0
    NSString * _m_initRelativeURLBeforeRoute; // +0x2f8
    NSString * _m_rawRelativeURL; // +0x300
    WAWebViewPluginScheduler * _pluginScheduler; // +0x308
    UIView<IWASkylineView><YYWebViewInterface> * _skylineView; // +0x310
    UIColor * _backgroundColorContent; // +0x318
    WABrandTitleBar * _m_sheetModeBrandTitleBar; // +0x320
    WAWebviewBottomBannerView * _m_bottomBanner; // +0x328
    unsigned long long _stackMode; // +0x330
    id /* block */ _m_onLoadInitReady; // +0x338
    id /* block */ _m_onLoadViewDidAppear; // +0x340
    id /* block */ _m_onViewDidAppearThenCreateTab; // +0x348
    unsigned long long _webviewInitTimeInMs; // +0x350
    unsigned long long _routeIntentionStartTimeInMs; // +0x358
    NSMutableArray * _publibEvaluateRet; // +0x360
    NSMutableDictionary * _nativeViews; // +0x368
    NSMutableDictionary * _containerViews; // +0x370
    NSMutableArray * _topFullNativeViews; // +0x378
    WAWebActionSheet * _displayingWebActionSheet; // +0x380
    id <WAWebViewControllerMenuActionCustomDelegate> _customMenuDelegate; // +0x388
    unsigned long long _preloadFinishTimeInMs; // +0x390
    NSString * _instanceId; // +0x398
    unsigned long long _lastRouteType; // +0x3a0
    unsigned long long _appRouteStartTime; // +0x3a8
    unsigned long long _initReadyReceiveTime; // +0x3b0
    unsigned long long _recoverReloadStartTime; // +0x3b8
    unsigned long long _recoverReloadInitReadyReceiveTime; // +0x3c0
    unsigned long long _whiteScreenCheckScene; // +0x3c8
    unsigned long long _initReadyLastWhiteScreenDetectedTimeInMs; // +0x3d0
    NSString * _whiteScreenHexColor; // +0x3d8
    long long _responsibleType; // +0x3e0
    unsigned long long _lastAliveTimeStampInMs; // +0x3e8
    unsigned long long _lastAliveFailedTimeStampInMs; // +0x3f0
    NSTimer * _urlCopyTimer; // +0x3f8
    NSString * _renderCacheAppServiceDataStr; // +0x400
    WAAlertModel * _navBackAlertModel; // +0x408
    SightIconView * _quickLaunchLoadingView; // +0x410
    MMToastView * _moduleLoadingView; // +0x418
    NSString * _exposeSnapShotLocalId; // +0x420
    id /* block */ _webViewLeaveCallback; // +0x428
    id <IWARecentForwardScrollViewHelper> _recentForwardHelper; // +0x430
    NSArray * _arrTempSpecificContacts; // +0x438
    NSString * _systemMenuSessionBuffer; // +0x440
    NSDictionary * _singlePageRouteData; // +0x448
    NSMutableDictionary * _dicCheckAliveBlock; // +0x450
}
+ (id)_converSingleMenuItemsModelArrayToMMScrollActionSheetItemsArray:(id)arg1;
+ (id)pagePathFromURL:(id)arg1;
+ (void)setNavigationAttribute:(id)arg1 webView:(id)arg2;
+ (void)setNavigationRightButton:(id)arg1 webView:(id)arg2;
+ (unsigned int)getContainerIdFromView:(id)arg1;
+ (BOOL)checkIsSelectableText:(id)arg1;
- (void)fakeTopWebViewEncounterSystemWhiteScreen;
- (void)startObservingWindow;
- (void)stopObservingWindow;
- (void)onWindowBecomeHidden:(id)arg1;
- (void)enterVideoFullScreenWithOrientation:(long long)arg1;
- (void)quitVideoFullScreen;
- (BOOL)public_setPageOrientation:(id)arg1;
- (BOOL)private_setPageOrientation:(id)arg1;
- (BOOL)setPageOrientationInternal:(id)arg1 FromPublicApi:(BOOL)arg2;
- (id)pageOrientationRelatedParamWhenSendResizeEvent;
- (BOOL)checkValidPageOrientation:(id)arg1;
- (long long)checkIfNeedForceRotation:(id)arg1;
- (long long)currentOrientaion;
- (void)tryForceRotationToPageOrientationWhenDidAppear;
- (BOOL)tryForceRotationToPageOrientation;
- (void)realRotateToOrientation:(long long)arg1;
- (unsigned long long)currentPageOrientationMask;
- (unsigned long long)supportedInterfaceOrientations;
- (unsigned long long)providedInterfaceOrientationMaskInIphone;
- (unsigned long long)supportedInterfaceOrientationsAfterDidAppear;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)webviewDidTransitionFromOldSize:(CGSize)arg1 toNewSize:(CGSize)arg2;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)updateWKWebViewFrame;
- (void)updateWKWebViewFrameByOrientation:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)resetPopBackInteractivePopGesture;
- (unsigned long long)webviewPlugin_getEnvironmentType;
- (id)getAppId;
- (id)getWAContact;
- (BOOL)isGameApp;
- (BOOL)isSimulatedNativeWeApp;
- (BOOL)isNormalWeApp;
- (BOOL)isNormalWeAppWithGameRuntime;
- (id)getParentViewController;
- (id)getCurrentPagePath;
- (id)getCurrentPageRelativePath;
- (id)getCurrentPageQuery;
- (id)floatingVideoDic;
- (void)setFloatingVideoDic:(id)arg1;
- (unsigned int)lastPlayerId;
- (void)setLastPlayerId:(unsigned int)arg1;
- (long long)floatType;
- (void)setFloatType:(long long)arg1;
- (long long)floatingPlayerType;
- (void)setFloatingPlayerType:(long long)arg1;
- (BOOL)shouldNotFloat;
- (void)setShouldNotFloat:(BOOL)arg1;
- (BOOL)audioOnlyMode;
- (void)setAudioOnlyMode:(BOOL)arg1;
- (void)parseFromDic:(id)arg1 playerId:(unsigned int)arg2 type:(long long)arg3;
- (void)removeLastPlayerInDic;
- (void)videoStartPlayingWithPlayerId:(unsigned int)arg1;
- (void)videoPausedWithPlayerId:(unsigned int)arg1;
- (long long)getFloatingPlayerViewType:(id)arg1;
- (void)updateConfig;
- (id)getLastFloatingViewWrapper;
- (id)getAllFloatingViewWrapper;
- (BOOL)shouldShowFloatingVideoWithType:(long long)arg1;
- (void)onMenuShow;
- (void)showMenuWithCurMenuState:(long long)arg1;
- (void)showMenuWithCurMenuState:(long long)arg1 source:(unsigned long long)arg2;
- (id)getEmbedDisplayNameFor:(id)arg1;
- (id)getCoverAdDisplayNameFor:(id)arg1;
- (void)onMenuTopViewTaped:(id)arg1 source:(unsigned long long)arg2;
- (void)onMenuTopViewShown:(id)arg1 source:(unsigned long long)arg2;
- (void)onTapedTitle;
- (void)onTapedPrivacy;
- (void)onTapedHostWeApp;
- (void)onTapedCoverAd;
- (void)onCommentTaped:(unsigned int)arg1 actionNote:(id)arg2;
- (void)onCommentShown:(unsigned int)arg1 actionNote:(id)arg2;
- (void)onCommentInviteClickableTextTaped;
- (int)transShareWeworkTypeToReport;
- (void)handleNotifyMenuShowToService;
- (id)genMenuIconArray;
- (id)genMenuIconArrayForSinglePageMode;
- (id)genMenuIconArrayForLiteGame;
- (BOOL)isMenuVisible;
- (id)menubuttonTitleArray;
- (id)menuDebugButtonTitleArray;
- (void)onWAActionSheetClickStateView;
- (void)gotoSetting;
- (void)gotoSettingForAppid:(id)arg1;
- (void)onClickTradeComplaint;
- (id)saveExposeSnapShotWithIsEmbed:(BOOL)arg1;
- (void)gotoFeedback;
- (BOOL)canShowTradeComplaintItem;
- (void)gotoGrowGuard;
- (void)onWAActionSheetClickButtonWithButtonTitle:(id)arg1;
- (void)hideSmallWebPage;
- (void)showSmallWebPage;
- (void)onWAActionSheetInfoClicked;
- (void)onWAActionSheetDestruct;
- (void)onWAActionSheetWillDismiss;
- (void)onWAActionSheetDidDismiss;
- (void)handleMenuDisappear;
- (void)onWAActionSheetProfileClicked;
- (void)gotoCommentFeedBack;
- (void)gotoGameIntroduction;
- (void)onSplashADMenuItemViewClicked:(id)arg1;
- (id)customViewForRow:(long long)arg1;
- (void)reportMenuAction:(unsigned long long)arg1;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)scrollActionSheet:(id)arg1 didSelecteDisableItem:(id)arg2;
- (void)scrollActionSheetDidCancel:(id)arg1;
- (void)scrollActionSheetDidTapTransparent:(id)arg1;
- (void)scrollActionSheetDidClickTop:(id)arg1;
- (void)scrollActionSheetDidClickTopPrivacy:(id)arg1;
- (void)scrollActionSheetWillDismiss:(id)arg1;
- (void)onWARFItemCallBack:(id)arg1;
- (void)onWARFRelayoutScrollSheet;
- (void)onStartJSCProfile;
- (void)onStopJSCProfile;
- (void)onDebugMenuShow;
- (void)onOpenVConsole;
- (void)onCloseVConsole;
- (void)onSwitchRenderType:(long long)arg1;
- (void)showDebugSkyline;
- (void)onCloseAudits;
- (void)onAuditsMode:(long long)arg1;
- (void)onFrameCaptureLaunch:(long long)arg1;
- (void)onFrameCaptureOperate:(long long)arg1;
- (long long)getRunningGameMode;
- (id)getGameProfileType;
- (id)getRunningGameModeString;
- (id)getRunningGameModeTitle;
- (void)onSwitchGameModeForTest:(long long)arg1;
- (void)onOpenBrandProfileForAppid:(id)arg1;
- (void)onOpenBrandProfile;
- (void)onOpenPerformance;
- (void)onClosePerformance;
- (void)onAddToStar;
- (void)onCancelStar;
- (void)onAddToDesktop;
- (void)onSellsDriving;
- (void)onCopyPathAndQuery;
- (void)onCopyPathQueryOrigin;
- (void)onCopyPathQuerySuccess:(id)arg1;
- (void)onCopyMPShortLink;
- (void)onCopyMPShortLinkSuccess:(id)arg1;
- (id)getPluginSystem;
- (void)onTranslate;
- (void)onTranslateRevert;
- (void)onChangeTranslateLanguage;
- (void)onTakeScreenshot;
- (void)onScreenshotQueryTimeUp;
- (void)onReturnTakeScreenshotWithUrl:(id)arg1;
- (void)showTipsViewController:(id)arg1;
- (void)commonShareToSpecificContacts:(id)arg1;
- (void)shareTimeLine;
- (void)notifyToGameLive;
- (void)notifyToHandoff;
- (void)shareToWeWork;
- (void)notifyToAddFavItem;
- (id)getCurrentViewController;
- (void)showTipsViewWithTitle:(id)arg1 content:(id)arg2 tipsTag:(long long)arg3 delegate:(id)arg4;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 tipTag:(long long)arg3 withTipsVC:(id)arg4;
- (id)pluginReportPageEvent;
- (id)pluginAppMsg;
- (id)pluginKeyboard;
- (id)pluginVideoPlayer;
- (id)pluginLivePlayer;
- (id)pluginNavBar;
- (id)pluginHtmlWeb;
- (BOOL)canShowCopyPathQueryMenuItem;
- (BOOL)canShowCopyMPShortLinkMenuItem;
- (BOOL)canCopyMPShortLinkMenuItemBeSelected;
- (BOOL)canCopyPathQueryMenuItemBeSelected;
- (BOOL)canShowFirstRow;
- (BOOL)canShowGrowGuard;
- (BOOL)canShowControlByteMenuItem:(unsigned long long)arg1;
- (BOOL)canSelectControlByteMenuItem:(unsigned long long)arg1;
- (BOOL)canShowShareMenuItem;
- (void)onShareMenuShowIntentionChanged:(BOOL)arg1;
- (BOOL)canShareMenuItemBeSelected;
- (BOOL)controlByteCanSharePosterWithEntrance;
- (BOOL)isShareMenuItemWantToBeSelected;
- (BOOL)canShowShareTimelineItem;
- (BOOL)canShowFavItem;
- (BOOL)canShowAddToDesktopItem;
- (BOOL)canShowHandoffItem;
- (BOOL)canShowGameLiveItem;
- (BOOL)canShowShareWeworkItem;
- (BOOL)canShareWeWorkItemBeSelected;
- (BOOL)isShareTimelineItemEnable;
- (BOOL)weappCanGoHome;
- (BOOL)canShowShareToWeUseItem;
- (BOOL)canShowCommentMenuItem;
- (BOOL)canShowADMenuItem;
- (BOOL)shouldHandleMenuShowOrDismiss;
- (BOOL)customDelegate_mustNotShare;
- (BOOL)customDelegate_mustNotShareTimeline;
- (BOOL)customDelegate_mustShowGoHome;
- (BOOL)customDelegate_mustNotHandleMenuShowOrDismiss;
- (BOOL)customDelegate_mustNotShowADMenuItem;
- (BOOL)customDelegate_mustNotShowFavItem;
- (void)reportTradeCommentAction:(unsigned int)arg1 type:(unsigned int)arg2 actionNote:(id)arg3;
- (void)reportKoubeiEvent:(long long)arg1 source:(unsigned long long)arg2 titleText:(id)arg3;
- (void)uiLayoutSubView;
- (void)resetNativeLayers;
- (void)insertSubViewAboveWebView:(id)arg1;
- (id)title;
- (void)resetNavView;
- (id)currentNavMenuView;
- (void)updateNavView;
- (void)setViewFullScreen:(id)arg1;
- (void)setNavBarBgColor:(id)arg1;
- (void)changeStatusBarWhite:(BOOL)arg1;
- (long long)preferredStatusBarStyle;
- (void)setStatusBarFontDefault;
- (void)setNavBarElementAndStatusBarStyle:(long long)arg1;
- (void)setNavTitle:(id)arg1;
- (void)setNavRightButtonHidden:(BOOL)arg1;
- (void)setCustomNavRightButton:(id)arg1 accessibilityLabel:(id)arg2;
- (void)setCustomNavRightButtonWithImage:(id)arg1 accessibilityLabel:(id)arg2;
- (void)updateNavMenuHidden;
- (void)setNavLoading:(BOOL)arg1;
- (double)getCustomNavBarOffset;
- (void)setCustomNavBarOffset:(double)arg1;
- (id)fakeProgressLoadingVC;
- (void)setFakeProgressLoadingVC:(id)arg1;
- (long long)contentModeWhenInit:(id)arg1;
- (long long)navBarFloatingModeWhenInit:(id)arg1;
- (void)enableFullScreen;
- (void)disableFullScreen;
- (void)setFullScreen:(BOOL)arg1;
- (BOOL)getFullScreen;
- (void)setWkContentBackgroundColor:(id)arg1;
- (void)setWebViewBackgroundColor:(id)arg1;
- (void)hideLoadingCoverImageView;
- (void)initLoadingCoverImageView:(id)arg1;
- (void)initQuitButton;
- (void)onClickQuitButton;
- (void)initFullScreenGesture;
- (void)ensureFullScreenGesture;
- (void)onFullScreenSingleTap;
- (void)onFullScreenClose;
- (void)onFullScreenDragBegin;
- (void)onFullScreenDragCancel;
- (void)onFullScreenDragEnd;
- (void)onFullScreenDragToRect:(CGRect)arg1;
- (void)onFullScreenBackgroundColorAlphaChange:(double)arg1;
- (void)onFullScreenLongPressBegin;
- (void)onFullScreenLongPressEnd;
- (BOOL)shouldPreventDragDownCloseGesture;
- (void)setWebViewTopViewColor:(id)arg1;
- (void)sendWebViewTopViewToBack;
- (void)setTailBackGroundColor:(id)arg1;
- (void)updateTailViewFrame;
- (id)getTabChildWebViewWithRelativeURL:(id)arg1;
- (void)tabBarDidSwitchTab;
- (id)getFirstWebViewInStack;
- (unsigned long long)getWebViewDepthInStack;
- (void)popToFirstWebViewInStackWithAnimated:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)popToWebView:(id)arg1 completion:(id /* block */)arg2;
- (id)getBackInfoViewWithAppId:(id)arg1 enablePullRefresh:(BOOL)arg2;
- (void)addBackInfoViewIndicator:(id)arg1;
- (void)showErrorViewWithMessage:(id)arg1;
- (void)showErrorViewWithMessage:(id)arg1 showReloadButton:(BOOL)arg2;
- (void)showErrorViewWithUserName:(id)arg1 title:(id)arg2 desc:(id)arg3 reloadButtonTitle:(id)arg4;
- (void)webErrorViewDidTapOperationButton:(id)arg1;
- (void)webErrorViewDidTapQuitButton:(id)arg1;
- (void)delayShow404ErrorView;
- (void)cancelShow404ErrorView;
- (void)show404ErrorView;
- (void)onWAWebErrorViewOperateBtnClick:(id)arg1;
- (void)setStatusBarHidden:(BOOL)arg1;
- (void)setNavigationBarHidden:(BOOL)arg1;
- (double)getCapsuleMenuWidth;
- (double)getCapsuleMenuHeight;
- (CGRect)currentMenuViewFrame;
- (void)onWebViewMenuCustomRightButtonClick;
- (void)onWebViewMenuAllExit;
- (void)onWebViewMenuAllExitWithAction:(long long)arg1;
- (void)checkAndExitWithAction:(long long)arg1;
- (void)directlyOnAllExit;
- (void)directlyOnAllExitWithAction:(long long)arg1;
- (void)onWebViewMenuHomeButtonClicked;
- (void)onWebviewMenuWeAppEntryBtnClicked;
- (double)getStatusBarHeight;
- (BOOL)isEvaluateSheetVisible;
- (void)showEvaluatePopSheetAnimated;
- (void)hideEvaluatePopSheet;
- (void)onCloseEvaluatePopSheet;
- (void)writeEvaluateRatingValue:(unsigned int)arg1;
- (void)showEvaluateSuccessAndExit;
- (void)onUpdateProfileEvaluate:(id)arg1 userName:(id)arg2 Score:(unsigned int)arg3;
- (void)evaluateCommonReport:(unsigned long long)arg1 EvaluateScore:(unsigned int)arg2 Result:(unsigned long long)arg3;
- (void)onWebViewMenuReturn;
- (BOOL)isWebviewPresenting;
- (unsigned long long)leftButtonTypeForMultiFuncMenuView:(id)arg1;
- (BOOL)shouldShowAlertTitleViewForMultiFuncMenuView:(id)arg1;
- (BOOL)shouldShowAlertTitleViewEntryBtnForMultiFuncMenuView:(id)arg1;
- (id)getWeAppNameWithFuncMenuView:(id)arg1;
- (id)getAlertTitleWithFuncMenuView:(id)arg1;
- (void)showJSApiForbbiddenToast:(id)arg1;
- (void)onWebviewToastDidDismiss;
- (void)showLoadingLayerWhenPushed;
- (void)dismissLoadingLayer;
- (void)bringShownModalToFront;
- (void)showQuickLaunchLoading;
- (void)hideQuickLaunchLoading;
- (BOOL)shouldShowQuickLaunchLoading;
- (BOOL)backgroundInLight;
- (void)initLoadingView;
- (void)layoutCenterLoading;
- (BOOL)isInVideoFullScreen;
- (void)quitVideoFullScreenIfHave;
- (void)resetBottomBanner;
- (CGRect)currentBottomBannerFrame;
- (id)bottomBannerViewTitleTail;
- (void)onBottomBannerBtnClicked:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)onHighlightedBottomBannerClicked:(id)arg1;
- (void)sendBottomBannerClickEvent;
- (BOOL)capsuleMenuHidden;
- (CGRect)capsuleMenuOriginalFrame;
- (CGRect)capsuleMenuFrame;
- (CGRect)calculateCapsuleMenuFrame:(double)arg1 height:(double)arg2;
- (long long)capsuleMenuStyleMode;
- (unsigned long long)capsuleMenuType;
- (BOOL)systemCoverViewHidden;
- (BOOL)webViewIsCoveredByTemplateNav;
- (void)adjustViewSizeIfUnresizable;
- (void)setIsConfiguredToShowHomePageButtonWithPageRelativePath:(id)arg1;
- (id)preloadFrameFileName;
- (id)getPreloadBaseURL;
- (id)getPreloadPageRelativeURL;
- (void)updatePreloadPageRelativeURL:(id)arg1;
- (id)getPreloadPageQuery;
- (id)getPreloadIndexURL;
- (BOOL)isIndexDataLoaded;
- (void)loadIndexDataWithRelativeURL:(id)arg1;
- (void)onCallbackInitReadyFromPreloadManullyCall;
- (void)onCallbackInitReadyFromPageCall:(BOOL)arg1;
- (void)onCallbackInitReadyAfterRenderingCache;
- (void)doCallbackInitReady;
- (void)checkSendInitialRenderCacheIfNeeded;
- (void)trySendInitialRenderCache;
- (void)setupAttributeWhenKnowsPagePath;
- (void)loadPreloadPageAttribute;
- (void)resetPreloadPageAttributeMark;
- (void)setPreloadPageAttribute;
- (id)pageAttribute;
- (void)updateNavigationBarItemsAndStatusBarStyle;
- (void)setPageBackgroundColor;
- (void)setNavigationBarTitle:(id)arg1 backgroundColor:(id)arg2 alpha:(double)arg3;
- (void)bringTabBarToFront;
- (void)loadFrameDataWithBaseURL:(id)arg1 pageRelativeURL:(id)arg2;
- (id)getFrameContentWithURL:(id)arg1;
- (void)loadMainModuleSharedCommonJS;
- (id)currentModuleName;
- (id)currentModuleInfo;
- (BOOL)isCurrentModuleLoaded;
- (BOOL)isModuleLoaded:(id)arg1;
- (BOOL)shouldUseLazyLoad;
- (BOOL)shouldInitFullWebView;
- (BOOL)currentUrlInIndepentModule;
- (void)loadIndexData;
- (void)loadPreloadAppTaskFrameData;
- (void)injectWebViewConfigForPreload;
- (void)extractAndInjectPageFrameJSForFullPkg;
- (void)reportPageFrameJSInjectStart:(long long)arg1 end:(long long)arg2 length:(unsigned int)arg3 lazyLoadKey:(id)arg4;
- (void)tryLoadPreloadAppTaskIndexData;
- (void)loadPageFrameJSOfPreload:(id /* block */)arg1;
- (void)tryLoadMainModulePluginBeforeLoadModuleSharedScript;
- (void)tryLoadMainPluginPageFrame:(id)arg1;
- (void)tryLoadOrdinaryModulePluginPageFrame:(id)arg1;
- (void)finallyLoadPluginPageFrame:(id)arg1;
- (id)getPageFrameJSStr;
- (id)allElementStringFromHtml:(id)arg1 elementName:(id)arg2 containElementName:(BOOL)arg3;
- (void)loadModuleSharedScript:(id /* block */)arg1;
- (void)loadModuleScriptDataWithFilePath:(id)arg1;
- (void)loadModuleScriptDataWithFilePath:(id)arg1 complection:(id /* block */)arg2;
- (long long)getLoadPageIndexStartTime;
- (void)setLoadPageIndexStartTime:(long long)arg1;
- (void)loadFrameContent:(id)arg1;
- (id)cachedDataWithURL:(id)arg1;
- (id)getCommonPageFrameData;
- (id)getModuleRelativeFilePathForFileName:(id)arg1 moduleName:(id)arg2;
- (id)elementStringFromXML:(id)arg1 startPos:(unsigned long long *)arg2 elementName:(id)arg3 containElementName:(BOOL)arg4;
- (void)parseDataString:(id)arg1 AndGetStype:(id *)arg2 body:(id *)arg3 script:(id *)arg4;
- (id)filterRegularString:(id)arg1;
- (void)getFileData:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)getFileData:(id)arg1 referrerPolicyType:(unsigned long long)arg2 withCompletionHandler:(id /* block */)arg3;
- (id)getFileData:(id)arg1;
- (void)checkModuleDataLoaded;
- (void)showModuleDataLoading;
- (void)hideModuleDataLoading;
- (void)reloadModuleData;
- (void)onLoadModuleData:(BOOL)arg1 errorCode:(long long)arg2 moduleName:(id)arg3;
- (void)onLoadModuleDataProgress:(unsigned int)arg1 progress:(float)arg2 remainSecond:(unsigned long long)arg3;
- (void)onProfileStarted;
- (void)onProfileStopped:(id)arg1;
- (void)onShareProfileFile:(id)arg1;
- (void)doStartProfileInJSThread:(id)arg1;
- (void)doStopProfileInJSThread;
- (void)onStartProfileClick;
- (void)onStopProfileClick;
- (void)showToast:(id)arg1;
- (unsigned long long)getPageConfig_visualEffectInBackground;
- (void)initNativeViews;
- (id)getSafeNativeViewsWritable:(BOOL)arg1;
- (unsigned int)genViewId;
- (unsigned int)insertChildView:(id)arg1 viewId:(unsigned int)arg2 parentId:(unsigned int)arg3;
- (void)updateParentId:(unsigned int)arg1 forChild:(unsigned int)arg2;
- (void)updateParentId:(unsigned int)arg1 forChild:(unsigned int)arg2 fixed:(BOOL)arg3;
- (id)getChildView:(unsigned int)arg1;
- (void)bringNativeToFront:(id)arg1;
- (void)sortTopFullNativeViews;
- (BOOL)isSelectableText:(id)arg1;
- (BOOL)isDisableContextMenuText:(id)arg1;
- (id)getContainerViewFromNative:(id)arg1;
- (void)onTongCengChangedScrollView:(id)arg1;
- (BOOL)removeChildView:(unsigned int)arg1;
- (void)removeAllNativeViews;
- (id)getChildViews;
- (void)updateContainerByScrollView:(id)arg1 containerId:(unsigned int)arg2;
- (void)findContainerInView:(id)arg1;
- (id)attachWebScrollViewById:(unsigned int)arg1;
- (BOOL)IsScrollHeightEqualApproximately:(double)arg1 toHeight:(double)arg2;
- (BOOL)CGRectEqualApproximately:(CGRect)arg1 toRect:(CGRect)arg2;
- (id)findScrollViews:(id)arg1 frame:(CGRect)arg2 scrollHeight:(double)arg3;
- (id)attachWebScrollView:(CGRect)arg1 scrollHeight:(double)arg2 containerId:(unsigned int)arg3;
- (void)removeContainer:(unsigned int)arg1;
- (id)getContainer:(unsigned int)arg1;
- (BOOL)existNativeView:(unsigned int)arg1;
- (void)printTreeView:(id)arg1;
- (void)printView:(id)arg1 linePrefix:(id)arg2 buffer:(id)arg3;
- (id)makeViewDesc:(id)arg1;
- (void)printNativeView;
- (BOOL)disableContextMenu;
- (void)setDisableContextMenu:(BOOL)arg1;
- (id)snapShotInnerWebviewImage;
- (id)snapShotWebviewImage;
- (id)snapShotWindowImage;
- (void)snapShotWebviewImageAtTop:(id /* block */)arg1;
- (id)processWebViewSceenShot2ThumbImage:(id)arg1;
- (void)showShareScreenshotButtonWithAssetId:(id)arg1;
- (void)onClickShareScreenshotButton:(id)arg1;
- (long long)getContentNavMode;
- (void)setContentNavMode:(long long)arg1;
- (long long)getNavBarFloatingMode;
- (void)setNavBarFloatingMode:(long long)arg1;
- (void)resetTabBar;
- (void)resetWebviewInsetOrY;
- (void)calcCurrentWebViewY:(double *)arg1 height:(double *)arg2;
- (void)calcCurrentWebViewInset:(UIEdgeInsets *)arg1 y:(double *)arg2 height:(double *)arg3;
- (void)normal_calcCurrentWebViewInset:(UIEdgeInsets *)arg1 y:(double *)arg2 height:(double *)arg3;
- (void)fsmenu_calcCurrentWebViewInset:(UIEdgeInsets *)arg1 y:(double *)arg2 height:(double *)arg3;
- (double)topNativeViewOriginYWhenFullScreenLike;
- (double)getWebViewWindowHeight;
- (double)getTopBarHeight;
- (BOOL)isTopTabBar;
- (double)getBottomBarHeight;
- (double)getTabBarHeight;
- (double)__pageVisibleHeight;
- (double)calVisibleHeight;
- (id)currentPopInteractiveTransiton;
- (void)onWeAppDismissTransitionEnd:(BOOL)arg1;
- (void)showSmallWebPageIfCheckShowTips:(BOOL)arg1;
- (void)addPopBackInteractivePopGesture;
- (void)removePopBackInteractivePopGesture;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)mmNavigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (BOOL)onPopBackInteractiveTransitionShouldBegin:(id)arg1;
- (void)onPopBackInteractiveTransitionBegin:(id)arg1;
- (BOOL)onPopShouldBeRequiredToFailByGestureRecognizer:(id)arg1;
- (void)onPopBackInteractiveTransitionChange:(id)arg1 progress:(double)arg2;
- (void)onPopBackInteractiveTransitionWillEnd:(id)arg1 isComplete:(BOOL)arg2;
- (void)onPopBackInteractiveTransitionDidEnd:(id)arg1 isComplete:(BOOL)arg2;
- (BOOL)onPopBackInteractiveShouldRecognizeSimultaneously;
- (BOOL)onPopBackInteractiveRecognizeEdgeGesture;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)buildMenuWithBuilder:(id)arg1;
- (void)doSearch:(id)arg1;
- (void)startWebSearch:(id)arg1;
- (BOOL)hitBlackListHostForSearch;
- (id)fileService;
- (void)setTitle:(id)arg1;
- (id)extraParams;
- (id)getCurrentAppId;
- (id)getWAContact;
- (long long)getCurrentVersionNum;
- (id)getInitUrl;
- (unsigned int)getAppServiceType;
- (id)getNickName;
- (id)getInstanceId;
- (BOOL)isAppLaunchFirstWebview;
- (BOOL)isDebugMode;
- (unsigned long long)debugMode;
- (BOOL)isDebugOrRdmMode;
- (unsigned long long)engineType;
- (unsigned int)getJITLiteMode;
- (void)setM_delegate:(id)arg1;
- (void)registerLeakDetector;
- (BOOL)isOpenAtSubPage;
- (BOOL)shouldShowPageHomeButton;
- (BOOL)isCurrentPageNeedShowHomeButtonInitially;
- (BOOL)isCurrentPageConfigHomeButton;
- (BOOL)isHomeButtonHiddenByDeveloper;
- (void)hidePageHomeButton;
- (void)reportHomeButtonHidden;
- (BOOL)isUsingSinglePageMode;
- (BOOL)isRestrictedBySecurityFlag;
- (BOOL)shouldShowWeAppEntryInMenuView;
- (void)highlightTitleForSinglePageMode;
- (unsigned int)getSecFlagForSinglePageMode;
- (void)setBottomBannerVisible:(BOOL)arg1;
- (void)setBottomBannerHighlighted:(BOOL)arg1;
- (BOOL)isNeedCallCloseEventWhenWebviewDissmissed;
- (BOOL)isThisPageUsePreload;
- (BOOL)isThisPageUsePreloadPageFrame;
- (BOOL)isThisPageUseSkylinePreload;
- (unsigned int)getBorrowSkylineWebviewId;
- (void)setBorrowSkylineWebviewId:(id)arg1;
- (BOOL)isThisPageUseTaskPreload;
- (BOOL)isTabWebVC;
- (BOOL)isLastWebVC;
- (BOOL)isFirstPage;
- (BOOL)isNavigationStackFirstPage;
- (BOOL)isHomePage;
- (BOOL)isAlreadyViewWillAppear;
- (BOOL)isViewDidAppear;
- (BOOL)isRenderDidAppear;
- (BOOL)hasHTMLWeb;
- (void)setHideSplash:(BOOL)arg1;
- (void)hideSplash;
- (id)getCurrentUserName;
- (id)getCurrentContact;
- (BOOL)getCurrentIsSimulatedNativeWeApp;
- (BOOL)getCurrentIsGameApp;
- (BOOL)getCurrentIsNormalWeApp;
- (BOOL)getCurrentIsNormalWeAppWithGameRuntime;
- (id)getPackageConfig;
- (id)getSessionID;
- (id)getUniqueRouteID;
- (BOOL)getIsTaskUsePreload;
- (BOOL)isWeAppUseModule;
- (void)DismissMyWebViewAnimated:(BOOL)arg1;
- (void)DismissMyWebViewAnimated:(BOOL)arg1 forceDismiss:(BOOL)arg2;
- (void)doBackActionCleanWithType;
- (void)OnReturn;
- (void)onAllExit;
- (void)onAllExitInAction:(long long)arg1;
- (void)onReboot;
- (void)onRouteToHome;
- (BOOL)shouldShowCloseBtn;
- (BOOL)isNeedShowReturnItem;
- (long long)webviewContentMode;
- (id)getCurrentUrl;
- (void)setCurrentUrl:(id)arg1;
- (void)setOrientation:(long long)arg1;
- (void)doJsApiInitEvent;
- (void)publishSyncEventToJSBridge:(id)arg1 Param:(id)arg2 eventId:(unsigned int)arg3;
- (void)sendEventToService:(id)arg1 Param:(id)arg2;
- (void)sendEventToJSBridge:(id)arg1 Param:(id)arg2;
- (void)sendEventToJSBridgeAndService:(id)arg1 Param:(id)arg2;
- (void)printConsoleLog:(id)arg1;
- (id)extraInfo;
- (id)taskExtInfo;
- (void)notifyToJSBridgeVisibilityChanged:(BOOL)arg1;
- (void)setBackgroundColor;
- (void)setM_bIsStatusBarBlack:(BOOL)arg1;
- (long long)currentMenuState;
- (void)rewriteRouteToUrl:(id)arg1;
- (void)dealloc;
- (id)initWithBaseURL:(id)arg1 pageRelativeURL:(id)arg2 extraInfo:(id)arg3 delegate:(id)arg4;
- (id)initForPreloadAppTask:(id)arg1 extraInfo:(id)arg2;
- (void)supplyAppInfoWithBaseURL:(id)arg1 pageRelativeURL:(id)arg2 extraInfo:(id)arg3 delegate:(id)arg4;
- (void)internalInitWithBaseURL:(id)arg1 pageRelativeURL:(id)arg2 extraInfo:(id)arg3 delegate:(id)arg4;
- (void)initWebViewIfNeeded;
- (void)startProvideApi:(id)arg1 pageRelativeURL:(id)arg2 extraInfo:(id)arg3 delegate:(id)arg4;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)recoverWebView;
- (void)notifyOnBeginQuickReplyMsg;
- (void)notifyOnFinishQuickReplyMsg;
- (void)pageReloadWithRouteInfo:(id)arg1;
- (void)terminateManuallyWithReason:(long long)arg1;
- (void)onWebViewReadyToTerminate;
- (void)recoverTerminatedWebViewIfNeededWithRouteInfo:(id)arg1;
- (void)doPageReloadWithRouteInfo:(id)arg1;
- (void)realTriggerPageReload;
- (void)statusBarFrameWillChange:(id)arg1;
- (void)adjustSubviewRects;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint *)arg3;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (void)enableLongPressDetect;
- (void)onLongPressOnWebview:(id)arg1;
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)willAppear;
- (void)didAppear;
- (void)willDisappear;
- (void)viewWillPush:(BOOL)arg1;
- (void)viewWillPop:(BOOL)arg1;
- (void)viewWillBePushed:(BOOL)arg1;
- (void)viewDidBePushed:(BOOL)arg1;
- (void)viewDidBePresented:(BOOL)arg1;
- (void)viewDidPush:(BOOL)arg1;
- (void)viewDidPop:(BOOL)arg1;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)onWebViewLeave;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewDidBeDismissed:(BOOL)arg1;
- (void)viewWillBeDismissed:(BOOL)arg1;
- (void)viewDidPresent:(id)arg1 animated:(BOOL)arg2;
- (void)navigationControllerDidPresent:(id)arg1;
- (void)viewDidLayoutSubviews;
- (id)pageOrientation;
- (BOOL)isResizable;
- (BOOL)isRunningInSheetMode;
- (BOOL)isEmbedModeExpandedToFullScreen;
- (BOOL)isSheetModeExpandedToStatusBarTop;
- (BOOL)isRunningInKeepContextView;
- (BOOL)isEnableSheetModeFullScreenGesture;
- (BOOL)isSheetModeDragGestureDragging;
- (BOOL)isSimulatedNativeSheetModeShouldHideLeftReturnButton;
- (BOOL)isRunningInEmbedMode;
- (BOOL)isRunningInViewEmbeddedMode;
- (BOOL)hasJumpingEmbedWeAppTask;
- (BOOL)jumpingEmbedWeAppTaskIsStating;
- (id)jumpingSheetWeAppTaskAppid;
- (id)jumpFromWeAppTaskAppid;
- (void)viewWillLayoutSubviews;
- (CGSize)preferSize;
- (void)fastFinishWebviewSkylineLoad;
- (void)findBackSkylineView;
- (void)setSkylineSinglePageRouteData:(id)arg1;
- (id)getSkylineSinglePageData:(BOOL)arg1;
- (void)serviceInvokeWebviewApi:(id)arg1;
- (void)webviewApiResult:(id)arg1;
- (id)makeSkylinePageCfg;
- (void)notifySkylineNavigateTo;
- (void)notifySkylineRedirectTo;
- (void)notifySkylineNavigateBack:(long long)arg1 animated:(BOOL)arg2;
- (void)notifySkylineAppLaunch;
- (void)notifySkylineReLaunch;
- (void)notifySkylineAutoReLaunch;
- (void)notifySkylineSwitchTab;
- (void)onSkylineWindowReady;
- (void)onSkylineRouteDone:(long long)arg1;
- (void)onSkylineNavigateBack:(long long)arg1;
- (void)onSkylineNavigateBackDone:(long long)arg1;
- (void)reload;
- (void)stop;
- (void)goToURL:(id)arg1;
- (id)fetchPublicResLogic;
- (id)publicResLogic;
- (void)webview:(id)arg1 onCallRawInnerSyncJSApi:(id)arg2 params:(id)arg3 completion:(id /* block */)arg4;
- (BOOL)isDisableSetCustomUserAgentInBaseWebview;
- (id)getPreInjectScriptStr;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 isMainFrame:(BOOL)arg4 navigationAction:(id)arg5;
- (void)webViewDidStartLoad:(id)arg1 navigation:(id)arg2;
- (void)checkJSBridgeObjects:(BOOL)arg1;
- (void)checkAlive:(id /* block */)arg1;
- (void)checkAliveTimeOut:(id)arg1;
- (void)showPublicJSSpendTime;
- (void)webViewDidFinishLoad:(id)arg1 navigation:(id)arg2;
- (void)processDidFinishLoadWebView:(id)arg1 navigation:(id)arg2;
- (void)finishLoadAction;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2 navigation:(id)arg3;
- (id)publibEvaluateRet;
- (void)reportPublibJSInjectWithFileName:(id)arg1 length:(unsigned int)arg2 beginTime:(unsigned long long)arg3 endTime:(unsigned long long)arg4 engineType:(unsigned int)arg5 codeCacheDetail:(id)arg6 jitLiteMode:(unsigned int)arg7;
- (void)webViewContentProcessDidTerminate:(id)arg1;
- (void)webViewDidBecomeUnresponsible:(id)arg1;
- (void)webViewDidBecomeResponsible:(id)arg1;
- (void)removeAllNativeViewsAndNotifyPlugin;
- (void)webView:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)webviewDidReceiveScriptMessage:(id)arg1 handler:(id)arg2 rawMessage:(id)arg3;
- (void)webView:(id)arg1 didFailEvaluateJS:(id)arg2 withError:(id)arg3;
- (void)handleCheckAliveHandler:(id)arg1;
- (id)webviewController;
- (void)keyboardDidShow:(id)arg1;
- (id)getPermissionResultWithJSAPI:(id)arg1;
- (id)getPermissionResultWithJSAPI:(id)arg1 withAppId:(id)arg2 byTempPermission:(id)arg3;
- (BOOL)checkRunModeOnWebview:(id)arg1;
- (void)checkUserAuthWithJSAPI:(id)arg1 permissionAppID:(id)arg2 model:(id)arg3 handler:(id /* block */)arg4 failHandler:(id /* block */)arg5 transferHandler:(id /* block */)arg6;
- (id)getWAWebViewController;
- (unsigned long long)getAppVersion;
- (unsigned int)getDebugModeType;
- (BOOL)isOpenDebugAndVConsole;
- (void)prepareDebugConsoleIfNeeded;
- (void)prepareWKInspectable;
- (BOOL)shouldEnableWKInspectable;
- (BOOL)isIgnoreRemoteCheckDomain;
- (BOOL)isPreloadWebView;
- (unsigned int)webViewPreloadMoment;
- (unsigned int)preloadMoment;
- (BOOL)canInjectFullWxConfig;
- (void)remoteDomEvent:(id)arg1 webViewID:(unsigned int)arg2;
- (id)getWxaExternalInfo;
- (id)getPluginScheduler;
- (unsigned int)getCurTaskRunningState;
- (id)getCurPubResLogic;
- (id)extJSModels;
- (BOOL)shouldReportPubLibCoverage;
- (void)reportPubLibCoverageIfNeeded;
- (void)reportPubLibCoverageIfNeededWithAppid:(id)arg1 publibStringVersion:(id)arg2 publibStringUpdateTime:(id)arg3;
- (void)enableGestureBack:(BOOL)arg1;
- (id)popWebViewCountFromSelf:(int)arg1 completion:(id /* block */)arg2;
- (id)tagForCurrentPage;
- (void)clearExposeSnapShotIfNeeded;
- (void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(id /* block */)arg3;
- (BOOL)isTerminated;
- (unsigned long long)terminatedType;
- (BOOL)isTerminatedManually;
- (BOOL)isTerminatedBySystem;
- (void)onAppTaskClose;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)onLanguageChange;
- (void)scaleTabbarIconAndTitleIfNeeded;
- (BOOL)m_bIsStatusBarBlack;
- (id)webView;
- (void)setWebView:(id)arg1;
- (unsigned int)m_uiWebviewID;
- (id)m_delegate;
- (id)m_jsLogicImpl;
- (BOOL)m_isFinishLoaded;
- (BOOL)m_isLanscape;
- (void)setM_isLanscape:(BOOL)arg1;
- (id)m_extraInfo;
- (void)setM_extraInfo:(id)arg1;
- (id)m_initUrl;
- (id)m_menuView;
- (void)setM_menuView:(id)arg1;
- (id)m_navBarProperties;
- (void)setM_navBarProperties:(id)arg1;
- (BOOL)m_bWebviewReceiveTerminateSignal;
- (BOOL)m_bWebviewReceiveTerminateSignalManually;
- (BOOL)m_bIsInsertCamera;
- (void)setM_bIsInsertCamera:(BOOL)arg1;
- (BOOL)m_bIsInsertLivePusher;
- (void)setM_bIsInsertLivePusher:(BOOL)arg1;
- (BOOL)m_bIsFromPreloadTaskWithNotAppInfo;
- (void)setM_bIsFromPreloadTaskWithNotAppInfo:(BOOL)arg1;
- (void)setExtraParams:(id)arg1;
- (void)setPublicResLogic:(id)arg1;
- (long long)orientation;
- (long long)enmPullRefreshMode;
- (void)setEnmPullRefreshMode:(long long)arg1;
- (id)provideApiCfg;
- (void)setProvideApiCfg:(id)arg1;
- (id)m_initRelativeURLBeforeRoute;
- (void)setM_initRelativeURLBeforeRoute:(id)arg1;
- (id)m_rawRelativeURL;
- (void)setM_rawRelativeURL:(id)arg1;
- (id)pluginScheduler;
- (void)setPluginScheduler:(id)arg1;
- (id)skylineView;
- (void)setSkylineView:(id)arg1;
- (unsigned int)m_uiWebviewIDBeforeRewriteRoute;
- (void)setM_uiWebviewIDBeforeRewriteRoute:(unsigned int)arg1;
- (id)backgroundColorContent;
- (void)setBackgroundColorContent:(id)arg1;
- (id)m_sheetModeBrandTitleBar;
- (void)setM_sheetModeBrandTitleBar:(id)arg1;
- (id)m_bottomBanner;
- (void)setM_bottomBanner:(id)arg1;
- (BOOL)m_bIsBottomBannerVisible;
- (unsigned long long)stackMode;
- (void)setStackMode:(unsigned long long)arg1;
- (BOOL)m_bIsDelayPushWebView;
- (void)setM_bIsDelayPushWebView:(BOOL)arg1;
- (id /* block */)m_onLoadInitReady;
- (void)setM_onLoadInitReady:(id /* block */)arg1;
- (id /* block */)m_onLoadViewDidAppear;
- (void)setM_onLoadViewDidAppear:(id /* block */)arg1;
- (BOOL)renderCacheAccepted;
- (void)setRenderCacheAccepted:(BOOL)arg1;
- (BOOL)m_bIsRecoverReloaded;
- (void)setM_bIsRecoverReloaded:(BOOL)arg1;
- (id /* block */)m_onViewDidAppearThenCreateTab;
- (void)setM_onViewDidAppearThenCreateTab:(id /* block */)arg1;
- (unsigned int)foregroundTerminatedReloadCount;
- (void)setForegroundTerminatedReloadCount:(unsigned int)arg1;
- (unsigned long long)webviewInitTimeInMs;
- (void)setWebviewInitTimeInMs:(unsigned long long)arg1;
- (unsigned long long)routeIntentionStartTimeInMs;
- (void)setRouteIntentionStartTimeInMs:(unsigned long long)arg1;
- (void)setPublibEvaluateRet:(id)arg1;
- (unsigned int)tagNativeMax;
- (void)setTagNativeMax:(unsigned int)arg1;
- (id)nativeViews;
- (void)setNativeViews:(id)arg1;
- (id)containerViews;
- (void)setContainerViews:(id)arg1;
- (id)topFullNativeViews;
- (void)setTopFullNativeViews:(id)arg1;
- (id)displayingWebActionSheet;
- (void)setDisplayingWebActionSheet:(id)arg1;
- (id)customMenuDelegate;
- (void)setCustomMenuDelegate:(id)arg1;
- (void)setPreloadMoment:(unsigned int)arg1;
- (unsigned long long)preloadFinishTimeInMs;
- (void)setPreloadFinishTimeInMs:(unsigned long long)arg1;
- (id)instanceId;
- (void)setInstanceId:(id)arg1;
- (id)prevVCMask;
- (void)setPrevVCMask:(id)arg1;
- (id)webViewContainer;
- (void)setWebViewContainer:(id)arg1;
- (id)loadingCoverClipView;
- (void)setLoadingCoverClipView:(id)arg1;
- (id)loadingCoverImageView;
- (void)setLoadingCoverImageView:(id)arg1;
- (id)loadingCoverLoadingView;
- (void)setLoadingCoverLoadingView:(id)arg1;
- (BOOL)presentingClose;
- (void)setPresentingClose:(BOOL)arg1;
- (unsigned long long)lastRouteType;
- (void)setLastRouteType:(unsigned long long)arg1;
- (BOOL)isFirstInitReadyReported;
- (void)setIsFirstInitReadyReported:(BOOL)arg1;
- (unsigned long long)appRouteStartTime;
- (void)setAppRouteStartTime:(unsigned long long)arg1;
- (unsigned long long)initReadyReceiveTime;
- (void)setInitReadyReceiveTime:(unsigned long long)arg1;
- (unsigned long long)recoverReloadStartTime;
- (void)setRecoverReloadStartTime:(unsigned long long)arg1;
- (unsigned long long)recoverReloadInitReadyReceiveTime;
- (void)setRecoverReloadInitReadyReceiveTime:(unsigned long long)arg1;
- (BOOL)detectedWhiteScreen;
- (void)setDetectedWhiteScreen:(BOOL)arg1;
- (unsigned long long)whiteScreenCheckScene;
- (void)setWhiteScreenCheckScene:(unsigned long long)arg1;
- (BOOL)hasReportedDisappearDoubleCheckWhiteScreen;
- (void)setHasReportedDisappearDoubleCheckWhiteScreen:(BOOL)arg1;
- (unsigned long long)initReadyLastWhiteScreenDetectedTimeInMs;
- (void)setInitReadyLastWhiteScreenDetectedTimeInMs:(unsigned long long)arg1;
- (id)whiteScreenHexColor;
- (void)setWhiteScreenHexColor:(id)arg1;
- (unsigned int)whiteScreenColorRatio;
- (void)setWhiteScreenColorRatio:(unsigned int)arg1;
- (unsigned int)whiteScreenAliveFailedCount;
- (void)setWhiteScreenAliveFailedCount:(unsigned int)arg1;
- (BOOL)reportedWebViewAliveFailed;
- (void)setReportedWebViewAliveFailed:(BOOL)arg1;
- (BOOL)reportedWebViewAliveFailedThenAlive;
- (void)setReportedWebViewAliveFailedThenAlive:(BOOL)arg1;
- (long long)responsibleType;
- (void)setResponsibleType:(long long)arg1;
- (unsigned long long)lastAliveTimeStampInMs;
- (void)setLastAliveTimeStampInMs:(unsigned long long)arg1;
- (unsigned long long)lastAliveFailedTimeStampInMs;
- (void)setLastAliveFailedTimeStampInMs:(unsigned long long)arg1;
- (BOOL)isAppWxssInjected;
- (void)setIsAppWxssInjected:(BOOL)arg1;
- (BOOL)disableAutoRsetPopGesture;
- (void)setDisableAutoRsetPopGesture:(BOOL)arg1;
- (id)urlCopyTimer;
- (void)setUrlCopyTimer:(id)arg1;
- (id)renderCacheAppServiceDataStr;
- (void)setRenderCacheAppServiceDataStr:(id)arg1;
- (BOOL)notResetWhenWebviewRemoved;
- (void)setNotResetWhenWebviewRemoved:(BOOL)arg1;
- (id)navBackAlertModel;
- (void)setNavBackAlertModel:(id)arg1;
- (id)quickLaunchLoadingView;
- (void)setQuickLaunchLoadingView:(id)arg1;
- (id)moduleLoadingView;
- (void)setModuleLoadingView:(id)arg1;
- (float)moduleLoadingProgress;
- (void)setModuleLoadingProgress:(float)arg1;
- (id)exposeSnapShotLocalId;
- (void)setExposeSnapShotLocalId:(id)arg1;
- (BOOL)routeRewrited;
- (void)setRouteRewrited:(BOOL)arg1;
- (BOOL)isInterceptingInteractivePopBack;
- (void)setIsInterceptingInteractivePopBack:(BOOL)arg1;
- (BOOL)isInterceptingLeftButtonBack;
- (void)setIsInterceptingLeftButtonBack:(BOOL)arg1;
- (BOOL)isInterceptingNavigateBackJsApi;
- (void)setIsInterceptingNavigateBackJsApi:(BOOL)arg1;
- (BOOL)isCapturingSnapshot;
- (void)setIsCapturingSnapshot:(BOOL)arg1;
- (id /* block */)webViewLeaveCallback;
- (void)setWebViewLeaveCallback:(id /* block */)arg1;
- (id)recentForwardHelper;
- (void)setRecentForwardHelper:(id)arg1;
- (id)arrTempSpecificContacts;
- (void)setArrTempSpecificContacts:(id)arg1;
- (BOOL)isCppProfileStarted;
- (void)setIsCppProfileStarted:(BOOL)arg1;
- (BOOL)isCppProfileStarting;
- (void)setIsCppProfileStarting:(BOOL)arg1;
- (BOOL)isCppProfileStopping;
- (void)setIsCppProfileStopping:(BOOL)arg1;
- (BOOL)isJSCProfileStarted;
- (void)setIsJSCProfileStarted:(BOOL)arg1;
- (id)systemMenuSessionBuffer;
- (void)setSystemMenuSessionBuffer:(id)arg1;
- (id)singlePageRouteData;
- (void)setSinglePageRouteData:(id)arg1;
- (id)dicCheckAliveBlock;
- (void)setDicCheckAliveBlock:(id)arg1;
- (unsigned int)aliveSeed;
- (void)setAliveSeed:(unsigned int)arg1;
- (BOOL)isViewDidFirstAppear;
- (void)setIsViewDidFirstAppear:(BOOL)arg1;
- (void).cxx_destruct;
@end

