@interface MMLiveBeautyPresetControlPanel : UIView <UICollectionViewDelegate, UICollectionViewDataSource, MMLiveBeautyPresetControlPanelCellDelegate>
{
    id <MMLiveBeautyPresetControlPanelDelegate> _delegate; // +0x8
    NSArray * _items; // +0x10
    id _selectedItem; // +0x18
    MMLiveBeautyControlPanelItemAdapter * _adapter; // +0x20
    UICollectionViewFlowLayout * _collectionViewLayout; // +0x28
    UICollectionView * _collectionView; // +0x30
}
- (id)initWithItems:(id)arg1 selectedItem:(id)arg2 adapter:(id)arg3;
- (void)revealSelectedItem;
- (void)layoutSubviews;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)onFineTuningRequestedForCell:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)items;
- (void)setItems:(id)arg1;
- (id)selectedItem;
- (void)setSelectedItem:(id)arg1;
- (id)adapter;
- (void)setAdapter:(id)arg1;
- (id)collectionViewLayout;
- (void)setCollectionViewLayout:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (void).cxx_destruct;
@end
