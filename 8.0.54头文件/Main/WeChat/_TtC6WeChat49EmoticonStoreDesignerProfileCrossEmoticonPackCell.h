@interface _TtC6WeChat49EmoticonStoreDesignerProfileCrossEmoticonPackCell : _TtC6WeChat41EmoticonStoreDesignerProfileCrossBaseCell <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, DesignerPortfolioCellDelegate>
{
     delegate; // +0x48
     cellIdentifier; // +0x58
     cellHeight; // +0x68
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)onLoadMore;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)OnRewardStoreItem:(id)arg1;
- (void)onDownloadStoreItem:(id)arg1;
- (void)OnClearStoreItemReddot:(id)arg1;
- (void).cxx_destruct;
@end

