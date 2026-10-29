@interface WCPayGetBankResourceCgi : WCPayBaseCgi
{
    id <WCPayGetBankResourceCgiDelegate> m_delegate; // +0x8
}
- (void)startRequest:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1;
- (void).cxx_destruct;
@end

