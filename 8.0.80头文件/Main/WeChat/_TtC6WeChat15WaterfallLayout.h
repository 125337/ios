@interface _TtC6WeChat15WaterfallLayout : UICollectionViewLayout
{
     delegate; // +0x8
     numberOfColumns; // +0x18
     cellPadding; // +0x20
     headerBottomSpacing; // +0x28
     contentTopSpacing; // +0x30
     contentHeight; // +0x38
     footerHeight; // +0x40
     cache; // +0x48
     headerCache; // +0x50
     footerCache; // +0x58
}
- (CGSize)collectionViewContentSize;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)invalidateLayout;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void).cxx_destruct;
@end
