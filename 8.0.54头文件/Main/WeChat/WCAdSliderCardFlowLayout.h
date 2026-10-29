@interface WCAdSliderCardFlowLayout : UICollectionViewFlowLayout
{
    BOOL _hasFooter; // +0x8
    BOOL _isInitialized; // +0x9
    long long _align; // +0x10
    double _cardWidth; // +0x18
    double _cardHeight; // +0x20
    double _minScale; // +0x28
    CGSize _topItemSize; // +0x30
    CGSize _collectionViewContentSize; // +0x40
}
- (id)initWithAlign:(long long)arg1 cardWidth:(double)arg2 cardHeight:(double)arg3 hasFooter:(BOOL)arg4;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(CGRect)arg1;
- (id)layoutCenterAttributesForIndexPath:(id)arg1 currentPage:(long long)arg2 pageOffset:(double)arg3 pageOffsetProgress:(double)arg4;
- (double)parallaxProgressForVisibleIndex:(long long)arg1 offsetProgress:(double)arg2 minScale:(double)arg3;
- (id)layoutBottomAttributesForIndexPath:(id)arg1 currentPage:(long long)arg2 pageOffset:(double)arg3 pageOffsetProgress:(double)arg4;
- (id)layoutFooterAttributesWithLastCardAttributes:(id)arg1;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1;
- (CGSize)collectionViewContentSize;
- (long long)align;
- (void)setAlign:(long long)arg1;
- (CGSize)topItemSize;
- (void)setTopItemSize:(CGSize)arg1;
- (double)cardWidth;
- (void)setCardWidth:(double)arg1;
- (double)cardHeight;
- (void)setCardHeight:(double)arg1;
- (BOOL)hasFooter;
- (void)setHasFooter:(BOOL)arg1;
- (double)minScale;
- (void)setMinScale:(double)arg1;
- (BOOL)isInitialized;
- (void)setIsInitialized:(BOOL)arg1;
- (void)setCollectionViewContentSize:(CGSize)arg1;
@end

