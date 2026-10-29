@interface WCFPStoreProductElement_Price : WCFPStoreProductElement_Base
{
    MMUILabel * _priceLabel; // +0x8
    MMUILabel * _descLabel; // +0x10
}
+ (long long)viewHeightByCardVM:(id)arg1;
+ (long long)edgeLR;
- (void)setupSubviews;
- (void)reloadData;
- (id)priceLabel;
- (void)setPriceLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (void).cxx_destruct;
@end
