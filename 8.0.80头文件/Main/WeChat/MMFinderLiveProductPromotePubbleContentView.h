@interface MMFinderLiveProductPromotePubbleContentView : MMFinderLivePromotePubbleContentView <MMFinderLiveHotSaleAnimationDelegate, MMFinderLiveBaseGoodsPromoteContentViewDelegate, WCFinderLiveLogReportValueProvider>
{
    BOOL _isDuringAnimationV2Part1; // +0x8
    BOOL _currentSubsidyIsWeaken; // +0x9
    BOOL _skipNextPriceCrossFade; // +0xa
    BOOL _lastEvaluatedIsLimitedSubsidy; // +0xb
    BOOL _closeBySelf; // +0xc
    unsigned int _startExposingTime; // +0x10
    MMFinderLiveGoodsPromoteContentView * _goodsView; // +0x18
    MMFinderLiveGoodsItem * _goods; // +0x20
    MMFinderLiveSubsidyOverlayView * _subsidyOverlay; // +0x28
    MMFinderLiveGoodsItem * _currentSubsidyPlayingItem; // +0x30
    MMFinderLiveSubsidyPriceCrossFadeAnim * _subsidyPriceFadeHolder; // +0x38
    MMFinderLiveSubsidyPriceDecrementAnim * _subsidyPriceDecrementAnim; // +0x40
    MMFinderLiveGoodsItem * _pendingPriceUpdateItem; // +0x48
    FinderWindowProductInfo_LimitedSubsidyInfo * _pendingSubsidyInfo; // +0x50
    unsigned long long _pendingSubsidyProductId; // +0x58
    unsigned long long _lastEvaluatedSubsidyProductId; // +0x60
    MMFinderLiveHotSaleAnimationLogic * _hotSaleAnimationLogic; // +0x68
    MMFinderLiveGoodsHotSaleAnimationView * _hotSaleAnimationView; // +0x70
}
+ (id)transferPromoteBufferToGoodsItem:(id)arg1;
- (BOOL)checkAndTriggerSubsidyAnimWithItem:(id)arg1;
- (void)triggerSubsidyAnimWithItem:(id)arg1 subsidyInfo:(id)arg2;
- (void)doTriggerSubsidyAnimWithItem:(id)arg1 subsidyInfo:(id)arg2;
- (void)startWeakenEnterAnimationOnRealViews;
- (void)startWeakenExitAnimationOnRealViewsWithItem:(id)arg1;
- (void)startWeakenPriceDecrementFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 item:(id)arg3;
- (void)animateSubsidyPriceCrossFade;
- (void)bringSubsidyOverlayToFront;
- (void)syncGiftIconVisibilityForSubsidy;
- (BOOL)isSubsidyAnimCovering;
- (void)syncHotSaleVisibilityForSubsidy;
- (void)cancelSubsidyAnim;
- (void)replayPendingSubsidyAnimIfNeeded;
- (BOOL)isShoppingListShowing;
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
- (void)reReportExpose;
- (void)reportExposeWithIsFirst:(BOOL)arg1;
- (id)goodsView;
- (void)setGoodsView:(id)arg1;
- (id)goods;
- (void)setGoods:(id)arg1;
- (BOOL)isDuringAnimationV2Part1;
- (void)setIsDuringAnimationV2Part1:(BOOL)arg1;
- (id)subsidyOverlay;
- (void)setSubsidyOverlay:(id)arg1;
- (id)currentSubsidyPlayingItem;
- (void)setCurrentSubsidyPlayingItem:(id)arg1;
- (id)subsidyPriceFadeHolder;
- (void)setSubsidyPriceFadeHolder:(id)arg1;
- (id)subsidyPriceDecrementAnim;
- (void)setSubsidyPriceDecrementAnim:(id)arg1;
- (BOOL)currentSubsidyIsWeaken;
- (void)setCurrentSubsidyIsWeaken:(BOOL)arg1;
- (id)pendingPriceUpdateItem;
- (void)setPendingPriceUpdateItem:(id)arg1;
- (BOOL)skipNextPriceCrossFade;
- (void)setSkipNextPriceCrossFade:(BOOL)arg1;
- (id)pendingSubsidyInfo;
- (void)setPendingSubsidyInfo:(id)arg1;
- (unsigned long long)pendingSubsidyProductId;
- (void)setPendingSubsidyProductId:(unsigned long long)arg1;
- (unsigned long long)lastEvaluatedSubsidyProductId;
- (void)setLastEvaluatedSubsidyProductId:(unsigned long long)arg1;
- (BOOL)lastEvaluatedIsLimitedSubsidy;
- (void)setLastEvaluatedIsLimitedSubsidy:(BOOL)arg1;
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
