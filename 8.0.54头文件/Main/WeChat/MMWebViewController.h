@interface MMWebViewController : MMUIViewController <MMWebMProfileTitleViewDelegate, MMWebLiveTitleViewDelegate, MMWebTopBarDelegate, MMWebHangTipsBarDelegate, MinimizationTransitionControllerDelegate, MMLongImagePreviewViewControllerDelegate, MPPageFastLoadCustomSchemeHandlerDelegate, MMWebviewAdSchemeHandlerDelegate, MMWebViewOAuthSnapShotDelegate, MMScrollActionSheetDelegate, EnterpriseConnectorLogicDelegate, H5GameScrollActionSheetDelegate, MMWebMenuHeaderViewDelegate, RecentForwardScrollViewDelegate, WCForceTouchPopProtocol, MMWebViewDelegate, UIGestureRecognizerDelegate, IUiUtilExt, MMTipsViewControllerDelegate, ISysCallCheckExt, WAWxMaterialRefreshExt, WKHTTPCookieStoreObserver, WebPrefetcherJSApiLogicDelegate, MMWebViewPresetUILogicDelegate, WCActionSheetDelegate, MMWebViewFontFloatViewDelegate, WebViewA8KeyLogicDelegate, WebViewJSLogicDelegate, UIScrollViewDelegate, MMJSApiVerifyMgrDelegate, ForwardMessageLogicDelegate, WCCommitViewResultDelegate, WCPayDecimalKeyboardViewDelegate, WebViewSanboxSessionLogicDelegate, WXCustomWebViewControllerProtocol, YYWebViewDelegate>
{
    BOOL m_hasInitSameLayerSwitch; // +0x68
    NSDictionary * m_sameLayerSwitchDict; // +0x70
    id <MMWebViewPreloadContentHandler> _preloadContentHandler; // +0x78
    NSString * _preloadFrameUrl; // +0x80
    NSString * _preloadPageUrl; // +0x88
    NSString * _preloadPageDataKeyUrl; // +0x90
    NSString * _preloadForceUrl; // +0x98
    NSString * _preloadGoH5Url; // +0xa0
    NSString * _preloadPageDataString; // +0xa8
    BOOL _isPreloadPageDataLoaded; // +0xb0
    BOOL _isPreloadPageLoadedForceUrl; // +0xb1
    BOOL _isUsePreloadWebView; // +0xb2
    BOOL _isPreloadStartLoadPageData; // +0xb3
    BOOL _isPreloadFirstGetA8KeyFail; // +0xb4
    BOOL _isPreloadPageLoadFinish; // +0xb5
    BOOL _isPreloadSyncGetPageData; // +0xb6
    BOOL _isPreloadGoH5; // +0xb7
    BOOL _isPreloadPageDataResultNotified; // +0xb8
    BOOL _preloadPageCheckAliveTag; // +0xb9
    NSString * _preloadA8KeyFullUrl; // +0xc0
    unsigned int _preloadWebViewFontLevel; // +0xc8
    unsigned int _preloadScene; // +0xcc
    unsigned long long _preloadInitStartTime; // +0xd0
    unsigned long long _preloadLoadPageFrameCostTime; // +0xd8
    unsigned long long _preloadStartLoadPageTime; // +0xe0
    unsigned long long _preloadGetPageDataCostTime; // +0xe8
    unsigned long long _preloadReceivePageDataTime; // +0xf0
    unsigned long long _preloadWebReceivePageDataTime; // +0xf8
    unsigned long long _preloadWebCompileCostTime; // +0x100
    unsigned long long _preloadFirstScreenRenderCostTime; // +0x108
    unsigned long long _preloadFirstScreenRenderTime; // +0x110
    unsigned long long _preloadGetA8KeyCostTime; // +0x118
    unsigned long long _preloadA8KeyFinishTime; // +0x120
    unsigned int _preloadPageDataSize; // +0x128
    NSString * _preloadReportSessionId; // +0x130
    unsigned int _preloadReportEnterScene; // +0x138
    unsigned int _preloadReportEnterSubscene; // +0x13c
    unsigned int _preloadReportClickTime; // +0x140
    NSString * _preloadReportSendUserName; // +0x148
    unsigned int _preloadReportMsgCreateTime; // +0x150
    unsigned int _preloadReportEnterId; // +0x154
    BOOL _hasNotifySvrReport10377; // +0x158
    BOOL m_isPageLoadFail; // +0x159
    BOOL m_bFullScreen; // +0x15a
    BOOL m_hasExitFullScreenWhenViewWillPush; // +0x15b
    BOOL m_isShowingSSLErrorAlert; // +0x15c
    UILongPressGestureRecognizer * m_longPressGestureRecognizer; // +0x160
    WKWebView<YYWebViewInterface> * webView; // +0x168
    WebViewA8KeyLogicImpl * m_a8KeyLogicImpl; // +0x170
    WebViewJSLogicImpl * m_jsLogicImpl; // +0x178
    WebViewSanboxSessionLogic * m_sanboxLogicImpl; // +0x180
    MMURLHandler * m_urlHandler; // +0x188
    BOOL m_isPageDidLoaded; // +0x190
    vector<mars::smc::STIDKeyInfo, std::allocator<mars::smc::STIDKeyInfo>> _pIDKeyList; // +0x198
    BOOL _bIsDraggingScroll; // +0x1b0
    NSMutableSet * m_jsTempAllowApiCalls; // +0x1b8
    WebViewTimeProfileData * m_webTimeProfileData; // +0x1c0
    NSString * m_initUrl; // +0x1c8
    unsigned int m_uiBackCount; // +0x1d0
    BOOL m_nsBackFlag; // +0x1d4
    MMScrollActionSheet * m_scrollActionSheet; // +0x1d8
    BOOL m_haveMaterialButton; // +0x1e0
    WebViewMenuCustomizeLogic * m_menuCustomizeLogic; // +0x1e8
    NSMutableDictionary * m_jsInitInfo; // +0x1f0
    WCDeepLinkHandler * m_deepLinkHandler; // +0x1f8
    EnterpriseConnectorLogic * m_enterpriseConnectorLogic; // +0x200
    BOOL m_isScrollMenuScroll; // +0x208
    MMJSApiVerifyMgr * m_apiVerifyMgr; // +0x210
    id /* block */ _OnInitReadyNotifyBlock; // +0x218
    id /* block */ m_blockOnWebViewWillReturn; // +0x220
    UILabel * m_previewTopBar; // +0x228
    UIView * m_previewTopBarBg; // +0x230
    BOOL m_isPreviewing; // +0x238
    BOOL m_isFinishLoaded; // +0x239
    UIView * _previewSourceView; // +0x240
    UIViewController * _previewFromController; // +0x248
    BOOL m_bShowOnNewMainFrameBanner; // +0x250
    BOOL m_bReadingArticleBanner; // +0x251
    BOOL m_bPreloadInMem; // +0x252
    ForwardMessageLogicController * m_forwardMsgLogic; // +0x258
    id <MMWebViewDelegate> m_delegate; // +0x260
    NSString * m_webTitle; // +0x268
    NSString * m_webSubTitle; // +0x270
    long long m_curShowFirstTitleType; // +0x278
    double m_curShowFirstTitleTime; // +0x280
    NSString * m_reportedHostInUrl; // +0x288
    BOOL m_bAutoSetTitle; // +0x290
    BOOL m_bShouldForcedRotationToPortrait; // +0x291
    unsigned long long m_lockOrientation; // +0x298
    unsigned int m_stat_enterTime; // +0x2a0
    long long m_loadingCount; // +0x2a8
    BOOL m_openAllPermission; // +0x2b0
    NSString * m_jump; // +0x2b8
    BOOL m_viewDidAppear; // +0x2c0
    BOOL m_viewHasAppeared; // +0x2c1
    NSString * m_oLoadingUrl; // +0x2c8
    BOOL m_bHasAnimated; // +0x2d0
    BOOL m_bIFrame; // +0x2d1
    NSString * m_mainFrameReqUrl; // +0x2d8
    double _fLastStartOffsetY; // +0x2e0
    NSMutableArray * _arrRouteUrl; // +0x2e8
    unsigned int _startTime; // +0x2f0
    BOOL _bIsBackForwardNavigationType; // +0x2f4
    BOOL _bIsViewHasAppeared; // +0x2f5
    NSString * _lastURL; // +0x2f8
    MMTipsViewController * tipsAlertJumpAppstoreVC; // +0x300
    BOOL _bIsAutoLoginMode; // +0x308
    BOOL _alwayIntercept; // +0x309
    BOOL _bHasInitNotification; // +0x30a
    BOOL _newWebLoading; // +0x30b
    unsigned long long _loadMode; // +0x310
    NSMutableArray * _ignoredPageUrlList; // +0x318
    BOOL _hasDidStartLoadOnce; // +0x320
    BOOL _needReloadOnEnterForeground; // +0x321
    BOOL m_bIsPortraitBeforeOpenUrl; // +0x322
    BOOL _m_bDeepLink; // +0x323
    BOOL _m_bUserHasClickLink; // +0x324
    BOOL _m_bIsDelayPushWebView; // +0x325
    BOOL _m_bIsRestrictAppstore; // +0x326
    BOOL _m_isLanscape; // +0x327
    BOOL _m_bIsJsapiUploadVideoUploading; // +0x328
    BOOL _reportInstantly; // +0x329
    BOOL _isPreloadEnded; // +0x32a
    BOOL _terminatedFlagForSnapshot; // +0x32b
    BOOL _bBridgedAndAuthedInNewMode; // +0x32c
    BOOL _isPrefetchPageDataResultNotified; // +0x32d
    BOOL _hasPrefetchLoadFail; // +0x32e
    BOOL _isPrefetchGoH5; // +0x32f
    BOOL _hasPreloadLoadFail; // +0x330
    BOOL _shouldHandleShrink; // +0x331
    BOOL _isMarkedForDeallocReleaseTrancation; // +0x332
    BOOL _needShowToastOnCapture; // +0x333
    BOOL _bIsForceShowCloseButton; // +0x334
    BOOL _m_isDisableShareMenu; // +0x335
    BOOL _shouldShowBottom; // +0x336
    BOOL _canSetMPTitleByOut; // +0x337
    BOOL _unableAutoSetStatusBar; // +0x338
    BOOL _isLockDownModeOn; // +0x339
    BOOL _canShowTingEntry; // +0x33a
    BOOL _bIgnoreLongPressGestureEvent; // +0x33b
    BOOL _bLongPressingWebContentImage; // +0x33c
    BOOL _hasCurrentOauthWebPageClicked; // +0x33d
    BOOL _isContentShowingSnapShot; // +0x33e
    BOOL _isShowHalfScreenView; // +0x33f
    BOOL _isHalfScreenViewAnimating; // +0x340
    BOOL _hasSnapShotPageLoadFinished; // +0x341
    BOOL _bHasTriggerOpenUrl; // +0x342
    BOOL _bIsReportSchemeWickedAlready; // +0x343
    BOOL _m_bIsStatusBarBlack; // +0x344
    BOOL _m_bForceDisableInterativePop; // +0x345
    BOOL _bIsAlreadyReloadWebviewFromJsapi; // +0x346
    BOOL _m_bHasFinishLoadOnce; // +0x347
    BOOL _hasFetchPerformance; // +0x348
    BOOL _isMovingToOtherScene; // +0x349
    BOOL _m_bForbidShowMinimizationEntryInMenu; // +0x34a
    BOOL _bWebContentInAppStoreControl; // +0x34b
    BOOL _bIsStartFirstLoadWithHTML; // +0x34c
    BOOL _bDidStartFirstLoadWithHTML; // +0x34d
    BOOL _bShouldDelayShowHTMLloading; // +0x34e
    BOOL _bHasReportPrefetchInfo; // +0x34f
    BOOL _shareUrlWithTextLinkEnable; // +0x350
    BOOL _reloadFromLoadHtmlString; // +0x351
    unsigned int _snapshotTriggerSource; // +0x354
    unsigned int _navigationTitleType; // +0x358
    unsigned int _webFirstGetA8KeyRule; // +0x35c
    unsigned int _m_webviewCurrentMaxFontLevel; // +0x360
    unsigned int _optimizeOption; // +0x364
    unsigned int _linkChainOption; // +0x368
    unsigned int _secCtrlMode; // +0x36c
    NSMutableDictionary * m_extraInfo; // +0x370
    MMWebViewPluginScheduler * _pluginScheduler; // +0x378
    NSString * _m_webTaskKey; // +0x380
    NSString * _m_handoffKey; // +0x388
    CContact * _brandContact; // +0x390
    MMWebProgressBar * _m_progressBar; // +0x398
    UILabel * _m_addressLabel; // +0x3a0
    MMWebViewPresetUI * _presetUI; // +0x3a8
    MMWebCustomLog * _customLog; // +0x3b0
    WCPayDecimalKeyboardView * _wcpayKeyboard; // +0x3b8
    id /* block */ _callbackWebViewDidReturn; // +0x3c0
    id /* block */ _callbackWebViewDidFinishLoad; // +0x3c8
    id /* block */ _callbackWebViewDidReceiveNavResp; // +0x3d0
    long long _reportId; // +0x3d8
    NSMutableArray * _reportFormatDataList; // +0x3e0
    unsigned long long _reportBeginTime; // +0x3e8
    unsigned long long _reportDesinatedBeginTime; // +0x3f0
    NSMutableArray * _visibleStateArray; // +0x3f8
    MMTimer * _wepkgLoadingTimer; // +0x400
    id /* block */ _interceptCloseBlock; // +0x408
    NSMutableDictionary * _dictBrandInfo; // +0x410
    GameWebReporter * _gameWebReporter; // +0x418
    double _initTimeInterval; // +0x420
    NSString * _entranceGMsgID; // +0x428
    UIView * _halfAdapterHeaderView; // +0x430
    id /* block */ _halfAdapterCloseAction; // +0x438
    id /* block */ _halfAdapterMoreAction; // +0x440
    MMLoadingView * _snapshotLoadingView; // +0x448
    MMUIButton * _fullSnapshotBtn; // +0x450
    CAGradientLayer * _bottomGradientLayer; // +0x458
    id /* block */ _finishLoadSnapshotCallback; // +0x460
    NSString * _snapshotSessionId; // +0x468
    MMWebviewSnapshotWrapper * _snapshotWebviewWrapper; // +0x470
    MMWebViewSpaAuthContext * _currentAuthContext; // +0x478
    WCWebNavigationEventsStore * _navigationEventStore; // +0x480
    NSMutableDictionary * _prefetchJsApiPermissionDict; // +0x488
    MMWebViewPresetUILogic * _presetUIConfigLogic; // +0x490
    NSString * _prefetchGoH5Url; // +0x498
    NSString * _preloadDefaultShareTitle; // +0x4a0
    NSString * _preloadDefaultShareDescription; // +0x4a8
    double _lastContentOffsetY; // +0x4b0
    double _lastSecondContentOffsetY; // +0x4b8
    long long _unTrackScrollingNum; // +0x4c0
    double _beiginContentOffsetY; // +0x4c8
    double _navBarShrinkRemainHeight; // +0x4d0
    long long _scrollNavBarState; // +0x4d8
    MiniRecTransitionController * _minimizationTransitionController; // +0x4e0
    MMWebViewFontFloatView * _fontFloatView; // +0x4e8
    MMTipsViewController * _universalLinkAlertTipsView; // +0x4f0
    unsigned long long _eFullScreenOptions; // +0x4f8
    MMWebViewPageInfoModel * _curPageInfoModel; // +0x500
    UIView * _tailBgView; // +0x508
    UIImageView * _m_addressBarView; // +0x510
    UILabel * _m_deeplinkRedirecting; // +0x518
    MMWebBottomToolBar * _bottomBar; // +0x520
    MMWebTopBar * _topBar; // +0x528
    MMWebHangTipsBar * _hangTipsBar; // +0x530
    CAGradientLayer * _maskTitleLayer; // +0x538
    UILabel * _tempLabel; // +0x540
    MMWebMProfileTitleView * _profileTitleView; // +0x548
    MMWebTransHelpButton * _transHelpButtonView; // +0x550
    MMWebLiveTitleView * _liveTitleView; // +0x558
    TipsView * _dagerTipsView; // +0x560
    UIView * _customNavigationLoadingView; // +0x568
    UIView * _navShadowView; // +0x570
    UIImageView * _snapshotImgView; // +0x578
    MMWebNaviErrorView * _naviFailView; // +0x580
    UIView * _invisibleTitleView; // +0x588
    unsigned long long _longPressingWebContentImageEndTimeStamp; // +0x590
    WebViewOAuthLogic * _oauthLogic; // +0x598
    NSString * _currentOAuthUrl; // +0x5a0
    UITapGestureRecognizer * _oAuthTapGestureRecognizer; // +0x5a8
    MMWebViewController * _snapShotOauthPageVC; // +0x5b0
    NSString * _currentOAuthPageTitle; // +0x5b8
    NSString * _touristOauthTitleWording; // +0x5c0
    UIView * _oauthBottomRemindView; // +0x5c8
    UIView * _oauthContainerView; // +0x5d0
    UILabel * _oauthRemindTextLabel; // +0x5d8
    UIView * _oauthArrowView; // +0x5e0
    UIView * _oauthBroseFullContentBtn; // +0x5e8
    UIImageView * _warnIconView; // +0x5f0
    MMWebviewOAuthRemindHalfScreenView * _halfScreenRemindView; // +0x5f8
    id <MMWebViewOAuthSnapShotDelegate> _snapShotPageDelegate; // +0x600
    MMWebCoreConfig * _webCoreConfig; // +0x608
    NSString * _jumpAppStoreUrl; // +0x610
    NSString * _encodeSchemeStr; // +0x618
    long long _useSchemeCount; // +0x620
    MMWebViewPerformance * _performance; // +0x628
    NSURL * _allowOnceUniversalLinkUrl; // +0x630
    NSURL * _wkLastCommitingNavigationUrl; // +0x638
    WKNavigation * _blankNavigationAction; // +0x640
    MMWebviewPrefetchResult * _prefetchResult; // +0x648
    WebPrefetcherJSApiLogic * _prefetcherJSApiLogic; // +0x650
    NSString * _a8keyUrlForPageFeature; // +0x658
    CGPoint _lastWebviewClickedPoint; // +0x660
}
+ (BOOL)shouldInjectVConsole;
+ (unsigned int)genSnapshotSessionId;
+ (id)preloadAppendParameter:(id)arg1 toUrl:(id)arg2;
+ (int)delayTouchesDurantionForLongPressingWebImage;
+ (id)dnsQueryQueue;
+ (BOOL)isWebviewOpTypeMinimizeRelated:(unsigned int)arg1;
+ (BOOL)isWebviewOpTypeMinimizeViewIdleTimeRelated:(unsigned int)arg1;
+ (BOOL)isKeyJsapi:(id)arg1;
- (BOOL)isGamePage;
- (void)reportTimeBegin;
- (BOOL)addWebviewVisibleState:(BOOL)arg1 Reason:(id)arg2;
- (void)reportTimeEnd;
- (id)processingPlaceHolder:(id)arg1 PlaceHolder:(id)arg2 TimeDuration:(unsigned long long)arg3;
- (long long)getTimeToAdd:(id)arg1;
- (unsigned long long)calcAllVisibleTimeDuration:(unsigned long long)arg1;
- (unsigned long long)getOneSectionTime:(unsigned long long)arg1 EndTime:(unsigned long long)arg2 ReportEndTime:(unsigned long long)arg3;
- (void)handleDeepLinkWithUrlString:(id)arg1;
- (BOOL)shouldHandleDlFeedBackRange:(id)arg1;
- (void)handleFeedBackWithUrlString:(id)arg1;
- (void)handleAppStroeUrlString:(id)arg1;
- (void)handleUrlHandler:(id)arg1;
- (BOOL)shouldHandleJumpProfileUrl:(id)arg1;
- (void)handleJumpProfileUrl:(id)arg1;
- (BOOL)shouldHandleJumpUrl:(id)arg1;
- (void)handleJumpUrl:(id)arg1;
- (BOOL)shouldHandleScanQrCodeUrl:(id)arg1;
- (void)handleScanQrCodeUrl:(id)arg1;
- (void)delayHandleUrl:(id)arg1;
- (void)delayPopForAppStore;
- (void)showAlertBeforeJumpAppStoreWithUrl:(id)arg1;
- (void)handleClickEmptyBackgroundViewToHideTips;
- (void)handleClickTipsBtn:(id)arg1 Index:(long long)arg2 withText:(id)arg3;
- (void)logUseWebviewSchemeToJumpWithUrl:(id)arg1;
- (void)tryLogWebViewJumpOut;
- (id)genSafetyControlReportStr;
- (id)getHostText;
- (id)getAddressBarHostText:(id)arg1;
- (id)getWebviewBannerTitle;
- (id)getJumpOutAppStoreAlertTitleWithUrl:(id)arg1;
- (id)getOperationButtonImageNameWithURL:(id)arg1;
- (id)imageWithColor:(id)arg1 origin:(id)arg2;
- (BOOL)isMPArticleByURL:(id)arg1;
- (BOOL)isWebViewOfflinePackageEnableAllScence;
- (BOOL)isMPDesignByURL:(id)arg1;
- (BOOL)containsString:(id)arg1 withRegex:(id)arg2;
- (BOOL)judgeAllowsAutoMediaPlay;
- (BOOL)shouldBlockNavigateActionOnULControl:(id)arg1;
- (BOOL)shouldRunReleaseTranscationWhenBePopedOrDismissed;
- (BOOL)isWebViewContentCanExpanded;
- (void)setInjectVConsoleSwitch:(BOOL)arg1;
- (id)redirectUrlWithInitUrl:(id)arg1;
- (id)valueForKey:(id)arg1 fromQueryItems:(id)arg2;
- (void)doDNS;
- (id)webviewSecurityContextBuffer;
- (id)getCurrentMpInfo;
- (id)getCurrentBrandIcon;
- (id)getWebMinimizationTitle;
- (id)getCurrentPageTitle;
- (id)genNewWebStatusNotifyItem;
- (id)getThumbImageUrl;
- (id)getDisplaySourceName;
- (id)getPublisherUsername;
- (void)onWebViewDidCommitLoad;
- (void)checkAndFixXpcIssue;
- (void)onNeedShowToastOnCaptureChanged:(BOOL)arg1;
- (void)showToastWithWording:(id)arg1 duration:(double)arg2;
- (id)limitedModePlugin;
- (BOOL)checkAutoMediaPlayFor:(id)arg1 withRegStr:(id)arg2;
- (void)voiceTic;
- (id)webviewDomainList;
- (void)clearWebViewContent;
- (void)pauseAllWebPlayback;
- (void)releaseULControlContext;
- (BOOL)isBaseWechatScene;
- (BOOL)isInBaseWechatHost:(id)arg1;
- (id)fixRedPacketURL:(id)arg1;
- (void)relayoutWebContent;
- (void)relayoutWhenViewDidLayoutSubviews;
- (void)initCommonViewWithUrl:(id)arg1;
- (long long)overrideUserInterfaceStyle;
- (void)resetPageInfoInCurrrentContext;
- (void)onClickWebviewInPos:(CGPoint)arg1;
- (void)setDisableContextMenuInCurPage:(BOOL)arg1;
- (void)setDisableExposeAlertInCurPage:(BOOL)arg1;
- (void)onPresetUIChanged;
- (void)configStatusBar;
- (void)configNavigationBarLeftItem;
- (void)__configNavItemNew;
- (void)__configNavItemInOldDays;
- (void)configBackCon;
- (void)updateNavigationBarColorInCurrentContext;
- (void)updateRightBarButtonInCurrentContext;
- (void)updateRightBarButtonWithContextId:(id)arg1;
- (void)onCustomRightBarItemAction:(id)arg1;
- (void)configWebviewOpaqueState;
- (void)configWebLoadingView;
- (id)customNavBarPlugin;
- (BOOL)navigationBarBlurEffect;
- (id)navigationBarBackgroundColor;
- (BOOL)showNavigationBarSepLine;
- (BOOL)useBlackStatusbar;
- (void)initProgressView;
- (void)initDeeplinkRedirectingView;
- (void)initAddressBarView;
- (void)initBottomBar;
- (void)initTopBar;
- (void)initHangTipsBar;
- (void)initMaskView;
- (void)initCustomTitleView;
- (void)restoreAddressBar;
- (void)restoreMainTabBarNavBkgWhenInSplitView;
- (void)restoreTailBGView;
- (void)restoreFontView;
- (void)setTitleColor:(id)arg1;
- (void)setTitleAlpha:(double)arg1;
- (void)__updateTitleViewAlpha;
- (void)__setNavBarBgColor:(id)arg1;
- (void)restoreToDefaultNavBar;
- (void)setTailBackGroundColor:(id)arg1;
- (void)handleUIwillRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)handleUIWillAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)showLoadFailView:(unsigned int)arg1 errorCode:(long long)arg2;
- (void)relayoutLoadFailView;
- (void)hideLoadFailView;
- (void)showSSLErrorAlertWithUrl:(id)arg1;
- (void)setFullScreen:(BOOL)arg1;
- (void)setFullScreen:(BOOL)arg1 scene:(unsigned int)arg2 animated:(BOOL)arg3;
- (void)exitFullScreenIfNeed:(unsigned long long)arg1;
- (void)setEnableFullScreenLayout:(BOOL)arg1;
- (BOOL)isKeepStatusBarInFullScreen;
- (BOOL)isHideBottomBarInFullScreen;
- (void)setUIDisableShareMenu:(BOOL)arg1;
- (void)setDisableProgressView:(BOOL)arg1;
- (void)resetStatusBarFromWebSearch;
- (void)startContentProgressLoading;
- (void)startContentProgressLoadingInForce:(BOOL)arg1;
- (void)endContentProgressLoading;
- (void)initCustomNavigationLoadingView;
- (void)relayoutCustomNavigationLoadingView;
- (void)startCustomNavigationLoadingViewInForce:(BOOL)arg1;
- (void)clearCustomNavigationLoadingView;
- (void)delayStopCustomNavigationLoading;
- (void)resetWebUIWhenWebCommitNewContentIfNeed;
- (void)updateCustomTitleView;
- (void)setCustomTitleViewShowState:(BOOL)arg1;
- (void)updateNavigationTitleState;
- (unsigned int)decideNavigationTitleType;
- (void)changeNavigationTitleViewFrom:(id)arg1 to:(id)arg2 targerNavItem:(id)arg3 animated:(BOOL)arg4 completion:(id /* block */)arg5;
- (void)passTopBarParams:(BOOL)arg1;
- (void)relayoutProfileTitleView;
- (BOOL)goBizProfileWithScene:(unsigned int)arg1;
- (double)webProfileTitleViewHorizonalOffset;
- (void)onProfileTitleViewSelected;
- (void)onBrandLiveTitleViewSelected;
- (BOOL)needForbidShowLiveView;
- (void)setPayTitle:(id)arg1;
- (void)setDisableWebViewScrollViewBounces;
- (void)setCustomBackgroundColor:(id)arg1;
- (void)restoreDefaultBackgroundColorAndCleanFooterBounceColor;
- (double)getWebBottomBarHeight;
- (void)setDisableWebInterativePop:(BOOL)arg1;
- (void)setForbidShowMinimizationEntryInMenu:(BOOL)arg1;
- (BOOL)canShowMinimizationEntryInMenu;
- (BOOL)canShowMinimizationEnrtyInTransition;
- (BOOL)canShowMultiSceneEntry;
- (BOOL)canShowSearchEntry;
- (BOOL)canShowBottomBar;
- (BOOL)shouldForbidBottomBar;
- (BOOL)canShowTopBar;
- (BOOL)canShowHangTipsBar;
- (void)showTingEntry:(BOOL)arg1;
- (BOOL)canShowLockDownModeWording;
- (void)initLockDownModeStatus;
- (BOOL)canSupportBackForwardNavigationGestures;
- (BOOL)isCurrentMinimizeWebViewController;
- (BOOL)isCurrentCachedWebViewController;
- (BOOL)isNeedShowProgressBar;
- (BOOL)isChildWebViewMode;
- (BOOL)isNeedHandleInterativeGesturerDelegateInChildWebViewMode;
- (void)onRecieveNavEvent:(id)arg1 params:(id)arg2;
- (void)onRecieveCloseWindowEvent;
- (void)onRecieveImmerseReadFullArticleEvent;
- (void)onRecieveImmerseFoldFullArticleEvent;
- (void)bindPageSheetAdapter:(id)arg1;
- (id)currentPageSheetAdapter;
- (id)pageSheetAdapterPlugin;
- (BOOL)isPageSheetMode;
- (BOOL)isWebviewExpandedToTop;
- (BOOL)isWebviewExpandedToTopForInnerScene;
- (unsigned long long)webviewExpandedStatusBarPresetColor;
- (id)webviewExpandedRequestingLoadingView;
- (void)trySetupWebviewExpandedUIForInnerScene;
- (void)resetViewStatus;
- (void)PresentModalViewController:(id)arg1 animated:(BOOL)arg2 forceFullScreen:(BOOL)arg3 completion:(id /* block */)arg4;
- (id)navigationController;
- (void)startLoadingWithText:(id)arg1 delayAnimation:(double)arg2 block:(BOOL)arg3;
- (void)stopLoading;
- (void)stopLoadingWithOKText:(id)arg1;
- (void)stopLoadingWithFailText:(id)arg1;
- (id)loadingViewX;
- (void)initWebviewFontControlParams;
- (unsigned int)webviewCurrentFontLevel;
- (unsigned int)webviewCurrentFontScale;
- (void)showNavBarShadow:(id)arg1 alpha:(float)arg2 traceId:(id)arg3;
- (void)hideNavBarShadow;
- (void)onNavShadowViewTaped:(id)arg1;
- (void)relayoutNavShadowView;
- (void)addSnapshotImageOnWindow:(id)arg1 timeout:(double)arg2;
- (void)removeSnapshotImageOnWindow;
- (id)brandLivePlugin;
- (id)translatePlugin;
- (void)didMoveToNewScene:(id)arg1;
- (void)reportLiveTitleClk;
- (void)reportLiveTitleExpose;
- (void)onWebviewScrollViewDidScrollOnCatagoryUI:(id)arg1;
- (void)onTopBarShouldChangeShowState;
- (void)onHangTipsBarShouldChangeShowState;
- (void)onClickLink;
- (void)onClickClose;
- (void)relayoutTopBar;
- (void)relayoutHangTipsBar;
- (void)miniMizeAniWithDeleLay:(double)arg1;
- (void)miniMizeAniWithDeleLay:(double)arg1 animated:(BOOL)arg2;
- (void)miniMizeAniWithDeleLay:(double)arg1 animated:(BOOL)arg2 minimizeType:(unsigned int)arg3;
- (void)tryMinimizeViewControler;
- (void)tryMinimizeViewControlerWithType:(unsigned int)arg1;
- (void)unminimizeViewControler;
- (void)updateWebTaskKey:(id)arg1;
- (void)setWebViewPopBackInteractTansition;
- (void)DismissMyWebViewAnimated:(BOOL)arg1;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)mmNavigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (void)minimizationInteractivePopGestureRecognizerDidBegin;
- (void)minimizationInteractivePopToMinimizeTask:(BOOL)arg1;
- (void)minimizationInteractivePopGestureRecognizerDidEndWithCompletion:(BOOL)arg1;
- (BOOL)minimizationInteractivePopGestureRecognizerShouldBegin;
- (BOOL)shouldBlockMinimizationEntryInInteractivePop;
- (void)tryUpdateTaskSnapshotWhenLeave;
- (BOOL)shouldTaskSnapShotWhenDismissedOrPoped;
- (void)doSpaPageAuth:(id)arg1 callback:(id /* block */)arg2;
- (void)clearLastSpaAuth;
- (void)doGetA8key:(id)arg1;
- (void)handleGetA8keyResp:(BOOL)arg1 reason:(int)arg2 reqUrl:(id)arg3 resp:(id)arg4 context:(id)arg5;
- (void)doFetchWebPageHeader:(id)arg1 headers:(id)arg2 context:(id)arg3;
- (void)handleHttpResp:(id)arg1 response:(id)arg2 context:(id)arg3;
- (void)doSetPageCookie:(id)arg1 response:(id)arg2 context:(id)arg3;
- (void)handleCookieSetSuccess:(id)arg1 context:(id)arg2;
- (BOOL)isCallBackIdChanged:(id)arg1;
- (BOOL)isCurrentWebUrlChanged:(id)arg1;
- (void)doCallBackWithMsg:(BOOL)arg1 errMsg:(id)arg2 context:(id)arg3;
- (void)initFullSnapshotEntranceIfNeed;
- (void)relayoutFullSnapshotEntrance;
- (void)notifyDidTerminateIfDuringSnapshot;
- (BOOL)shouldShowFullSnapshotEntrance;
- (BOOL)shouldShowFullSnapshotEntranceIsMenu:(BOOL)arg1;
- (void)animateShowFullSnapshotEntrance;
- (void)cancelDelayHideFullSnapshotEntrance;
- (void)animateHideFullSnapshotEntrance;
- (void)setSnapshotSubviewsHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)startFullSnapshot;
- (void)onFullSnapshotBtnClick;
- (void)onMenuSavePageButtonClick;
- (void)handleSnapshotImage:(id)arg1 errMsg:(id)arg2;
- (double)contentHeightOfWebviewFromTop;
- (void)takeSnapshotInRenderMode;
- (void)__takeSnapshotInRenderModeForDelay:(unsigned int)arg1 completion:(id /* block */)arg2;
- (void)notifyDidFinishLoadForSnapshot;
- (void)__retrySnapshotInPrinterModeAfterTerminate;
- (void)__cancelRetrySnapshotInPrinterMode;
- (void)addSnapshotAndLoadingOnWindowByTimeout:(double)arg1;
- (void)addSnapshotAndLoadingOnWindowWithImage:(id)arg1 timeout:(double)arg2;
- (BOOL)extendSnapshotLoadingOnWindowByTimeout:(double)arg1;
- (void)removeSnapshotOnWindowAndStopLoading;
- (void)takeSnapshotInPrinterModeFromDegrade:(BOOL)arg1;
- (void)__takeSnapshotInPrinterModeWithDelay:(unsigned int)arg1 completion:(id /* block */)arg2;
- (double)snapshotContentHeight;
- (CGRect)printPaperRect:(double)arg1;
- (id)addImageWithTopWhitePadding:(id)arg1 padding:(double)arg2;
- (id)trimImageTransparentPixels:(id)arg1;
- (CGRect)getWebViewTransformValues:(id)arg1;
- (BOOL)checkMemoryAvailableForContentSize:(CGSize)arg1 scale:(double *)arg2 freeMem:(unsigned long long *)arg3 isCompress:(BOOL *)arg4 predictImgMemSize:(unsigned long long *)arg5;
- (unsigned long long)getAvailableMemorySize;
- (void)onLongImagePreviewActionForward:(id)arg1;
- (void)onLongImagePreviewActionAddFavorite:(id)arg1;
- (void)onLongImagePreviewActionSaveImage:(id)arg1 image:(id)arg2 isSucc:(BOOL)arg3 error:(id)arg4;
- (void)onLongImagePreviewActionCancel:(id)arg1;
- (id)getWebUrlFromPreviewContext:(id)arg1;
- (void)reportKv26496Action:(unsigned int)arg1 webUrl:(id)arg2 hasEdit:(BOOL)arg3;
- (void)reportKv26496Action:(unsigned int)arg1 webUrl:(id)arg2 hasEdit:(BOOL)arg3 triggerSource:(unsigned int)arg4;
- (void)reportKv26636EventType:(unsigned int)arg1 mode:(unsigned long long)arg2 isSucc:(BOOL)arg3 errMsg:(id)arg4 performance:(id)arg5 delayTime:(unsigned int)arg6;
- (void)reportKv26636EventType:(unsigned int)arg1 mode:(unsigned long long)arg2 isSucc:(BOOL)arg3 errMsg:(id)arg4 performance:(id)arg5 delayTime:(unsigned int)arg6 isDegradeFromRender:(BOOL)arg7;
- (id)pluginShrinkControl;
- (void)layoutBottomBarShrinkRate:(double)arg1;
- (void)tryShowWebNavigatorBottomBar;
- (void)tryHideWebNavigatorBottomBar;
- (void)shrinkWebNavigatorBottomBarWithRate:(double)arg1;
- (void)setWebViewHeightAndLayoutIfNeed:(double)arg1;
- (void)setFullWebContentSize;
- (void)restoreWebContent;
- (void)fixScrollViewContentOffset;
- (void)setNavigationBarAlpha:(double)arg1 withTitleIncluded:(BOOL)arg2;
- (void)setScrollState:(id)arg1;
- (void)setTitleView:(id)arg1;
- (void)makeTitleViewAdaptToGraintMaskLayer;
- (BOOL)isScrollViewExceedsTop;
- (BOOL)isScrollViewExceedsBottom;
- (double)statusBarHeight;
- (double)navigationBarHeight;
- (id)titleView;
- (double)navBarShrinkRemainHeight;
- (double)maxReduceNavibarHeight;
- (BOOL)isBottomBarShowing;
- (void)injectSearchInPageJS;
- (void)highlightAllOccurencesOfString:(id)arg1 searchIndex:(unsigned long long)arg2;
- (void)removeAllHighlights;
- (void)showSearchTextKeyboard;
- (unsigned int)getPreloadTemplateVersion;
- (id)getPreloadTemplateFullVersion;
- (id)getPreloadPageFrameUrl;
- (id)getPreloadPageDataKeyUrl;
- (void)loadPreloadPageDataWithParam:(id)arg1 addExtraInfo:(id)arg2;
- (id)addPreloadSessoinQueryForRequestUrl:(id)arg1;
- (id)requestPreloadSessionHeader;
- (void)preloadUpdateA8Key:(id /* block */)arg1;
- (id)preloadUpdateA8KeyResult;
- (void)onPreloadCheckPageAliveSuccess;
- (void)onPreloadInjectPageDataSuccess:(BOOL)arg1;
- (BOOL)notifySvrReport10377IfNeeded:(BOOL)arg1;
- (void)onPreloadInjectPageDataFail;
- (void)onPreloadInjectPageDataNotifyTimeout;
- (void)onPreloadReceivePagePerformance:(id)arg1;
- (void)preloadReportWithKey:(unsigned long long)arg1;
- (id)preloadPerformance;
- (BOOL)isUsePreloadWebView;
- (BOOL)hasStartLoadPageData;
- (void)setupPreloadContentHandler;
- (void)clearPreloadContentHandler;
- (Class)preloadContentHandlerClassFromParameterClass:(Class)arg1;
- (id)preloadReloadUrl;
- (void)updatePreloadExtraInfo:(id)arg1;
- (void)removePreloadWebViewKeyInExtraInfo;
- (void)loadPreloadPageFrameHtml;
- (void)onPreloadDidFinishLoad;
- (void)onPreloadDidFailLoad;
- (void)onPreloadWebViewDidTerminate;
- (void)loadParentPageForceUrl:(id)arg1;
- (void)loadPreloadPageForceUrl;
- (void)checkPreloadPageFrameOK;
- (void)loadPreloadPageData;
- (void)fetchPreloadPageDataUseOfflineCache:(BOOL)arg1;
- (void)getA8KeyForPreloadPageUrl:(id)arg1 config:(id)arg2;
- (void)savePreloadA8KeyInfoWithRequestUrl:(id)arg1 fullUrl:(id)arg2 header:(id)arg3;
- (void)sendEventPreloadPageAuthOK;
- (void)sendEventPreloadPageAuthFail;
- (void)sendEventPreloadMenuSetFontWithSize:(long long)arg1;
- (void)delayShowPreloadLoadingIfNeeded;
- (void)onShowPreloadLoadingTimeout;
- (void)hidePreloadLoading;
- (void)processPreloadFailWithErrorCode:(unsigned long long)arg1;
- (void)preloadGoOnlineH5;
- (void)preloadGoOnlineH5WithRebuild:(BOOL)arg1;
- (void)checkPreloadPageFinish;
- (unsigned long long)timeAfterPreloadStartLoad:(unsigned long long)arg1;
- (void)injectConsolePreloadInfo;
- (void)alertPreloadInfo;
- (id)preloadJSONRepresentationWithObject:(id)arg1;
- (void)addSchemeHandlerToDictForPreload:(id)arg1;
- (id)pageDataKeyUrl;
- (BOOL)shouldCustomSchemeHandlerWork;
- (void)getTokenWithAdUrl:(id)arg1 posId:(id)arg2 completion:(id /* block */)arg3;
- (id)imageHandler_pageDataKeyURL;
- (void)recordTimeWithName:(id)arg1;
- (void)recordTimeWithName:(id)arg1 newCategory:(BOOL)arg2 detail:(id)arg3;
- (void)recordTimeWithName:(id)arg1 time:(unsigned long long)arg2 newCategory:(BOOL)arg3 detail:(id)arg4;
- (void)handlePerformanceInfo;
- (void)injectConsolePerformanceInfo;
- (void)injectWXPerformanceInfo;
- (void)fetchDocumentTime;
- (int)relativeRecordTimeForName:(id)arg1;
- (void)reportPerformance;
- (void)callSnapShotPageLoadFinishedWithDelayIfNeed;
- (void)callSnapShotPageFinished;
- (void)onWebViewContentClick;
- (BOOL)needHandleNativeOAuth:(id)arg1;
- (BOOL)shouldHandleNativeOAuth:(id)arg1 isIFrame:(BOOL)arg2;
- (void)handleOAuth:(id)arg1 authType:(unsigned int)arg2;
- (unsigned int)getCurrentPageAuthType;
- (void)onClickTouristAuth;
- (void)clearOAuthClickStatus;
- (void)cancelSnapShotPageDelaySelector;
- (void)handleOnShowAutoOAuthViewWithSchemeUrl:(id)arg1 Success:(BOOL)arg2 Wording:(id)arg3 HeadImgUrl:(id)arg4;
- (void)relayoutOauthPageSheet;
- (BOOL)isWebOauthLogicAuthing;
- (void)enableOAuchTapDetect;
- (void)onClickWebView:(id)arg1;
- (void)enterOAuthSnapShotModeWithURL:(id)arg1;
- (void)exitOAuthSnapShotMode;
- (void)onOAuthSnapShotPageLoadFinished;
- (void)onOAuthSnapShotPageClicked;
- (void)changeHalfScreenViewShow:(BOOL)arg1;
- (id)createBroseModeBottomRemindView;
- (void)relayoutOauthSnapShotView;
- (void)initHalfScreenRemindView;
- (void)onWebviewScrollWhenShowOAuthSnapshotPage;
- (BOOL)isSameLayerSwitchOpenWithScene:(unsigned long long)arg1;
- (void)initSwitchDictIfNeed;
- (void)setFontWithSize:(long long)arg1;
- (void)setupExtraDataForSendAppMessageWithSendAppScene:(id)arg1;
- (void)setupExtraDataForSendAppMessageWithSendAppScene:(id)arg1 targetContact:(id)arg2;
- (void)setupExtraDataForShareToTimeLine;
- (void)shareTimelineWithUrl:(id)arg1 title:(id)arg2 desc:(id)arg3 thumbData:(id)arg4 size:(CGSize)arg5 extraDic:(id)arg6;
- (id)getCurrentViewController;
- (void)shareToFiendWithUrl:(id)arg1 title:(id)arg2 desc:(id)arg3 thumbData:(id)arg4 contact:(id)arg5;
- (void)shareAppMessageFromWxUpdateApiData:(id)arg1;
- (void)shareTimelineFromWxUpdateApiData:(id)arg1;
- (void)addFavWithUrl:(id)arg1 title:(id)arg2 desc:(id)arg3 imageUrl:(id)arg4 extraDic:(id)arg5;
- (void)shareToTimeline;
- (void)shareToTimelineInTextLink;
- (void)shareToTimelineWithShareScene:(unsigned long long)arg1;
- (void)shareToGoodLook;
- (void)shareToGoodLookAndShowDialogByJS:(BOOL)arg1;
- (void)presentShareToGoodLookDialogByJS;
- (void)presentShareToGoodLookDialogWithTitle:(id)arg1 thumbImage:(id)arg2 thumbImageURL:(id)arg3;
- (void)cancelShareToGoodLook;
- (void)shareToFaceBook;
- (void)shareToWeRead;
- (void)shareToQQ;
- (void)shareToWeibo;
- (void)shareToQZone;
- (void)shareToWeWork;
- (void)shareWithEmail;
- (void)sendToDevice;
- (void)sendToEnterprise;
- (BOOL)isEnableCustom:(id)arg1 domainPathList:(id)arg2;
- (void)shareWithAppMessage:(id)arg1;
- (void)shareWithAppMessage:(id)arg1 shareScene:(unsigned long long)arg2;
- (void)shareWithAppMessage:(id)arg1 shareScene:(unsigned long long)arg2 targretContact:(id)arg3;
- (void)shareToFriendInTextLinkWithTargetContact:(id)arg1;
- (void)doShareWithAppMessage:(id)arg1 shareScene:(unsigned long long)arg2 targretContact:(id)arg3;
- (void)jumpToInstallUrl:(id)arg1;
- (void)openWithSafari;
- (void)sendHandOffOpenCommand;
- (void)onClickDislikeMenu;
- (void)openWithQQBrowser;
- (void)copyToPasteBoard;
- (void)showChangeFont:(unsigned int)arg1;
- (void)onChangeTargetLanguage;
- (void)pageTranslate;
- (void)revertPageTranslate;
- (void)askForExposeArticle;
- (void)exposeArticleWithSnapshotAllowance:(BOOL)arg1;
- (void)hideChangeFont;
- (void)doSearchInPage;
- (id)AddNewActionSheetCell2Array:(id)arg1 WithText:(id)arg2 WithImage:(id)arg3;
- (id)AddNewActionSheetCell2Array:(id)arg1 WithText:(id)arg2 WithImage:(id)arg3 disable:(BOOL)arg4;
- (id)AddNewActionSheetCell2Array:(id)arg1 WithText:(id)arg2 WithImage:(id)arg3 disable:(BOOL)arg4 userInfo:(id)arg5;
- (id)AddNewActionSheetCell2Array:(id)arg1 WithText:(id)arg2 WithImage:(id)arg3 WithAccessibilityLabel:(id)arg4 disable:(BOOL)arg5 userInfo:(id)arg6;
- (void)addRefreshButtonWithArray:(id)arg1;
- (id)getOpenWithBrowserTitle;
- (void)addOpenInSafariButtonWithArray:(id)arg1;
- (void)addHandoffButtonWithArray:(id)arg1;
- (void)addSendToEnterpriseWithArray:(id)arg1;
- (void)addCopyToPasteboardButtonWithArray:(id)arg1;
- (void)addFavouriteButtonWithArray:(id)arg1;
- (void)addAdjustFontButtonWithArray:(id)arg1;
- (void)addTranslationButtonWithArray:(id)arg1;
- (void)addWebConsoleButtonWithArray:(id)arg1;
- (void)addExposeButtonWithArray:(id)arg1;
- (void)addShareToWeReadButtonWithArray:(id)arg1;
- (void)addShareToQQButtonWithArray:(id)arg1;
- (void)addShareToQZoneButtonWithArray:(id)arg1;
- (void)addShareToDeviceButtonWithArray:(id)arg1;
- (void)addQQBrowserButtonWithArrary:(id)arg1;
- (void)addCancleOrBackToNewMainFrameButtonWithArrary:(id)arg1;
- (void)addMinimizationButtonWithArray:(id)arg1 isH5Game:(BOOL)arg2;
- (void)addReadLaterArticleButtonWithArrary:(id)arg1;
- (void)addReadArticleButtonWithArrary:(id)arg1;
- (void)addDislikeMenuWithArrary:(id)arg1;
- (void)addViewBrandContactButtonWithArrary:(id)arg1;
- (void)addH5GameExtraButton:(id)arg1;
- (void)tryAddWAOpenWxMaterialButtonWithArray:(id)arg1;
- (BOOL)addWAOpenWxMaterialButton:(id)arg1 array:(id)arg2;
- (void)addMultiSceneButtonToMenuArray:(id)arg1;
- (void)tryAddSavePageButtonToMenuArray:(id)arg1;
- (BOOL)isGettingPermission;
- (BOOL)isShowHalfMenus;
- (BOOL)isCanShowAllMenus;
- (id)buildMenuItems:(unsigned long long *)arg1 menuType:(unsigned long long *)arg2 config:(id)arg3;
- (void)reloadMenuActionSheetIfNeeded;
- (void)reloadMenuActionSheetWithForceOption:(BOOL)arg1;
- (void)onOperate:(id)arg1;
- (void)onSwitchScene:(id)arg1;
- (void)onSearchClicked:(id)arg1;
- (void)onTingEntryClicked:(id)arg1;
- (void)showMenuWithScene:(unsigned long long)arg1 config:(id)arg2 anchorView:(id)arg3;
- (void)updateMenuHeaderArea;
- (BOOL)shouldShowMenuMpInfoHeaderView;
- (BOOL)isMenuShowing;
- (void)showH5GameCustomMenu:(id)arg1 OrientationLocked:(BOOL)arg2;
- (void)showCustomActionSheet:(id)arg1;
- (void)addJSCustomMenuData:(id)arg1;
- (void)setupCustomMenuForDynamicConfig:(id)arg1;
- (void)AddMemuData:(id)arg1 toRow:(id)arg2;
- (void)setupCustomMenuItem:(id)arg1 config:(id)arg2;
- (id)setupPreShowIconActionSheetWithConfig:(id)arg1;
- (id)setupHalfIconActionSheetWithConfig:(id)arg1;
- (id)setupOAuthSnapShotActionSheet;
- (void)addWebviewSearchButtonWithArray:(id)arg1;
- (id)setupIconActionSheetCellsWithMenuConfig:(id)arg1;
- (id)setupRow2WithMenuConfig:(id)arg1;
- (id)setupRow1;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)scrollActionSheet:(id)arg1 didClickUrl:(id)arg2;
- (void)scrollActionSheet:(id)arg1 clickCustomBtn:(id)arg2;
- (void)didSelecteMenuItem:(id)arg1;
- (void)logFeature11577WithOpType:(unsigned long long)arg1;
- (void)scrollActionSheetDidScroll:(id)arg1;
- (void)scrollActionSheetDidAppeared:(id)arg1;
- (void)scrollActionSheetWillDismiss:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)actionSheetCancel:(id)arg1;
- (void)onWebViewDelete;
- (void)onWebViewEditTag;
- (void)onEnterpriseSelectBrand:(id)arg1 logic:(id)arg2;
- (void)onEnterpriseSelectChat:(id)arg1 brand:(id)arg2 logic:(id)arg3;
- (void)onEnterpriseConnectSucceed:(id)arg1;
- (void)onEnterpriseConnectFail:(id)arg1;
- (void)showEnterpriseConnectResult:(id)arg1;
- (void)reportWhenClickMenuWithActionType:(unsigned long long)arg1;
- (BOOL)isAuthMonitor:(id)arg1 event:(id)arg2;
- (BOOL)isShowMenuItem:(id)arg1;
- (BOOL)isShowMenuItem:(id)arg1 ignorePermissionCheck:(BOOL)arg2;
- (BOOL)isAllowedToUseMenuItem:(id)arg1;
- (BOOL)shoudlDisableMenuItem:(id)arg1;
- (BOOL)shouldShowCustomMenuAction;
- (BOOL)shouldShowSendToGoodLookItem;
- (BOOL)isAddedToGoodLook;
- (void)setIsAddedToGoodLook:(BOOL)arg1;
- (BOOL)shouldShowHaokanButton;
- (void)setShouldShowHaokanButton:(BOOL)arg1;
- (id)currentHaokanURL;
- (void)setCurrentHaokanURL:(id)arg1;
- (BOOL)shouldShowTTSFuncBtn;
- (BOOL)shouldShowTTSListenLaterFuncBtn;
- (BOOL)needAskForExposeWithSnapshot;
- (void)checkReportMenuItemExposed:(id)arg1;
- (void)addArticleToListenLater;
- (void)readArticle;
- (void)onMenuHeaderViewClick;
- (BOOL)shouldShowRecentlyForwardView;
- (void)updateRecentForwardArea;
- (void)clickRFItemCallBack:(id)arg1;
- (void)relayoutScrollSheet;
- (void)OnForwardMessageSend:(id)arg1;
- (void)onDoneForwardForForwardView:(id)arg1;
- (BOOL)isShowMPCommentEditView;
- (BOOL)isShowMPWowRecommendCommentEditView;
- (void)closeMPCommentEditView;
- (void)destoryCommentEditView;
- (void)closeMPWowRecommendCommentEditView;
- (id)mpPagePlugin;
- (id)checkAndGetErrorMsgForGifImageData:(id)arg1;
- (void)enableLongPressDetect;
- (void)onLongPressOnWebview:(id)arg1;
- (void)logFeature11576WithOpType:(unsigned int)arg1;
- (void)logFeature22999WithNavActionType:(long long)arg1;
- (void)reportIDKeyForAllRequest;
- (void)reportIDKeyForSystemError:(long long)arg1;
- (void)reportIDKeyForLoadFinish:(long long)arg1;
- (void)reportIDKeyForWKWebViewTerminateForceground;
- (void)reportIDKeyForWKWebViewTerminateBackground;
- (void)reportCopyContent:(id)arg1;
- (void)tryReportMonitorMessage:(id)arg1 params:(id)arg2;
- (void)reportJSCall:(id)arg1 withParam:(id)arg2;
- (void)reportShouldStartHttpsUrl:(id)arg1;
- (void)reportDidFinishedLoadWebView:(id)arg1 loadingUrl:(id)arg2;
- (void)reportDidFailLoadWebView:(id)arg1 loadingUrl:(id)arg2 error:(id)arg3;
- (void)reportDidFailLoadAndShowFailView:(id)arg1 errorCode:(long long)arg2 errorDesc:(id)arg3;
- (void)report21940WhenShouldStarLoadWithNavitionAction:(id)arg1;
- (void)reportLoadPageTime:(double)arg1 url:(id)arg2;
- (void)reportFailToLoadCachePage;
- (void)reportKeyJsapiCall:(id)arg1 initUrl:(id)arg2 currentUrl:(id)arg3 isSuccess:(int)arg4;
- (BOOL)isiPadQRCodeAuthorizeScene;
- (BOOL)isPrefetchEnable;
- (void)checkAndLoadPrefetchResult;
- (BOOL)isStartFirstLoadWithHTML;
- (BOOL)shouldStartLoadPrefetchBlankRequest;
- (void)startLoadPrefetchBlankRequest;
- (BOOL)isUrlEqualToPrefetchBlankPlaceHolderUrl:(id)arg1;
- (void)onPrefetchBlankPageShouldStartLoad:(id)arg1 request:(id)arg2 isMainFrame:(BOOL)arg3;
- (void)onPrefetchBlankPageDidStartLoad:(id)arg1 navigation:(id)arg2;
- (BOOL)isPrefetchBlankWebviewNavigation:(id)arg1;
- (void)onPrefetchBlankPageDidCommitLoad:(id)arg1 navigation:(id)arg2;
- (void)onPrefetchBlankPageDidFinishLoad:(id)arg1 navigation:(id)arg2;
- (void)onPrefetchBlankPageDidFailLoadWithError:(id)arg1 error:(id)arg2 navigation:(id)arg3;
- (void)onCheckLoadPrefetchHTMLWhenWebviewURLChange;
- (void)loadPrefetchHTMLString;
- (BOOL)private_handleA8keyVerifyPrefetchInfo:(id)arg1 url:(id)arg2;
- (void)clearFirstLoadWithHTMLStatus;
- (void)onPrefetchInjectPageDataSuccess;
- (void)onPrefetchInjectPageDataFail;
- (void)onPrefetchInjectPageDataNotifyTimeout;
- (void)processPrefetchFail:(unsigned long long)arg1;
- (void)prefetchGoOnlineH5WithRebuild:(BOOL)arg1;
- (void)delayShowHTMLLoadingIfNeeded;
- (void)onShowHTMLLoadingTimeout;
- (void)injectConsolePrefetchInfo;
- (void)checkInjectPrefercherBridge;
- (id)getCurrentWebViewController;
- (BOOL)isJSApiFuncPermissionValid:(long long)arg1;
- (id)getMMWebViewController;
- (void)showJSLog:(id)arg1;
- (void)hideMenuitemBatch:(id)arg1;
- (void)showMenuitemBatch:(id)arg1;
- (void)showAllNonBaseMenuItem;
- (void)hideAllNonBaseMenuItem;
- (id)previewFromController;
- (void)setPreviewFromController:(id)arg1;
- (id)previewSourceView;
- (void)setPreviewSourceView:(id)arg1;
- (BOOL)canPop;
- (void)commitViewController;
- (id)initForPreviewWithURL:(id)arg1 presentModal:(BOOL)arg2 extraInfo:(id)arg3;
- (void)setPreviewTopBar:(id)arg1;
- (void)setPreviewFrame:(CGRect)arg1;
- (id)initForwardPreviewWithURL:(id)arg1 presentModal:(BOOL)arg2 extraInfo:(id)arg3;
- (id)previewActionItems;
- (void)log3DTouchWebViewActionFeatureWithOpType:(id)arg1;
- (id)getEnterpriseConnectorLogic;
- (void)setEnterpriseConnectorLogic:(id)arg1;
- (BOOL)canAccessDeepLink:(id)arg1 Url:(id)arg2;
- (void)jumpDeepLink:(id)arg1;
- (void)accessDeepLink:(id)arg1 Url:(id)arg2;
- (void)updateCustomMenu;
- (void)setCustomMenu;
- (void)removeCustomMenu;
- (void)buildMenuWithBuilder:(id)arg1;
- (void)removeSystemTranslateMenuItemWithBuilder:(id)arg1;
- (void)doSearch:(id)arg1;
- (void)startWebSearch:(id)arg1;
- (BOOL)hitBlackListHostForSearch;
- (void)doTranslate:(id)arg1;
- (void)translateText:(id)arg1 disableLongPressMenu:(BOOL)arg2;
- (void)getSelectedTextWithCompletion:(id /* block */)arg1;
- (BOOL)isEnableSelectTextTranslate;
- (void)addEventActionForWebEvents;
- (void)addNavigationEventAction;
- (void)doCleanCookiesForUrl:(id)arg1;
- (void)cleanWebCacheFromReloadMenuAction;
- (void)clearWebviewCacheAndCookie:(BOOL)arg1;
- (void)checkApiAuthorization:(id)arg1;
- (void)promptForAuthInfo:(id)arg1;
- (id)initWithURL:(id)arg1 presentModal:(BOOL)arg2 extraInfo:(id)arg3;
- (id)initWithURL:(id)arg1 presentModal:(BOOL)arg2 extraInfo:(id)arg3 delegate:(id)arg4;
- (id)initWithURL:(id)arg1 presentModal:(BOOL)arg2 extraInfo:(id)arg3 presetUI:(id)arg4 config:(id)arg5 delegate:(id)arg6;
- (id)initWithURL:(id)arg1 presentModal:(BOOL)arg2 extraInfo:(id)arg3 presetUI:(id)arg4;
- (void)internalInitWithUrl:(id)arg1 presentModal:(BOOL)arg2 extraInfo:(id)arg3 presetUI:(id)arg4;
- (id)getFastLoadInitURLAndExtraInfoWithUrl:(id)arg1 extraInfo:(id *)arg2 webPrefetcherId:(id)arg3;
- (void)recordTimeWhenInitStart;
- (void)initCustomParams:(id)arg1;
- (void)initWebViewA8key:(id)arg1;
- (void)initWebView:(id)arg1;
- (void)tryEnableCookieTrace;
- (void)rebuildWebview:(id)arg1;
- (void)initJsInitInfo:(id)arg1;
- (void)initCustomHandler:(id)arg1;
- (void)initWebViewTaskKey;
- (void)updateWebViewTaskKey;
- (void)removeInitExtraInfoKeysAfterInitWebView;
- (id)__permissionKeyStringFromReqeust:(id)arg1;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 isMainFrame:(BOOL)arg4 navigationAction:(id)arg5;
- (long long)webView:(id)arg1 decidePolicyWithRequest:(id)arg2 navigationType:(long long)arg3 isMainFrame:(BOOL)arg4 navigationAction:(id)arg5;
- (BOOL)shouldStartLoadWithoutHandleInMainFlow:(id)arg1 webView:(id)arg2 navigationType:(long long)arg3 isMainFrame:(BOOL)arg4;
- (BOOL)trySyncGetA8KeyRequest:(id)arg1;
- (BOOL)tryHandleHttpRefer:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1 navigation:(id)arg2;
- (BOOL)shouldHandleWebViewDidStartLoad:(id)arg1 navigation:(id)arg2;
- (void)webViewDidCommitLoad:(id)arg1 navigation:(id)arg2;
- (BOOL)shouldHandleWebViewDidCommitLoad:(id)arg1 navigation:(id)arg2;
- (void)webViewDidReceiveServerRedirect:(id)arg1 navigation:(id)arg2;
- (void)fetchDocumentTimeIfNeed;
- (void)webViewDidFinishLoad:(id)arg1 navigation:(id)arg2;
- (BOOL)shouldHandleWebViewDidFinishLoad:(id)arg1 navigation:(id)arg2;
- (void)recordArrRouteUrl:(id)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2 navigation:(id)arg3;
- (BOOL)shouldHandleWebView:(id)arg1 didFailLoadWithError:(id)arg2 navigation:(id)arg3;
- (void)webView:(id)arg1 onBeforeLoadRequest:(id)arg2;
- (void)webViewOnBeforeReload:(id)arg1;
- (void)webViewContentProcessDidTerminate:(id)arg1;
- (BOOL)ignoreReloadWhenWebviewTerminate;
- (void)webviewDidReceiveScriptMessage:(id)arg1 handler:(id)arg2 rawMessage:(id)arg3;
- (void)webviewDidReceiveScriptMessage:(id)arg1 replyHandler:(id /* block */)arg2;
- (void)webViewDidReceiveNavigationResponse:(id)arg1 andGetIsCancelNavigation:(BOOL *)arg2;
- (void)webViewDidReceiveNavigationResponseAndDecideResponsePolicy:(id)arg1 andCompletion:(id /* block */)arg2;
- (void)webViewDidBecomeUnresponsible:(id)arg1;
- (void)askIfDownloadWithFileURL:(id)arg1 fileName:(id)arg2 fileExtName:(id)arg3 contentLength:(unsigned long long)arg4;
- (void)openFileDetailViewCtrlWithFileURL:(id)arg1 filePath:(id)arg2 fileName:(id)arg3 fileExtName:(id)arg4 contentLength:(unsigned long long)arg5;
- (BOOL)allowsInlineMediaPlay;
- (BOOL)allowsAutoMediaPlay;
- (id)getPreInjectScriptStr;
- (id)getWXHookScriptStr;
- (BOOL)checkShouldHandlePromptMessage:(id)arg1 defaultText:(id)arg2 sourceFrame:(id)arg3 resultMsg:(id *)arg4;
- (id)webViewCookiesForConfiguration;
- (BOOL)isGamePreloadInMen;
- (id)webViewUserScriptsForConfiguration;
- (id)webviewCustomScriptHandlerForConfiguration;
- (id)webviewCustomScriptReplyHandlerForConfiguration;
- (void)webView:(id)arg1 navigationAction:(id)arg2 didStartDownload:(id)arg3;
- (void)webView:(id)arg1 navigationResponse:(id)arg2 didStartDownload:(id)arg3;
- (id)customURLSchemeHandlerDictionary;
- (BOOL)isDisableWebviewContextMenu;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewDidAppear:(BOOL)arg1;
- (void)willAppear;
- (void)didAppear;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillBePushed:(BOOL)arg1;
- (void)viewWillBePushOrPresent:(BOOL)arg1;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewWillBeDismissed:(BOOL)arg1;
- (void)viewDidBeDismissed:(BOOL)arg1;
- (void)viewWillPush:(BOOL)arg1;
- (void)viewDidPush:(BOOL)arg1;
- (void)viewWillPresent:(BOOL)arg1;
- (void)viewWillPop:(BOOL)arg1;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)viewDidLayoutSubviews;
- (void)parseDeepLink:(id)arg1 animation:(BOOL)arg2;
- (void)handlePersionalEmoticonDeepLink:(id)arg1 animation:(BOOL)arg2;
- (void)setupDeepLinkConfig;
- (void)willDisappear;
- (void)onWebViewDidReturn;
- (id)getCurrentWebviewViewController;
- (BOOL)isBridgedInNewMode;
- (BOOL)isUseAllOneWXJS;
- (BOOL)isGetingA8Key;
- (BOOL)getJSApiFrequncyCheckResult:(id)arg1;
- (BOOL)getJSApiEnvCompatibility:(id)arg1;
- (id)currentPermissionKeyUrlString;
- (id)currentWebviewEnvInfo;
- (BOOL)isImmersiveListMode;
- (unsigned char)getJSApiPermission:(id)arg1;
- (void)processJSAPICall:(id)arg1 funcDef:(id)arg2 funcBlock:(id /* block */)arg3 failHandleBlock:(id /* block */)arg4 apiPermission:(unsigned char)arg5;
- (id)getAuthorizedMonitorEvents:(id)arg1;
- (void)changeCurrentAndWebViewUrl:(id)arg1;
- (void)onPageStateChange:(id)arg1;
- (BOOL)isTempAccessOfJSApiPermitted:(id)arg1;
- (void)onCopy:(id)arg1;
- (void)handleMonitorMessage:(id)arg1 params:(id)arg2;
- (void)didTakeScreenshot;
- (void)onSystemScreenCapturedChanged:(id)arg1;
- (void)sendOnScreenShotEvent;
- (void)voiceoverStatusChanged;
- (id)webviewController;
- (void)onGetA8KeyWithRequestUrl:(id)arg1 fullUrl:(id)arg2 header:(id)arg3;
- (void)onGetA8KeyFinishWithRequestUrl:(id)arg1 response:(id)arg2 reason:(int)arg3;
- (void)onGetA8KeyBeforeGoToUrl:(id)arg1 success:(BOOL)arg2 reason:(int)arg3;
- (id)getLocalHttpHeadersForA8KeyUrl:(id)arg1;
- (void)onGetA8Key:(BOOL)arg1 ReqUrl:(id)arg2 Reason:(int)arg3;
- (void)onUpdatedPermisson;
- (void)onJumpToSafariWithUrl:(id)arg1;
- (void)onJumpToAppStoreControlWithUrl:(id)arg1;
- (void)onJumpToViewController:(id)arg1;
- (void)onJumpToEmoticonDetailViewController:(id)arg1;
- (void)saveJSAPIAuthInfo:(id)arg1;
- (void)saveJSAPIPermissions:(id)arg1 url:(id)arg2;
- (void)saveJSAPIPermissionsInOfflineCache:(id)arg1 url:(id)arg2;
- (void)onStartGetA8Key:(id)arg1;
- (void)onShowAutoOAuthViewWithSchemeUrl:(id)arg1 Success:(BOOL)arg2 Wording:(id)arg3 HeadImgUrl:(id)arg4;
- (unsigned int)a8keyWebviewFontScale;
- (BOOL)needKeepA8KeyResult;
- (BOOL)isGameCenterSceneOld;
- (BOOL)isA8KeyGameCenterScene;
- (BOOL)isGameCenterDomain;
- (BOOL)canUseOfflineWepkg;
- (BOOL)canStartGameCenterRender;
- (BOOL)handleA8keyVerifyPrefetchInfo:(id)arg1 url:(id)arg2;
- (void)onSwitchToShareTextControl:(id)arg1;
- (void)onReceivedExtractPageFeatureFlagWithUrl:(id)arg1;
- (void)onSwitchSecCtrlMode:(unsigned int)arg1;
- (id)getJSFunctionDef:(id)arg1;
- (void)kvReportJSCall:(id)arg1 withParam:(id)arg2;
- (void)onGotWebComptData:(id)arg1 forAppId:(id)arg2 forUrl:(id)arg3 forContext:(id)arg4;
- (unsigned int)getA8KeyRequestId;
- (id)currentContextPageInfo;
- (void)initNotificationAndObservers;
- (void)initWebviewObservers;
- (void)removeNotificationAndObservers;
- (void)removeWebviewObservers;
- (void)onMenuControllerDidHide:(id)arg1;
- (void)onMenuControllerDidShow:(id)arg1;
- (void)onMenuControllerWillShow:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)applicationWillResignActive;
- (void)applicationDidBecomeActive;
- (void)applicationDidEnterBackground;
- (void)applicationWillEnterForeground;
- (void)didReceivedWindowDidBecomeHiddenNotification:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint *)arg3;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (BOOL)scrollViewShouldScrollToTop:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (BOOL)shouldInteractivePop;
- (void)StartLoadWeb;
- (void)reload;
- (BOOL)reloadPreloadPageUrl;
- (void)reloadPreloadPageUrlOnClickFailView;
- (void)stop;
- (void)goBack;
- (void)goForward;
- (void)goToURL:(id)arg1;
- (void)goToHtml:(id)arg1 withURL:(id)arg2;
- (void)manualLoad;
- (void)loadHTMLString:(id)arg1 baseURL:(id)arg2;
- (void)notifyToJSBridgeVisibilityChanged:(BOOL)arg1;
- (void)advanceRenderWebViewOnVisibleView:(id)arg1;
- (BOOL)removeAdvanceRenderWebViewIfNeed;
- (void)restoreWebViewToSubViewStack;
- (void)done:(id)arg1;
- (void)onClickFailView;
- (void)doBackActionCleanWithType:(BOOL)arg1;
- (void)OnReturn;
- (void)backToAppIfNeed;
- (void)OnClose;
- (void)onWindowFocusChanged:(BOOL)arg1;
- (void)onChangeCurrentContext;
- (void)startupPreVerifyJSAPI:(id)arg1 failHandleBlock:(id /* block */)arg2;
- (void)setupA8keyWebComptNameList:(id)arg1 appId:(id)arg2 bNotCheckIfUrlMatchToSessionUrl:(BOOL)arg3;
- (void)setAutoSetTitle:(BOOL)arg1;
- (void)setDisableShareMenu:(BOOL)arg1;
- (void)setExtraInfoValue:(id)arg1 forKey:(id)arg2;
- (id)extraInfo;
- (BOOL)isViewDidAppear;
- (void)updateShowFirstTitle;
- (void)runBlock:(id /* block */)arg1 afterShowFirstTitle:(long long)arg2;
- (id)title;
- (void)setTitle:(id)arg1;
- (void)setTitle:(id)arg1 subTitle:(id)arg2;
- (void)updateTitleAndSubTitle;
- (id)calcHostTitle;
- (void)setPublisher:(id)arg1;
- (void)setSwipeBackInteractiveEnable:(BOOL)arg1;
- (void)shouldShowGoBackBtn;
- (id)getCurrentAppId;
- (id)getShareUrl;
- (id)getInitUrl;
- (id)getOutlinkOriginInitUrlWhenBlockedOnLimitedMode;
- (BOOL)m_bOfflinePage;
- (unsigned long long)GetDeepLinkBitSet;
- (unsigned int)GetPermissionBitSet;
- (unsigned int)GetPermissionBitSet2;
- (unsigned int)GetPermissionBitSet3;
- (BOOL)allowScanQRCodeByImage;
- (BOOL)allowShareByImage;
- (BOOL)allowFayByImage;
- (BOOL)isUnderRiskControl;
- (BOOL)isBlockShareUrlToTextLink;
- (BOOL)allowCallJsapiBeforeLoad;
- (BOOL)allowShowAppMsgTailName;
- (BOOL)IsBitsetSet:(unsigned int)arg1 forUrl:(id)arg2;
- (unsigned int)GetGeneralBitSetForUrl:(id)arg1;
- (id)getRoutUrls;
- (id)getLastUrl;
- (BOOL)hasUrlPermission:(id)arg1;
- (id)getUrlPermission:(id)arg1;
- (void)delaySetFontsWithSize:(id)arg1;
- (void)stopWepkgLoadingView;
- (BOOL)forcedRotationToPortrait;
- (void)forceRotateToOrientation:(long long)arg1 lock:(BOOL)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (unsigned long long)lockOrientation;
- (void)resetLockOrientation;
- (BOOL)shoudDelaySetFont;
- (void)onSelectFont:(unsigned int)arg1;
- (id)getRequestingOrCurrentUrl;
- (BOOL)isMenuAction:(id)arg1;
- (void)setDisableWebAlertView:(BOOL)arg1;
- (BOOL)disMissSelf;
- (void)dismissWebViewController;
- (void)immediateDismissWebViewController;
- (void)shareToFB;
- (void)permitTempAccessOfJSApi:(id)arg1;
- (id)getWebViewTimeProfileData;
- (void)startForcedRotationToPortrait;
- (void)stopForcedRotationToPortrait;
- (id)getCurrentUrl;
- (id)getCurrentContentContextID;
- (BOOL)isPageDidLoad;
- (BOOL)isContentOriginal;
- (unsigned int)getCurrentScene;
- (unsigned int)getCurrentWebRequestId;
- (void)setCurrentUrl:(id)arg1;
- (void)doJsApiInitEvent;
- (void)sendEventToJSBridge:(id)arg1 Param:(id)arg2;
- (void)sendJsEvent:(id)arg1 params:(id)arg2 invokeContext:(id)arg3;
- (void)removeSendAppMessageJsapiTempAllowAuthority;
- (void)sendGetA8KeyEvent:(id)arg1;
- (unsigned char)getPermissionWithName:(id)arg1;
- (void)tryStartOutlinkDetect;
- (void)setDelayLoadActionBlock:(id /* block */)arg1;
- (void)setNotifyWillReturnBlock:(id /* block */)arg1;
- (void)configInterceptClose:(id /* block */)arg1;
- (void)configInterceptClose:(id /* block */)arg1 alwayIntercept:(BOOL)arg2;
- (BOOL)shouldInterceptClose;
- (void)interceptClose;
- (void)enableWebContentImageLongPressingTag;
- (BOOL)allowImagePreview;
- (id)replaceInitUrlInSpecificCondition:(id)arg1 extraInfo:(id *)arg2;
- (BOOL)shouldHandleRedirectUrl:(id)arg1 isIFrame:(BOOL)arg2;
- (void)delayCheckExtractPageFeatureFlag;
- (void)onSendReadyEvent;
- (void)forceShowCloseButton;
- (id)tagForCurrentPage;
- (id)getCurrentOfflinePageA8KeyData;
- (BOOL)isCurrentUrlEqualToFirstA8KeyRespUrl;
- (BOOL)isLoadModePreload;
- (BOOL)isLoadModeManual;
- (id)loadModeNameWithValue:(unsigned long long)arg1;
- (void)changeLoadMode:(unsigned long long)arg1;
- (unsigned long long)currentLoadMode;
- (void)onLoadModeChangeFromOldValue:(unsigned long long)arg1 toNewValue:(unsigned long long)arg2;
- (void)onLoadModePreloadOpen;
- (void)onLoadModePreloadClose;
- (id)fileSizeStrForContentLength:(unsigned long long)arg1;
- (void)registerYReportSdk;
- (void)refreshWAWxMaterialAppInfo:(id)arg1;
- (id)wcpayKeyboard;
- (id)keyboardHostViewController;
- (void)keyboardViewConfirmBtnClick:(id)arg1;
- (void)keyboardViewEditing:(id)arg1 text:(id)arg2;
- (void)decimalKeyboardWillShow:(double)arg1;
- (void)cookiesDidChangeInCookieStore:(id)arg1;
- (void)webviewPrintCookies;
- (BOOL)shouldPrintCookieWhenCookieChangedWithUrl:(id)arg1;
- (BOOL)shouldPrintCookie;
- (id)domainsShouldPrint;
- (id)webView;
- (void)setWebView:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_jsLogicImpl;
- (id)m_a8KeyLogicImpl;
- (id)m_sanboxLogicImpl;
- (id)m_extraInfo;
- (void)setM_extraInfo:(id)arg1;
- (id)m_initUrl;
- (BOOL)m_isPreviewing;
- (BOOL)m_bIsPortraitBeforeOpenUrl;
- (void)setM_bIsPortraitBeforeOpenUrl:(BOOL)arg1;
- (BOOL)m_bShowOnNewMainFrameBanner;
- (void)setM_bShowOnNewMainFrameBanner:(BOOL)arg1;
- (BOOL)m_bReadingArticleBanner;
- (void)setM_bReadingArticleBanner:(BOOL)arg1;
- (BOOL)m_bFullScreen;
- (void)setM_bFullScreen:(BOOL)arg1;
- (BOOL)m_bPreloadInMem;
- (void)setM_bPreloadInMem:(BOOL)arg1;
- (id)pluginScheduler;
- (void)setPluginScheduler:(id)arg1;
- (id)m_webTaskKey;
- (void)setM_webTaskKey:(id)arg1;
- (id)m_handoffKey;
- (void)setM_handoffKey:(id)arg1;
- (BOOL)m_bDeepLink;
- (void)setM_bDeepLink:(BOOL)arg1;
- (id)brandContact;
- (void)setBrandContact:(id)arg1;
- (BOOL)m_bUserHasClickLink;
- (void)setM_bUserHasClickLink:(BOOL)arg1;
- (id)m_progressBar;
- (void)setM_progressBar:(id)arg1;
- (id)m_addressLabel;
- (void)setM_addressLabel:(id)arg1;
- (BOOL)m_bIsDelayPushWebView;
- (void)setM_bIsDelayPushWebView:(BOOL)arg1;
- (BOOL)m_bIsRestrictAppstore;
- (void)setM_bIsRestrictAppstore:(BOOL)arg1;
- (BOOL)m_isLanscape;
- (void)setM_isLanscape:(BOOL)arg1;
- (BOOL)m_bIsJsapiUploadVideoUploading;
- (void)setM_bIsJsapiUploadVideoUploading:(BOOL)arg1;
- (id)presetUI;
- (void)setPresetUI:(id)arg1;
- (id)customLog;
- (void)setCustomLog:(id)arg1;
- (void)setWcpayKeyboard:(id)arg1;
- (id /* block */)callbackWebViewDidReturn;
- (void)setCallbackWebViewDidReturn:(id /* block */)arg1;
- (id /* block */)callbackWebViewDidFinishLoad;
- (void)setCallbackWebViewDidFinishLoad:(id /* block */)arg1;
- (id /* block */)callbackWebViewDidReceiveNavResp;
- (void)setCallbackWebViewDidReceiveNavResp:(id /* block */)arg1;
- (long long)reportId;
- (void)setReportId:(long long)arg1;
- (BOOL)reportInstantly;
- (void)setReportInstantly:(BOOL)arg1;
- (id)reportFormatDataList;
- (void)setReportFormatDataList:(id)arg1;
- (unsigned long long)reportBeginTime;
- (void)setReportBeginTime:(unsigned long long)arg1;
- (unsigned long long)reportDesinatedBeginTime;
- (void)setReportDesinatedBeginTime:(unsigned long long)arg1;
- (id)visibleStateArray;
- (void)setVisibleStateArray:(id)arg1;
- (id)wepkgLoadingTimer;
- (void)setWepkgLoadingTimer:(id)arg1;
- (id /* block */)interceptCloseBlock;
- (void)setInterceptCloseBlock:(id /* block */)arg1;
- (BOOL)isPreloadEnded;
- (void)setIsPreloadEnded:(BOOL)arg1;
- (id)dictBrandInfo;
- (void)setDictBrandInfo:(id)arg1;
- (id)gameWebReporter;
- (void)setGameWebReporter:(id)arg1;
- (double)initTimeInterval;
- (void)setInitTimeInterval:(double)arg1;
- (id)entranceGMsgID;
- (void)setEntranceGMsgID:(id)arg1;
- (id)halfAdapterHeaderView;
- (void)setHalfAdapterHeaderView:(id)arg1;
- (id /* block */)halfAdapterCloseAction;
- (void)setHalfAdapterCloseAction:(id /* block */)arg1;
- (id /* block */)halfAdapterMoreAction;
- (void)setHalfAdapterMoreAction:(id /* block */)arg1;
- (id)snapshotLoadingView;
- (void)setSnapshotLoadingView:(id)arg1;
- (id)fullSnapshotBtn;
- (void)setFullSnapshotBtn:(id)arg1;
- (id)bottomGradientLayer;
- (void)setBottomGradientLayer:(id)arg1;
- (BOOL)terminatedFlagForSnapshot;
- (void)setTerminatedFlagForSnapshot:(BOOL)arg1;
- (id /* block */)finishLoadSnapshotCallback;
- (void)setFinishLoadSnapshotCallback:(id /* block */)arg1;
- (id)snapshotSessionId;
- (void)setSnapshotSessionId:(id)arg1;
- (id)snapshotWebviewWrapper;
- (void)setSnapshotWebviewWrapper:(id)arg1;
- (unsigned int)snapshotTriggerSource;
- (void)setSnapshotTriggerSource:(unsigned int)arg1;
- (id)currentAuthContext;
- (void)setCurrentAuthContext:(id)arg1;
- (BOOL)bBridgedAndAuthedInNewMode;
- (void)setBBridgedAndAuthedInNewMode:(BOOL)arg1;
- (id)navigationEventStore;
- (void)setNavigationEventStore:(id)arg1;
- (id)prefetchJsApiPermissionDict;
- (void)setPrefetchJsApiPermissionDict:(id)arg1;
- (id)presetUIConfigLogic;
- (void)setPresetUIConfigLogic:(id)arg1;
- (BOOL)isPrefetchPageDataResultNotified;
- (void)setIsPrefetchPageDataResultNotified:(BOOL)arg1;
- (BOOL)hasPrefetchLoadFail;
- (void)setHasPrefetchLoadFail:(BOOL)arg1;
- (BOOL)isPrefetchGoH5;
- (void)setIsPrefetchGoH5:(BOOL)arg1;
- (id)prefetchGoH5Url;
- (void)setPrefetchGoH5Url:(id)arg1;
- (BOOL)hasPreloadLoadFail;
- (void)setHasPreloadLoadFail:(BOOL)arg1;
- (id)preloadDefaultShareTitle;
- (void)setPreloadDefaultShareTitle:(id)arg1;
- (id)preloadDefaultShareDescription;
- (void)setPreloadDefaultShareDescription:(id)arg1;
- (BOOL)shouldHandleShrink;
- (void)setShouldHandleShrink:(BOOL)arg1;
- (double)lastContentOffsetY;
- (void)setLastContentOffsetY:(double)arg1;
- (double)lastSecondContentOffsetY;
- (void)setLastSecondContentOffsetY:(double)arg1;
- (long long)unTrackScrollingNum;
- (void)setUnTrackScrollingNum:(long long)arg1;
- (double)beiginContentOffsetY;
- (void)setBeiginContentOffsetY:(double)arg1;
- (double)navBarShrinkRemainHeight;
- (void)setNavBarShrinkRemainHeight:(double)arg1;
- (long long)scrollNavBarState;
- (void)setScrollNavBarState:(long long)arg1;
- (id)minimizationTransitionController;
- (void)setMinimizationTransitionController:(id)arg1;
- (id)fontFloatView;
- (void)setFontFloatView:(id)arg1;
- (id)universalLinkAlertTipsView;
- (void)setUniversalLinkAlertTipsView:(id)arg1;
- (BOOL)isMarkedForDeallocReleaseTrancation;
- (void)setIsMarkedForDeallocReleaseTrancation:(BOOL)arg1;
- (BOOL)needShowToastOnCapture;
- (void)setNeedShowToastOnCapture:(BOOL)arg1;
- (unsigned long long)eFullScreenOptions;
- (void)setEFullScreenOptions:(unsigned long long)arg1;
- (id)curPageInfoModel;
- (void)setCurPageInfoModel:(id)arg1;
- (BOOL)bIsForceShowCloseButton;
- (void)setBIsForceShowCloseButton:(BOOL)arg1;
- (BOOL)m_isDisableShareMenu;
- (void)setM_isDisableShareMenu:(BOOL)arg1;
- (id)tailBgView;
- (void)setTailBgView:(id)arg1;
- (id)m_addressBarView;
- (void)setM_addressBarView:(id)arg1;
- (id)m_deeplinkRedirecting;
- (void)setM_deeplinkRedirecting:(id)arg1;
- (id)bottomBar;
- (void)setBottomBar:(id)arg1;
- (id)topBar;
- (void)setTopBar:(id)arg1;
- (id)hangTipsBar;
- (void)setHangTipsBar:(id)arg1;
- (BOOL)shouldShowBottom;
- (void)setShouldShowBottom:(BOOL)arg1;
- (id)maskTitleLayer;
- (void)setMaskTitleLayer:(id)arg1;
- (id)tempLabel;
- (void)setTempLabel:(id)arg1;
- (id)profileTitleView;
- (void)setProfileTitleView:(id)arg1;
- (id)transHelpButtonView;
- (void)setTransHelpButtonView:(id)arg1;
- (id)liveTitleView;
- (void)setLiveTitleView:(id)arg1;
- (id)dagerTipsView;
- (void)setDagerTipsView:(id)arg1;
- (id)customNavigationLoadingView;
- (void)setCustomNavigationLoadingView:(id)arg1;
- (BOOL)canSetMPTitleByOut;
- (void)setCanSetMPTitleByOut:(BOOL)arg1;
- (BOOL)unableAutoSetStatusBar;
- (void)setUnableAutoSetStatusBar:(BOOL)arg1;
- (id)navShadowView;
- (void)setNavShadowView:(id)arg1;
- (id)snapshotImgView;
- (void)setSnapshotImgView:(id)arg1;
- (id)naviFailView;
- (void)setNaviFailView:(id)arg1;
- (BOOL)isLockDownModeOn;
- (void)setIsLockDownModeOn:(BOOL)arg1;
- (id)invisibleTitleView;
- (void)setInvisibleTitleView:(id)arg1;
- (unsigned int)navigationTitleType;
- (void)setNavigationTitleType:(unsigned int)arg1;
- (BOOL)canShowTingEntry;
- (void)setCanShowTingEntry:(BOOL)arg1;
- (BOOL)bIgnoreLongPressGestureEvent;
- (void)setBIgnoreLongPressGestureEvent:(BOOL)arg1;
- (BOOL)bLongPressingWebContentImage;
- (void)setBLongPressingWebContentImage:(BOOL)arg1;
- (unsigned long long)longPressingWebContentImageEndTimeStamp;
- (void)setLongPressingWebContentImageEndTimeStamp:(unsigned long long)arg1;
- (id)oauthLogic;
- (void)setOauthLogic:(id)arg1;
- (id)currentOAuthUrl;
- (void)setCurrentOAuthUrl:(id)arg1;
- (id)oAuthTapGestureRecognizer;
- (void)setOAuthTapGestureRecognizer:(id)arg1;
- (BOOL)hasCurrentOauthWebPageClicked;
- (void)setHasCurrentOauthWebPageClicked:(BOOL)arg1;
- (BOOL)isContentShowingSnapShot;
- (void)setIsContentShowingSnapShot:(BOOL)arg1;
- (id)snapShotOauthPageVC;
- (void)setSnapShotOauthPageVC:(id)arg1;
- (id)currentOAuthPageTitle;
- (void)setCurrentOAuthPageTitle:(id)arg1;
- (id)touristOauthTitleWording;
- (void)setTouristOauthTitleWording:(id)arg1;
- (id)oauthBottomRemindView;
- (void)setOauthBottomRemindView:(id)arg1;
- (id)oauthContainerView;
- (void)setOauthContainerView:(id)arg1;
- (id)oauthRemindTextLabel;
- (void)setOauthRemindTextLabel:(id)arg1;
- (id)oauthArrowView;
- (void)setOauthArrowView:(id)arg1;
- (id)oauthBroseFullContentBtn;
- (void)setOauthBroseFullContentBtn:(id)arg1;
- (id)warnIconView;
- (void)setWarnIconView:(id)arg1;
- (CGPoint)lastWebviewClickedPoint;
- (void)setLastWebviewClickedPoint:(CGPoint)arg1;
- (id)halfScreenRemindView;
- (void)setHalfScreenRemindView:(id)arg1;
- (BOOL)isShowHalfScreenView;
- (void)setIsShowHalfScreenView:(BOOL)arg1;
- (BOOL)isHalfScreenViewAnimating;
- (void)setIsHalfScreenViewAnimating:(BOOL)arg1;
- (id)snapShotPageDelegate;
- (void)setSnapShotPageDelegate:(id)arg1;
- (BOOL)hasSnapShotPageLoadFinished;
- (void)setHasSnapShotPageLoadFinished:(BOOL)arg1;
- (id)webCoreConfig;
- (void)setWebCoreConfig:(id)arg1;
- (id)jumpAppStoreUrl;
- (void)setJumpAppStoreUrl:(id)arg1;
- (id)encodeSchemeStr;
- (void)setEncodeSchemeStr:(id)arg1;
- (long long)useSchemeCount;
- (void)setUseSchemeCount:(long long)arg1;
- (BOOL)bHasTriggerOpenUrl;
- (void)setBHasTriggerOpenUrl:(BOOL)arg1;
- (BOOL)bIsReportSchemeWickedAlready;
- (void)setBIsReportSchemeWickedAlready:(BOOL)arg1;
- (BOOL)m_bIsStatusBarBlack;
- (void)setM_bIsStatusBarBlack:(BOOL)arg1;
- (BOOL)m_bForceDisableInterativePop;
- (void)setM_bForceDisableInterativePop:(BOOL)arg1;
- (unsigned int)webFirstGetA8KeyRule;
- (void)setWebFirstGetA8KeyRule:(unsigned int)arg1;
- (BOOL)bIsAlreadyReloadWebviewFromJsapi;
- (void)setBIsAlreadyReloadWebviewFromJsapi:(BOOL)arg1;
- (BOOL)m_bHasFinishLoadOnce;
- (void)setM_bHasFinishLoadOnce:(BOOL)arg1;
- (id)performance;
- (void)setPerformance:(id)arg1;
- (BOOL)hasFetchPerformance;
- (void)setHasFetchPerformance:(BOOL)arg1;
- (id)allowOnceUniversalLinkUrl;
- (void)setAllowOnceUniversalLinkUrl:(id)arg1;
- (id)wkLastCommitingNavigationUrl;
- (void)setWkLastCommitingNavigationUrl:(id)arg1;
- (unsigned int)m_webviewCurrentMaxFontLevel;
- (void)setM_webviewCurrentMaxFontLevel:(unsigned int)arg1;
- (BOOL)isMovingToOtherScene;
- (void)setIsMovingToOtherScene:(BOOL)arg1;
- (BOOL)m_bForbidShowMinimizationEntryInMenu;
- (void)setM_bForbidShowMinimizationEntryInMenu:(BOOL)arg1;
- (BOOL)bWebContentInAppStoreControl;
- (void)setBWebContentInAppStoreControl:(BOOL)arg1;
- (BOOL)bIsStartFirstLoadWithHTML;
- (void)setBIsStartFirstLoadWithHTML:(BOOL)arg1;
- (BOOL)bDidStartFirstLoadWithHTML;
- (void)setBDidStartFirstLoadWithHTML:(BOOL)arg1;
- (BOOL)bShouldDelayShowHTMLloading;
- (void)setBShouldDelayShowHTMLloading:(BOOL)arg1;
- (id)blankNavigationAction;
- (void)setBlankNavigationAction:(id)arg1;
- (id)prefetchResult;
- (void)setPrefetchResult:(id)arg1;
- (unsigned int)optimizeOption;
- (void)setOptimizeOption:(unsigned int)arg1;
- (unsigned int)linkChainOption;
- (void)setLinkChainOption:(unsigned int)arg1;
- (BOOL)bHasReportPrefetchInfo;
- (void)setBHasReportPrefetchInfo:(BOOL)arg1;
- (id)prefetcherJSApiLogic;
- (void)setPrefetcherJSApiLogic:(id)arg1;
- (BOOL)shareUrlWithTextLinkEnable;
- (void)setShareUrlWithTextLinkEnable:(BOOL)arg1;
- (BOOL)reloadFromLoadHtmlString;
- (void)setReloadFromLoadHtmlString:(BOOL)arg1;
- (unsigned int)secCtrlMode;
- (void)setSecCtrlMode:(unsigned int)arg1;
- (id)a8keyUrlForPageFeature;
- (void)setA8keyUrlForPageFeature:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

