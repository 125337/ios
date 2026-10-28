@interface WCFinderCustomCollectionFixedSpacingFlowLayout : WCFinderCustomCollectionFlowLayout
{
    double _fixedSpacing; // +0x8
}
- (id)layoutAttributesForElementsInRect:(CGRect)arg1;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1;
- (void)invalidateLayout;
- (double)fixedSpacing;
- (void)setFixedSpacing:(double)arg1;
@end
