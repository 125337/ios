@interface MJPrecisionPickerViewLayout : UICollectionViewFlowLayout
{
    double _labelHeight; // +0x8
    id <MJPrecisionPickerViewLayoutDelegate> _delegate; // +0x10
    NSMutableDictionary * _labelLayoutAttributesCache; // +0x18
}
- (id)init;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(CGRect)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 withScrollingVelocity:(CGPoint)arg2;
- (void)setLabelHeight:(double)arg1;
- (double)labelHeight;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)labelLayoutAttributesCache;
- (void)setLabelLayoutAttributesCache:(id)arg1;
- (void).cxx_destruct;
@end
