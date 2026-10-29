@interface WCPayMerchantPayControlLogic : WCPayControlLogic <WCPayMerchantPayGetQRCodeInfoCgiDelegate, WCPayMerchantPayPlaceOrderCgiDelegate, WCPayMerchantPayCheckPayCgiDelegate, MMWebViewDelegate, MMUseCaseCallback>
{
    BOOL _isStopLogicWhenCloseWebview; // +0x38
    unsigned int _getA8keyScene; // +0x3c
    NSString * _m_nsQrcodeUrl; // +0x40
    GetUrlInfoReqSession * _scanCodeSessionInfo; // +0x48
    WCPayInterceptWinLogic * _interceptWinLogic; // +0x50
}
- (id)interceptWinLogic;
- (id)initWithData:(id)arg1 qrCodeUrl:(id)arg2 getA8keyScene:(unsigned int)arg3 scanCodeSessionInfo:(id)arg4;
- (void)startLogic;
- (void)startGetQRCodeInfo;
- (void)onWCPayMerchantPayViewControllerBack;
- (void)onWCPayMerchantPayGetQRCodeInfo:(id)arg1;
- (void)onWCPayMerchantPayGetQRCodeInfoError:(long long)arg1 errorMsg:(id)arg2;
- (void)webViewDidReturn:(id)arg1;
- (void)onWCPayMerchantPayCheckPayError:(long long)arg1 errorMsg:(id)arg2;
- (void)onWCPayMerchantPayViewControllerClickPlaceOrder;
- (void)startPlaceOrder;
- (void)onWCPayMerchantPayPlaceOrder:(id)arg1;
- (void)doInWxAppPay:(id)arg1;
- (void)startPayCheck:(int)arg1;
- (void)call:(id)arg1;
- (void)onWCPayMerchantPayPlaceOrderError:(long long)arg1 errorMsg:(id)arg2;
- (id)m_nsQrcodeUrl;
- (void)setM_nsQrcodeUrl:(id)arg1;
- (id)scanCodeSessionInfo;
- (void)setScanCodeSessionInfo:(id)arg1;
- (unsigned int)getA8keyScene;
- (void)setGetA8keyScene:(unsigned int)arg1;
- (void)setInterceptWinLogic:(id)arg1;
- (BOOL)isStopLogicWhenCloseWebview;
- (void)setIsStopLogicWhenCloseWebview:(BOOL)arg1;
- (void).cxx_destruct;
@end

