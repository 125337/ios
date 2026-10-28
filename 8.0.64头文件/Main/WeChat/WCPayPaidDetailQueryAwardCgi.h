@interface WCPayPaidDetailQueryAwardCgi : WCPayBaseTenPayCgi
{
    NSString * _activityId; // +0x8
    NSString * _awardId; // +0x10
    NSString * _sendRecordId; // +0x18
    NSString * _userRecordId; // +0x20
    NSString * _reqKey; // +0x28
    NSString * _transactionId; // +0x30
    NSString * _activityMchId; // +0x38
    NSString * _activityType; // +0x40
    id <WCPayPaidDetailQueryAwardCgiDelegate> _cgiDelegate; // +0x48
}
- (id)initWithDelegate:(id)arg1;
- (void)startSendRequest;
- (void)didGetTenPayResponse:(id)arg1;
- (void)didFailWithError:(id)arg1;
- (void)didGetTenPayError:(id)arg1;
- (void)callErrorDelegate;
- (id)activityId;
- (void)setActivityId:(id)arg1;
- (id)awardId;
- (void)setAwardId:(id)arg1;
- (id)sendRecordId;
- (void)setSendRecordId:(id)arg1;
- (id)userRecordId;
- (void)setUserRecordId:(id)arg1;
- (id)reqKey;
- (void)setReqKey:(id)arg1;
- (id)transactionId;
- (void)setTransactionId:(id)arg1;
- (id)activityMchId;
- (void)setActivityMchId:(id)arg1;
- (id)activityType;
- (void)setActivityType:(id)arg1;
- (id)cgiDelegate;
- (void)setCgiDelegate:(id)arg1;
- (void).cxx_destruct;
@end
