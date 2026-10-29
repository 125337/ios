@interface WCPayBusiF2FUnlockFavorCgi : WCPayBaseCgi
{
    id <WCPayBusiF2FUnlockFavorCgiDelegate> _m_cgiDelegate; // +0x8
}
- (id)initWithDelegate:(id)arg1;
- (void)startRequest:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1;
- (id)m_cgiDelegate;
- (void)setM_cgiDelegate:(id)arg1;
- (void).cxx_destruct;
@end

