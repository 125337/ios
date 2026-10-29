@interface WCPayT2BCGetTransHistroyCgi : WCPayBaseCgi
{
    id <WCPayT2BCGetTransHistroyCgiDelegate> m_delegate; // +0x8
}
- (id)initWithDelegate:(id)arg1;
- (void)startRequest;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1;
- (void).cxx_destruct;
@end
