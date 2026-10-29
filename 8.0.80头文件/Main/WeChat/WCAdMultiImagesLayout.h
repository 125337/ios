@interface WCAdMultiImagesLayout : UICollectionViewLayout
{
    double _pageWidth; // +0x8
    double _cardVerticalPadding; // +0x10
    double _sideCardInset; // +0x18
    double _centerCardSize; // +0x20
    double _sideCardSize; // +0x28
    double _containerWidth; // +0x30
    double _containerHeight; // +0x38
    long long _itemCount; // +0x40
}
- (id)init;
- (void)prepareLayout;
- (CGSize)collectionViewContentSize;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1;
- (id)attributesForItemAtIndex:(long long)arg1;
- (id)layoutAttributesForElementsInRect:(CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 withScrollingVelocity:(CGPoint)arg2;
- (double)pageWidth;
- (double)cardVerticalPadding;
- (void)setCardVerticalPadding:(double)arg1;
- (double)sideCardInset;
- (void)setSideCardInset:(double)arg1;
- (double)centerCardSize;
- (void)setCenterCardSize:(double)arg1;
- (double)sideCardSize;
- (void)setSideCardSize:(double)arg1;
- (double)containerWidth;
- (void)setContainerWidth:(double)arg1;
- (double)containerHeight;
- (void)setContainerHeight:(double)arg1;
- (long long)itemCount;
- (void)setItemCount:(long long)arg1;
@end
