@interface MJImageMaterialPicker : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>
{
    id <MJImageMaterialPickerDelegate> _delegate; // +0x8
    unsigned long long _scene; // +0x10
    NSString * _selectedMaterialID; // +0x18
    MJImageComposingViewModel * _viewModel; // +0x20
    UICollectionView * _collectionView; // +0x28
}
- (id)initWithViewModel:(id)arg1 scene:(unsigned long long)arg2;
- (id)initWithViewModel:(id)arg1 scene:(unsigned long long)arg2 selectedMaterialID:(id)arg3;
- (void)_setupViews;
- (void)_layoutViews;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)updateSelectedMaterialWithID:(id)arg1;
- (void)_fetchItems;
- (void)_preloadFirstItem;
- (id)materialItems;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)scene;
- (id)selectedMaterialID;
- (void)setSelectedMaterialID:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (void).cxx_destruct;
@end
