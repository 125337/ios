@interface MMFinderLiveGiftStarLogic : NSObject <WCCoinConsumeLogicDelegate, MMFinderLiveGiftStarActionDelegate>
{
    BOOL _lightAllInFlight; // +0x8
    MMFinderLiveViewController * _liveViewController; // +0x10
    MMFinderLiveGiftStarPanel * _currentPanel; // +0x18
    MMNexusGiftStarAdapter * _nexusAdapter; // +0x20
    MMFinderLiveGiftStarLightAllJob * _lightAllJob; // +0x28
    long long _entryScene; // +0x30
}
+ (BOOL)isNexusEnabled;
- (id)initWithLiveViewController:(id)arg1;
- (id)liveTask;
- (id)taskId;
- (id)sendingLogic;
- (void)showGiftStarPanelWithScene:(long long)arg1;
- (void)showNativePanel;
- (void)ensureGiftListLoadedWithCompletion:(id /* block */)arg1;
- (void)scheduleRefresh;
- (id /* block */)captureDismissActionForSheet:(id)arg1;
- (void)notifyRefreshNow;
- (void)report:(unsigned long long)arg1 extras:(id)arg2;
- (void)giftStarReportAction:(unsigned long long)arg1 extras:(id)arg2;
- (void)giftStarRequestSendGiftId:(id)arg1 count:(unsigned int)arg2 fromSheet:(id)arg3;
- (void)giftStarRequestLightAllWithUnlockInfos:(id)arg1 fromSheet:(id)arg2;
- (void)endLightAllInFlight;
- (void)continueLightAllWithUnlockInfos:(id)arg1 sheet:(id)arg2 dismissAction:(id /* block */)arg3 allowReloadGiftList:(BOOL)arg4;
- (void)giftStarDidClickRankContact:(id)arg1 fromSheet:(id)arg2;
- (void)giftStarDidClickRuleFromSheet:(id)arg1;
- (void)startBatchRewardWithUnlockInfos:(id)arg1 sheet:(id)arg2 dismissAction:(id /* block */)arg3;
- (void)consumeNextOrder;
- (id)matchedWrappedItemOfCurrentOrder;
- (void)consumeDidSuccess:(id)arg1 result:(id)arg2;
- (void)consumeDidFail:(id)arg1 error:(id)arg2;
- (void)consumeDidCancel:(id)arg1;
- (void)showLocalGiftBarForItem:(id)arg1;
- (void)finishLightAllJob;
- (id)liveViewController;
- (void)setLiveViewController:(id)arg1;
- (id)currentPanel;
- (void)setCurrentPanel:(id)arg1;
- (id)nexusAdapter;
- (void)setNexusAdapter:(id)arg1;
- (id)lightAllJob;
- (void)setLightAllJob:(id)arg1;
- (BOOL)lightAllInFlight;
- (void)setLightAllInFlight:(BOOL)arg1;
- (long long)entryScene;
- (void)setEntryScene:(long long)arg1;
- (void).cxx_destruct;
@end
