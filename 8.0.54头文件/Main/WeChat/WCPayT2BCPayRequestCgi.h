@interface WCPayT2BCPayRequestCgi : WCPayBaseCgi
{
    id <WCPayT2BCPayRequestCgiDelegate> m_delegate; // +0x8
}
- (id)initWithDelegate:(id)arg1;
- (void)startRequest:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void).cxx_destruct;
@end

