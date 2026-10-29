@interface WCFinderHalfProfileInteractionInfoView : UIView
{
    UILabel * _titleLabel; // +0x8
    UICollectionView * _collectionView; // +0x10
    NSArray * _items; // +0x18
    NSArray * _configurations; // +0x20
    UICollectionViewDiffableDataSource * _dataSource; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)_setupUI;
- (void)_setupLayout;
- (void)updateWithInteractionItems:(id)arg1;
- (void)_updateUI;
- (void)_updateLayout;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)items;
- (void)setItems:(id)arg1;
- (id)configurations;
- (void)setConfigurations:(id)arg1;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (void).cxx_destruct;
@end

