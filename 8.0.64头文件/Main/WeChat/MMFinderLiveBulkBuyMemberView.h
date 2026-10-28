@interface MMFinderLiveBulkBuyMemberView : UIView
{
    BOOL _withLiveDynamicFont; // +0x8
    MMWebImageView * _imageView; // +0x10
    UILabel * _titleLabel; // +0x18
    UILabel * _priceLabel; // +0x20
    UILabel * _listedPriceLabel; // +0x28
}
- (id)initWithFrame:(CGRect)arg1 withLiveDynamicFont:(BOOL)arg2;
- (void)updateWithBulkBuyMember:(id)arg1;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (BOOL)withLiveDynamicFont;
- (void)setWithLiveDynamicFont:(BOOL)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)priceLabel;
- (void)setPriceLabel:(id)arg1;
- (id)listedPriceLabel;
- (void)setListedPriceLabel:(id)arg1;
- (void).cxx_destruct;
@end
