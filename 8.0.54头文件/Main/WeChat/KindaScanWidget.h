@interface KindaScanWidget : NSObject <WCPayFillCardNumberViewControllerDelegate, WCPayCardNumberScanDelegate, MMKScanWidget>
{
    MMVoidStringStringBinaryCallback * m_callback; // +0x8
    BOOL _dismissOnScanFinish; // +0x10
    WCPayCardNumberConfirmViewController * _scanConfirmViewController; // +0x18
    NSString * _scanResult; // +0x20
    NSData * _scanImageData; // +0x28
    id <KindaScanWidgetDelegate> _delegate; // +0x30
}
- (void)setHandlerImpl:(id)arg1;
- (void)scan:(id)arg1;
- (void)dismissOnScanFinish:(BOOL)arg1;
- (void)setScanWidgetDelegate:(id)arg1;
- (void)didFindCardNumber:(id)arg1 cardImage:(id)arg2 scanResult:(id)arg3;
- (void)FillCardInfoCancel;
- (void)FillCardNumberCancel:(BOOL)arg1;
- (void)FillCardNumberConfirmWithImage:(id)arg1 cardNumber:(id)arg2 data:(id)arg3;
- (void)FillCardNumberNext:(id)arg1;
- (BOOL)dismissOnScanFinish;
- (void)setDismissOnScanFinish:(BOOL)arg1;
- (id)scanConfirmViewController;
- (void)setScanConfirmViewController:(id)arg1;
- (id)scanResult;
- (void)setScanResult:(id)arg1;
- (id)scanImageData;
- (void)setScanImageData:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

