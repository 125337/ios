@interface WCPayT2BCModifyRemarkCgi : WCPayBaseCgi
{
    id <WCPayT2BCModifyRemarkCgiDelegate> m_delegate; // +0x8
}
- (id)initWithDelegate:(id)arg1;
- (void)startRequest:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1;
- (void).cxx_destruct;
@end

