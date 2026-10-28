@interface GetCoverSetRedDotInfoCgi : WCPayBaseCgi
{
    id <GetCoverSetRedDotInfoCgiDelegate> _m_delegate; // +0x8
}
- (void)startRequest;
- (id)initWithDelegate:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (unsigned long long)getCgiNewDNSBusinessType;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end
