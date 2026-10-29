@interface WCFinderFetchFinderSubscribeMemberShipPayBillCGI : WCFinderBaseCgi
{
    NSString * _finderUsername; // +0x8
    unsigned long long _monthCount; // +0x10
    unsigned long long _subscriptionType; // +0x18
    NSData * _subscriptionExtInfo; // +0x20
    id /* block */ _successful; // +0x28
    id /* block */ _failure; // +0x30
    unsigned long long _entranceSource; // +0x38
}
- (id)initWithFinderUsername:(id)arg1 monthCount:(unsigned long long)arg2 subscriptionType:(unsigned long long)arg3 subscriptionExtInfo:(id)arg4 entranceSource:(unsigned long long)arg5 successful:(id /* block */)arg6 failure:(id /* block */)arg7;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (unsigned long long)monthCount;
- (void)setMonthCount:(unsigned long long)arg1;
- (unsigned long long)subscriptionType;
- (void)setSubscriptionType:(unsigned long long)arg1;
- (id)subscriptionExtInfo;
- (void)setSubscriptionExtInfo:(id)arg1;
- (id /* block */)successful;
- (void)setSuccessful:(id /* block */)arg1;
- (id /* block */)failure;
- (void)setFailure:(id /* block */)arg1;
- (unsigned long long)entranceSource;
- (void)setEntranceSource:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

