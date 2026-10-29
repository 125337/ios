@interface MMFinderLivePromoteDisplayLease : NSObject
{
    MMFinderLivePromoteDisplayLeaseToken * _token; // +0x8
    NSString * _leaseId; // +0x10
    MMFinderLivePromoteDisplayLeaseView * _leaseView; // +0x18
}
- (id)initWithRequest:(id)arg1;
- (id)leasedDisplayView;
- (id)operationDelegate;
- (void)setOperationDelegate:(id)arg1;
- (id)promotionDelegate;
- (void)setPromotionDelegate:(id)arg1;
- (id)copyWithWeakToken;
- (id)token;
- (void)setToken:(id)arg1;
- (id)leaseId;
- (void)setLeaseId:(id)arg1;
- (id)leaseView;
- (void)setLeaseView:(id)arg1;
- (void).cxx_destruct;
@end

