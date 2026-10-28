@interface _TtC6WeChat15WaterfallLayout : UICollectionViewLayout
{
     delegate; // +0x8
     numberOfColumns; // +0x18
     cellPadding; // +0x20
     contentHeight; // +0x28
     footerHeight; // +0x30
     cache; // +0x38
     footerCache; // +0x40
}
- (CGSize)collectionViewContentSize;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)invalidateLayout;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void).cxx_destruct;
@end
