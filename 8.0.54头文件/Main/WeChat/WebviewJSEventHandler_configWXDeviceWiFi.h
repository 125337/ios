@interface WebviewJSEventHandler_configWXDeviceWiFi : WebviewJSEventHandlerBase <AirKissViewControllerDelegate>
{
    JSEvent * m_event; // +0x8
}
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)onAirKissReturn:(BOOL)arg1;
- (void)onUserCancel;
- (void)onNoWifiCancel;
- (void).cxx_destruct;
@end

