@interface WCFinderLiveHomePageFollowSectionView : WCFinderLiveHomePageBaseSectionView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, WCFinderLiveHomePageFooterViewActionDelegate>
{
    id <WCFinderLiveHomePageFollowSectionViewDelegate> _delegate; // +0x8
    WCFinderLiveHomePageFooterView * _footerView; // +0x10
}
+ (double)viewHeight:(BOOL)arg1 styleInfo:(id)arg2;
- (void)layoutSubviews;
- (id)generateCollectionView;
- (void)updateWithVM:(id)arg1;
- (void)prepareForReuse;
- (void)resetState;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)footerView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)didClickFooterRefresh:(id)arg1;
- (BOOL)isEnableFooterTrigerLoading:(id)arg1;
- (void)onContainerSectionVMRefreshAllData:(id)arg1;
- (void)onContainerSectionVMFetchNextPageData:(id)arg1;
- (void)onContainerSectionVMNoMoreData;
- (void)onContainerSectionVMFetchFailWithErroCode:(long long)arg1;
- (void)onContainerSectionVMHomePageResetState;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setFooterView:(id)arg1;
- (void).cxx_destruct;
@end
