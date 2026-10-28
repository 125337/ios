@interface WCFinderLiveHomePageBannerSectionView : WCFinderLiveHomePageBaseSectionView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, WCFinderLiveHomePageBannerCellDelegate>
{
    WCFinderLiveFeedGenericAutoPlayModel * _autoPlayModel; // +0x8
    id <WCFinderLiveHomePageBannerSectionViewDelegate> _delegate; // +0x10
}
+ (double)viewHeightInWidth:(double)arg1;
- (void)prepareForReuse;
- (void)updateWithVM:(id)arg1;
- (void)autoPlayStop;
- (void)autoPlayStart;
- (id)generateCollectionView;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)onClickCoverContact:(id)arg1 feedVM:(id)arg2;
- (void)clickRecommendUrl:(id)arg1;
- (void)onBaseLiveCellForwardAction:(id)arg1;
- (void)onLiveCellClickFriendLikeReason:(id)arg1;
- (id)autoPlayModel;
- (void)onContainerSectionVMHomePageResetState;
- (void)onContainerSectionVMHomePageDeleteTid:(id)arg1;
- (void)setAutoPlayModel:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
