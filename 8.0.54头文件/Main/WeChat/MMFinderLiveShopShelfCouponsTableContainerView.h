@interface MMFinderLiveShopShelfCouponsTableContainerView : UIView <UIGestureRecognizerDelegate, UITableViewDelegate, UITableViewDataSource>
{
    id <MMFinderLiveShopShelfCouponsTableContainerDelegate> _delegate; // +0x8
    NSArray * _couponViewModelGroups; // +0x10
    MMFinderLiveTaskId * _taskID; // +0x18
    MMTableView * _tableView; // +0x20
    MMFinderLiveShopShelfSubPageHeaderView * _headerView; // +0x28
}
- (id)initWithTaskID:(id)arg1 delegate:(id)arg2;
- (void)layoutSubviews;
- (UIEdgeInsets)couponCellsPadding;
- (long long)cellStyle;
- (void)setCouponViewModelGroups:(id)arg1;
- (void)reloadData;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (UIEdgeInsets)headerMarginsWithSection:(unsigned long long)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)couponViewModelGroups;
- (id)taskID;
- (void)setTaskID:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (void).cxx_destruct;
@end

