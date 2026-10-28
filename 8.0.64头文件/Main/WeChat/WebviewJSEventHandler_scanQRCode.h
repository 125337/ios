@interface WebviewJSEventHandler_scanQRCode : WebviewJSEventHandlerBase <CameraScanUIDelegate>
{
    BOOL _bGotScanResult; // +0x8
}
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (BOOL)shouldObtainScanResult;
- (BOOL)shouldBackToSessionImmediately;
- (void)obtainScanResultDidFinish:(id)arg1;
- (void)onCameraScanViewControllerDidBePoped;
@end
