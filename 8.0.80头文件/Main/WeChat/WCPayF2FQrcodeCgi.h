@interface WCPayF2FQrcodeCgi : WCPayBaseCgi
{
    id <WCPayF2FQrcodeCgiDelegate> _m_delegate; // +0x8
}
- (id)initWithDelegate:(id)arg1;
- (void)startRequestWithLocalCache:(BOOL)arg1;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1;
- (void)cacheResponse:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end
