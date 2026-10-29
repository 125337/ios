@interface MMImgFullScreenLogic_QrCode : MMImgFullScreenLogic <BaseScanLogicDelegate>
{
    ScanQRCodeLogicController * _scanQRCodeLogic; // +0x8
    NSArray * _scanCodePrefixBlackList; // +0x10
}
- (BOOL)canShowQrCode;
- (void)PreScanQrCode;
- (void)imageForScanQRCodeWithReturnBlock:(id /* block */)arg1;
- (id)scanQRCodeLogic;
- (void)onPushViewController:(id)arg1 animated:(BOOL)arg2;
- (void)onStopLoading;
- (void)onGetA8KeyFail;
- (void)onScanEnds;
- (void)setScanQRCodeLogic:(id)arg1;
- (id)scanCodePrefixBlackList;
- (void)setScanCodePrefixBlackList:(id)arg1;
- (void).cxx_destruct;
@end
