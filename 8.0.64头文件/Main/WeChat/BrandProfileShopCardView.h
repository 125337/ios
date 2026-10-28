@interface BrandProfileShopCardView : BrandProfileButton
{
    BOOL _hasProduct; // +0x8
    UIView * _contentView; // +0x10
    MMUILabel * _shopNameLabel; // +0x18
    UIImageView * _shopIcon; // +0x20
    MMUILabel * _shopTagLabel; // +0x28
    UIImageView * _shopTagIcon; // +0x30
    UIView * _recommendSeparator; // +0x38
    MMUILabel * _recommendLabel; // +0x40
    MMUILabel * _enterLabel; // +0x48
    UIImageView * _enterIcon; // +0x50
    GetProfileEcCardResp_ShopCard * _shopCardInfo; // +0x58
}
- (id)initWithShopCardInfo:(id)arg1;
- (void)initSubViews;
- (void)renderWithShopCardInfo:(id)arg1 hasProduct:(BOOL)arg2;
- (void)layoutSubviews;
- (double)layoutSubviewsAndReturnHeight;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)shopNameLabel;
- (void)setShopNameLabel:(id)arg1;
- (id)shopIcon;
- (void)setShopIcon:(id)arg1;
- (id)shopTagLabel;
- (void)setShopTagLabel:(id)arg1;
- (id)shopTagIcon;
- (void)setShopTagIcon:(id)arg1;
- (id)recommendSeparator;
- (void)setRecommendSeparator:(id)arg1;
- (id)recommendLabel;
- (void)setRecommendLabel:(id)arg1;
- (id)enterLabel;
- (void)setEnterLabel:(id)arg1;
- (id)enterIcon;
- (void)setEnterIcon:(id)arg1;
- (id)shopCardInfo;
- (void)setShopCardInfo:(id)arg1;
- (BOOL)hasProduct;
- (void)setHasProduct:(BOOL)arg1;
- (void).cxx_destruct;
@end
