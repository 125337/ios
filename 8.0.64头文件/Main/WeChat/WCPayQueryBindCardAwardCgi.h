@interface WCPayQueryBindCardAwardCgi : WCPayBaseTenPayCgi
{
    WCPayQueryBindCardAwardCgiRequest * _m_queryRequest; // +0x8
    id <WCPayQueryBindCardAwardCgiDelegate> _m_delegate; // +0x10
}
- (id)init;
- (void)startRequest;
- (void)failWithError:(id)arg1;
- (void)didGetTenPayResponse:(id)arg1;
- (void)didGetTenPayError:(id)arg1;
- (void)didFailWithError:(id)arg1;
- (id)m_queryRequest;
- (void)setM_queryRequest:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end
