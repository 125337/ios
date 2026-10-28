@interface BTScrollableFinderCellView : BTBaseRecommendAppMsgCellView <UIScrollViewDelegate, UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, BTScrollableFinderCellViewModelDelegate, BTFinderLiveFlowStyleItemCellDelegate>
{
    id <BTScrollableFinderCellViewDelegate> _finderCellViewDelegate; // +0x8
    BTRecommendFinderHeaderView * _headerView; // +0x10
    UICollectionView * _collectionView; // +0x18
    NSHashTable * _playingCells; // +0x20
}
+ (double)headerViewHeight;
- (void)initSubviews;
- (void)setViewModel:(id)arg1;
- (void)onUpdateViewModel;
- (void)checkAutoPlay;
- (CGRect)convertFinderItemCellFrameWithIndex:(long long)arg1 toView:(id)arg2;
- (void)setFinderItemCellWithIndex:(long long)arg1 bHighlight:(BOOL)arg2;
- (void)layoutSubviews;
- (id)finderItemCellWithIndex:(long long)arg1;
- (id)indexesOfVisibleItem;
- (id)indexesOfValidShowItem;
- (void)didHideFinderItemViewWithIndexArr:(id)arg1;
- (id)collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)indexForFinderTid:(id)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)onDidReceiveFinderInterestData;
- (void)onDidDeleteFinderInterestData;
- (void)checkIfCardExposed;
- (void)onDisappear;
- (void)checkAutoPlayLiveCard;
- (void)stopAllAutoPlayCell;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)report21053WithAction:(long long)arg1 viewModel:(id)arg2 index:(long long)arg3 actionTS:(unsigned long long)arg4 extraDic:(id)arg5;
- (void)onFinderLivePlayStateChange:(id)arg1 state:(unsigned long long)arg2;
- (void)updateLiveCardCellExposeStart:(id)arg1 index:(long long)arg2;
- (void)updateLiveCardCellExposeEnd:(id)arg1 index:(long long)arg2;
- (void)reportValidRatioExposeStart:(id)arg1 index:(long long)arg2;
- (void)reportValidRatioExposeEnd:(id)arg1 index:(long long)arg2;
- (id)finderCellViewDelegate;
- (void)setFinderCellViewDelegate:(id)arg1;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (void)setCollectionView:(id)arg1;
- (id)playingCells;
- (void)setPlayingCells:(id)arg1;
- (void).cxx_destruct;
@end
