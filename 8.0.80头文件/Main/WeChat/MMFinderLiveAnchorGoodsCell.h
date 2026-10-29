@interface MMFinderLiveAnchorGoodsCell : MMFinderLiveGoodsCell <MMFinderLiveTagsLabelDelegate>
{
    id <MMFinderLiveAnchorGoodsCellDelegate> _cellDelegate; // +0x40
    id <MMFinderLiveGoodsCellResizeDelegate><MMFinderLiveGoodsCellLimitDiscountDelegate> _refreshDelegate; // +0x48
    MMFinderLiveGoodsRecommendWordingEditView * _recommendWordingEditView; // +0x50
    MMFinderLiveAnchorGoodsCellLeftCardView * _leftCardView; // +0x58
    UILabel * _saleCountsLabel; // +0x60
    MMFinderLiveTagsLabel * _goodsTitleLabel; // +0x68
    MMFinderLiveShowBoxItemsView * _evaluationsView; // +0x70
    MMFinderLiveShowBoxItemsView * _showBoxItemsView; // +0x78
    MMFinderLiveGoodsCellSubInfosView * _subInfosView; // +0x80
    MMFinderLiveGoodsAskedForPromotingView * _askedForPromotingView; // +0x88
    MMFinderLiveGoodsAskedForOpenPriceView * _askedForOpenPriceView; // +0x90
    MMFinderLiveGoodsAuctionBidRecordsView * _auctionBidRecordsView; // +0x98
    MMFinderLiveRemindTipsView * _remindTipsView; // +0xa0
    MMFinderLiveGoodsPromotionReplayButton * _replayButton; // +0xa8
    MMUIButton * _actionButton; // +0xb0
    MMUIButton * _actionButtonSubButton; // +0xb8
    UIView * _actionButtonSeparatorLine; // +0xc0
    MMUIButton * _preHotButton; // +0xc8
    MMUIButton * _showPriceButton; // +0xd0
    MMUIButton * _auctionButton; // +0xd8
    MMFinderLiveShopShelfItemReplayInvalidTipsView * _replayInvalidTipsView; // +0xe0
}
+ (CGSize)defaultTagSize;
+ (double)titleLineHeight;
+ (double)saleCountsHeight;
+ (UIEdgeInsets)padding;
+ (double)titleLeftMargin;
+ (unsigned long long)titleMaxLines;
+ (double)showBoxItemsViewHeight;
+ (double)recommendWordingEditViewHeight;
+ (id)titleFont;
+ (double)tagsSpacing;
+ (id)subInfosFont;
+ (double)subInfosTopMargin;
+ (double)subInfosHeight;
+ (double)buttonsHeight;
+ (double)buttonsTopMargin;
+ (double)askedForPromotingViewTopMargin;
+ (double)askedForOpenPriceViewTopMargin;
+ (double)askedForPromotingViewHeight;
+ (double)askedForOpenPriceViewHeight;
+ (double)auctionBidRecordsViewTopMargin;
+ (double)auctionBidRecordsViewHeight;
+ (double)remindTipsViewTopMargin;
+ (double)remindTipsViewHeight;
+ (double)cellHeightWithModel:(id)arg1 cellWidth:(double)arg2;
+ (double)imageWidthForCellWidth:(double)arg1;
+ (id)identifier;
+ (id)showBoxItemsViewConfig;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)addSaleCountsLabel;
- (void)addGoodsTitleLabel;
- (void)addRecommendWordingEditView;
- (id)addShowBoxItemsView;
- (void)addAskedForOpenPriceView;
- (void)addAuctionBidRecordsView;
- (void)onWebImageGetDifferentSize;
- (id)createNormalButton;
- (void)addActionButton;
- (void)addActionButtonMainPart;
- (void)addActionButtonSeparatorLine;
- (void)addActionButtonSubButton;
- (void)addPreHotButton;
- (void)addShowPriceButton;
- (void)addAuctionButton;
- (void)addReplayButton;
- (void)layoutSubviews;
- (void)onPromoteButtonClicked:(id)arg1;
- (void)onPromoteButtonSubPartClicked:(id)arg1;
- (void)onPreHotButtonClicked:(id)arg1;
- (void)onShowPriceButtonClicked:(id)arg1;
- (void)onAuctionButtonClicked:(id)arg1;
- (void)updateWithGoodsViewModel:(id)arg1;
- (void)updatePromoteButton;
- (void)updateAuctionButton;
- (id)accessibilityAttributedLabel;
- (id)cellDelegate;
- (void)setCellDelegate:(id)arg1;
- (id)refreshDelegate;
- (void)setRefreshDelegate:(id)arg1;
- (id)recommendWordingEditView;
- (void)setRecommendWordingEditView:(id)arg1;
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
- (id)askedForOpenPriceView;
- (void)setAskedForOpenPriceView:(id)arg1;
- (id)auctionBidRecordsView;
- (void)setAuctionBidRecordsView:(id)arg1;
- (id)remindTipsView;
- (void)setRemindTipsView:(id)arg1;
- (id)replayButton;
- (void)setReplayButton:(id)arg1;
- (id)actionButton;
- (void)setActionButton:(id)arg1;
- (id)actionButtonSubButton;
- (void)setActionButtonSubButton:(id)arg1;
- (id)actionButtonSeparatorLine;
- (void)setActionButtonSeparatorLine:(id)arg1;
- (id)preHotButton;
- (void)setPreHotButton:(id)arg1;
- (id)showPriceButton;
- (void)setShowPriceButton:(id)arg1;
- (id)auctionButton;
- (void)setAuctionButton:(id)arg1;
- (id)replayInvalidTipsView;
- (void)setReplayInvalidTipsView:(id)arg1;
- (void).cxx_destruct;
@end
