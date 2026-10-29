@interface MMFinderLiveAudienceGoodsCell : MMFinderLiveGoodsCell <MMFinderLiveGoodsSKUSelectViewDelegate, MMFinderLiveTagsLabelDelegate>
{
    UIButton * _addToShoppingCartButton; // +0x40
    MMWebImageView * _goodsImageView; // +0x48
    MMFinderLiveGoodsSerialNumberView * _serialNumberView; // +0x50
    MMFinderLiveProductPromotingMaskView * _promotingView; // +0x58
    MMFinderLiveProductFreeGiftsView * _freeGiftsView; // +0x60
    MMUIButton * _actionButton; // +0x68
    UILabel * _saleCountsLabel; // +0x70
    MMFinderLiveTagsLabel * _goodsTitleLabel; // +0x78
    MMFinderLiveGoodsCellSubInfosView * _subInfosView; // +0x80
    MMFinderLiveShowBoxItemsView * _showBoxItemsView; // +0x88
    MMFinderLiveShowBoxItemsView * _evaluationsView; // +0x90
    MMFinderLiveMultiPriceView * _priceView; // +0x98
    MMFinderLiveGoodsSKUSelectView * _skuSelectView; // +0xa0
    MMFinderLiveGoodsPromotionReplayFloatView * _replayFloatView; // +0xa8
}
+ (BOOL)allowMoreLines;
+ (id)identifier;
+ (id)titleFont;
+ (double)titleSpacing;
+ (CGSize)defaultTagSize;
+ (double)titleLineHeight;
+ (double)saleCountsHeight;
+ (id)showBoxItemsViewConfig;
+ (double)showBoxItemsViewHeight;
+ (id)descLineLabelFont;
+ (double)imageWidthForCellWidth:(double)arg1;
+ (double)cellHeightWithModel:(id)arg1 cellWidth:(double)arg2;
+ (double)cellLeftContentHeightWithModel:(id)arg1 cellWidth:(double)arg2;
+ (double)cellRightContentNormalHeight;
+ (double)cellRightContentHeightWithModel:(id)arg1 cellWidth:(double)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (void)addGoodsImageView;
- (void)addActionButton;
- (void)addGoodsTitleLabel;
- (void)addPriceView;
- (void)addAddToShoppingCartButton;
- (void)addShowBoxItemsView;
- (void)addEvaluationsView;
- (void)addSaleCountsLabel;
- (void)createReplayFloatView;
- (void)layoutSubviews;
- (void)layoutLeftParts;
- (void)layoutRightTopParts;
- (void)layoutRightBottomParts;
- (void)setIsPromoting:(BOOL)arg1;
- (BOOL)isPromotingShow;
- (void)onFreeGiftsViewClicked;
- (void)updateWithGoodsViewModel:(id)arg1;
- (void)updateActionButton;
- (id)visibleShowBoxItems;
- (id)productInfo;
- (void)onPurchaseButtonClicked:(id)arg1;
- (void)onAddToShoppingCartButtonClicked:(id)arg1;
- (void)onWebImageGetDifferentSize;
- (void)willShowSKUForIndex:(unsigned long long)arg1;
- (void)didSelectSKU:(id)arg1;
- (void)willShowMoreSKUsTail;
- (void)didReleaseTail;
- (void)didClickTail;
- (id)accessibilityAttributedLabel;
- (id)finderLiveLogReportValueForKey:(id)arg1;
- (id)addToShoppingCartButton;
- (void)setAddToShoppingCartButton:(id)arg1;
- (id)goodsImageView;
- (void)setGoodsImageView:(id)arg1;
- (id)serialNumberView;
- (void)setSerialNumberView:(id)arg1;
- (id)promotingView;
- (void)setPromotingView:(id)arg1;
- (id)freeGiftsView;
- (void)setFreeGiftsView:(id)arg1;
- (id)actionButton;
- (void)setActionButton:(id)arg1;
- (id)saleCountsLabel;
- (void)setSaleCountsLabel:(id)arg1;
- (id)goodsTitleLabel;
- (void)setGoodsTitleLabel:(id)arg1;
- (id)subInfosView;
- (void)setSubInfosView:(id)arg1;
- (id)showBoxItemsView;
- (void)setShowBoxItemsView:(id)arg1;
- (id)evaluationsView;
- (void)setEvaluationsView:(id)arg1;
- (id)priceView;
- (void)setPriceView:(id)arg1;
- (id)skuSelectView;
- (void)setSkuSelectView:(id)arg1;
- (id)replayFloatView;
- (void)setReplayFloatView:(id)arg1;
- (void).cxx_destruct;
@end

