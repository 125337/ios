@interface WCFinderLifeHomeViewController : MMUIViewController <WCFinderArbitraryPageViewDataSource, WCFinderLifeHomeViewModelDelegate, WCFinderArbitraryPageViewDataDelegate, WCFinderExpandableTagSelectorAction, SeePeopleNearbyViewControllerDelegate, WCFinderLifeNearbySayHelloViewDelegate, WCFinderFixAssibilityElementViewDelegate, FriendAsistSessionExt, ISettingExtChange, ILocationMgrExt, WCFinderRedDotExt, WCFinderLongVideoExt, WCFinderFeedBaseViewControllerProtocol>
{
    BOOL _displayNearPeople; // +0x68
    BOOL _nearbyLocationServiceAuthed; // +0x69
    BOOL _shouldSwitchToNearbyTab; // +0x6a
    BOOL _fetchingLocation; // +0x6b
    unsigned long long _entranceRedDotCtrlType; // +0x70
    WCFinderRedDotTipsShowInfo * _entranceRedDotShowInfo; // +0x78
    unsigned long long _mentionEntranceRedDotCtrlType; // +0x80
    WCFinderRedDotTipsShowInfo * _mentionEntranceRedDotShowInfo; // +0x88
    WCFinderLifeHomeViewModel * _viewModel; // +0x90
    WCFinderArbitraryPageView * _tabPageView; // +0x98
    WCFinderLifeHomeNoLocationAuthView * _noAuthView; // +0xa0
    MMUIButton * _searchBarBtn; // +0xa8
    NSMapTable * _adapterMap; // +0xb0
    NSMapTable * _selectorDelegateMap; // +0xb8
    long long _menuFlag; // +0xc0
    NSNumber * _locationStatus; // +0xc8
}
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)viewDidLoad;
- (void)setupNotifications;
- (void)removeNotifications;
- (void)onVCEnterBackground:(id)arg1;
- (void)onVCEnterForeground:(id)arg1;
- (void)onLocationAuthorizationStatusUpdatedWithAccuracyAuthorization:(long long)arg1;
- (void)setupViews:(BOOL)arg1;
- (void)reloadData;
- (void)onLocationFetched;
- (void)setupShowNoAuthView:(BOOL)arg1;
- (void)setupShowContent:(BOOL)arg1;
- (void)dealloc;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillBePushed:(BOOL)arg1;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (void)viewWillBePushOrPresent:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (BOOL)showNavigationBarSepLine;
- (void)onOpenFinderLongVideoViewController:(id /* block */)arg1;
- (void)updateMenuWhenTabChange;
- (void)refreshMenuPost;
- (void)setMenuFlag:(long long)arg1;
- (id)createMenuItem:(id)arg1 iconName:(id)arg2 action:(SEL)arg3;
- (int)commentScene;
- (void)onLifeHomeVM:(id)arg1 firstPageFinish:(BOOL)arg2;
- (void)onLifeHomeVMLocationAuthChanged:(id)arg1;
- (void)onLifeHomeVM:(id)arg1 pageDatasChangedAtIndex:(long long)arg2;
- (void)onLifeHomeVM:(id)arg1 selectPage:(id)arg2;
- (id)arbitraryTabView:(id)arg1 pageViewForIdentifier:(id)arg2 index:(long long)arg3;
- (id)arbitraryTabView:(id)arg1 pageTabNameForIdentifier:(id)arg2 index:(long long)arg3;
- (id)arbitraryTabView:(id)arg1 pageTabViewForIndex:(long long)arg2;
- (id)arbitraryTabView:(id)arg1 uniqueObjectForPage:(long long)arg2;
- (id)arbitraryTabView:(id)arg1 bannerViewForIndex:(long long)arg2;
- (id)nearbyBannerViewWithTabView:(id)arg1 index:(long long)arg2;
- (void)arbitraryTabView:(id)arg1 didEndDisplayViewAtIndex:(long long)arg2 pageView:(id)arg3;
- (void)arbitraryTabView:(id)arg1 willDisplayViewAtIndex:(long long)arg2 pageView:(id)arg3;
- (void)arbitraryTabView:(id)arg1 didDisplayViewAtIndex:(long long)arg2 pageView:(id)arg3;
- (void)onArbitraryTabView:(id)arg1 selectedPageChangedFrom:(long long)arg2 to:(long long)arg3;
- (id)apdaterForPageIndex:(long long)arg1;
- (id)createFeedFlowView;
- (void)arbitraryTabView:(id)arg1 expectPageContentInset:(UIEdgeInsets)arg2 minSize:(CGSize)arg3 forIndex:(long long)arg4 pageView:(id)arg5 pageVC:(id)arg6 identifier:(id)arg7;
- (void)onArbitraryTabViewClickRetry:(id)arg1;
- (id)arbitraryTabView:(id)arg1 innerScrollViewForPageView:(id)arg2;
- (void)onSearchBarBtnClick:(id)arg1;
- (id)fixAssibilityElementsForView:(id)arg1;
- (void)onSelectorWithTag:(id)arg1 changeSelectFilter:(id)arg2;
- (void)handleMenuPost;
- (void)handleMenuOpenCollect;
- (void)handleMenuPeople;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (BOOL)switchToLiveTab;
- (BOOL)switchToOtherTab;
- (void)reloadNearByView:(id)arg1;
- (void)_updateNearPeopleTab;
- (void)updateNearByPeopleTabView:(id)arg1;
- (void)finderRedDotDataChangedWithPathKey:(id)arg1;
- (void)onSettingExtChanged:(long long)arg1;
- (void)onClickSayHelloButton;
- (void)onFriendAssistUnreadCountChanged;
- (void)registerYReportSdk;
- (id)entranceRedDotReportJsonStrWithType:(unsigned long long)arg1 showInfo:(id)arg2;
- (BOOL)displayNearPeople;
- (void)setDisplayNearPeople:(BOOL)arg1;
- (BOOL)nearbyLocationServiceAuthed;
- (void)setNearbyLocationServiceAuthed:(BOOL)arg1;
- (BOOL)shouldSwitchToNearbyTab;
- (void)setShouldSwitchToNearbyTab:(BOOL)arg1;
- (unsigned long long)entranceRedDotCtrlType;
- (void)setEntranceRedDotCtrlType:(unsigned long long)arg1;
- (id)entranceRedDotShowInfo;
- (void)setEntranceRedDotShowInfo:(id)arg1;
- (unsigned long long)mentionEntranceRedDotCtrlType;
- (void)setMentionEntranceRedDotCtrlType:(unsigned long long)arg1;
- (id)mentionEntranceRedDotShowInfo;
- (void)setMentionEntranceRedDotShowInfo:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)tabPageView;
- (void)setTabPageView:(id)arg1;
- (id)noAuthView;
- (void)setNoAuthView:(id)arg1;
- (id)searchBarBtn;
- (void)setSearchBarBtn:(id)arg1;
- (id)adapterMap;
- (void)setAdapterMap:(id)arg1;
- (id)selectorDelegateMap;
- (void)setSelectorDelegateMap:(id)arg1;
- (long long)menuFlag;
- (id)locationStatus;
- (void)setLocationStatus:(id)arg1;
- (BOOL)fetchingLocation;
- (void)setFetchingLocation:(BOOL)arg1;
- (void).cxx_destruct;
@end

