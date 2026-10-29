@interface LocalJSEventHandler_startAdQRScan : LocalJSEventHandler_BaseEvent <MMImageLoaderObserver, BaseScanLogicDelegate>
{
    NSString * _scanUrl; // +0x8
    NSString * _uxInfo; // +0x10
    ScanQRCodeLogicController * _scanQRCodeLogic; // +0x18
}
- (void)dealloc;
- (void)handleJSEvent:(id)arg1;
- (void)startToScanQRCodeWithUrl:(id)arg1;
- (void)startToScanQRCodeWithImage:(id)arg1;
- (id)scanQRCodeLogic;
- (id)genEncKeyWithUxInfo:(id)arg1 url:(id)arg2;
- (unsigned long long)getQRResultType;
- (BOOL)isQRResultTypeAvailable:(unsigned long long)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)ImageDidFail:(id)arg1;
- (void)onScanEnds;
- (void)didShowScanResult;
- (void)doScanReportWithResult:(int)arg1 qrResultType:(unsigned long long)arg2 qrResultUrl:(id)arg3;
- (id)scanUrl;
- (void)setScanUrl:(id)arg1;
- (id)uxInfo;
- (void)setUxInfo:(id)arg1;
- (void)setScanQRCodeLogic:(id)arg1;
- (void).cxx_destruct;
@end

