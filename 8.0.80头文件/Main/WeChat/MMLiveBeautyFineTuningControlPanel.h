@interface MMLiveBeautyFineTuningControlPanel : UIView <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, MMLiveBeautyFineTuningControlPanelCellDelegate>
{
    id <MMLiveBeautyFineTuningControlPanelDelegate> _delegate; // +0x8
    NSArray * _groups; // +0x10
    id /* block */ _itemsSelector; // +0x18
    MMLiveBeautyControlPanelItemAdapter * _itemsAdapater; // +0x20
    id _selectedItem; // +0x28
    MMLiveBeautyFineTuningControlPanelItem * _selectedControlPanelItem; // +0x30
    unsigned long long _revealedGroupIndex; // +0x38
    UICollectionViewFlowLayout * _collectionViewLayout; // +0x40
    UICollectionView * _collectionView; // +0x48
    MMLiveBeautySlider * _slider; // +0x50
}
- (id)initWithGroups:(id)arg1 itemsSelector:(id /* block */)arg2 itemsAdapter:(id)arg3;
- (void)setSelectedItem:(id)arg1;
- (void)revealGroup:(id)arg1;
- (void)reloadAll;
- (void)layoutSubviews;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)onSettingsRequestedForCell:(id)arg1;
- (void)onSliderValueChanged;
- (id)itemAtIndexPath:(id)arg1;
- (double)naturalOffsetForX:(double)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)groups;
- (void)setGroups:(id)arg1;
- (id /* block */)itemsSelector;
- (void)setItemsSelector:(id /* block */)arg1;
- (id)itemsAdapater;
- (void)setItemsAdapater:(id)arg1;
- (id)selectedItem;
- (id)selectedControlPanelItem;
- (void)setSelectedControlPanelItem:(id)arg1;
- (unsigned long long)revealedGroupIndex;
- (void)setRevealedGroupIndex:(unsigned long long)arg1;
- (id)collectionViewLayout;
- (void)setCollectionViewLayout:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)slider;
- (void)setSlider:(id)arg1;
- (void).cxx_destruct;
@end
