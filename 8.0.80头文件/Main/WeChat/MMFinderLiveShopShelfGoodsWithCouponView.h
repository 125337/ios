@interface MMFinderLiveShopShelfGoodsWithCouponView : UIView <MMFinderLiveShopShelfCouponsSimpleHeaderViewDelegate, MMFinderLiveProductsTableViewDelegate>
{
    MMFinderLiveTaskId * _taskID; // +0x8
    MMFinderLiveProductsTableView * _tableView; // +0x10
    id <MMFinderLiveShopShelfGoodsWithCouponViewDelegate> _delegate; // +0x18
    MMFinderLiveShopShelfCouponsSimpleHeaderView * _headerView; // +0x20
}
- (id)initWithFrame:(CGRect)arg1 taskID:(id)arg2 delegate:(id)arg3;
- (void)layoutSubviews;
- (void)onHeaderViewBackButtonClicked;
- (void)setBackMode:(long long)arg1;
- (long long)backMode;
- (void)setShopShelfResponse:(id)arg1;
- (void)cell:(id)arg1 willDisplayForModel:(id)arg2;
- (void)reportExposeCouponGoodsProductIdFromModel:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)taskID;
- (void)setTaskID:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (void).cxx_destruct;
@end
