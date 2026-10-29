@interface _TtC6WeChat38BrandProfileTabAudioCollectionViewCell : UITableViewCell <UICollectionViewDelegate, UICollectionViewDataSource>
{
     dataSource; // +0x8
     $__lazy_storage_$_collectionView; // +0x18
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)layoutSubviews;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint *)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void).cxx_destruct;
@end

