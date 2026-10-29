@interface MMFinderLiveAnchorGoodsCell : MMFinderLiveGoodsCell <MMFinderLiveTagsLabelDelegate>
{
    MMFinderLiveAnchorGoodsCellLeftCardView * _leftCardView; // +0x40
    UILabel * _saleCountsLabel; // +0x48
    MMFinderLiveTagsLabel * _goodsTitleLabel; // +0x50
    MMFinderLiveShowBoxItemsView * _evaluationsView; // +0x58
    MMFinderLiveShowBoxItemsView * _showBoxItemsView; // +0x60
    MMFinderLiveGoodsCellSubInfosView * _subInfosView; // +0x68
    MMFinderLiveGoodsAskedForPromotingView * _askedForPromotingView; // +0x70
    MMFinderLiveGoodsPromotionReplayButton * _replayButton; // +0x78
    MMUIButton * _actionButton; // +0x80
    MMUIButton * _preHotButton; // +0x88
    MMUIButton * _showPriceButton; // +0x90
}
+ (CGSize)defaultTagSize;
+ (double)titleLineHeight;
+ (double)saleCountsHeight;
+ (UIEdgeInsets)padding;
+ (double)titleLeftMargin;
+ (unsigned long long)titleMaxLines;
+ (double)showBoxItemsViewHeight;
+ (id)titleFont;
+ (double)tagsSpacing;
+ (id)subInfosFont;
+ (double)subInfosTopMargin;
+ (double)subInfosHeight;
+ (double)buttonsHeight;
+ (double)buttonsTopMargin;
+ (double)askedForPromotingViewTopMargin;
+ (double)askedForPromotingViewHeight;
+ (double)cellHeightWithModel:(id)arg1 cellWidth:(double)arg2;
+ (double)imageWidthForCellWidth:(double)arg1;
+ (id)identifier;
+ (id)showBoxItemsViewConfig;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)addSaleCountsLabel;
- (void)addGoodsTitleLabel;
- (id)addShowBoxItemsView;
- (void)onWebImageGetDifferentSize;
- (id)createNormalButton;
- (void)addActionButton;
- (void)addPreHotButton;
- (void)addShowPriceButton;
- (void)addReplayButton;
- (void)layoutSubviews;
- (void)onPromoteButtonClicked:(id)arg1;
- (void)onPreHotButtonClicked:(id)arg1;
- (void)onShowPriceButtonClicked:(id)arg1;
- (void)setActionButtonPromotingState:(BOOL)arg1;
- (void)updateWithGoodsViewModel:(id)arg1;
- (id)accessibilityAttributedLabel;
- (id)leftCardView;
- (void)setLeftCardView:(id)arg1;
- (id)saleCountsLabel;
- (void)setSaleCountsLabel:(id)arg1;
- (id)goodsTitleLabel;
- (void)setGoodsTitleLabel:(id)arg1;
- (id)evaluationsView;
- (void)setEvaluationsView:(id)arg1;
- (id)showBoxItemsView;
- (void)setShowBoxItemsView:(id)arg1;
- (id)subInfosView;
- (void)setSubInfosView:(id)arg1;
- (id)askedForPromotingView;
- (void)setAskedForPromotingView:(id)arg1;
- (id)replayButton;
- (void)setReplayButton:(id)arg1;
- (id)actionButton;
- (void)setActionButton:(id)arg1;
- (id)preHotButton;
- (void)setPreHotButton:(id)arg1;
- (id)showPriceButton;
- (void)setShowPriceButton:(id)arg1;
- (void).cxx_destruct;
@end

