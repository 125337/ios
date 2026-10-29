@interface EmoticonCameraDynamiFlowLayout : UICollectionViewFlowLayout
{
    id <EmoticonCameraDynamiFlowLayoutDelegate> _delegate; // +0x8
}
- (void)prepareLayout;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1;
- (id)layoutAttributesForElementsInRect:(CGRect)arg1;
- (CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 withScrollingVelocity:(CGPoint)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

