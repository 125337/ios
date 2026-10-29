@interface MMFinderLiveAudienceCouponsView : MMFinderLiveCouponsView <MMFinderLiveShopShelfCouponsTableContainerDelegate, MMFinderLiveCouponViewDelegate>
{
    NSMutableSet * _exposedCouponIdSet; // +0x8
}
- (id)initWithTaskID:(id)arg1 shopShelfCoordinator:(id)arg2 delegate:(id)arg3;
- (void)updateWithCoordinator;
- (void)onActionButtonClicked:(id)arg1 view:(id)arg2;
- (void)onRestrictIconClicked:(id)arg1;
- (id /* block */)actionForReportButtonActionWithIsReceiveFailForCoupon:(id)arg1;
- (void)willDisplayCellForModel:(id)arg1;
- (id)exposedCouponIdSet;
- (void)setExposedCouponIdSet:(id)arg1;
- (void).cxx_destruct;
@end
