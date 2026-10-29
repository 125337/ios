@interface ScanFCSession : NSObject
{
    ScanQRCodeLogicController * _scanLogic; // +0x8
    QRCodeInMultiDisplayView * _multiCodeView; // +0x10
    UIImageView * _backgroundImageView; // +0x18
    NSString * _logicDelegateKey; // +0x20
    NSString * _multiCodeDelegateKey; // +0x28
    MMUIViewController * _hostViewController; // +0x30
    UIImage * _scannedImage; // +0x38
}
- (id)scanLogic;
- (void)setScanLogic:(id)arg1;
- (id)multiCodeView;
- (void)setMultiCodeView:(id)arg1;
- (id)backgroundImageView;
- (void)setBackgroundImageView:(id)arg1;
- (id)logicDelegateKey;
- (void)setLogicDelegateKey:(id)arg1;
- (id)multiCodeDelegateKey;
- (void)setMultiCodeDelegateKey:(id)arg1;
- (id)hostViewController;
- (void)setHostViewController:(id)arg1;
- (id)scannedImage;
- (void)setScannedImage:(id)arg1;
- (void).cxx_destruct;
@end
