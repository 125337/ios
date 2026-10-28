@interface WSLocalWebViewController : MMUIViewController <UIScrollViewDelegate, WSWebRecommendTabsViewDelegate, IWebSearchRedPointMgrExt, HandleHaokanActionExt, WCFinderShareCustomTransitionProtocol, MMKernelExt, MMTipsViewControllerDelegate, WSInteractivePage, WCFinderRedDotExt, NewLifeMainTabUIExtension>
{
    WCStatTimerHelper * _pageTimeHelper; // +0x70
    long long _orientation; // +0x78
    MMBadgeView * _rightBarReddotView; // +0x80
    MMTipsViewController * _confirmView; // +0x88
    NSString * _lastExposeNumReddotId; // +0x90
    NSString * _lastExposeContentReddotId; // +0x98
    NSString * _lastExposeRecommendReddotId; // +0xa0
    NSString * _lastExposeThirdTabReddotId; // +0xa8
    NSString * _lastExposeSettingReddotId; // +0xb0
    BOOL _bForbidNavigationItems; // +0xb8
    BOOL _needExposeWhenUpdate; // +0xb9
    BOOL _reusable; // +0xba
    BOOL _isUseOuterJumpCategoryOnlyForUnExposeCategory; // +0xbb
    BOOL _isJumpContentByReddot; // +0xbc
    BOOL _isNewLifeSearchBtnVisible; // +0xbd
    BOOL _isLongVideoSearchBtnVisible; // +0xbe
    BOOL _lastIsSearchBtnVisible; // +0xbf
    BOOL _isTemporaryCategoryReddotShowingTips; // +0xc0
    BOOL _hasSendOnBackFromTransient; // +0xc1
    BOOL _isScrolling; // +0xc2
    NSString * _contentTitle; // +0xc8
    unsigned long long _VCType; // +0xd0
    NSString * _redDotMsgId; // +0xd8
    unsigned long long _navigationBarStyle; // +0xe0
    NSString * _nsInitExtText; // +0xe8
    NSString * _extParams; // +0xf0
    WSWebRecommendTabsView * _tabContainer; // +0xf8
    unsigned long long _scene; // +0x100
    NSString * _byPassContent; // +0x108
    _TtC6WeChat8WSReddot * _entranceRedDotInfo; // +0x110
    unsigned long long _jumpContentByReddotTimestamp; // +0x118
    unsigned long long _enterTime; // +0x120
    NSString * _sessionID; // +0x128
    UIBarButtonItem * _weSeeProfileItem; // +0x130
    NSDictionary * _customInitParams; // +0x138
    NSNumber * _mmNewLifeTabRedDotNum; // +0x140
    WCFinderRedDotCtrlInfo * _mmNewLifeTabCtrlInfo; // +0x148
    WCFinderRedDotTipsShowInfo * _mmNewLifeTabRedDotShowInfo; // +0x150
    NewLifeSearchStreamResult * _mmNewLifeHomePageSearchResult; // +0x158
    long long _contentRedDotCategory; // +0x160
    FinderSyncTipsShowInfo * _contentRedDotShowInfo; // +0x168
    WCFinderRedDotTipsShowInfo * _contentRedDotWCShowInfo; // +0x170
    WCFinderRedDotCtrlInfo * _contentRedDotWCCtrlInfo; // +0x178
    NSNumber * _temporaryCategoryReddot; // +0x180
    UIBarButtonItem * _searchBtnItem; // +0x188
    long long _currentIndex; // +0x190
    WSTemplateScrollView * _scrollView; // +0x198
    UIScrollView * _midView; // +0x1a0
    WSTabInfoList * _tabInfoModel; // +0x1a8
}
+ (void)preHeatWeSeePageWithReddotId:(id)arg1;
+ (id)getPreloadInstanceWithReddotId:(id)arg1;
+ (void)removeCache;
+ (id)getPreloadedInstance;
+ (BOOL)isK1KRedDotOpt;
- (void)tryRecycleSelf;
- (void)sendJSEventToCurWebview:(id)arg1 params:(id)arg2;
- (void)sendJSEventToCurWebview:(id)arg1 params:(id)arg2 sendAfterReady:(BOOL)arg3;
- (void)broadcastJSEvent:(id)arg1 params:(id)arg2;
- (void)dispatchTemplateEvent:(id)arg1 userInfo:(id)arg2;
- (void)dispatchTemplateEvent:(id)arg1 userInfo:(id)arg2 onlyForCurTab:(BOOL)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (unsigned long long)showingPageIndex;
- (void)handleTabSelected:(long long)arg1 tabItemInfo:(id)arg2 reason:(unsigned long long)arg3;
- (id)fetchTabNeededParamsWith:(id)arg1;
- (void)onChangeTabViewSize;
- (void)addTemporaryReddotToCategory:(long long)arg1;
- (void)removeTemporaryReddotFromCategory:(long long)arg1;
- (void)removeTemporaryReddot;
- (void)clearLastExposeReddotIds;
- (void)updateExposeReddot;
- (void)reportTabReddotExpose;
- (id)fetchWebRecommendLatestNumReddotMsgId;
- (BOOL)needShowReddot:(unsigned long long)arg1;
- (void)onWebRecommendNumRedPointChange:(id)arg1;
- (void)onWebRecommendReddotNotifyToJs:(id)arg1;
- (void)onWebRecommendNotifyMsgToJs:(id)arg1;
- (void)onTopStoryUpdateReddotFinish;
- (void)onTopStoryRecieveSettingReddot;
- (void)handleHaokanActionWithClientData:(id)arg1 serverData:(id)arg2;
- (void)handleOpenWowColikeSettingPage:(id)arg1;
- (void)handleUpdateNumReddotWithParams:(id)arg1;
- (void)doShareAnimation;
- (id)initWithScene:(unsigned long long)arg1;
- (id)initWithScene:(unsigned long long)arg1 tabInfoList:(id)arg2;
- (id)initWithScene:(unsigned long long)arg1 customParams:(id)arg2;
- (void)commonInitWithScene:(unsigned long long)arg1;
- (void)viewDidLoad;
- (void)viewDidBePushed:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)enterForeground;
- (void)enterBackground;
- (void)recordCurrentExposeTabs;
- (void)viewDidPopOrDismiss:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)removeContentReddotInfo;
- (void)viewWillBePushed:(BOOL)arg1;
- (void)willDisappear;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (id)navigationBarBackgroundColor;
- (id)description;
- (void)onWSLocalWebViewReturn;
- (void)forceInitAllWebviews;
- (void)initCurrentIndex;
- (void)initNavigationBar;
- (void)initTitleView;
- (void)initScrollView;
- (void)updateTabContainer;
- (void)updateContentRedDotForTab;
- (void)tryCollectContentRedDotInfo:(id)arg1;
- (void)configUniformTabReddot:(id)arg1;
- (void)updateTitleViewWithTitle:(id)arg1;
- (void)setNavigationBarStyle:(unsigned long long)arg1;
- (void)reloadNavigationBar;
- (id)genTemplateConfig;
- (void)initNavigationRightItemsWithHidden:(BOOL)arg1;
- (BOOL)isCurSearchBtnVisible;
- (void)initNavigationRightItems:(BOOL)arg1;
- (id)weSeeProfileItem;
- (id)getSearchItem;
- (void)configOrUpdateNewLifeProfileItem;
- (void)setRightTabItemReddotHidden:(BOOL)arg1;
- (void)resetLastIsSearchVisible;
- (void)tryExposeSearchBtn:(id)arg1;
- (void)handleSearchBtnExpose;
- (void)onOpenSearch:(id)arg1;
- (void)onOpenUserCenter:(id)arg1;
- (double)getTabTitleMaxWidth;
- (double)getTitleWidthWithMaxArea:(double)arg1;
- (BOOL)initNavTabsWith:(id)arg1;
- (id)tabInfoWhenPageIn;
- (void)judgeCurrentTabIndex;
- (void)initContentRedDotTips:(unsigned long long)arg1 tipsShowInfo:(id)arg2 showInfo:(id)arg3 ctrlInfo:(id)arg4;
- (BOOL)hasValidBubbleShow:(id)arg1;
- (void)attemptShowContentRedDot;
- (id)getWebViewInitParam;
- (id)getWebViewInitParamForIndex:(unsigned long long)arg1;
- (id)commonURLParams;
- (id)urlParamsWithTab:(id)arg1;
- (id)currentResultView;
- (long long)currentCategory;
- (id)currentTabInfo;
- (BOOL)hasNewLifeTab;
- (void)setRedDotMsgId:(id)arg1;
- (id)tabInfoArray;
- (BOOL)isJumpContentByReddot;
- (BOOL)reusable;
- (unsigned long long)supportedInterfaceOrientations;
- (void)startForcedRotation:(long long)arg1;
- (void)finderRedDotDataChangedWithPathKey:(id)arg1;
- (void)OnSharePreConfirmViewBackToApp:(id)arg1;
- (void)OnSharePreConfirmViewStayAtWeChat;
- (void)forceTriggerFrom3rdAppAlert;
- (void)showShareFrom3rdAppView:(id)arg1;
- (void)registerYReportSdk;
- (id)getMainPageScrollView;
- (void)shouldUpdateSearchBarIconVisible:(BOOL)arg1;
- (void)shouldUpdateSearchBarIconVisibility:(id)arg1;
- (void)onHomePageSearchResultChanged:(id)arg1;
- (id)contentTitle;
- (void)setContentTitle:(id)arg1;
- (unsigned long long)VCType;
- (void)setVCType:(unsigned long long)arg1;
- (id)redDotMsgId;
- (unsigned long long)navigationBarStyle;
- (BOOL)bForbidNavigationItems;
- (void)setBForbidNavigationItems:(BOOL)arg1;
- (id)nsInitExtText;
- (void)setNsInitExtText:(id)arg1;
- (id)extParams;
- (void)setExtParams:(id)arg1;
- (BOOL)needExposeWhenUpdate;
- (void)setNeedExposeWhenUpdate:(BOOL)arg1;
- (id)tabContainer;
- (void)setTabContainer:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (id)byPassContent;
- (void)setByPassContent:(id)arg1;
- (void)setReusable:(BOOL)arg1;
- (BOOL)isUseOuterJumpCategoryOnlyForUnExposeCategory;
- (void)setIsUseOuterJumpCategoryOnlyForUnExposeCategory:(BOOL)arg1;
- (id)entranceRedDotInfo;
- (void)setEntranceRedDotInfo:(id)arg1;
- (void)setIsJumpContentByReddot:(BOOL)arg1;
- (unsigned long long)jumpContentByReddotTimestamp;
- (void)setJumpContentByReddotTimestamp:(unsigned long long)arg1;
- (unsigned long long)enterTime;
- (void)setEnterTime:(unsigned long long)arg1;
- (id)sessionID;
- (void)setSessionID:(id)arg1;
- (void)setWeSeeProfileItem:(id)arg1;
- (id)customInitParams;
- (void)setCustomInitParams:(id)arg1;
- (id)mmNewLifeTabRedDotNum;
- (void)setMmNewLifeTabRedDotNum:(id)arg1;
- (id)mmNewLifeTabCtrlInfo;
- (void)setMmNewLifeTabCtrlInfo:(id)arg1;
- (id)mmNewLifeTabRedDotShowInfo;
- (void)setMmNewLifeTabRedDotShowInfo:(id)arg1;
- (BOOL)isNewLifeSearchBtnVisible;
- (void)setIsNewLifeSearchBtnVisible:(BOOL)arg1;
- (BOOL)isLongVideoSearchBtnVisible;
- (void)setIsLongVideoSearchBtnVisible:(BOOL)arg1;
- (BOOL)lastIsSearchBtnVisible;
- (void)setLastIsSearchBtnVisible:(BOOL)arg1;
- (id)mmNewLifeHomePageSearchResult;
- (void)setMmNewLifeHomePageSearchResult:(id)arg1;
- (long long)contentRedDotCategory;
- (void)setContentRedDotCategory:(long long)arg1;
- (id)contentRedDotShowInfo;
- (void)setContentRedDotShowInfo:(id)arg1;
- (id)contentRedDotWCShowInfo;
- (void)setContentRedDotWCShowInfo:(id)arg1;
- (id)contentRedDotWCCtrlInfo;
- (void)setContentRedDotWCCtrlInfo:(id)arg1;
- (id)temporaryCategoryReddot;
- (void)setTemporaryCategoryReddot:(id)arg1;
- (BOOL)isTemporaryCategoryReddotShowingTips;
- (void)setIsTemporaryCategoryReddotShowingTips:(BOOL)arg1;
- (BOOL)hasSendOnBackFromTransient;
- (void)setHasSendOnBackFromTransient:(BOOL)arg1;
- (id)searchBtnItem;
- (void)setSearchBtnItem:(id)arg1;
- (long long)currentIndex;
- (void)setCurrentIndex:(long long)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (BOOL)isScrolling;
- (void)setIsScrolling:(BOOL)arg1;
- (id)midView;
- (void)setMidView:(id)arg1;
- (id)tabInfoModel;
- (void)setTabInfoModel:(id)arg1;
- (void).cxx_destruct;
@end
