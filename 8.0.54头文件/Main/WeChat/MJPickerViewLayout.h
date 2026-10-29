@interface MJPickerViewLayout : UICollectionViewFlowLayout
{
    NSMutableDictionary * _labelLayoutAttributesCache; // +0x8
}
- (id)init;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(CGRect)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 withScrollingVelocity:(CGPoint)arg2;
- (id)labelLayoutAttributesCache;
- (void)setLabelLayoutAttributesCache:(id)arg1;
- (void).cxx_destruct;
@end

