@interface LiteAppJsApiRecognizeQRCode : LiteAppJsApi <BaseScanLogicDelegate>
- (void)invokeJsApi:(id)arg1 param:(id)arg2 sourceType:(int)arg3;
- (id)scanQRCodeLogic;
- (void)onScanEnds;
@end
