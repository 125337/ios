@interface MJStyleEditView : MMUIView <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource>
{
    id <MJStyleEditViewDelegate> _delegate; // +0x8
    MJMaterialLoadingStatusCoordinator * _coordinator; // +0x10
    MJStyleEditData * _data; // +0x18
    MJCollectionView * _collectionView; // +0x20
    UIButton * _reloadButton; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setupViews;
- (void)reloadWithData:(id)arg1;
- (void)reloadConstraints;
- (void)selectedStateChangedFrom:(long long)arg1 to:(long long)arg2;
- (unsigned long long)type;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)reuseId;
- (id)collectionView;
- (id)reloadButton;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)coordinator;
- (void)setCoordinator:(id)arg1;
- (id)data;
- (void)setData:(id)arg1;
- (void)setCollectionView:(id)arg1;
- (void)setReloadButton:(id)arg1;
- (void).cxx_destruct;
@end

