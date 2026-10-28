@interface MMFinderLiveShopShelfBulkBuyViewModel : NSObject <MMFinderLiveShopShelfItemViewModelProtocol, MMFinderLiveShopShelfManagedItemViewModelProtocol>
{
    FinderBulkBuyInfo * _data; // +0x8
    MMFinderLiveTaskId * _taskID; // +0x10
    MMFinderLiveShopShelfCoordinator * _shopShelfCoordinator; // +0x18
}
- (BOOL)isPromoting;
- (void)setIsPromoting:(BOOL)arg1;
- (id)productReplayInfo;
- (id)idUnit;
- (BOOL)needReplayButton;
- (id)data;
- (void)setData:(id)arg1;
- (id)taskID;
- (void)setTaskID:(id)arg1;
- (id)shopShelfCoordinator;
- (void)setShopShelfCoordinator:(id)arg1;
- (void).cxx_destruct;
@end
