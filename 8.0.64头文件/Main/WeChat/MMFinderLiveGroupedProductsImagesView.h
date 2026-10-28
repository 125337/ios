@interface MMFinderLiveGroupedProductsImagesView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>
{
    MMFinderLiveGroupedProductsViewModel * _viewModel; // +0x8
    UICollectionView * _collectionView; // +0x10
    UILabel * _indexLabel; // +0x18
}
+ (double)spacing;
+ (double)preferHeightWithViewModel:(id)arg1 inWidth:(double)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (void)updateIndex;
- (void)updateWithViewModel:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)layoutSubviews;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint *)arg3;
- (double)contentOffsetForIndex:(unsigned long long)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)indexLabel;
- (void)setIndexLabel:(id)arg1;
- (void).cxx_destruct;
@end
