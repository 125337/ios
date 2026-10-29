@interface WCPayOverseaGetOfflinePayUrlCgi : WCPayBaseCgi
{
    id <WCPayOverseaGetOfflinePayUrlCgiDelegate> m_delegate; // +0x8
    BOOL _didResponse; // +0x10
}
- (id)initWithDelegate:(id)arg1;
- (void)startRequest;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1;
- (void)cacheResponse:(id)arg1;
- (BOOL)didResponse;
- (void)setDidResponse:(BOOL)arg1;
- (void).cxx_destruct;
@end

