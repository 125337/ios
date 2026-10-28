@interface MMFinderLiveAnchorGoodsCellLeftCardView : UIView
{
    MMWebImageView * _goodsImageView; // +0x8
    MMFinderLiveMultiPriceView * _priceView; // +0x10
    MMFinderLiveGoodsSerialNumberView * _serialNumberView; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setIsPromoting:(BOOL)arg1;
- (void)updateWithGoodsViewModel:(id)arg1;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)goodsImageView;
- (void)setGoodsImageView:(id)arg1;
- (id)priceView;
- (void)setPriceView:(id)arg1;
- (id)serialNumberView;
- (void)setSerialNumberView:(id)arg1;
- (void).cxx_destruct;
@end
