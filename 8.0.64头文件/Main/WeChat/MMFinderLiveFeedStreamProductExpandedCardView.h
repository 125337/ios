@interface MMFinderLiveFeedStreamProductExpandedCardView : MMFinderLiveFeedStreamWidgetBaseView
{
    id <MMFinderLiveFeedStreamProductExpandedCardViewDelegate> _delegate; // +0x8
    FinderWindowProductInfo * _productInfo; // +0x10
    MMWebImageView * _iconImageView; // +0x18
    UILabel * _descLabel; // +0x20
    UILabel * _priceLabel; // +0x28
    UILabel * _promotingLabel; // +0x30
    CAGradientLayer * _promotingGradientLayer; // +0x38
}
+ (double)defaultHeight;
- (id)initWithFrame:(CGRect)arg1;
- (void)setTaskId:(id)arg1;
- (void)prepareForReuse;
- (void)setProductInfo:(id)arg1;
- (id)priceString:(unsigned long long)arg1;
- (id)iconImageView;
- (id)descLabel;
- (id)priceLabel;
- (id)promotingLabel;
- (id)promotingGradientLayer;
- (void)onClick:(id)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)startExposeAction;
- (void)endExposeAction;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)productInfo;
- (void)setIconImageView:(id)arg1;
- (void)setDescLabel:(id)arg1;
- (void)setPriceLabel:(id)arg1;
- (void)setPromotingLabel:(id)arg1;
- (void)setPromotingGradientLayer:(id)arg1;
- (void).cxx_destruct;
@end
