@interface WCPinBottomCollectionViewFlowLayout : UICollectionViewFlowLayout
{
    NSIndexPath * _indexPathForItemPinnedBottom; // +0x8
}
- (id)init;
- (void)setScrollDirection:(long long)arg1;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1;
- (id)layoutAttributesForElementsInRect:(CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (BOOL)needPinBottom;
- (id)indexPathForItemPinnedBottom;
- (CGRect)pinnedItemBackgroundFrame;
- (id)collectionViewDelegate;
- (double)currentCollectionViewBoundsBottom;
- (void)setIndexPathForItemPinnedBottom:(id)arg1;
- (void).cxx_destruct;
@end
