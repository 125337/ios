@interface BrandCustomSharePanelLayout : UICollectionViewLayout
{
    NSMutableArray * _layoutAttributes; // +0x8
    BrandCustomSharePanelLayoutConfig * _config; // +0x10
    CGSize _contentSize; // +0x18
}
- (id)init;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(CGRect)arg1;
- (CGSize)collectionViewContentSize;
- (id)layoutAttributes;
- (void)setLayoutAttributes:(id)arg1;
- (CGSize)contentSize;
- (void)setContentSize:(CGSize)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (void).cxx_destruct;
@end
