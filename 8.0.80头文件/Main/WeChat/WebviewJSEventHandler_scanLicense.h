@interface WebviewJSEventHandler_scanLicense : WebviewJSEventHandlerBase <JSApiScanLicenceViewControllerDelegate, PBMessageObserverDelegate, ScanLicenceBankCardNumberConfirmViewControllerDelegate>
{
    unsigned long long _scanType; // +0x8
    NSString * _scanTypeName; // +0x10
    NSString * _displayCardNumber; // +0x18
    NSString * _retJson; // +0x20
    int _errCode; // +0x28
    BOOL _bIsGetResult; // +0x2c
}
- (id)init;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)FillBankNumCancel;
- (void)FillBankNumConfirmWithImage:(id)arg1 cardNumber:(id)arg2;
- (void)onReturnBtnClick;
- (void)didFindBankCardNumber:(id)arg1 cardImage:(id)arg2;
- (void)didFindCalibrateCardImage:(id)arg1 cardType:(unsigned long long)arg2;
- (id)getImageData:(id)arg1 maxLength:(long long)arg2;
- (void)getBankCardOK;
- (void)getCardOK;
- (void)getCardFail;
- (void)getCardCancel;
- (void)sendBizScanLicenseRequestWithImg:(id)arg1 andType:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void).cxx_destruct;
@end
