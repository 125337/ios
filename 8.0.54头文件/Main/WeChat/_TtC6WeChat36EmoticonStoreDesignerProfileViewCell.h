@interface _TtC6WeChat36EmoticonStoreDesignerProfileViewCell : UICollectionViewCell <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource>
{
     delegate; // +0x8
     showingSections; // +0x18
     sectionItems; // +0x20
     $__lazy_storage_$_collectionLayout; // +0x28
     $__lazy_storage_$_collectionView; // +0x30
     $__lazy_storage_$_tabsView; // +0x38
     emoticonListCell; // +0x40
     emojiListCell; // +0x48
     emoticonListCellIdentifier; // +0x50
     emojiListCellIdentifier; // +0x60
     sectionTitleFontSize; // +0x70
     sectionWidthMargin; // +0x78
     layoutHorizontalInset; // +0x80
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)onTabsViewValueChanged:(id)arg1;
- (void).cxx_destruct;
@end

