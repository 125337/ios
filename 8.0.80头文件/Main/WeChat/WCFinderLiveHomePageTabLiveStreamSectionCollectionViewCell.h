@interface WCFinderLiveHomePageTabLiveStreamSectionCollectionViewCell : WCFinderLiveFeedBaseStyleableCell <WCFinderTabPageViewDataSource, WCFinderTabPageViewDelegate, WCFinderLiveHomePageTabLiveStreamSectionViewModelDelegate, WCFinderLiveHomePageAggregationTabLiveStreamAdapterDelegate, UIScrollViewDelegate, WCFinderFlowTopTipsViewDelegate, WCFinderLiveHomePageAutoPlayProtocol, WCFinderLiveHomePageDataRefreshProtocol>
{
    WCFinderLiveHomePageTabLiveStreamSectionViewModel * _vm; // +0x8
    id <WCFinderLiveHomePageTabLiveStreamSectionDelegate> _delegate; // +0x10
    WCFinderTabPageView * _tabPageView; // +0x18
    NSMutableDictionary * _pageAdapterDict; // +0x20
    NSMapTable * _flowViewsCache; // +0x28
}
+ (id)cellIdentifier;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)initViewsIfNeeded;
- (void)updateWithVM:(id)arg1;
- (void)checkLocationAuthorize;
- (id)pageAdapterDict;
- (void)jumpToTabInfo:(id)arg1;
- (void)selectTabId:(unsigned long long)arg1;
- (BOOL)canLocationAuthorizationViewShow:(unsigned long long)arg1;
- (void)scrollToTop;
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
- (void)checkRecoverTabPagesContentOffsetExceptCurrenTabPage;
- (double)heightForHeaderViewChangeAlphaInFinderTabPageView:(id)arg1;
- (void)onLiveHomePageAggregationTabLiveStreamScrollDidScroll:(id)arg1;
- (void)onLiveHomePageAggregationTabLiveStreamDidEndScrolling:(id)arg1;
- (void)onLiveHomePageAggregationTabLiveStreamDidScrollToTop:(id)arg1;
- (void)onLiveHomePageAggregationTabLiveStream:(id)arg1 jumpToTabInfo:(id)arg2;
- (void)onLiveHomePageAggregationTabLiveStream:(id)arg1 clickRecommendUrl:(id)arg2;
- (void)onLiveHomePageAggregationTabLiveStream:(id)arg1 clickContact:(id)arg2 feedVM:(id)arg3;
- (void)onLiveHomePageAggregationTabLiveStream:(id)arg1 selectElementVM:(id)arg2 playableCell:(id)arg3 indexPath:(id)arg4;
- (void)onLiveHomePageAggregationTabLiveStream:(id)arg1 aggregationCellClickJumpLive:(id)arg2;
- (BOOL)shouldLiveHomePageAggregationTabLiveStreamHandleSelectAction:(id)arg1;
- (void)onLiveHomePageAggregationTabLiveStream:(id)arg1 aggregationCellClickJumpThemeTemplate:(id)arg2 entryBuffer:(id)arg3 jumpBypass:(id)arg4;
- (void)onLiveHomePageAggregationTabLiveStreamFirstPageFinish:(id)arg1;
- (void)onLiveHomePageAggregationTabLiveStream:(id)arg1 switchSubTabFrom:(unsigned long long)arg2 toSubTabId:(unsigned long long)arg3;
- (void)onLiveHomePageAggregationTabLiveStream:(id)arg1 forwardAction:(id)arg2;
- (void)onLiveHomePageAggregationTabLiveStreamNeedAutoPlay:(id)arg1;
- (void)onLiveHomePageAggregationTabLiveStreamCheckAutoPlay:(id)arg1;
- (void)onLiveHomePageAggregationTabLiveStream:(id)arg1 clickFriendLikeReason:(id)arg2;
- (id)collectionView;
- (id)indexPathsForVisibleItems;
- (id)curPageAdapter;
- (id)curFeedFlowView;
- (void)autoPlayStop;
- (void)autoPlayStart;
- (void)onContainerSectionVMHomePageResetState;
- (void)onContainerSectionVMHomePageDeleteTid:(id)arg1;
- (void)onContainerSectionVMDisAppear;
- (id)currentSelectTabInfo;
- (void)onLocationAuthorizationStatusUpdated;
- (void)reloadCityTabPage;
- (void)checkPreloadIfNeeded;
- (void)preloadTabPage:(id)arg1 loadNearbyTab:(BOOL)arg2;
- (void)preloadWithTabInfo:(id)arg1 pullType:(unsigned long long)arg2;
- (id)vm;
- (void)setVm:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)tabPageView;
- (void)setTabPageView:(id)arg1;
- (void)setPageAdapterDict:(id)arg1;
- (id)flowViewsCache;
- (void)setFlowViewsCache:(id)arg1;
- (void).cxx_destruct;
@end
