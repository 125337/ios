@interface WCPayNotifyMchQRCodeSaveCgi : WCPayBaseCgi
{
    id <WCPayNotifyMchQRCodeSaveCgiDelegate> _cgiDelegate; // +0x8
}
- (id)initWithDelegaet:(id)arg1 request:(id)arg2;
- (void)startRequest;
- (void)didGetResponse:(id)arg1;
- (void)failWithNetworking:(id)arg1;
- (void)didFailWithError:(id)arg1;
- (id)cgiDelegate;
- (void)setCgiDelegate:(id)arg1;
- (void).cxx_destruct;
@end
