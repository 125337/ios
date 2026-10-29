@interface WCFinderLiveHomePageHistorySectionView : WCFinderLiveHomePageBaseSectionView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, WCFinderLiveHomePageFooterViewActionDelegate, WCFinderLiveHomePageHistoryCellDelegate>
{
    id <WCFinderLiveHomePageHistorySectionViewDelegate> _delegate; // +0x8
    WCFinderLiveHomePageFooterView * _footerView; // +0x10
}
+ (double)viewHeightInWidth:(double)arg1 styleInfo:(id)arg2;
- (void)layoutSubviews;
- (id)generateCollectionView;
- (void)prepareForReuse;
- (void)resetState;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)footerView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)didClickFooterRefresh:(id)arg1;
- (BOOL)isEnableFooterTrigerLoading:(id)arg1;
- (void)onContainerSectionVMRefreshAllData:(id)arg1;
- (void)onContainerSectionVMFetchNextPageData:(id)arg1;
- (void)onContainerSectionVMNoMoreData;
- (void)onContainerSectionVMFetchFailWithErroCode:(long long)arg1;
- (void)onContainerSectionVMHomePageResetState;
- (void)onContainerSectionVMHomePageDeleteTid:(id)arg1;
- (void)onHistoryCellLongPress:(id)arg1;
- (void)onMenuDelete:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setFooterView:(id)arg1;
- (void).cxx_destruct;
@end

