@interface MMFinderLivePromoteDisplayLeaseToken : NSObject
{
    BOOL _invalidated; // +0x8
    NSString * _leaseId; // +0x10
    double _leaseBeginUnixEpochTime; // +0x18
    id <MMFinderLiveOperationViewDelegate> _operationDelegate; // +0x20
    id <MMFinderLivePromoteDisplayLeaseTokenDelegate> _delegate; // +0x28
    MMFinderLivePromoteDisplayLeaseRequest * _request; // +0x30
    id <MMFinderLivePromoteDisplayLeasePromotionDelegate> _promotionDelegate; // +0x38
}
- (id)initWithId:(id)arg1 request:(id)arg2;
- (void)dealloc;
- (double)leaseDuration;
- (unsigned long long)priority;
- (BOOL)dismissCurrentPromotion;
- (BOOL)relinquishUponUpcomingPromotion;
- (BOOL)userDismissable;
- (id)userInfo;
- (void)setNeedsLayout;
- (void)relinquishLease;
- (void)notifyViewAttached;
- (void)notifyViewDetaching;
- (void)notifyInvalidationForReason:(unsigned long long)arg1;
- (void)leaseTimeout;
- (id)leaseId;
- (void)setLeaseId:(id)arg1;
- (double)leaseBeginUnixEpochTime;
- (void)setLeaseBeginUnixEpochTime:(double)arg1;
- (BOOL)invalidated;
- (void)setInvalidated:(BOOL)arg1;
- (id)operationDelegate;
- (void)setOperationDelegate:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)request;
- (void)setRequest:(id)arg1;
- (id)promotionDelegate;
- (void)setPromotionDelegate:(id)arg1;
- (void).cxx_destruct;
@end

