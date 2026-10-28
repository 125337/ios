@interface WCFinderMultiMoreLiveViewController : MMCPUIViewController <WCFinderTabPageViewDataSource, WCFinderTabPageViewDelegate, WCFinderDiscoveryLiveTabPageViewModelDelegate, WCFinderNearbyMoreLivePageViewManagerDelegate, WCFinderFeedBaseViewControllerProtocol>
{
    WCFinderTabPageView * _tabPageView; // +0x70
    WCFinderEmptyTipsView * _emptyTipsView; // +0x78
    NSMutableDictionary * _tabId2pageManagerDict; // +0x80
    UIColor * _navigationBarColor; // +0x88
    WCFinderDiscoveryLiveTabPageViewModel * _viewModel; // +0x90
    MultiMoreLiveEnterParams * _customEnterParams; // +0x98
    unsigned long long _initSelectedTabId; // +0xa0
    unsigned long long _initSelectedSubTabId; // +0xa8
    WCFinderLivePageStayReporter * _exposeReporter; // +0xb0
}
- (id)initWithCustomEnterParams:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)dealloc;
- (void)onBackButtonClicked:(id)arg1;
- (void)onEnterBackground;
- (void)onEnterForeground;
- (unsigned long long)defaultSelectedTabIndex;
- (id)tabPageView;
- (id)emptyTipsView;
- (id)channelExtraWithManager:(id)arg1 isClick:(BOOL)arg2 contentVM:(id)arg3 index:(unsigned long long)arg4 isAutoPlaying:(BOOL)arg5;
- (long long)preferredStatusBarStyle;
- (id)navigationBarBackgroundColor;
- (long long)overrideUserInterfaceStyle;
- (id)tabId2pageManagerDict;
- (id)currentStyleColor:(id)arg1;
- (void)reloadTabPage:(unsigned long long)arg1;
- (id)reportPassInfoDict;
- (void)reportExposeTabInfo:(id)arg1 toTabInfo:(id)arg2 isEnter:(BOOL)arg3;
- (void)checkUpdateSubTabContextId:(unsigned long long)arg1;
- (unsigned int)getTabType;
- (void)updateTitle;
- (long long)numberOfTabPageInFinderTabPageView:(id)arg1;
- (id)tabViewContainerInFinderTabPageView:(id)arg1;
- (double)heightForTabViewContainerInFinderTabPageView:(id)arg1;
- (id)finderTabPageView:(id)arg1 tabViewAtIndex:(unsigned long long)arg2;
- (double)finderTabPageView:(id)arg1 heightForTabViewAtIndex:(unsigned long long)arg2;
- (id)finderTabPageView:(id)arg1 pageViewAtIndex:(unsigned long long)arg2;
- (id)emptyTipsConfigInFinderTabPagView:(id)arg1;
- (double)topInsetOfFinderTabPageView:(id)arg1;
- (void)finderTabPageView:(id)arg1 alphaOfTabContainerChanged:(double)arg2;
- (void)finderTabPageView:(id)arg1 switchFromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (void)onFinderGetLiveTabsInfoFinished:(BOOL)arg1;
- (void)finderMoreLivePageViewManger:(id)arg1 jumpToTabInfo:(id)arg2;
- (id)finderMoreLiveFeedViewBgColor;
- (BOOL)finderMoreLivePageAlwaysDarkStyle;
- (void)finderMoreLivePageViewMangerEnterLive:(id)arg1 contentVM:(id)arg2 isFold:(BOOL)arg3 index:(unsigned long long)arg4 isAutoPlaying:(BOOL)arg5;
- (id)finderMoreLivePageViewMangerChannelExtra:(id)arg1 contentVM:(id)arg2 isFold:(BOOL)arg3 index:(unsigned long long)arg4;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (void)setTabPageView:(id)arg1;
- (void)setEmptyTipsView:(id)arg1;
- (void)setTabId2pageManagerDict:(id)arg1;
- (id)navigationBarColor;
- (void)setNavigationBarColor:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)customEnterParams;
- (void)setCustomEnterParams:(id)arg1;
- (unsigned long long)initSelectedTabId;
- (void)setInitSelectedTabId:(unsigned long long)arg1;
- (unsigned long long)initSelectedSubTabId;
- (void)setInitSelectedSubTabId:(unsigned long long)arg1;
- (id)exposeReporter;
- (void)setExposeReporter:(id)arg1;
- (void).cxx_destruct;
@end
