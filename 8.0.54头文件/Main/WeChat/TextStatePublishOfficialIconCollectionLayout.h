@interface TextStatePublishOfficialIconCollectionLayout : UICollectionViewFlowLayout
{
    long long _itemCountPerRow; // +0x8
}
- (id)init;
- (id)layoutAttributesForElementsInRect:(CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)alignLayoutAttributesToPreviousRowIfNeeded:(id)arg1;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (long long)itemCountPerRow;
- (void)setItemCountPerRow:(long long)arg1;
@end

