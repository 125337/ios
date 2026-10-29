@interface WAJSEventHandler_scanCode : WAJSEventHandler_BaseEvent <WAWAGetA8KeyLogicHelperDelegate, WACameraScanViewControllerHelperDelegate>
{
    id <IWACameraScanViewControllerHelper> _viewControllerHelper; // +0x8
    id <IWAWAGetA8KeyLogicHelper> _getA8KeyHelper; // +0x10
    NSString * _charSet; // +0x18
    NSString * _type; // +0x20
    NSString * _scanResult; // +0x28
    NSString * _rawDataInBase64; // +0x30
    long long _codeVersion; // +0x38
    NSString * _pagePath; // +0x40
}
- (void)handleJSEvent:(id)arg1;
- (void)showScanCodeVC:(long long)arg1 params:(id)arg2;
- (void)onScanCodeResult:(id)arg1;
- (void)onWeappGetA8Key:(id)arg1;
- (id)resultParamsWithDic:(id)arg1;
- (void)onCameraScanViewControllerDidBePoped;
- (id)viewControllerHelper;
- (void)setViewControllerHelper:(id)arg1;
- (id)getA8KeyHelper;
- (void)setGetA8KeyHelper:(id)arg1;
- (id)charSet;
- (void)setCharSet:(id)arg1;
- (id)type;
- (void)setType:(id)arg1;
- (id)scanResult;
- (void)setScanResult:(id)arg1;
- (id)rawDataInBase64;
- (void)setRawDataInBase64:(id)arg1;
- (long long)codeVersion;
- (void)setCodeVersion:(long long)arg1;
- (id)pagePath;
- (void)setPagePath:(id)arg1;
- (void).cxx_destruct;
@end

