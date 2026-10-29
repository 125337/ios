@interface WAJSEventHandler_openQRCode : WAJSEventHandler_BaseEvent <CameraScanUIDelegate>
{
    BOOL _bGotScanResult; // +0x8
}
- (void)handleJSEvent:(id)arg1;
- (BOOL)shouldObtainScanResult;
- (BOOL)shouldPayCodeReportOCRWhenObtainScanResult;
- (BOOL)shouldBackToSessionImmediately;
- (void)obtainScanResultDidFinish:(id)arg1;
- (void)onCameraScanViewControllerDidBePoped;
- (BOOL)bGotScanResult;
- (void)setBGotScanResult:(BOOL)arg1;
@end
