@interface WCPayNFCCardChargeControlLogic : WCPayControlLogic <WCPayQueryNFCardInfoCgiDelegate, WCPayNFCCardPlaceOrderCgiDelegate, WCPayNFCCardQueryDepositCgiDelegate, MMUseCaseCallback>
{
    BOOL _isChargeSuccess; // +0x38
    id <WCPayNFCCardChargeControlLogicDelegate> _logicDelegate; // +0x40
    WCPayPassKitFacade * _passkitMgr; // +0x48
    OrderCreateOrderResponse * _placeOrderResponse; // +0x50
    NSString * _outTradeNo; // +0x58
    DepositQueryDepositResponse * _orderQueryReponse; // +0x60
    WCPayNFCCardQueryDepositCgi * _queryOrderCgi; // +0x68
    WCPayNFCCardPlaceOrderCgi * _placeOrderCgi; // +0x70
    WCPayNFCCardTipsModal * _tipsModal; // +0x78
}
- (id)initWithParams:(id)arg1;
- (void)startLogic;
- (void)startQueryCardInfoCgi;
- (void)onWCPayQueryNFCardInfoCgiResponseOK:(id)arg1 result:(id)arg2;
- (void)onWCPayQueryNFCardInfoCgiResponseError:(id)arg1 errorMsg:(id)arg2 errorCode:(unsigned int)arg3;
- (void)onWCPayNFCCardChargeViewControllerCancel;
- (long long)getCurrentPassBalance;
- (void)onWCPayNFCCardChargeViewControllerConfirmCharge:(long long)arg1;
- (void)onWCPayNFCCardPlaceOrderCgiResponseOK:(id)arg1 result:(id)arg2;
- (void)onWCPayNFCCardPlaceOrderCgiResponseError:(id)arg1 errorMsg:(id)arg2 errorCode:(unsigned int)arg3;
- (void)doInWxAppPay:(id)arg1;
- (void)call:(id)arg1;
- (void)doNFCCardQueryOrderCgi;
- (void)refreshBalance;
- (void)onWCPayNFCCardQueryDepositCgiResponseOK:(id)arg1 result:(id)arg2;
- (void)onWCPayNFCCardQueryDepositCgiResponseError:(id)arg1 errorMsg:(id)arg2 errorCode:(unsigned int)arg3;
- (id)logicDelegate;
- (void)setLogicDelegate:(id)arg1;
- (id)passkitMgr;
- (void)setPasskitMgr:(id)arg1;
- (id)placeOrderResponse;
- (void)setPlaceOrderResponse:(id)arg1;
- (id)outTradeNo;
- (void)setOutTradeNo:(id)arg1;
- (id)orderQueryReponse;
- (void)setOrderQueryReponse:(id)arg1;
- (id)queryOrderCgi;
- (void)setQueryOrderCgi:(id)arg1;
- (id)placeOrderCgi;
- (void)setPlaceOrderCgi:(id)arg1;
- (id)tipsModal;
- (void)setTipsModal:(id)arg1;
- (BOOL)isChargeSuccess;
- (void)setIsChargeSuccess:(BOOL)arg1;
- (void).cxx_destruct;
@end
