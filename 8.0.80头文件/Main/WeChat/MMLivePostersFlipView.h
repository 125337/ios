@interface MMLivePostersFlipView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>
{
    double _singleSideHorizontalSpacing; // +0x8
    NSArray * _posterViews; // +0x10
    UICollectionView * _collectionView; // +0x18
    UICollectionViewFlowLayout * _collectionViewLayout; // +0x20
    UIPageControl * _pagingView; // +0x28
}
- (id)initWithPosterViews:(id)arg1;
- (id)currentPoster;
- (void)setSingleSideHorizontalSpacing:(double)arg1;
- (id)snapshotImageForCurrentPoster;
- (void)layoutSubviews;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)initializeComponents;
- (unsigned long long)currentIndex;
- (double)singleSideHorizontalSpacing;
- (id)posterViews;
- (void)setPosterViews:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)collectionViewLayout;
- (void)setCollectionViewLayout:(id)arg1;
- (id)pagingView;
- (void)setPagingView:(id)arg1;
- (void).cxx_destruct;
@end
