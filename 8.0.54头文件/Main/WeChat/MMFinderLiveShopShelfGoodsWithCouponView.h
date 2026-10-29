@interface MMFinderLiveShopShelfGoodsWithCouponView : UIView <MMFinderLiveShopShelfCouponsSimpleHeaderViewDelegate>
{
    MMFinderLiveTaskId * _taskID; // +0x8
    MMFinderLiveProductsTableView * _tableView; // +0x10
    id <MMFinderLiveShopShelfGoodsWithCouponViewDelegate> _delegate; // +0x18
    MMFinderLiveShopShelfCouponsSimpleHeaderView * _headerView; // +0x20
    MMFinderLiveCouponItem * _coupon; // +0x28
}
- (id)initWithFrame:(CGRect)arg1 taskID:(id)arg2 delegate:(id)arg3;
- (void)layoutSubviews;
- (void)onHeaderViewBackButtonClicked;
- (void)setBackMode:(long long)arg1;
- (long long)backMode;
- (void)setShopWindowItems:(id)arg1 withCoupon:(id)arg2;
- (id)taskID;
- (void)setTaskID:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (id)coupon;
- (void)setCoupon:(id)arg1;
- (void).cxx_destruct;
@end

