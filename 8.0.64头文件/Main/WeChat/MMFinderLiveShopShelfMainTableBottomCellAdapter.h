@interface MMFinderLiveShopShelfMainTableBottomCellAdapter : MMFinderLiveShopShelfCellAdapter
{
    MMFinderLiveShopShelfCoordinator * _coordinator; // +0x8
}
+ (id)identifier;
+ (void)registerClassInTableView:(id)arg1;
- (id)identifier;
- (id)initWithCoordinator:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)coordinator;
- (void)setCoordinator:(id)arg1;
- (void).cxx_destruct;
@end
