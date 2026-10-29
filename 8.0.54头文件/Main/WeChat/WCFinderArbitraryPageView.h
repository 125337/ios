@interface WCFinderArbitraryPageView : UIView <WCFinderTabSwitchViewDataSource, WCFinderTabSwitchViewDelegate, UIScrollViewDelegate, MMNavBarInteractiveDelegate>
{
    BOOL _autoAdjustsScrollViewInsets; // +0x8
    BOOL _autoFadeNavBarWhenHasHeader; // +0x9
    BOOL _autoSetupScrollViewNeverAdjustInset; // +0xa
    BOOL _autoAdjustScrollViewMinContentSize; // +0xb
    BOOL _tabViewBlurBG; // +0xc
    BOOL _headerPinTop; // +0xd
    BOOL _hasInitialized; // +0xe
    BOOL _beforeScrollHasCallWillDisappear; // +0xf
    id <WCFinderArbitraryPageViewDataSource> _dataSource; // +0x10
    id <WCFinderArbitraryPageViewDataDelegate> _delegate; // +0x18
    long long _statusBarConfig; // +0x20
    WCFinderTabSwitchView * _tabView; // +0x28
    UIView * _headerView; // +0x30
    double _fadeNavBarOffset; // +0x38
    NSArray * _tabIdList; // +0x40
    NSArray * _tabObjectList; // +0x48
    UIScrollView * _scrollView; // +0x50
    UILabel * _statusLabel; // +0x58
    WCFinderAnimationLoadingView * _loadingView; // +0x60
    NSMutableDictionary * _bannerCreatorMap; // +0x68
    NSMutableDictionary * _pageCreatorMap; // +0x70
    NSMutableDictionary * _pageVCMetaMap; // +0x78
    NSMutableDictionary * _pageInfoMap; // +0x80
    WCFinderArbitraryResueItem * _reuseHead; // +0x88
    long long _dequeueProcessIndex; // +0x90
    NSString * _dequeueViewIdentifier; // +0x98
    long long _willDisplayIdx; // +0xa0
    long long _beforeScrollIdx; // +0xa8
    WCFinderArbitraryPageScrollProcess * _scrollProcess; // +0xb0
    double _headerViewHeight; // +0xb8
    UIView * _headerBGView; // +0xc0
    UIView * _tabBGView; // +0xc8
    UIViewController * _selfVC; // +0xd0
    MMUIViewController * _selfMMVC; // +0xd8
    UIView * _vcTitleView; // +0xe0
    MMNavBarInteractiveConfig * _navBarConfig; // +0xe8
    id * _tmpPageInfos; // +0xf0
    CGSize _layoutSize; // +0xf8
}
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (long long)pageNumber;
- (BOOL)bounce;
- (void)setBounce:(BOOL)arg1;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)didMoveToSuperview;
- (void)registerPageClass:(Class)arg1;
- (void)registerPageClass:(Class)arg1 identifier:(id)arg2;
- (void)registerPageClass:(Class)arg1 identifier:(id)arg2 setter:(id /* block */)arg3;
- (void)registerPageVCClass:(Class)arg1 identifier:(id)arg2;
- (void)registerBannerClass:(Class)arg1;
- (void)registerBannerClass:(Class)arg1 setter:(id /* block */)arg2;
- (void)registerTabView:(Class)arg1 forIdentifier:(id)arg2 configer:(id /* block */)arg3 updater:(id /* block */)arg4;
- (void)cleanReusePageView:(id)arg1;
- (void)applyWithIds:(id)arg1;
- (void)apply:(id)arg1;
- (id)createTabIdList:(id)arg1;
- (void)reload;
- (void)setupScrollView;
- (void)reloadBannerView;
- (void)reloadBannerViewForIdx:(long long)arg1;
- (void)reloadTabViewForIdx:(long long)arg1;
- (void)reloadPageViewForIdx:(long long)arg1;
- (void)unloadPageViewAtIdex:(long long)arg1;
- (void)ensurePage:(long long)arg1 invokeUnloadVC:(BOOL)arg2;
- (void)selectedPageAtIdx:(long long)arg1 animated:(BOOL)arg2;
- (void)refreshTabs;
- (void)displayViewsInArea:(double)arg1 right:(double)arg2 returnPages:(id *)arg3;
- (void)unloadUnDisplayPages;
- (id)accessibilityElements;
- (void)setupVCNavBar;
- (void)setupVCNavBar:(id)arg1;
- (id)vcTitleView;
- (void)updateStatusBarConfig;
- (id)fadeTintColor;
- (id)normalTintColor;
- (BOOL)isSetNormalToBlackStyle;
- (void)setHeaderView:(id)arg1;
- (void)moveHeadersToView:(id)arg1;
- (void)adjustPositionForHeaders:(id)arg1;
- (void)onHeaderViewFrameChange;
- (double)calculateContentInsetTop;
- (void)updateTabViewPos;
- (id)_findReuseViewForIdentifier:(id)arg1;
- (id)_findReuseVCForIdentifier:(id)arg1;
- (void)_enqueuePageView:(id)arg1 identifier:(id)arg2;
- (void)_enqueuePageVC:(id)arg1 identifier:(id)arg2;
- (id)_ensureBannerForPage:(long long)arg1;
- (id)dequeueBannerView:(Class)arg1 index:(long long)arg2;
- (id)_dequeueBannerView:(Class)arg1 index:(long long)arg2;
- (id)dequeueTabView:(id)arg1;
- (id)pageViewAtIndex:(long long)arg1;
- (unsigned long long)indexForBanner:(id)arg1;
- (unsigned long long)indexForVC:(id)arg1;
- (long long)currentIndex;
- (id)getPageInfo:(BOOL)arg1 idx:(long long)arg2;
- (id)dequeuePageView:(Class)arg1 index:(long long)arg2;
- (id)dequeuePageViewWithIdentifier:(id)arg1 index:(long long)arg2;
- (id)_dequeuePageView:(id)arg1 index:(long long)arg2;
- (id)dequeuePageViewVC:(id)arg1 index:(long long)arg2;
- (id)_dequeuePageViewVC:(id)arg1 index:(long long)arg2;
- (id)_findScrollViewInPageView:(id)arg1;
- (BOOL)onTabSwitchViewUserSelectIdx:(long long)arg1 oldIdx:(long long)arg2 animated:(BOOL)arg3 context:(void *)arg4 completion:(id /* block */)arg5;
- (void)onTabSwitchView:(id)arg1 selectedIndexChangedFrom:(long long)arg2 to:(long long)arg3;
- (void)runCollectionAction:(id /* block */)arg1 animate:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint *)arg3;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (ConfigOffset)createContentOffsetAlignView:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)_handleEndDrag:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)withEndScrollProcess:(id /* block */)arg1;
- (void)_onDraggingScrollViewDidScroll:(id)arg1;
- (void)notifyPageVCEndDrag;
- (void)showLoading;
- (void)showEmpty;
- (void)showError:(id)arg1;
- (void)setupStatusLabelWithText:(id)arg1;
- (double)blankHeight;
- (double)blank30PercentPos;
- (void)setupLoadingView:(BOOL)arg1;
- (void)onClickRetry;
- (long long)backForwardSelected;
- (void)hookScrollView:(id)arg1 index:(long long)arg2;
- (void)addScrollViewDidSrollMethod:(id)arg1 delegate:(id)arg2;
- (void)emptyImplScrollViewDidScroll:(id)arg1;
- (void)onPageScrollViewDidScroll:(id)arg1 index:(long long)arg2;
- (void)positionHeaderViewWithPageInfo:(id)arg1;
- (void)_swizzleHostVC:(id)arg1;
- (void)_swizzleVC:(id)arg1;
- (void)_swizzleVCLifeTimeMethod:(id)arg1;
- (void)_fillLifeCycleMethodForPageInfo:(id)arg1;
- (void)_swizzleVC:(id)arg1 lifeTimeMethod:(SEL)arg2;
- (void)emptyViewLifeTimeMethod:(BOOL)arg1;
- (void)_swizzleUseTransparentNavibar:(id)arg1;
- (long long)numberOfTabSwitchView:(id)arg1;
- (id)tabSwitchView:(id)arg1 customTabViewAtIndex:(long long)arg2;
- (id)tabSwitchView:(id)arg1 titleForTabAtIndex:(long long)arg2;
- (id)tabSwitchView:(id)arg1 uniqueObjectForIndex:(unsigned long long)arg2;
- (unsigned long long)tabSwitchView:(id)arg1 unreadCountForTabAtIndex:(long long)arg2;
- (void)notifyPageWillAppear:(id)arg1 animated:(BOOL)arg2;
- (void)notifyPageDidAppear:(id)arg1 animated:(BOOL)arg2;
- (void)notifyPageWillDisappear:(id)arg1 animated:(BOOL)arg2;
- (void)notifyPageDidDisappear:(id)arg1 animated:(BOOL)arg2;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)autoAdjustsScrollViewInsets;
- (void)setAutoAdjustsScrollViewInsets:(BOOL)arg1;
- (BOOL)autoFadeNavBarWhenHasHeader;
- (void)setAutoFadeNavBarWhenHasHeader:(BOOL)arg1;
- (BOOL)autoSetupScrollViewNeverAdjustInset;
- (void)setAutoSetupScrollViewNeverAdjustInset:(BOOL)arg1;
- (BOOL)autoAdjustScrollViewMinContentSize;
- (void)setAutoAdjustScrollViewMinContentSize:(BOOL)arg1;
- (long long)statusBarConfig;
- (void)setStatusBarConfig:(long long)arg1;
- (BOOL)tabViewBlurBG;
- (void)setTabViewBlurBG:(BOOL)arg1;
- (id)tabView;
- (void)setTabView:(id)arg1;
- (id)headerView;
- (double)fadeNavBarOffset;
- (void)setFadeNavBarOffset:(double)arg1;
- (BOOL)headerPinTop;
- (void)setHeaderPinTop:(BOOL)arg1;
- (id)tabIdList;
- (void)setTabIdList:(id)arg1;
- (id)tabObjectList;
- (void)setTabObjectList:(id)arg1;
- (CGSize)layoutSize;
- (void)setLayoutSize:(CGSize)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (id)statusLabel;
- (void)setStatusLabel:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)bannerCreatorMap;
- (void)setBannerCreatorMap:(id)arg1;
- (id)pageCreatorMap;
- (void)setPageCreatorMap:(id)arg1;
- (id)pageVCMetaMap;
- (void)setPageVCMetaMap:(id)arg1;
- (id)pageInfoMap;
- (void)setPageInfoMap:(id)arg1;
- (id)reuseHead;
- (void)setReuseHead:(id)arg1;
- (long long)dequeueProcessIndex;
- (void)setDequeueProcessIndex:(long long)arg1;
- (id)dequeueViewIdentifier;
- (void)setDequeueViewIdentifier:(id)arg1;
- (BOOL)hasInitialized;
- (void)setHasInitialized:(BOOL)arg1;
- (long long)willDisplayIdx;
- (void)setWillDisplayIdx:(long long)arg1;
- (long long)beforeScrollIdx;
- (void)setBeforeScrollIdx:(long long)arg1;
- (BOOL)beforeScrollHasCallWillDisappear;
- (void)setBeforeScrollHasCallWillDisappear:(BOOL)arg1;
- (id)scrollProcess;
- (void)setScrollProcess:(id)arg1;
- (double)headerViewHeight;
- (void)setHeaderViewHeight:(double)arg1;
- (id)headerBGView;
- (void)setHeaderBGView:(id)arg1;
- (id)tabBGView;
- (void)setTabBGView:(id)arg1;
- (id)selfVC;
- (void)setSelfVC:(id)arg1;
- (id)selfMMVC;
- (void)setSelfMMVC:(id)arg1;
- (void)setVcTitleView:(id)arg1;
- (id)navBarConfig;
- (void)setNavBarConfig:(id)arg1;
- (id *)tmpPageInfos;
- (void)setTmpPageInfos:(id *)arg1;
- (void).cxx_destruct;
@end

