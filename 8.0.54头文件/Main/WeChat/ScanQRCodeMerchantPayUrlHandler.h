@interface ScanQRCodeMerchantPayUrlHandler : ScanQRCodeTransferUrlHandler
- (void)dealloc;
- (void)reportCount;
- (void)handleUrl:(id)arg1;
- (id)matchingPrefix;
- (id)matchingPrefixes;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (char)QRCodeType;
@end

