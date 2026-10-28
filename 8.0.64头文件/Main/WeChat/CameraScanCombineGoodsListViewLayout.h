@interface CameraScanCombineGoodsListViewLayout : UICollectionViewLayout
{
    id <CameraScanCombineGoodsListViewLayoutDelegate> _delegate; // +0x8
    NSMutableArray * _attributesArray; // +0x10
}
- (id)init;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(CGRect)arg1;
- (CGSize)collectionViewContentSize;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1;
- (double)gradienLayerMaskHeight;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)attributesArray;
- (void)setAttributesArray:(id)arg1;
- (void).cxx_destruct;
@end
