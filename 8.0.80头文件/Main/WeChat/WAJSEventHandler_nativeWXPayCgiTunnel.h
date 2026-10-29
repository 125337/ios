@interface WAJSEventHandler_nativeWXPayCgiTunnel : WAJSEventHandler_BaseEvent <WCPayNativeCgiTunnelImplDelegate>
{
    WCPayNativeCgiTunnelImpl * _cgiLogic; // +0x8
}
- (BOOL)checkIfParamValid:(id)arg1;
- (void)handleJSEvent:(id)arg1;
- (void)onNativeCgiTunnelSuccess:(id)arg1;
- (void)onNativeCgiTunnelFail:(id)arg1;
- (id)cgiLogic;
- (void)setCgiLogic:(id)arg1;
- (void).cxx_destruct;
@end
