@interface DevicePresentCollectionView : MMPageSheetBaseView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, MMIconItemDelegate>
{
    BOOL _changeIconColorOnAppearanceChange; // +0x8
    id <ScrollItemSelectionDelegate> _selectDelegate; // +0x10
    NSArray * _deviceArray; // +0x18
    unsigned long long _numberOfItem; // +0x20
    UICollectionViewFlowLayout * _flowLayout; // +0x28
    UICollectionView * _collectionView; // +0x30
    CGSize _itemSize; // +0x38
    UIEdgeInsets _sectionInset; // +0x48
}
- (id)initWithDeviceArray:(id)arg1;
- (void)reloadWithDeviceArray:(id)arg1;
- (void)initPageSheetConfigs;
- (void)configLayoutParams;
- (void)didMoveToSuperview;
- (id)deviceArray;
- (id)flowLayout;
- (id)collectionView;
- (UIEdgeInsets)sectionInset;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (void)onItemClicked:(id)arg1;
- (id)selectDelegate;
- (void)setSelectDelegate:(id)arg1;
- (BOOL)changeIconColorOnAppearanceChange;
- (void)setChangeIconColorOnAppearanceChange:(BOOL)arg1;
- (void)setDeviceArray:(id)arg1;
- (CGSize)itemSize;
- (void)setItemSize:(CGSize)arg1;
- (unsigned long long)numberOfItem;
- (void)setNumberOfItem:(unsigned long long)arg1;
- (void)setSectionInset:(UIEdgeInsets)arg1;
- (void)setFlowLayout:(id)arg1;
- (void)setCollectionView:(id)arg1;
- (void).cxx_destruct;
@end
