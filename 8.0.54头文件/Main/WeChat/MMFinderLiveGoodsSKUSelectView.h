@interface MMFinderLiveGoodsSKUSelectView : UIView <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource>
{
    BOOL _shouldShowImages; // +0x8
    id <MMFinderLiveGoodsSKUSelectViewDelegate> _delegate; // +0x10
    MMFinderLiveGoodsSKUSelectViewTail * _tail; // +0x18
    UICollectionView * _skuCollectionView; // +0x20
    unsigned long long _labelsMaxLine; // +0x28
    FinderWindowProductInfo_SkuAttrInfoList * _skus; // +0x30
    CGSize _cellSizeWithImage; // +0x38
}
+ (double)heightFor:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (void)fillWithSkuList:(id)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)onTailTapped;
- (void)prepareForReuse;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)shouldShowImages;
- (void)setShouldShowImages:(BOOL)arg1;
- (id)tail;
- (void)setTail:(id)arg1;
- (id)skuCollectionView;
- (void)setSkuCollectionView:(id)arg1;
- (unsigned long long)labelsMaxLine;
- (void)setLabelsMaxLine:(unsigned long long)arg1;
- (CGSize)cellSizeWithImage;
- (void)setCellSizeWithImage:(CGSize)arg1;
- (id)skus;
- (void)setSkus:(id)arg1;
- (void).cxx_destruct;
@end

