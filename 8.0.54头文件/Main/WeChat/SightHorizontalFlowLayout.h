@interface SightHorizontalFlowLayout : UICollectionViewFlowLayout
- (id)init;
- (id)layoutAttributesForElementsInRect:(CGRect)arg1;
- (CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 withScrollingVelocity:(CGPoint)arg2;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1;
@end

