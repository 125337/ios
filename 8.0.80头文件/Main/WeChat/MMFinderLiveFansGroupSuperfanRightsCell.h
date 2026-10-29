@interface MMFinderLiveFansGroupSuperfanRightsCell : MMFinderLiveFansGroupDetailBaseTableViewCell <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    MMUILabel * _titleLabel; // +0x10
    UICollectionView * _collectionView; // +0x18
    NSArray * _items; // +0x20
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initUI;
- (void)configWithRightItems:(id)arg1;
- (void)layoutSubviews;
- (double)getCollectionViewHorizontalInset;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)items;
- (void)setItems:(id)arg1;
- (void).cxx_destruct;
@end
