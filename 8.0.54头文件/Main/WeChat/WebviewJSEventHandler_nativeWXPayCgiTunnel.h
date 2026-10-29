@interface WebviewJSEventHandler_nativeWXPayCgiTunnel : WebviewJSEventHandlerBase <WCPayNativeCgiTunnelImplDelegate>
{
    WCPayNativeCgiTunnelImpl * _cgiLogic; // +0x8
    JSEvent * _jsEvent; // +0x10
}
- (void)dealloc;
- (BOOL)checkIfParamValid:(id)arg1;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)onNativeCgiTunnelSuccess:(id)arg1;
- (void)onNativeCgiTunnelFail:(id)arg1;
- (void)asyncHandle_callbackEvent:(id)arg1 result:(id)arg2;
- (id)cgiLogic;
- (void)setCgiLogic:(id)arg1;
- (id)jsEvent;
- (void)setJsEvent:(id)arg1;
- (void).cxx_destruct;
@end

