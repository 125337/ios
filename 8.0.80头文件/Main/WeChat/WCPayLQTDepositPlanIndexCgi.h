@interface WCPayLQTDepositPlanIndexCgi : WCPayBaseCgi
{
    BOOL _fromServer; // +0x8
    id <WCPayLQTDepositPlanIndexCgiDelegate> _m_delegate; // +0x10
}
- (id)initWithDelegate:(id)arg1;
- (void)startWithRequest:(id)arg1;
- (void)startRequestWithCache:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (BOOL)fromServer;
- (void)setFromServer:(BOOL)arg1;
- (void).cxx_destruct;
@end
