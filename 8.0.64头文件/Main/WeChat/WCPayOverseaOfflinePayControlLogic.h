@interface WCPayOverseaOfflinePayControlLogic : WCPayControlLogic <WCPayOverseaGetOfflinePayUrlCgiDelegate, MMWebViewDelegate, MMUseCaseCallback>
{
    WCPayOverseaGetOfflinePayUrlCgi * _getOfflinePayUrlCgi; // +0x38
}
- (id)initWithData:(id)arg1;
- (void)startLogic;
- (void)onWCPayOverseaGetOfflinePayUrlCgiResponseError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayOverseaGetOfflinePayUrlCgiResponseOK:(id)arg1;
- (void)webViewDidReturn:(id)arg1;
- (void)call:(id)arg1;
- (id)getOfflinePayUrlCgi;
- (void)setGetOfflinePayUrlCgi:(id)arg1;
- (void).cxx_destruct;
@end
