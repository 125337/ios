@interface WXPLiteAppBankCardOcrService : NSObject <KindaScanWidgetDelegate>
{
    id /* block */ _scanCallback; // +0x8
    KindaScanWidget * _scanWidget; // +0x10
}
- (id)init;
- (void)scan:(id)arg1 callback:(id /* block */)arg2;
- (void)onFinishScan:(id)arg1 scanResult:(id)arg2 cardImgData:(id)arg3;
- (id /* block */)scanCallback;
- (void)setScanCallback:(id /* block */)arg1;
- (id)scanWidget;
- (void)setScanWidget:(id)arg1;
- (void).cxx_destruct;
@end
