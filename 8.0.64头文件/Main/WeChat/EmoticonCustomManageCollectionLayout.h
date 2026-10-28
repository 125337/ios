@interface EmoticonCustomManageCollectionLayout : UICollectionViewFlowLayout
{
    BOOL _isMoving; // +0x8
}
+ (Class)layoutAttributesClass;
- (void)setIsMoving:(BOOL)arg1;
- (CGSize)collectionViewContentSize;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(CGRect)arg1;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)initialLayoutAttributesForAppearingDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1;
- (id)indexPathsOfSeparatorsWithCellAttrs:(id)arg1 inRect:(CGRect)arg2;
- (BOOL)isMoving;
@end
