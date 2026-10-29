@interface _TtC9WeAppCore21WASiderbarContentView : MMUIView <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, UICollectionViewDelegate>
{
     kHeaderIdentifier; // +0x8
     kIconItemCellIdentifier; // +0x18
     kSnapshotItemCellIdentifier; // +0x28
     kLoadingCellIdentifier; // +0x38
     isCommonUsedExpose; // +0x48
     collectionView; // +0x50
     logic; // +0x58
}
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1;
- (void).cxx_destruct;
@end
