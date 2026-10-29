@interface MMFinderLiveAudienceGoodsCell : MMFinderLiveGoodsCell <MMFinderLiveGoodsSKUSelectViewDelegate, MMFinderLiveTagsLabelDelegate, MMWebImageViewDelegate>
{
    id <MMFinderLiveAudienceGoodsCellDelegate> _cellDelegate; // +0x40
    MMFinderLiveProductLittleTailView * _littleTailView; // +0x48
    MMFinderLiveProductButton * _presentButton; // +0x50
    MMUILabel * _likeButtonView; // +0x58
    MMUIButton * _favoriteButton; // +0x60
    MMUIButton * _addToShoppingCartButton; // +0x68
    MMWebImageView * _goodsImageView; // +0x70
    MMFinderLiveGoodsPromotionReplayFloatView * _replayFloatView; // +0x78
    MMFinderLiveProductPromotingMaskView * _promotingView; // +0x80
    EcsRichTextLabel * _ecsRichTextLabel; // +0x88
    double _promotingBgAlpha; // +0x90
    MMFinderLiveGoodsSerialNumberView * _serialNumberView; // +0x98
    MMFinderLiveProductButton * _actionButton; // +0xa0
    MMUIImageView * _likeButtonImage; // +0xa8
    MMUILabel * _likeButtonLabel; // +0xb0
    UILabel * _saleCountsLabel; // +0xb8
    MMFinderLiveTagsLabel * _goodsTitleLabel; // +0xc0
    MMFinderLiveGoodsCellSubInfosView * _subInfosView; // +0xc8
    MMFinderLiveShowBoxItemsView * _showBoxItemsView; // +0xd0
    MMFinderLiveShowBoxItemsView * _evaluationsView; // +0xd8
    MMFinderLiveMultiPriceView * _priceView; // +0xe0
    MMFinderLiveGoodsSKUSelectView * _skuSelectView; // +0xe8
    unsigned long long _imageLoadStartTime; // +0xf0
}
+ (id)identifier;
+ (id)titleFont;
+ (double)titleSpacing;
+ (CGSize)defaultTagSize;
+ (double)titleLineHeight;
+ (double)saleCountsHeight;
+ (id)showBoxItemsViewConfig;
+ (double)showBoxItemsViewHeight;
+ (id)descLineLabelFont;
+ (double)ecsRichTextRowHeightForRichLabel:(id)arg1;
+ (BOOL)ecsRichLabelHasText:(id)arg1;
+ (double)imageWidthForCellWidth:(double)arg1;
+ (double)cellHeightWithModel:(id)arg1 cellWidth:(double)arg2;
+ (double)cellLeftContentHeightWithModel:(id)arg1 cellWidth:(double)arg2;
+ (double)cellRightContentNormalHeight;
+ (double)cellRightContentHeightWithModel:(id)arg1 cellWidth:(double)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (void)addGoodsImageView;
- (void)addActionButton;
- (void)addLikeButton;
- (void)addFavoriteButton;
- (void)addPresentButton;
- (id)addProductButton;
- (void)addGoodsTitleLabel;
- (void)addEcsRichTextLabel;
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
- (void)onLittleTailClicked;
- (void)updateWithGoodsViewModel:(id)arg1;
- (void)updateEcsRichTextLabelWithProductInfo:(id)arg1;
- (void)updateAddToShoppingCartButtons;
- (void)updateLikeButton;
- (void)updateLikeButtonLabelText;
- (void)updateFavoriteButton;
- (void)updateSwipeLeftButton;
- (void)updatePresentButton;
- (id)visibleShowBoxItems;
- (void)showAddToShoppingCartGuide;
- (id)productInfo;
- (void)onPurchaseButtonClicked:(id)arg1;
- (void)onAddButtonClicked:(id)arg1;
- (void)onAddButtonClickedFromMenu:(id)arg1;
- (void)onFavoriteButtonClicked:(id)arg1;
- (void)onPresentButtonClicked:(id)arg1;
- (void)onAddToShoppingCartButtonClicked:(id)arg1;
- (void)onWebImageGetDifferentSize;
- (void)onMultiMenuAppear;
- (void)willShowSKUForIndex:(unsigned long long)arg1;
- (void)didSelectSKU:(id)arg1;
- (void)willShowMoreSKUsTail;
- (void)didReleaseTail;
- (void)didClickTail;
- (id)accessibilityAttributedLabel;
- (id)finderLiveLogReportValueForKey:(id)arg1;
- (void)onLoadImageFromNetworkOK:(id)arg1;
- (id)cellDelegate;
- (void)setCellDelegate:(id)arg1;
- (id)littleTailView;
- (void)setLittleTailView:(id)arg1;
- (id)presentButton;
- (void)setPresentButton:(id)arg1;
- (id)likeButtonView;
- (void)setLikeButtonView:(id)arg1;
- (id)favoriteButton;
- (void)setFavoriteButton:(id)arg1;
- (id)addToShoppingCartButton;
- (void)setAddToShoppingCartButton:(id)arg1;
- (id)goodsImageView;
- (void)setGoodsImageView:(id)arg1;
- (id)replayFloatView;
- (void)setReplayFloatView:(id)arg1;
- (id)promotingView;
- (void)setPromotingView:(id)arg1;
- (id)ecsRichTextLabel;
- (void)setEcsRichTextLabel:(id)arg1;
- (double)promotingBgAlpha;
- (void)setPromotingBgAlpha:(double)arg1;
- (id)serialNumberView;
- (void)setSerialNumberView:(id)arg1;
- (id)actionButton;
- (void)setActionButton:(id)arg1;
- (id)likeButtonImage;
- (void)setLikeButtonImage:(id)arg1;
- (id)likeButtonLabel;
- (void)setLikeButtonLabel:(id)arg1;
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
- (unsigned long long)imageLoadStartTime;
- (void)setImageLoadStartTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
