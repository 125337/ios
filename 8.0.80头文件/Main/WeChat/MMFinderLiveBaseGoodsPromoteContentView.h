@interface MMFinderLiveBaseGoodsPromoteContentView : UIView <MMFinderLiveTagsLabelDelegate>
{
    BOOL _giftIconVisibleByData; // +0x8
    BOOL _subsidyAnimSuppressGiftIcon; // +0x9
    MMWebImageView * _goodsImageView; // +0x10
    MMFinderLiveProductButton * _actionButton; // +0x18
    MMWebImageView * _withFreeGiftTagView; // +0x20
    MMFinderLiveShowBoxItemsGroupsView * _showBoxItemsView; // +0x28
    id <MMFinderLiveBaseGoodsPromoteContentViewDelegate> _delegate; // +0x30
    MMFinderLiveGoodsItem * _goods; // +0x38
    MMFinderLiveMultiPriceView * _priceView; // +0x40
    MMFinderLiveTagsLabel * _goodsTitleLabel; // +0x48
    UIView * _backgroundView; // +0x50
}
- (void)updateGiftIconVisibleByData:(BOOL)arg1;
- (void)updateSubsidyAnimSuppressGiftIcon:(BOOL)arg1;
- (void)updateGiftIconVisibility;
- (id)initWithFrame:(CGRect)arg1;
- (id)withFreeGiftTagView;
- (id)backgroundView;
- (id)goodsImageView;
- (id)goodsTitleLabel;
- (id)showBoxItemsView;
- (void)addPriceView;
- (id)actionButton;
- (void)layoutSubviews;
- (void)layoutLeft;
- (void)layoutRightBottom;
- (void)layoutRightTop;
- (void)fillWithGoods:(id)arg1;
- (void)fillWithGoodsExceptPrice:(id)arg1;
- (void)refreshData;
- (void)refreshUIExceptPrice;
- (void)onActionButtonClicked:(id)arg1;
- (id)visibleShowBoxItems;
- (void)onWebImageGetDifferentSize;
- (void)startDisplayAnimationWithPart1Duration:(double)arg1 part2Duration:(double)arg2;
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
- (id)priceView;
- (void)setPriceView:(id)arg1;
- (void)setGoodsTitleLabel:(id)arg1;
- (BOOL)giftIconVisibleByData;
- (void)setGiftIconVisibleByData:(BOOL)arg1;
- (void)setBackgroundView:(id)arg1;
- (BOOL)subsidyAnimSuppressGiftIcon;
- (void)setSubsidyAnimSuppressGiftIcon:(BOOL)arg1;
- (void).cxx_destruct;
@end
