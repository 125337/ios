@interface MMFinderLiveCouponsView : UIView <MMFinderLiveShopShelfCouponsTableContainerDelegate>
{
    MMFinderLiveShopShelfCoordinator * _shopShelfCoordinator; // +0x8
    id <MMFinderLiveCouponsViewDelegate> _delegate; // +0x10
    MMFinderLiveTaskId * _taskID; // +0x18
    MMFinderLiveShopShelfCouponsTableContainerView * _containerView; // +0x20
}
- (id)initWithTaskID:(id)arg1 shopShelfCoordinator:(id)arg2 delegate:(id)arg3;
- (id)cellViewModelsBy:(id)arg1;
- (void)layoutSubviews;
- (void)onHeaderViewBackButtonClicked;
- (void)startLoading;
- (void)stopLoading;
- (void)updateWithCoordinator;
- (id)shopShelfCoordinator;
- (void)setShopShelfCoordinator:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)taskID;
- (void)setTaskID:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (void).cxx_destruct;
@end
