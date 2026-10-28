@interface WCFinderFeedFlowViewAdapter : NSObject <WCFinderFeedFlowViewDelegate, WCFinderStreamLoadingStateDelegate, WCFinderFeedFlowViewAdapterDataSourceDelegate, WCFinderStaticCoverCellMenuHandle, WCFinderFlowLayoutDelegate>
{
    BOOL _allowTopRefresh; // +0x8
    BOOL _allowPrefetch; // +0x9
    int _listVCScene; // +0xc
    id <WCFinderFeedFlowViewAdapterDeleagte> _delegate; // +0x10
    WCFinderFeedFlowView * _feedFlowView; // +0x18
    NSObject * _dataSource; // +0x20
    WCFinderStreamLoadingState * _loadingState; // +0x28
    unsigned long long _state; // +0x30
    unsigned long long _refreshTime; // +0x38
    id <WCFinderFeedFlowAdapterFeedVisitor> _feedVisitor; // +0x40
    id /* block */ _fetchMoreData; // +0x48
    NSString * _noMoreTips; // +0x50
    NSString * _emptyTips; // +0x58
    WCFinderFeedFlowViewCellMenuComponment _menuComponment; // +0x60
    long long _columnCount; // +0x68
    id <WCFinderFeedFlowAdapterFeedVisitor> _weakFeedVisitor; // +0x70
    MMUIViewController<WCFinderFeedBaseViewControllerProtocol> * _vc; // +0x78
    id <WCFinderFeedFlowViewAdapterDataSource><WCFinderFeedFlowViewDataSource> _dataWrapper; // +0x80
    NSMutableSet * _registerViews; // +0x88
    WCFinderFeedFlowViewHeaderComponment _headerComponment; // +0x90
}
+ (id)adapterWithVC:(id)arg1 listVCScene:(int)arg2;
- (id)init;
- (void)setFeedFlowView:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setAllowPrefetch:(BOOL)arg1;
- (void)setLoadingState:(id)arg1;
- (void)_updateLoadingState;
- (void)setNoMoreTips:(id)arg1;
- (unsigned long long)_genFlowViewState;
- (void)onLoadingStateChanged:(id)arg1;
- (unsigned long long)finderFeedFlowDataBeginRefreshTime:(id)arg1;
- (void)finderFeedFlowView:(id)arg1 requestDataWithType:(unsigned long long)arg2;
- (void)finderFeedFlowView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (BOOL)finderFeedFlowViewCanPrefetchData:(id)arg1;
- (id)finderFeedFlowViewCurrentViewController:(id)arg1;
- (unsigned long long)finderFeedFlowViewState:(id)arg1;
- (BOOL)finderFeedFlowView:(id)arg1 layout:(id)arg2 pinHeaderToVisibleBoundsAtSection:(unsigned long long)arg3;
- (void)finderFeedFlowViewDidScroll:(id)arg1;
- (id)cellConfigForFeed:(id)arg1;
- (id)finderFeedFlowView:(id)arg1 tipsType:(unsigned long long)arg2 inState:(unsigned long long)arg3;
- (BOOL)coverCellShouldHandleMenuGesgture:(id)arg1 gesture:(id)arg2;
- (id)getCollectionView;
- (void)updateFooterView;
- (WCFinderFeedFlowViewHeaderComponment *)getHeaderComponment;
- (WCFinderFeedFlowViewCellMenuComponment *)getMenuComponment;
- (void)ensureSupplementaryView:(Class)arg1 kind:(id)arg2;
- (BOOL)onStaticCoverCellShowMenu:(id)arg1 gesture:(id)arg2;
- (void)handleMenuItem:(id)arg1;
- (void)collectionView:(id)arg1 insets:(UIEdgeInsets *)arg2 forSection:(long long)arg3;
- (long long)collectionView:(id)arg1 flowLayout:(id)arg2 columnForSection:(long long)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)feedFlowView;
- (id)dataSource;
- (id)loadingState;
- (unsigned long long)state;
- (void)setState:(unsigned long long)arg1;
- (unsigned long long)refreshTime;
- (void)setRefreshTime:(unsigned long long)arg1;
- (BOOL)allowTopRefresh;
- (void)setAllowTopRefresh:(BOOL)arg1;
- (BOOL)allowPrefetch;
- (id)feedVisitor;
- (void)setFeedVisitor:(id)arg1;
- (id /* block */)fetchMoreData;
- (void)setFetchMoreData:(id /* block */)arg1;
- (id)noMoreTips;
- (id)emptyTips;
- (void)setEmptyTips:(id)arg1;
- (WCFinderFeedFlowViewHeaderComponment)headerComponment;
- (void)setHeaderComponment:(WCFinderFeedFlowViewHeaderComponment)arg1;
- (WCFinderFeedFlowViewCellMenuComponment)menuComponment;
- (void)setMenuComponment:(WCFinderFeedFlowViewCellMenuComponment)arg1;
- (long long)columnCount;
- (void)setColumnCount:(long long)arg1;
- (id)weakFeedVisitor;
- (void)setWeakFeedVisitor:(id)arg1;
- (id)vc;
- (void)setVc:(id)arg1;
- (id)dataWrapper;
- (void)setDataWrapper:(id)arg1;
- (id)registerViews;
- (void)setRegisterViews:(id)arg1;
- (int)listVCScene;
- (void)setListVCScene:(int)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
