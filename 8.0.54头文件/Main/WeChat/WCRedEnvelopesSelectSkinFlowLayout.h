@interface WCRedEnvelopesSelectSkinFlowLayout : UICollectionViewFlowLayout
{
    RichTextView * _expiredTimeLabel; // +0x8
    CGPoint _lastOffset; // +0x10
}
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(CGRect)arg1;
- (double)cellWidth;
- (double)cellHeight;
- (double)expiredLableHeight;
- (float)cellMargin;
- (double)collectionInset;
- (double)minimumLineSpacing;
- (CGSize)itemSize;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1;
- (id)getCopyOfAttributes:(id)arg1;
- (CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 withScrollingVelocity:(CGPoint)arg2;
- (double)stepSpace;
- (CGPoint)lastOffset;
- (void)setLastOffset:(CGPoint)arg1;
- (id)expiredTimeLabel;
- (void)setExpiredTimeLabel:(id)arg1;
- (void).cxx_destruct;
@end

