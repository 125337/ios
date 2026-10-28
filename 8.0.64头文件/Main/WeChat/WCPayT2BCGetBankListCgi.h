@interface WCPayT2BCGetBankListCgi : WCPayBaseCgi
{
    id <WCPayT2BCGetBankListCgiDelegate> m_delegate; // +0x8
}
- (id)initWithDelegate:(id)arg1;
- (void)startRequest;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1;
- (void).cxx_destruct;
@end
