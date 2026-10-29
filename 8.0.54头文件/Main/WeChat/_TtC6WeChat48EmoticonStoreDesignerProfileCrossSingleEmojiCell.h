@interface _TtC6WeChat48EmoticonStoreDesignerProfileCrossSingleEmojiCell : _TtC6WeChat41EmoticonStoreDesignerProfileCrossBaseCell <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource>
{
     delegate; // +0x48
     $__lazy_storage_$_itemEdge; // +0x58
     componentCellIndentifier; // +0x60
     edgeInset; // +0x70
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)onLoadMore;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void).cxx_destruct;
@end

