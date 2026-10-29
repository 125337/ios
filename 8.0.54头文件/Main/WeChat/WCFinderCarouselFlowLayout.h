@interface WCFinderCarouselFlowLayout : UICollectionViewFlowLayout
{
    unsigned long long _style; // +0x8
    double _itemSpace; // +0x10
    double _itemWidth; // +0x18
    double _minScale; // +0x20
    double _defaultItemWidth; // +0x28
}
- (id)initWithStyle:(unsigned long long)arg1;
- (void)initial;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(CGRect)arg1;
- (CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 withScrollingVelocity:(CGPoint)arg2;
- (double)defaultItemWidth;
- (void)setMinScale:(double)arg1;
- (unsigned long long)style;
- (void)setStyle:(unsigned long long)arg1;
- (double)itemSpace;
- (void)setItemSpace:(double)arg1;
- (double)itemWidth;
- (void)setItemWidth:(double)arg1;
- (double)minScale;
- (void)setDefaultItemWidth:(double)arg1;
@end

