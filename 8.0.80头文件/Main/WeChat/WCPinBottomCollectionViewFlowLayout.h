@interface WCPinBottomCollectionViewFlowLayout : UICollectionViewFlowLayout
{
    NSIndexPath * _indexPathForItemPinnedBottom; // +0x8
    NSIndexPath * _indexPathForItemPinnedTop; // +0x10
    double _itemPinnedTopPosition; // +0x18
}
- (id)init;
- (void)setScrollDirection:(long long)arg1;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1;
- (id)layoutAttributesForElementsInRect:(CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (BOOL)needPinBottom;
- (BOOL)needPinTop;
- (id)indexPathForItemPinnedBottom;
- (CGRect)pinnedItemBackgroundFrame;
- (id)collectionViewDelegate;
- (double)currentCollectionViewBoundsBottom;
- (void)setIndexPathForItemPinnedBottom:(id)arg1;
- (id)indexPathForItemPinnedTop;
- (void)setIndexPathForItemPinnedTop:(id)arg1;
- (double)itemPinnedTopPosition;
- (void)setItemPinnedTopPosition:(double)arg1;
- (void).cxx_destruct;
@end
