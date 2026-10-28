@interface WCFinderHorizontalSlideView : UICollectionViewCell <UICollectionViewDataSource, UICollectionViewDelegate>
{
    BOOL _scrollEnabled; // +0x8
    double _itemSpace; // +0x10
    id <WCFinderHorizontalSlideViewDelegate> _delegate; // +0x18
    UICollectionView * _collectionView; // +0x20
    CGSize _itemSize; // +0x28
    UIEdgeInsets _sectionInset; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (id)collectionView;
- (void)registerViewClass:(Class)arg1 identifier:(id)arg2;
- (void)refreshView;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (BOOL)scrollEnabled;
- (void)setScrollEnabled:(BOOL)arg1;
- (double)itemSpace;
- (void)setItemSpace:(double)arg1;
- (CGSize)itemSize;
- (void)setItemSize:(CGSize)arg1;
- (UIEdgeInsets)sectionInset;
- (void)setSectionInset:(UIEdgeInsets)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setCollectionView:(id)arg1;
- (void).cxx_destruct;
@end
