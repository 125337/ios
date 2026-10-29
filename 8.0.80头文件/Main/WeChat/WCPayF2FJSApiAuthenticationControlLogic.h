@interface WCPayF2FJSApiAuthenticationControlLogic : WCPayControlLogic <WCPayF2FJSAPIAuthCgiDelegate>
{
    JSEvent * _jsEvent; // +0x38
    WCPayF2FJSAPIAuthenCgi * _jsapiAuthenCgi; // +0x40
}
- (id)initWithJSEvent:(id)arg1;
- (void)startLogic;
- (void)onGetWCPayF2FJSAPIAuthenCgiResp:(id)arg1;
- (id)jsEvent;
- (void)setJsEvent:(id)arg1;
- (id)jsapiAuthenCgi;
- (void)setJsapiAuthenCgi:(id)arg1;
- (void).cxx_destruct;
@end
