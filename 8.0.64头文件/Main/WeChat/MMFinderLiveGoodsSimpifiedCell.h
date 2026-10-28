@interface MMFinderLiveGoodsSimpifiedCell : MMFinderLiveGoodsCell <MMFinderLiveTagsLabelDelegate>
{
    MMFinderLiveTagsLabel * _goodsTitleLabel; // +0x40
    MMWebImageView * _goodsImageView; // +0x48
    MMFinderLiveGoodsSerialNumberView * _serialNumberView; // +0x50
    UILabel * _descLabel; // +0x58
    UILabel * _priceLabel; // +0x60
}
+ (double)cellHeightWithModel:(id)arg1 cellWidth:(double)arg2;
+ (double)imageWidthForCellWidth:(double)arg1;
+ (id)identifier;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)addGoodsImageView;
- (void)addGoodsTitleLabel;
- (void)addDescLabel;
- (void)addPriceLabel;
- (void)onWebImageGetDifferentSize;
- (void)layoutSubviews;
- (void)updateWithGoodsViewModel:(id)arg1 isCurAskedProduct:(BOOL)arg2;
- (id)displayPriceWording;
- (id)accessibilityAttributedLabel;
- (id)goodsTitleLabel;
- (void)setGoodsTitleLabel:(id)arg1;
- (id)goodsImageView;
- (void)setGoodsImageView:(id)arg1;
- (id)serialNumberView;
- (void)setSerialNumberView:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)priceLabel;
- (void)setPriceLabel:(id)arg1;
- (void).cxx_destruct;
@end
