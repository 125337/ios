@interface WCPayFaceHBScanQRCodeHandler : ScanQRCodeUrlPrefixHandler
- (void)handleUrl:(id)arg1;
- (id)matchingPrefix;
- (void)onScanQRCodeUrlPrefixHandlerEnd;
- (char)QRCodeType;
@end
