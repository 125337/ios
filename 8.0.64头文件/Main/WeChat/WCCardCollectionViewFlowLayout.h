@interface WCCardCollectionViewFlowLayout : UICollectionViewFlowLayout
{
    UIColor * _sectonColor; // +0x8
    NSMutableArray * _decorationViewAttrs; // +0x10
}
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(CGRect)arg1;
- (id)decorationViewAttrs;
- (id)sectonColor;
- (void)setSectonColor:(id)arg1;
- (void)setDecorationViewAttrs:(id)arg1;
- (void).cxx_destruct;
@end
