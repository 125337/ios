@interface MMFinderLivePrizeActivitiesRouterActionSheetConfig : NSObject
{
    id /* block */ _onLotteryItemClicked; // +0x8
    id /* block */ _onRedPacketItemClicked; // +0x10
    id /* block */ _onDismissed; // +0x18
    MMFinderLiveTaskId * _taskID; // +0x20
}
- (id)initWithTaskID:(id)arg1;
- (id /* block */)onLotteryItemClicked;
- (void)setOnLotteryItemClicked:(id /* block */)arg1;
- (id /* block */)onRedPacketItemClicked;
- (void)setOnRedPacketItemClicked:(id /* block */)arg1;
- (id /* block */)onDismissed;
- (void)setOnDismissed:(id /* block */)arg1;
- (id)taskID;
- (void)setTaskID:(id)arg1;
- (void).cxx_destruct;
@end
