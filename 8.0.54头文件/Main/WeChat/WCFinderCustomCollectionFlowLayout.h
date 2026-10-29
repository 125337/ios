@interface WCFinderCustomCollectionFlowLayout : UICollectionViewFlowLayout
{
    BOOL _useDamping; // +0x8
    CGSize _minimumSize; // +0x10
}
- (CGSize)collectionViewContentSize;
- (CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 withScrollingVelocity:(CGPoint)arg2;
- (CGSize)minimumSize;
- (void)setMinimumSize:(CGSize)arg1;
- (BOOL)useDamping;
- (void)setUseDamping:(BOOL)arg1;
@end

