@interface WebviewJSEventHandler_scanBankCard : WebviewJSEventHandlerBase <IWebviewResourceManagerExt, WCPayCardNumberScanDelegate>
{
    BOOL _useHttp; // +0x8
    NSString * _trueName; // +0x10
    NSString * _scanResult; // +0x18
    NSString * _encryptedStr; // +0x20
    NSData * _scanImageData; // +0x28
    NSString * _certPem; // +0x30
    NSString * _baseRequest; // +0x38
    JSEvent * _cbEvent; // +0x40
}
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)startScan;
- (void)didFindCardNumber:(id)arg1 cardImage:(id)arg2 scanResult:(id)arg3;
- (void)clickCloseButton:(id)arg1;
- (void)clickHandInput;
- (id)fillResult:(id)arg1 err_code:(id)arg2 scanResult:(id)arg3;
- (void)reportMode:(unsigned long long)arg1 action:(unsigned long long)arg2;
- (id)trueName;
- (void)setTrueName:(id)arg1;
- (id)scanResult;
- (void)setScanResult:(id)arg1;
- (id)encryptedStr;
- (void)setEncryptedStr:(id)arg1;
- (id)scanImageData;
- (void)setScanImageData:(id)arg1;
- (id)certPem;
- (void)setCertPem:(id)arg1;
- (id)baseRequest;
- (void)setBaseRequest:(id)arg1;
- (id)cbEvent;
- (void)setCbEvent:(id)arg1;
- (BOOL)useHttp;
- (void)setUseHttp:(BOOL)arg1;
- (void).cxx_destruct;
@end

