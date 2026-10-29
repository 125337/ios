@interface WeDropPermissionCheckView : WeDropPassthroghView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, WeDropPermissionCellDelegate, WeDropHeaderViewComponent>
{
    UILabel * _titleLabel; // +0x8
    UICollectionView * _collectionView; // +0x10
    NSMutableArray * _items; // +0x18
}
- (id)init;
- (void)sizeToFitWidth:(double)arg1;
- (void)setupInitialData;
- (void)setupSubviews;
- (void)layoutSubviews;
- (void)updateNetworkPermissionState:(unsigned long long)arg1 forType:(unsigned long long)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)didTapGoToSettingButton:(unsigned long long)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)items;
- (void)setItems:(id)arg1;
- (void).cxx_destruct;
@end
