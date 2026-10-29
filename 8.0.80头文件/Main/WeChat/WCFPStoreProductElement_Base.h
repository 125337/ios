@interface WCFPStoreProductElement_Base : UIView
{
    ECProductCardViewModel * _cardVM; // +0x8
}
+ (long long)viewHeightByCardVM:(id)arg1;
- (void)setCardVM:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)setupSubviews;
- (void)reloadData;
- (id)cardVM;
- (void).cxx_destruct;
@end
