@interface MMFinderLiveProductPromotePubbleContentView : MMFinderLivePromotePubbleContentView <MMFinderLiveHotSaleAnimationDelegate, MMFinderLiveBaseGoodsPromoteContentViewDelegate, WCFinderLiveLogReportValueProvider>
{
    BOOL _isDuringAnimationV2Part1; // +0x8
    BOOL _closeBySelf; // +0x9
    unsigned int _startExposingTime; // +0xc
    MMFinderLiveGoodsPromoteContentView * _goodsView; // +0x10
    MMFinderLiveGoodsItem * _goods; // +0x18
    MMFinderLiveHotSaleAnimationLogic * _hotSaleAnimationLogic; // +0x20
    MMFinderLiveGoodsHotSaleAnimationView * _hotSaleAnimationView; // +0x28
}
+ (id)transferPromoteBufferToGoodsItem:(id)arg1;
- (void)startHotSaleAnimation:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)updateHotSaleAnimation:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)finishHotSaleAnimation:(id /* block */)arg1;
- (id)animationFile;
- (BOOL)hasAnimationResource;
- (id)initWithPromoteMsgInfo:(id)arg1 taskId:(id)arg2;
- (void)convertPromoteMsgInfo:(id)arg1;
- (void)layoutUI;
- (void)refreshData;
- (BOOL)isCurrentPromoteItem:(id)arg1;
- (void)updatePromoteItem:(id)arg1;
- (id)currentPromoteItem;
- (void)updateFromSyncPromoteResp:(id)arg1;
- (void)updatepromoteBuffer:(id)arg1;
- (id)getCurrentPromoteBuffer;
- (void)handleSingleTapGesture:(id)arg1;
- (void)onGoodsPromoteContentViewActionButtonClicked:(id)arg1;
- (void)onTapActionForAudience;
- (void)onTapActionButtonForAudience;
- (void)onClosed;
- (void)onDismissed;
- (void)reportGoodsBubbleExposeTimeAndReset;
- (void)reportGoodsBubbleExposeTime;
- (void)onShowed;
- (id)stockID;
- (id)productItem;
- (void)onWebImageGetDifferentSize;
- (BOOL)isDuringHintAnimation;
- (id)currentHintAnimationInfo;
- (void)receiveHintAnimationInfo:(id)arg1;
- (unsigned long long)willHandleProductHintAnimation;
- (id)finderLiveLogReportValueForKey:(id)arg1;
- (void)startDisplayAnimationWithPart1Duration:(double)arg1 part2Duration:(double)arg2;
- (void)startHideAnimationWithPart1Duration:(double)arg1 part2Duration:(double)arg2;
- (id)goodsView;
- (void)setGoodsView:(id)arg1;
- (id)goods;
- (void)setGoods:(id)arg1;
- (BOOL)isDuringAnimationV2Part1;
- (void)setIsDuringAnimationV2Part1:(BOOL)arg1;
- (unsigned int)startExposingTime;
- (void)setStartExposingTime:(unsigned int)arg1;
- (BOOL)closeBySelf;
- (void)setCloseBySelf:(BOOL)arg1;
- (id)hotSaleAnimationLogic;
- (void)setHotSaleAnimationLogic:(id)arg1;
- (id)hotSaleAnimationView;
- (void)setHotSaleAnimationView:(id)arg1;
- (void).cxx_destruct;
@end
