@interface BrandProfileProductCardView : BrandProfileButton
{
    UIImageView * _productImageView; // +0x8
    UIView * _textInfoView; // +0x10
    MMUILabel * _productNameLabel; // +0x18
    MMUILabel * _priceLabel; // +0x20
    MMUILabel * _priceStartLabel; // +0x28
    MMUILabel * _recommendLabel; // +0x30
    MMUILabel * _commentLabel; // +0x38
    UIView * _recommendSeparator; // +0x40
    GetProfileEcCardResp_ProductCard * _productCardInfo; // +0x48
}
- (id)initWithProductCardInfo:(id)arg1;
- (void)renderWithProfileProductInfo:(id)arg1;
- (void)initSubViews;
- (void)layoutSubviews;
- (double)layoutSubviewsAndReturnHeight;
- (id)productImageView;
- (void)setProductImageView:(id)arg1;
- (id)textInfoView;
- (void)setTextInfoView:(id)arg1;
- (id)productNameLabel;
- (void)setProductNameLabel:(id)arg1;
- (id)priceLabel;
- (void)setPriceLabel:(id)arg1;
- (id)priceStartLabel;
- (void)setPriceStartLabel:(id)arg1;
- (id)recommendLabel;
- (void)setRecommendLabel:(id)arg1;
- (id)commentLabel;
- (void)setCommentLabel:(id)arg1;
- (id)recommendSeparator;
- (void)setRecommendSeparator:(id)arg1;
- (id)productCardInfo;
- (void)setProductCardInfo:(id)arg1;
- (void).cxx_destruct;
@end
