@interface LiteAppJsApiRecognizeQRCode : LiteAppJsApi <BaseScanLogicDelegate>
- (void)invokeJsApi:(id)arg1 param:(id)arg2 isFromView:(BOOL)arg3;
- (id)scanQRCodeLogic;
- (void)onScanEnds;
@end
