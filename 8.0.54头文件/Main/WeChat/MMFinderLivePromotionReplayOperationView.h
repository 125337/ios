@interface MMFinderLivePromotionReplayOperationView : MMFinderLiveReplayOperationView <MMFinderLiveTaskExt, MMFinderLiveBaseGoodsPromoteContentViewDelegate>
{
    BOOL _supressMessageUpdate; // +0x8
    id <MMFinderLivePromotionReplayOperationViewDelegate> _promotionReplayOperationDelegate; // +0x10
    MMFinderLiveReplayMessageSource * _messageSource; // +0x18
    unsigned long long _lastMessageUpdateTime; // +0x20
    MMFinderLiveReplayGoodsPromoteContentView * _goodsTipView; // +0x28
}
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
- (void)onGoodsPromoteContentViewActionButtonClicked:(id)arg1;
- (void)onGoodsBubbleButton;
- (void)gotoShopDetailPageWithProduct:(id)arg1;
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
- (void).cxx_destruct;
@end

