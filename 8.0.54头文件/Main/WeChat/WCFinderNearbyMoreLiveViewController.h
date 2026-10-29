@interface WCFinderNearbyMoreLiveViewController : MMUIViewController <WCFinderFeedBaseViewControllerProtocol, WCFinderTabPageViewDataSource, WCFinderTabPageViewDelegate, WCFinderNearbyMoreLiveViewModelDelegate, WCFinderNearbyMoreLivePageViewManagerDelegate, WCFinderLocationServiceExt, MMLiveMorphDismissTarget, WCFinderNearbyLiveTabViewContainerDelegate, IWCFinderLiveNearbyReporterCallback>
{
    BOOL _enableReddot; // +0x68
    BOOL _notAuthorizedTipEnable; // +0x69
    BOOL _useDarkStyle; // +0x6a
    BOOL _redDotMode; // +0x6b
    BOOL _isFirstTabReady; // +0x6c
    BOOL _isLocationServiceAuthrized; // +0x6d
    BOOL _isReloadingByLocationAuthorizationChanged; // +0x6e
    unsigned int _homePageJumpScene; // +0x70
    NSString * _redDotModeObjectId; // +0x78
    id /* block */ _scrollAnimationStartBlock; // +0x80
    id /* block */ _scrollAnimationEndBlock; // +0x88
    WCFinderTabPageView * _tabPageView; // +0x90
    WCFinderEmptyTipsView * _emptyTipsView; // +0x98
    NSMutableDictionary * _tabId2pageManagerDict; // +0xa0
    UIColor * _navigationBarColor; // +0xa8
    WCFinderNearbyMoreLiveViewModel * _viewModel; // +0xb0
    unsigned long long _initSelectedTabId; // +0xb8
    UIView * _unAuthorizedCityView; // +0xc0
    WCFinderLivePageStayReporter * _exposeReporter; // +0xc8
    UIView * _scrollEducationView; // +0xd0
    UIView * _scrollLabelView; // +0xd8
    MMUIButton * _maskView; // +0xe0
    UIView * _scrollLabelContainer; // +0xe8
    WCFinderLiveTabInfo * _currentPreloadTabInfo; // +0xf0
    UIView * _firstCell; // +0xf8
    UIView * _firstCellParent; // +0x100
    UIView * _firstCellMask; // +0x108
    WCFinderCreateCoordinator * _createCoordinator; // +0x110
    CGPoint _eduAnimationOffsetBefore; // +0x118
    CGRect _firstCellRect; // +0x128
}
- (id)initWithLiveTabList:(id)arg1 selectedTabId:(unsigned long long)arg2 fromScene:(int)arg3;
- (void)dealloc;
- (void)setLiveTabList:(id)arg1;
- (void)setPrefetchTabType:(unsigned long long)arg1 preType:(unsigned long long)arg2 nextType:(unsigned long long)arg3;
- (void)setSelectedLiveTabId:(unsigned long long)arg1;
- (void)viewDidLoad;
- (void)onSearchClicked;
- (unsigned long long)getSelectTabId;
- (void)onBackButtonClicked:(id)arg1;
- (void)onStartLiveButtonClicked:(id)arg1;
- (void)onEnterBackground;
- (void)onEnterForeground;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (void)viewDidBePushed:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (BOOL)shouldInteractivePop;
- (id)tabPageView;
- (id)emptyTipsView;
- (id)unAuthorizedCityView;
- (id)genScrollEducationView;
- (long long)preferredStatusBarStyle;
- (id)navigationBarBackgroundColor;
- (long long)overrideUserInterfaceStyle;
- (id)tabId2pageManagerDict;
- (void)goToSettingLocationAuthorization:(id)arg1;
- (unsigned long long)defaultSelectedTabIndex;
- (id)currentStyleColor:(id)arg1;
- (unsigned int)getTabType;
- (long long)getEnterType;
- (unsigned long long)getLbsStreamScene;
- (id)liveExposeReportCommentScene:(id)arg1;
- (void)reportExposeTabInfo:(id)arg1 toTabInfo:(id)arg2 isEnter:(BOOL)arg3 fromSubTabId:(unsigned long long)arg4 toSubTabId:(unsigned long long)arg5;
- (id)moreLiveReportPageUdfKv:(BOOL)arg1;
- (unsigned long long)moreLiveReportEnterType;
- (void)preloadTabPage:(id)arg1 loadNearbyTab:(BOOL)arg2;
- (void)preloadWithTabInfo:(id)arg1 pullType:(unsigned long long)arg2;
- (BOOL)canLocationAuthorizationViewShow:(unsigned long long)arg1;
- (BOOL)shouldShowUnAuthorizedView:(unsigned long long)arg1;
- (void)reloadTabPage:(unsigned long long)arg1;
- (void)checkUpdateSubTabContextId:(unsigned long long)arg1;
- (BOOL)isShowMoreLiveScene;
- (id)getFirstLiveCell;
- (void)checkStartReportFluencyInfo;
- (BOOL)canShowScrollAnimation;
- (void)tryStartPerformAnimation;
- (void)tryShowScrollAnimation;
- (void)tryCancelPerformScrollAnimation:(BOOL)arg1;
- (void)onMaskViewClicked;
- (void)onSwipeRightOnView:(id)arg1;
- (void)onSwipeLeftOnView:(id)arg1;
- (void)onScrollEducationClick;
- (void)scrollAnimateJumpToNextTab;
- (void)cleanScrollEduView:(BOOL)arg1;
- (void)showScrollAnimationEducation;
- (void)stopCellAnimation;
- (void)animateFirstCell;
- (void)showLiveHalfVC;
- (void)startLive;
- (BOOL)showSearchEntry;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
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
- (void)finderTabPageViewWillSwitchPage:(id)arg1;
- (void)onGetLiveTabListSuccess;
- (void)onGetLiveTabListError;
- (void)firstPageRequestFinishedInFinderMoreLivePageViewManager:(id)arg1;
- (void)finderMoreLivePageViewManger:(id)arg1 jumpToTabInfo:(id)arg2;
- (void)finderMoreLivePageViewMangerEnterLive:(id)arg1 dataItem:(id)arg2 isFold:(BOOL)arg3 index:(unsigned long long)arg4 isAutoPlaying:(BOOL)arg5;
- (id)finderMoreLivePageViewMangerChannelExtra:(id)arg1 tid:(id)arg2 isFold:(BOOL)arg3 index:(unsigned long long)arg4;
- (id)finderMoreLiveFeedViewBgColor;
- (BOOL)finderMoreLivePageAlwaysDarkStyle;
- (void)finderMoreLivePageReady;
- (void)finderMoreLivePageViewBeginDrag:(id)arg1;
- (void)finderMoreLiveAutoPlayChanged:(id)arg1;
- (void)finderMoreLiveReportFollowFoldAction:(unsigned long long)arg1;
- (BOOL)finderMoreLivePageCanPrefetchBottom;
- (void)finderMoreLiveSwitchSubTabId:(id)arg1 fromSubTabId:(unsigned long long)arg2 toSubTabId:(unsigned long long)arg3;
- (void)onFinderLocationServiceAuthorizationStatusDidChange:(BOOL)arg1;
- (BOOL)shouldLiveUseMorphDismissForCustomKey:(id)arg1;
- (CGRect)liveMorphDismissTargetFrameOnScreenForCustomKey:(id)arg1 videoSize:(CGSize)arg2;
- (id)visibleCellForLiveId:(id)arg1;
- (void)onNearbyStartLiveClick:(unsigned long long)arg1;
- (long long)getSdkEnterType;
- (void)registerYReportSdk;
- (BOOL)enableReddot;
- (void)setEnableReddot:(BOOL)arg1;
- (BOOL)notAuthorizedTipEnable;
- (void)setNotAuthorizedTipEnable:(BOOL)arg1;
- (BOOL)useDarkStyle;
- (void)setUseDarkStyle:(BOOL)arg1;
- (BOOL)redDotMode;
- (void)setRedDotMode:(BOOL)arg1;
- (id)redDotModeObjectId;
- (void)setRedDotModeObjectId:(id)arg1;
- (unsigned int)homePageJumpScene;
- (void)setHomePageJumpScene:(unsigned int)arg1;
- (id /* block */)scrollAnimationStartBlock;
- (void)setScrollAnimationStartBlock:(id /* block */)arg1;
- (id /* block */)scrollAnimationEndBlock;
- (void)setScrollAnimationEndBlock:(id /* block */)arg1;
- (void)setTabPageView:(id)arg1;
- (void)setEmptyTipsView:(id)arg1;
- (void)setTabId2pageManagerDict:(id)arg1;
- (id)navigationBarColor;
- (void)setNavigationBarColor:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (unsigned long long)initSelectedTabId;
- (void)setInitSelectedTabId:(unsigned long long)arg1;
- (BOOL)isFirstTabReady;
- (void)setIsFirstTabReady:(BOOL)arg1;
- (void)setUnAuthorizedCityView:(id)arg1;
- (BOOL)isLocationServiceAuthrized;
- (void)setIsLocationServiceAuthrized:(BOOL)arg1;
- (id)exposeReporter;
- (void)setExposeReporter:(id)arg1;
- (id)scrollEducationView;
- (void)setScrollEducationView:(id)arg1;
- (id)scrollLabelView;
- (void)setScrollLabelView:(id)arg1;
- (id)maskView;
- (void)setMaskView:(id)arg1;
- (id)scrollLabelContainer;
- (void)setScrollLabelContainer:(id)arg1;
- (CGPoint)eduAnimationOffsetBefore;
- (void)setEduAnimationOffsetBefore:(CGPoint)arg1;
- (id)currentPreloadTabInfo;
- (void)setCurrentPreloadTabInfo:(id)arg1;
- (id)firstCell;
- (void)setFirstCell:(id)arg1;
- (id)firstCellParent;
- (void)setFirstCellParent:(id)arg1;
- (id)firstCellMask;
- (void)setFirstCellMask:(id)arg1;
- (CGRect)firstCellRect;
- (void)setFirstCellRect:(CGRect)arg1;
- (BOOL)isReloadingByLocationAuthorizationChanged;
- (void)setIsReloadingByLocationAuthorizationChanged:(BOOL)arg1;
- (id)createCoordinator;
- (void)setCreateCoordinator:(id)arg1;
- (void).cxx_destruct;
@end

