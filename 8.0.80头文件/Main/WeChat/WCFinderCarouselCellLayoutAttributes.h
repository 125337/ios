@interface WCFinderCarouselCellLayoutAttributes : UICollectionViewLayoutAttributes
{
    long long _cardPos; // +0x8
    double _animationProgress; // +0x10
}
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (long long)cardPos;
- (void)setCardPos:(long long)arg1;
- (double)animationProgress;
- (void)setAnimationProgress:(double)arg1;
@end
