@interface WADetectSingleCodeResult : NSObject <WAWAGetA8KeyLogicHelperDelegate>
{
    unsigned int _codeVersion; // +0x8
    NSString * _result; // +0x10
    NSString * _rawData; // +0x18
    NSString * _charSet; // +0x20
    NSString * _scanType; // +0x28
    NSString * _pagePath; // +0x30
    NSObject<OS_dispatch_queue> * _getA8KeyQueue; // +0x38
    WAWebViewController * _webviewController; // +0x40
    id <IWAWAGetA8KeyLogicHelper> _getA8KeyHelper; // +0x48
    long long _getA8KeyState; // +0x50
    id /* block */ _getA8KeyCompletion; // +0x58
}
- (id)description;
- (id)toDictionary;
- (void)getA8KeyIfNeededWithCompletion:(id /* block */)arg1;
- (void)workthread_getA8KeyIfNeededWithCompletion:(id /* block */)arg1;
- (void)onWeappGetA8Key:(id)arg1;
- (void)workthread_onWeappGetA8Key:(id)arg1;
- (id)result;
- (void)setResult:(id)arg1;
- (id)rawData;
- (void)setRawData:(id)arg1;
- (id)charSet;
- (void)setCharSet:(id)arg1;
- (id)scanType;
- (void)setScanType:(id)arg1;
- (unsigned int)codeVersion;
- (void)setCodeVersion:(unsigned int)arg1;
- (id)pagePath;
- (void)setPagePath:(id)arg1;
- (id)getA8KeyQueue;
- (void)setGetA8KeyQueue:(id)arg1;
- (id)webviewController;
- (void)setWebviewController:(id)arg1;
- (id)getA8KeyHelper;
- (void)setGetA8KeyHelper:(id)arg1;
- (long long)getA8KeyState;
- (void)setGetA8KeyState:(long long)arg1;
- (id /* block */)getA8KeyCompletion;
- (void)setGetA8KeyCompletion:(id /* block */)arg1;
- (void).cxx_destruct;
@end
