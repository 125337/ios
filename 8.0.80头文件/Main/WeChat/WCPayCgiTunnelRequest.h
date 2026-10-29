@interface WCPayCgiTunnelRequest : NSObject <WCPayNativeCgiTunnelImplDelegate>
{
    WCPayNativeCgiTunnelImpl * _cgiLogic; // +0x8
    JSEvent * _jsEvent; // +0x10
    WebviewJSEventHandler_nativeWXPayCgiTunnel * _owner; // +0x18
}
- (void)dealloc;
- (void)onNativeCgiTunnelSuccess:(id)arg1;
- (void)onNativeCgiTunnelFail:(id)arg1;
- (id)cgiLogic;
- (void)setCgiLogic:(id)arg1;
- (id)jsEvent;
- (void)setJsEvent:(id)arg1;
- (id)owner;
- (void)setOwner:(id)arg1;
- (void).cxx_destruct;
@end
