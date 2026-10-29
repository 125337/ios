@interface WCPayBusiF2FGetFavorCgi : WCPayBaseCgi
{
    BOOL _m_isLoading; // +0x8
    id <WCPayBusiF2FGetFavorCgiDelegate> _m_cgiDelegate; // +0x10
    BusiF2FGetFavorReq * _m_nextRequest; // +0x18
    double _m_interval; // +0x20
}
- (id)initWithDelegate:(id)arg1 interval:(double)arg2;
- (BOOL)isLoading;
- (void)start;
- (void)startNextRequest:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1;
- (void)delayStartRequest;
- (id)m_cgiDelegate;
- (void)setM_cgiDelegate:(id)arg1;
- (id)m_nextRequest;
- (void)setM_nextRequest:(id)arg1;
- (BOOL)m_isLoading;
- (void)setM_isLoading:(BOOL)arg1;
- (double)m_interval;
- (void)setM_interval:(double)arg1;
- (void).cxx_destruct;
@end

