@interface GetWishinigRecommandSkinCgi : WCPayBaseCgi
{
    id <GetWishinigRecommandSkinCgiDelegate> _m_delegate; // +0x8
    unsigned long long _requestTimestamp; // +0x10
}
- (void)startRequest:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (unsigned long long)requestTimestamp;
- (void)setRequestTimestamp:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
