@interface WebviewJSEventHandler_setWCPayPassword : WebviewJSEventHandlerBase <WCPayPayPwdViewControllerDelegate, WCPayLogicMgrExt, WCPayResetPwdByTokenCgiDelegate>
{
    NSString * _token; // +0x8
    WCPayPayPwdViewController * _pwdVC; // +0x10
    WCPayResetPwdByTokenCgi * _resetCgi; // +0x18
}
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)OnCheckWCPayJsApiRequest:(id)arg1 Error:(id)arg2;
- (void)SetPayPwdNext:(id)arg1;
- (void)PayPwdBack;
- (void)PayPwdRightActionBack;
- (void)resetPwdByTokenCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)resetPwdByTokenCgi:(id)arg1 didFailWithError:(id)arg2;
- (id)token;
- (void)setToken:(id)arg1;
- (id)pwdVC;
- (void)setPwdVC:(id)arg1;
- (id)resetCgi;
- (void)setResetCgi:(id)arg1;
- (void).cxx_destruct;
@end
