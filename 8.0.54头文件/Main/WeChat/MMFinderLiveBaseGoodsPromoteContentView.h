@interface MMFinderLiveBaseGoodsPromoteContentView : UIView <MMFinderLiveTagsLabelDelegate>
{
    MMWebImageView * _goodsImageView; // +0x8
    MMUIButton * _actionButton; // +0x10
    UIImageView * _withFreeGiftTagView; // +0x18
    MMFinderLiveShowBoxItemsGroupsView * _showBoxItemsView; // +0x20
    id <MMFinderLiveBaseGoodsPromoteContentViewDelegate> _delegate; // +0x28
    MMFinderLiveGoodsItem * _goods; // +0x30
    UIView * _backgroundView; // +0x38
    MMFinderLiveTagsLabel * _goodsTitleLabel; // +0x40
    MMFinderLiveMultiPriceView * _priceView; // +0x48
}
- (id)initWithFrame:(CGRect)arg1;
- (id)withFreeGiftTagView;
- (id)backgroundView;
- (id)goodsImageView;
- (id)goodsTitleLabel;
- (id)showBoxItemsView;
- (id)priceView;
- (id)actionButton;
- (void)layoutSubviews;
- (void)layoutLeft;
- (void)layoutRightBottom;
- (void)layoutRightTop;
- (void)fillWithGoods:(id)arg1;
- (void)refreshData;
- (void)onActionButtonClicked:(id)arg1;
- (id)visibleShowBoxItems;
- (void)onWebImageGetDifferentSize;
- (void)startDisplayAnimation:(double)arg1;
- (void)startHideAnimationWithPart1Duration:(double)arg1 part2Duration:(double)arg2;
- (id)finderLiveLogReportValueForKey:(id)arg1;
- (void)setGoodsImageView:(id)arg1;
- (void)setActionButton:(id)arg1;
- (void)setWithFreeGiftTagView:(id)arg1;
- (void)setShowBoxItemsView:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)goods;
- (void)setGoods:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setGoodsTitleLabel:(id)arg1;
- (void)setPriceView:(id)arg1;
- (void).cxx_destruct;
@end

