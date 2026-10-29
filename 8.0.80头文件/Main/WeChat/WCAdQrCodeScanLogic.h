@interface WCAdQrCodeScanLogic : NSObject <WCCanvasImageLoaderObserver, BaseScanLogicDelegate>
{
    BOOL _qrCodeProcessing; // +0x8
    int _scene; // +0xc
    int _subScene; // +0x10
    WCAdQrCodeScanInfo * _qrCodeScanInfo; // +0x18
    WCAdvertiseInfo * _adInfo; // +0x20
    NSString * _snsId; // +0x28
    id /* block */ _scanResultBlock; // +0x30
    ScanQRCodeLogicController * _scanQRCodeLogic; // +0x38
}
- (void)dealloc;
- (void)tryToScanQrCode:(id)arg1 adInfo:(id)arg2 snsId:(id)arg3 scene:(int)arg4 subScene:(int)arg5 showLoading:(BOOL)arg6 scanResultBlock:(id /* block */)arg7;
- (void)scanQRCodeWithImage:(id)arg1;
- (id)scanQRCodeLogic;
- (id)genEncKey;
- (unsigned long long)getAdQRResultType;
- (unsigned long long)getSearchContactScene;
- (void)showLoading;
- (void)hideLoading;
- (void)setQrCodeProcessing;
- (void)setQrCodeProcessManualFinished;
- (void)setQrCodeProcessAutoFinished;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)ImageDidFail:(id)arg1;
- (void)onScanEnds;
- (void)didShowScanResult;
- (void)doQRScanReport;
- (id)qrCodeScanInfo;
- (void)setQrCodeScanInfo:(id)arg1;
- (id)adInfo;
- (void)setAdInfo:(id)arg1;
- (id)snsId;
- (void)setSnsId:(id)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (int)subScene;
- (void)setSubScene:(int)arg1;
- (id /* block */)scanResultBlock;
- (void)setScanResultBlock:(id /* block */)arg1;
- (BOOL)qrCodeProcessing;
- (void)setQrCodeProcessing:(BOOL)arg1;
- (void)setScanQRCodeLogic:(id)arg1;
- (void).cxx_destruct;
@end
