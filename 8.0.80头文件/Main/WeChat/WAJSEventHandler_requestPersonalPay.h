@interface WAJSEventHandler_requestPersonalPay : WAJSEventHandler_BaseEvent <WABizF2FRequestPaymentCgiDelegate, WABizF2FPlaceOrderCgiDelegate, WABizF2FCancelPayCgiDelegate, WABizF2FPayCheckCgiDelegate, WABizF2FSuccPageCgiDelegate, MMUseCaseCallback, WCPayBizF2FPaidSuccViewControllerDelegate>
{
    NSString * _appId; // +0x8
    NSString * _outPrepayId; // +0x10
    WABizF2FRequestPaymentCgi * _bizF2FRequestPaymentCgi; // +0x18
    WABizF2FPlaceOrderCgi * _bizF2FPlaceOrderCgi; // +0x20
    WABizF2FCancelPayCgi * _bizF2FCancelPayCgi; // +0x28
    WABizF2FSuccPageCgi * _bizF2FSuccPageCgi; // +0x30
    WABizF2FRequestPaymentResp * _bizF2FRequestPaymentResp; // +0x38
    WABizF2FPlaceOrderResp * _placeOrderResp; // +0x40
    WCPayJumpRemindControlLogic * _jumpRemindControlLogic; // +0x48
    MMITransmitKvData * _paymentData; // +0x50
    WCPayControlData * _m_data; // +0x58
    WCPayBizF2FPaidSuccViewController * _paidSuccViewController; // +0x60
    WCBizLoadingView * _m_loadView; // +0x68
}
- (void)handleJSEvent:(id)arg1;
- (void)onWABizF2FRequestPaymentCgiResponseOK:(id)arg1;
- (void)onWABizF2FRequestPaymentCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onWABizF2FPlaceOrderCgiResponseOK:(id)arg1;
- (void)onWABizF2FPlaceOrderCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onWABizPayCheckCgiResponseOK:(id)arg1;
- (void)onWABizPayCheckCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onBizF2FPaidSuccViewControllerDoneBtnClick;
- (void)call:(id)arg1;
- (void)onWABizF2FCancelPayCgiResponseOK:(id)arg1;
- (void)onWABizF2FCancelPayCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onWABizF2FSuccPageCgiResponseOK:(id)arg1;
- (id)convertSucPageRespFrom:(id)arg1;
- (void)onWABizF2FSuccPageCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onSuccPageCgiFailed;
- (void)onAfterPaymentCancelOrFail;
- (void)onPayMoneyLogicCancel:(id)arg1;
- (id)genAfterPlaceOrderCommReq:(id)arg1;
- (void)onPayMoneyLogicSuccess:(id)arg1;
- (void)onWABizF2FPlaceOrderFail;
- (void)showPanelWithPaymentResp:(id)arg1;
- (void)onWABizF2FRequestPaymentFail;
- (void)startPlaceOrder:(unsigned long long)arg1;
- (id)getPanelCustomView:(id)arg1;
- (void)initLoadView;
- (void)startWCPayLoading;
- (void)stopWCPayLoading;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)outPrepayId;
- (void)setOutPrepayId:(id)arg1;
- (id)bizF2FRequestPaymentCgi;
- (void)setBizF2FRequestPaymentCgi:(id)arg1;
- (id)bizF2FPlaceOrderCgi;
- (void)setBizF2FPlaceOrderCgi:(id)arg1;
- (id)bizF2FCancelPayCgi;
- (void)setBizF2FCancelPayCgi:(id)arg1;
- (id)bizF2FSuccPageCgi;
- (void)setBizF2FSuccPageCgi:(id)arg1;
- (id)bizF2FRequestPaymentResp;
- (void)setBizF2FRequestPaymentResp:(id)arg1;
- (id)placeOrderResp;
- (void)setPlaceOrderResp:(id)arg1;
- (id)jumpRemindControlLogic;
- (void)setJumpRemindControlLogic:(id)arg1;
- (id)paymentData;
- (void)setPaymentData:(id)arg1;
- (id)m_data;
- (void)setM_data:(id)arg1;
- (id)paidSuccViewController;
- (void)setPaidSuccViewController:(id)arg1;
- (id)m_loadView;
- (void)setM_loadView:(id)arg1;
- (void).cxx_destruct;
@end
