@interface MMFinderLiveShopShelfCouponViewModel : NSObject <MMFinderLiveCouponCellViewModel>
{
    MMFinderLiveTaskId * _taskID; // +0x8
    MMFinderLiveCouponItem * _coupon; // +0x10
}
- (id)initWithTaskID:(id)arg1 coupon:(id)arg2;
- (BOOL)needActionButton;
- (id)taskID;
- (void)setTaskID:(id)arg1;
- (id)coupon;
- (void)setCoupon:(id)arg1;
- (void).cxx_destruct;
@end
