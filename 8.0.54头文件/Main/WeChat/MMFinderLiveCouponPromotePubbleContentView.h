@interface MMFinderLiveCouponPromotePubbleContentView : MMFinderLivePromotePubbleContentView <MMFinderLiveCouponViewDelegate, MMFinderLiveCouponItemObserver>
{
    BOOL _willDismissing; // +0x8
    MMFinderLiveCouponItem * _couponItem; // +0x10
    MMFinderLiveCouponView * _couponView; // +0x18
    FinderShopCouponInfo * _couponInfo; // +0x20
}
- (void)convertPromoteMsgInfo:(id)arg1;
- (void)layoutUI;
- (void)refreshData;
- (BOOL)isCurrentPromoteItem:(id)arg1;
- (void)updatePromoteItem:(id)arg1;
- (void)setCouponItem:(id)arg1;
- (void)onCouponDidUpdate:(id)arg1;
- (id)currentPromoteItem;
- (void)updateFromSyncPromoteResp:(id)arg1;
- (void)updatepromoteBuffer:(id)arg1;
- (id)getCurrentPromoteBuffer;
- (void)onClosed;
- (void)onShowed;
- (void)handleSingleTapGesture:(id)arg1;
- (void)layoutCouponView;
- (void)onActionButtonClicked:(id)arg1 view:(id)arg2;
- (void)onCouponAction:(id)arg1 view:(id)arg2;
- (void)startLoading;
- (void)stopLoading;
- (id)couponItem;
- (id)couponView;
- (void)setCouponView:(id)arg1;
- (id)couponInfo;
- (void)setCouponInfo:(id)arg1;
- (BOOL)willDismissing;
- (void)setWillDismissing:(BOOL)arg1;
- (void).cxx_destruct;
@end

