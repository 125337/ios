@interface MJPageViewContentView : MMUIView <UIScrollViewDelegate, UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, MJPageViewItemProtocol>
{
    BOOL _bScrollEnable; // +0x8
    id <MJPageViewDataSource> _dataSource; // +0x10
    id <MJPageViewInnerProtocol> _delegate; // +0x18
    NSArray * _items; // +0x20
    UICollectionView * _collectionView; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupViews;
- (void)setBScrollEnable:(BOOL)arg1;
- (void)reloadData;
- (void)changeSelectedFrom:(long long)arg1 to:(long long)arg2 animated:(BOOL)arg3;
- (void)invalidateLayout;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (BOOL)bScrollEnable;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)items;
- (void)setItems:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (void).cxx_destruct;
@end

