@interface MMFinderLivePrizeActivitiesRouterActionSheet : MMPageSheetBaseView <MMLiveRelatedLiveExt>
{
    UIView * _contentView; // +0x8
    UIView * _headView; // +0x10
    MMFinderLivePrizeActivitiesRouterActionSheetItemView * _blueGiftItemView; // +0x18
    MMFinderLivePrizeActivitiesRouterActionSheetItemView * _lotteryItemView; // +0x20
    MMFinderLivePrizeActivitiesRouterActionSheetItemView * _redPacketItemView; // +0x28
    MMFinderLivePrizeActivitiesRouterActionSheetConfig * _config; // +0x30
}
- (id)initWithConfig:(id)arg1;
- (id)lotteryItemView;
- (id)blueGiftItemView;
- (id)redPacketItemView;
- (void)createUI;
- (void)layoutSubviews;
- (void)setupPageSheetConfig;
- (double)contentViewHeight;
- (id)headView;
- (id)contentView;
- (void)pageSheetDidDismiss;
- (void)pageSheetWillAppear;
- (void)pageSheetDidDisappear;
- (id)liveTask;
- (void)onRelatedLiveEntryVetoRequested:(BOOL *)arg1;
- (void)setContentView:(id)arg1;
- (void)setHeadView:(id)arg1;
- (void)setBlueGiftItemView:(id)arg1;
- (void)setLotteryItemView:(id)arg1;
- (void)setRedPacketItemView:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (void).cxx_destruct;
@end
