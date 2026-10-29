@interface WCMicroMerchantAdProductCardView : MMUIView
{
    double _actionButtonOccupiedWidth; // +0x8
    WCAdURLImageView * _productImageView; // +0x10
    UILabel * _titleLabel; // +0x18
    UILabel * _priceLabel; // +0x20
    UILabel * _beginLabel; // +0x28
    UILabel * _promoLabel; // +0x30
    UILabel * _marketPriceLabel; // +0x38
    UIView * _tailContainer; // +0x40
    UIView * _tailSeparator; // +0x48
    WCAdURLImageView * _tailStoreIcon; // +0x50
    UILabel * _tailPlatformLabel; // +0x58
    WCAdURLImageView * _tailBrandIcon; // +0x60
}
+ (double)cardHeightForMinishopData:(id)arg1 foldSnsInfo:(id)arg2 containerWidth:(double)arg3;
+ (double)mainContentCenterYForContainerWidth:(double)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)setupSubviews;
- (void)updateWithMinishopData:(id)arg1 foldSnsInfo:(id)arg2;
- (void)updateTailWithData:(id)arg1 foldSnsInfo:(id)arg2;
- (void)layoutSubviews;
- (BOOL)isTailHidden;
- (double)actionButtonOccupiedWidth;
- (void)setActionButtonOccupiedWidth:(double)arg1;
- (id)productImageView;
- (void)setProductImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)priceLabel;
- (void)setPriceLabel:(id)arg1;
- (id)beginLabel;
- (void)setBeginLabel:(id)arg1;
- (id)promoLabel;
- (void)setPromoLabel:(id)arg1;
- (id)marketPriceLabel;
- (void)setMarketPriceLabel:(id)arg1;
- (id)tailContainer;
- (void)setTailContainer:(id)arg1;
- (id)tailSeparator;
- (void)setTailSeparator:(id)arg1;
- (id)tailStoreIcon;
- (void)setTailStoreIcon:(id)arg1;
- (id)tailPlatformLabel;
- (void)setTailPlatformLabel:(id)arg1;
- (id)tailBrandIcon;
- (void)setTailBrandIcon:(id)arg1;
- (void).cxx_destruct;
@end
