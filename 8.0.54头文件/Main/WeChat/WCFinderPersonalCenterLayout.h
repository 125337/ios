@interface WCFinderPersonalCenterLayout : UICollectionViewFlowLayout
{
    NSMutableArray * _decorationAttrs; // +0x8
}
- (id)init;
- (void)setup;
- (id)flowDelegate;
- (void)prepareLayout;
- (void)prepareDecorationLayout;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForElementsInRect:(CGRect)arg1;
- (id)decorationAttrs;
- (void)setDecorationAttrs:(id)arg1;
- (void).cxx_destruct;
@end

