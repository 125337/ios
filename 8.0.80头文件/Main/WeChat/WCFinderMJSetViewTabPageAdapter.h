@interface WCFinderMJSetViewTabPageAdapter : NSObject <WCFinderFeedFlowViewDelegate, WCFinderFeedFlowViewDataSource, WCFinderFeedFlowViewLayoutDelegate, WCFinderMJSetTabModelDelegate, WCFinderFeedStaticCoverCollectionViewCellDataSource>
{
    WCFinderMJSetTabModel * _tabModel; // +0x8
    WCFinderFeedFlowView * _feedFlowView; // +0x10
    WCFinderMJSetViewController * _hostVC; // +0x18
}
- (void)onTabModel:(id)arg1 appendDataFromRange:(_NSRange)arg2;
- (void)onTabModelDataStateChanged:(id)arg1;
- (long long)finderFeedFlowView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)finderFeedFlowView:(id)arg1 contentVMAtIndexPath:(id)arg2;
- (id)finderFeedFlowViewCurrentViewController:(id)arg1;
- (unsigned long long)finderFeedFlowDataBeginRefreshTime:(id)arg1;
- (BOOL)finderFeedFlowViewCanPrefetchData:(id)arg1;
- (void)finderFeedFlowView:(id)arg1 requestDataWithType:(unsigned long long)arg2;
- (unsigned long long)finderFeedFlowViewState:(id)arg1;
- (id)finderFeedFlowView:(id)arg1 reportParametersAtIndexPath:(id)arg2;
- (void)finderFeedFlowView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)browserFeedIndexPathForTid:(id)arg1;
- (BOOL)finderFeedFlowView:(id)arg1 isCustomCellAtIndexPath:(id)arg2;
- (id)finderFeedFlowView:(id)arg1 customCellAtIndexPath:(id)arg2;
- (double)finderFeedFlowView:(id)arg1 heightForCustomCellAtIndexPath:(id)arg2 itemWidth:(double)arg3;
- (unsigned long long)finderFeedFlowViewPrefetchRemainCount:(id)arg1;
- (unsigned long long)finderFeedFlowView:(id)arg1 columnCountAtSection:(unsigned long long)arg2;
- (CGSize)finderFeedFlowView:(id)arg1 cellSpaceAtSection:(unsigned long long)arg2;
- (UIEdgeInsets)finderFeedFlowView:(id)arg1 edgeInsetsAtSection:(unsigned long long)arg2;
- (id)finderFeedFlowView:(id)arg1 leftTopBadgeContent:(id)arg2;
- (id)onStaticCellLeftTopBadgeContent:(id)arg1;
- (id)tabModel;
- (void)setTabModel:(id)arg1;
- (id)feedFlowView;
- (void)setFeedFlowView:(id)arg1;
- (id)hostVC;
- (void)setHostVC:(id)arg1;
- (void).cxx_destruct;
@end
