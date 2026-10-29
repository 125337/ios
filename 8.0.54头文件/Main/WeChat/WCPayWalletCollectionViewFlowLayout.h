@interface WCPayWalletCollectionViewFlowLayout : UICollectionViewFlowLayout
{
    id <WCPayWalletCollectionViewFlowLayoutDelegate> _delegate; // +0x8
}
- (id)initWithDelegate:(id)arg1;
- (void)prepareLayout;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForElementsInRect:(CGRect)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

