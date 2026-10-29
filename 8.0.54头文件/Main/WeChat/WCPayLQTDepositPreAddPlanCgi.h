@interface WCPayLQTDepositPreAddPlanCgi : WCPayBaseCgi
{
    id <WCPayLQTDepositPreAddPlanCgiDelegate> m_delegate; // +0x8
}
- (id)initWithDelegate:(id)arg1;
- (void)startWithRequest:(id)arg1;
- (void)startRequestWithCache:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1;
- (void)cacheResponse:(id)arg1;
- (void).cxx_destruct;
@end

