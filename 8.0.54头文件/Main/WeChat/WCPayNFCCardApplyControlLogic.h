@interface WCPayNFCCardApplyControlLogic : WCPayControlLogic <WCPayQueryNFCardInfoCgiDelegate, WCPayNFCCardPlaceOrderCgiDelegate, MMUseCaseCallback, WCPayNFCCardQueryOrderCgiDelegate, PKAddPaymentPassViewControllerDelegate, WCPayIssueNFCCardCgiDelegate, WCPayNFCCardApplyViewControllerDelegate>
{
    id <WCPayNFCCardApplyControlLogicDelegate> _logicDelegate; // +0x38
    OrderCreateOrderResponse * _placeOrderResponse; // +0x40
    id /* block */ _completionHandler; // +0x48
    ApplyNFCCardResponse * _applyNFCCardResponse; // +0x50
    OrderQueryOrderResponse * _orderQueryReponse; // +0x58
    EXTPKG_mmpayapplynfccardbo_CardPasskitInfo * _cardPasskitInfo; // +0x60
    NSString * _outTradeNo; // +0x68
    WCPayNFCCardPlaceOrderCgi * _placeOrderCgi; // +0x70
    WCPayNFCCardQueryOrderCgi * _queryOrderCgi; // +0x78
}
- (id)initWithParams:(id)arg1;
- (void)startLogic;
- (void)startQueryCardInfoCgi;
- (int)countDonwSec:(long long)arg1;
- (void)onWCPayNFCCardTipsViewControllerCancel;
- (void)onWCPayQueryNFCardInfoCgiResponseOK:(id)arg1 result:(id)arg2;
- (void)onWCPayQueryNFCardInfoCgiResponseError:(id)arg1 errorMsg:(id)arg2 errorCode:(unsigned int)arg3;
- (void)onWCPayNFCCardApplyViewControllerCancel;
- (void)onWCPayNFCCardApplyViewControllerConfirmApply:(long long)arg1;
- (id)placeOrderCgi;
- (void)onWCPayNFCCardPlaceOrderCgiResponseOK:(id)arg1 result:(id)arg2;
- (void)onWCPayNFCCardPlaceOrderCgiResponseError:(id)arg1 errorMsg:(id)arg2 errorCode:(unsigned int)arg3;
- (void)doInWxAppPay:(id)arg1;
- (void)call:(id)arg1;
- (void)doNFCCardQueryOrderCgi;
- (void)doContinueApplyCard;
- (void)onWCPayNFCCardQueryOrderCgiResponseOK:(id)arg1 result:(id)arg2;
- (void)onWCPayNFCCardQueryOrderCgiResponseError:(id)arg1 errorMsg:(id)arg2 errorCode:(unsigned int)arg3;
- (void)addPaymentPassViewController:(id)arg1 generateRequestWithCertificateChain:(id)arg2 nonce:(id)arg3 nonceSignature:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)addPaymentPassViewController:(id)arg1 didFinishAddingPaymentPass:(id)arg2 error:(id)arg3;
- (void)onWCPayIssueNFCCardCgiResponseError:(id)arg1 errorMsg:(id)arg2 errorCode:(unsigned int)arg3;
- (void)onWCPayIssueNFCCardCgiResponseOK:(id)arg1 result:(id)arg2;
- (id)logicDelegate;
- (void)setLogicDelegate:(id)arg1;
- (id)placeOrderResponse;
- (void)setPlaceOrderResponse:(id)arg1;
- (id /* block */)completionHandler;
- (void)setCompletionHandler:(id /* block */)arg1;
- (id)applyNFCCardResponse;
- (void)setApplyNFCCardResponse:(id)arg1;
- (id)orderQueryReponse;
- (void)setOrderQueryReponse:(id)arg1;
- (id)cardPasskitInfo;
- (void)setCardPasskitInfo:(id)arg1;
- (id)outTradeNo;
- (void)setOutTradeNo:(id)arg1;
- (void)setPlaceOrderCgi:(id)arg1;
- (id)queryOrderCgi;
- (void)setQueryOrderCgi:(id)arg1;
- (void).cxx_destruct;
@end

