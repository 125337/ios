@interface HBBusinessCallbackCgi : WCPayBaseCgi
{
    unsigned long long _requestType; // +0x8
    id <HBBusinessCallbackCgiDelegate> _m_cgiDelegate; // +0x10
}
- (id)initWithDelegate:(id)arg1 type:(unsigned long long)arg2;
- (id)initWithDelegate:(id)arg1;
- (void)startRequest:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1;
- (unsigned long long)requestType;
- (void)setRequestType:(unsigned long long)arg1;
- (id)m_cgiDelegate;
- (void)setM_cgiDelegate:(id)arg1;
- (void).cxx_destruct;
@end

