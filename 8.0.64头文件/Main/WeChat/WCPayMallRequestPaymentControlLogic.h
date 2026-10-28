@interface WCPayMallRequestPaymentControlLogic : WCPayControlLogic <WCPayPayMoneyLogicDelegate, WCPayGenMallPrePayCgiDelegate, WCBaseControlLogicDeleagte>
{
    id <WCPayMallRequestPaymentControlLogicDelegate> _logicDelegate; // +0x38
    NSDictionary * _jsParams; // +0x40
    WCPayGenMallPrePayCgi * _prepayCgi; // +0x48
    WCPayPayMoneyLogic * _payMoneyLogic; // +0x50
    GenMallPrepayResponse * _mallPrepayResp; // +0x58
}
- (id)initWithJSParam:(id)arg1;
- (void)startLogic;
- (void)onGetMallPrePayResp:(id)arg1;
- (void)clickPrePayErrorAlert;
- (void)onPayMoneyLogicDidStop;
- (BOOL)gotoViewController:(id)arg1;
- (id)logicDelegate;
- (void)setLogicDelegate:(id)arg1;
- (id)jsParams;
- (void)setJsParams:(id)arg1;
- (id)prepayCgi;
- (void)setPrepayCgi:(id)arg1;
- (id)payMoneyLogic;
- (void)setPayMoneyLogic:(id)arg1;
- (id)mallPrepayResp;
- (void)setMallPrepayResp:(id)arg1;
- (void).cxx_destruct;
@end
