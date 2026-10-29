@interface WSLocalWebViewController : MMUIViewController <UIScrollViewDelegate, WSWebRecommendTabsViewDelegate, IWebSearchRedPointMgrExt, HandleHaokanActionExt, WCFinderShareCustomTransitionProtocol, MMKernelExt, MMTipsViewControllerDelegate, WSInteractivePage, WCFinderRedDotExt, NewLifeMainTabUIExtension>
{
    WCStatTimerHelper * _pageTimeHelper; // +0x68
    long long _orientation; // +0x70
    MMBadgeView * _rightBarReddotView; // +0x78
    MMTipsViewController * _confirmView; // +0x80
    NSString * _lastExposeNumReddotId; // +0x88
    NSString * _lastExposeContentReddotId; // +0x90
    NSString * _lastExposeRecommendReddotId; // +0x98
    NSString * _lastExposeThirdTabReddotId; // +0xa0
    NSString * _lastExposeSettingReddotId; // +0xa8
    BOOL _bForbidNavigationItems; // +0xb0
    BOOL _needExposeWhenUpdate; // +0xb1
    BOOL _reusable; // +0xb2
    BOOL _isUseOuterJumpCategoryOnlyForUnExposeCategory; // +0xb3
    BOOL _isJumpContentByReddot; // +0xb4
    BOOL _isNewLifeSearchBtnVisible; // +0xb5
    BOOL _lastIsSearchBtnVisible; // +0xb6
    BOOL _isTemporaryCategoryReddotShowingTips; // +0xb7
    BOOL _hasSendOnBackFromTransient; // +0xb8
    BOOL _isScrolling; // +0xb9
    NSString * _contentTitle; // +0xc0
    unsigned long long _VCType; // +0xc8
    NSString * _redDotMsgId; // +0xd0
    unsigned long long _navigationBarStyle; // +0xd8
    NSString * _nsInitExtText; // +0xe0
    NSString * _extParams; // +0xe8
    WSWebRecommendTabsView * _tabContainer; // +0xf0
    unsigned long long _scene; // +0xf8
    NSString * _byPassContent; // +0x100
    _TtC6WeChat8WSReddot * _entranceRedDotInfo; // +0x108
    unsigned long long _jumpContentByReddotTimestamp; // +0x110
    unsigned long long _enterTime; // +0x118
    NSString * _sessionID; // +0x120
    UIBarButtonItem * _weSeeProfileItem; // +0x128
    NSDictionary * _customInitParams; // +0x130
    NSNumber * _mmNewLifeTabRedDotNum; // +0x138
    WCFinderRedDotCtrlInfo * _mmNewLifeTabCtrlInfo; // +0x140
    WCFinderRedDotTipsShowInfo * _mmNewLifeTabRedDotShowInfo; // +0x148
    NewLifeSearchStreamResult * _mmNewLifeHomePageSearchResult; // +0x150
    long long _contentRedDotCategory; // +0x158
    FinderSyncTipsShowInfo * _contentRedDotShowInfo; // +0x160
    WCFinderRedDotTipsShowInfo * _contentRedDotWCShowInfo; // +0x168
    WCFinderRedDotCtrlInfo * _contentRedDotWCCtrlInfo; // +0x170
    NSNumber * _temporaryCategoryReddot; // +0x178
    UIBarButtonItem * _searchBtnItem; // +0x180
    long long _currentIndex; // +0x188
    WSTemplateScrollView * _scrollView; // +0x190
    UIScrollView * _midView; // +0x198
    WSTabInfoList * _tabInfoModel; // +0x1a0
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

