@interface WCPaySaveQrcodeCgi : WCPayBaseCgi
{
    id <WCPaySaveQrcodeCgiDelegate> _m_delegate; // +0x8
}
- (id)initWithDelegate:(id)arg1 request:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end
