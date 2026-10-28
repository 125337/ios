@interface MMFinderLiveWinterOlympicLogic : MMFinderLiveLogic
{
    BOOL _hasInitTorch; // +0x8
    id <MMFinderLiveWinterOlympicLogicDelegate> _liveLogicDelegate; // +0x10
}
- (id)initWithTaskId:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)activityTaskId;
- (id)activityTask;
- (void)loadFont;
- (unsigned long long)torchSourceFromFinderLiveRoomStartScene:(unsigned long long)arg1;
- (BOOL)shouldDisplayLawTips;
- (void)fetchRewardGiftList;
- (void)onJoinFinderLiveError:(id)arg1 finderDataItem:(id)arg2 joinLiveContext:(id)arg3 errorPage:(id)arg4;
- (void)onGetFinderActivityLiveWinterOlympicsTocherTotalUpdated:(unsigned long long)arg1 withTaskId:(id)arg2;
- (void)onGetFinderActivityLiveWinterOlympicsStartStatusUpdated:(BOOL)arg1 withTaskId:(id)arg2;
- (id)liveLogicDelegate;
- (void)setLiveLogicDelegate:(id)arg1;
- (BOOL)hasInitTorch;
- (void)setHasInitTorch:(BOOL)arg1;
- (void).cxx_destruct;
@end
