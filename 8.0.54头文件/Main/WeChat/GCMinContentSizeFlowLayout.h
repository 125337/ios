@interface GCMinContentSizeFlowLayout : UICollectionViewFlowLayout
{
    double _gcHorizonalAlignedPageWidth; // +0x8
    CGSize _gcMinContentSize; // +0x10
}
- (CGSize)collectionViewContentSize;
- (CGSize)gcRealContentSize;
- (CGSize)gcMinContentSize;
- (void)setGcMinContentSize:(CGSize)arg1;
- (double)gcHorizonalAlignedPageWidth;
- (void)setGcHorizonalAlignedPageWidth:(double)arg1;
@end

