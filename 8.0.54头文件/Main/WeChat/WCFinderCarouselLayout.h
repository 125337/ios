@interface WCFinderCarouselLayout : UICollectionViewFlowLayout
{
    NSArray * _layoutAttrbutes; // +0x8
    NSIndexPath * _lockedCurrentIndexPath; // +0x10
}
- (id)delegate;
- (id)init;
- (void)prepareLayout;
- (CGSize)collectionViewContentSize;
- (id)layoutAttributesForElementsInRect:(CGRect)arg1;
- (CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 withScrollingVelocity:(CGPoint)arg2;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1;
- (long long)itemCount;
- (double)itemWidthAtIndexPath:(id)arg1;
- (double)carouselVisibleDistance;
- (void)adjustContentOffset;
- (id)indexPathsOfVisibleItemsWithContentOffset:(CGPoint)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1 atCardPos:(long long)arg2 animationProgress:(double)arg3;
- (void)updateLayoutAttributes:(id)arg1;
- (id)layoutAttrbutes;
- (void)setLayoutAttrbutes:(id)arg1;
- (id)lockedCurrentIndexPath;
- (void)setLockedCurrentIndexPath:(id)arg1;
- (void).cxx_destruct;
@end

