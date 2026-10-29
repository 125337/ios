@interface WCFinderFlowLayoutNestCollectionCell : UICollectionViewCell
{
    UICollectionView * _collectionView; // +0x8
    id _attachObject; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)setDataSource:(id)arg1;
- (id)dataSource;
- (void)reloadData;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)attachObject;
- (void)setAttachObject:(id)arg1;
- (void).cxx_destruct;
@end
