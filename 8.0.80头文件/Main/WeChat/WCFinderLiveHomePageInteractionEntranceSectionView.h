@interface WCFinderLiveHomePageInteractionEntranceSectionView : WCFinderLiveHomePageBaseSectionView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    id <WCFinderLiveHomePageInteractionEntranceSectionViewDelegate> _delegate; // +0x8
}
+ (double)viewHeightInWidth:(double)arg1;
- (id)generateCollectionView;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)onContainerSectionVMRefreshAllData:(id)arg1;
- (void)onContainerSectionVMNoMoreData;
- (void)onContainerSectionVMFetchFailWithErroCode:(long long)arg1;
- (void)onContainerSectionVMHomePageResetState;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
