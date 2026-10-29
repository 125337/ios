@interface WCPayMchShortTermQrcodeCgi : WCPayBaseCgi
{
    id <WCPayMchShortTermQrcodeCgiDelegate> _m_delegate; // +0x8
    long long _request_scene; // +0x10
}
- (id)initWithDelegate:(id)arg1;
- (void)startWithRequest:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)failWithNetworking:(id)arg1;
- (void)didFailWithError:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (long long)request_scene;
- (void)setRequest_scene:(long long)arg1;
- (void).cxx_destruct;
@end
