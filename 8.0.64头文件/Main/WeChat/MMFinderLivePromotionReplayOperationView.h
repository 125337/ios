@interface MMFinderLivePromotionReplayOperationView : MMFinderLiveReplayOperationView <MMFinderLiveTaskExt, MMFinderLiveBaseGoodsPromoteContentViewDelegate, WAAppTaskNavigateBackNativeExt, MMFinderLiveBulkBuyPromoteContentViewDelegate>
{
    BOOL _supressMessageUpdate; // +0x8
    id <MMFinderLivePromotionReplayOperationViewDelegate> _promotionReplayOperationDelegate; // +0x10
    MMFinderLiveReplayMessageSource * _messageSource; // +0x18
    unsigned long long _lastMessageUpdateTime; // +0x20
    MMFinderLiveReplayGoodsPromoteContentView * _goodsTipView; // +0x28
    MMFinderLiveBulkBuyPromoteContentView * _bulkBuyTipView; // +0x30
    MMFinderLiveGoodsItem * _product; // +0x38
    FinderBulkBuyInfo * _bulkBuy; // +0x40
    WAWebViewController * _lastBuyPageViewController; // +0x48
    id /* block */ _productRefresher; // +0x50
}
- (id)initWithTaskId:(id)arg1 product:(id)arg2 productRefresher:(id /* block */)arg3;
- (id)initWithTaskId:(id)arg1 bulkBuy:(id)arg2;
- (void)registerExtensions;
- (void)unRegisterExtensions;
- (BOOL)shouldHideTopMaskWhenCLeanScreen;
- (BOOL)shouldHideBottomMaskWhenCLeanScreen;
- (void)onEnterLive;
- (void)layoutUI;
- (void)createReplayControlView;
- (void)showContents;
- (void)hideContents;
- (void)layoutGoodsPubbleTipView;
- (id)goodsTipView;
- (id)bulkBuyTipView;
- (void)onBulkBuyBubbleClicked;
- (void)onGoodsTipBubbleClicked;
- (void)onGoodsPromoteContentViewActionButtonClicked:(id)arg1;
- (void)updateWAAppTaskHandlerWrapperForAutoPlayControl:(id)arg1;
- (void)onWillJumpToMiniAppAfterBackNativeWithContext:(id)arg1;
- (void)onBulkBuyPromoteContentViewActionButtonClicked:(id)arg1;
- (void)onVideoPlay;
- (void)onSliderSeekBegin;
- (void)onSliderSeekToTime:(float)arg1;
- (double)toolViewBottom;
- (id)promotionReplayOperationDelegate;
- (void)setPromotionReplayOperationDelegate:(id)arg1;
- (id)messageSource;
- (void)setMessageSource:(id)arg1;
- (unsigned long long)lastMessageUpdateTime;
- (void)setLastMessageUpdateTime:(unsigned long long)arg1;
- (BOOL)supressMessageUpdate;
- (void)setSupressMessageUpdate:(BOOL)arg1;
- (void)setGoodsTipView:(id)arg1;
- (void)setBulkBuyTipView:(id)arg1;
- (id)product;
- (void)setProduct:(id)arg1;
- (id)bulkBuy;
- (void)setBulkBuy:(id)arg1;
- (id)lastBuyPageViewController;
- (void)setLastBuyPageViewController:(id)arg1;
- (id /* block */)productRefresher;
- (void)setProductRefresher:(id /* block */)arg1;
- (void).cxx_destruct;
@end
