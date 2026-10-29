@interface MMFinderLiveCouponCardViewModel : NSObject <MMFinderLiveCouponItemObserver, WCFinderLiveExt, WCFinderContactExt>
{
    BOOL _audienceReceived; // +0x8
    MMFinderLiveCouponCardView * _cardView; // +0x10
    MMFinderLiveCouponItem * _coupon; // +0x18
    MMFinderLiveTaskId * _taskID; // +0x20
    id <MMFinderLiveCouponCardViewModelDelegate> _delegate; // +0x28
}
- (id)initWithInfo:(id)arg1 taskID:(id)arg2 delegate:(id)arg3;
- (BOOL)isNormalAudience;
- (void)onPostFinderLiveLike:(id)arg1 taskId:(id)arg2 postResult:(id)arg3;
- (void)onPostFinderLiveMessageToPublicSuccessForTaskId:(id)arg1 content:(id)arg2;
- (void)onFinderContactFollowStatusRealUpdate:(id)arg1;
- (void)onLocalSatisfiedForAudience;
- (void)onCouponDidUpdate:(id)arg1;
- (id)cardView;
- (void)setCardView:(id)arg1;
- (id)coupon;
- (void)setCoupon:(id)arg1;
- (id)taskID;
- (void)setTaskID:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)audienceReceived;
- (void)setAudienceReceived:(BOOL)arg1;
- (void).cxx_destruct;
@end

