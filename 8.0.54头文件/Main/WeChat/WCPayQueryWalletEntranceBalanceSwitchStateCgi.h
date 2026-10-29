@interface WCPayQueryWalletEntranceBalanceSwitchStateCgi : WCPayBaseCgi
{
    BOOL _m_isServerResponse; // +0x8
    id <WCPayQueryWalletEntranceBalanceSwitchStateCgiDelegate> _m_delegate; // +0x10
}
- (void)startRequest;
- (id)initWithDelegate:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (BOOL)m_isServerResponse;
- (void)setM_isServerResponse:(BOOL)arg1;
- (void).cxx_destruct;
@end

