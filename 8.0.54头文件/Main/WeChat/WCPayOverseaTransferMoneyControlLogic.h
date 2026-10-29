@interface WCPayOverseaTransferMoneyControlLogic : WCPayControlLogic <WCPayOverseaTransferViewControllerDelegate, WCPayOverseaTransferOrderCgiDelegate, WCPayOverseaTransferGetCurrencyCgiDelegate, WCPayOverseaGetTransferNameCgiDelegate, WCPayOverseaFacingTransferOrderCgiDelegate, IStrangerContactMgrExt, MMUseCaseCallback>
{
    int m_enWCPayTransferMoneyControlLogicScene; // +0x38
    NSString * _m_nsQRCodeResponseUrl; // +0x40
    WCPayOverseaTransferGetCurrencyCgi * _m_getCurrencyCgi; // +0x48
    WCPayOverseaTransferOrderCgi * _m_orderCgi; // +0x50
    WCPayOverseaTransferGetCurrencyCgiRespObject * _m_currencyResp; // +0x58
    WCPayOverseaTransferOrderResp * _m_orderResp; // +0x60
    WCPayOverseaGetTransferNameCgi * _m_getTransferNameCgi; // +0x68
    WCPayOverseaGetTransferNameResponse * _m_getTransferNameReponse; // +0x70
    WCPayOverseaFacingTransferOrderCgi * _m_facingTransferOrderCgi; // +0x78
    WCPayOverseaFacingTransferOrderResponse * _m_facingTransferOrderResp; // +0x80
    WCPayOverseaFacingReceiveTransferCancelCgi * _m_facingTransferCancelCgi; // +0x88
    WCPayTransferMoneyControlLogic * _m_transferMoneyControlLogic; // +0x90
}
- (id)initWithQRCodeUrl:(id)arg1;
- (id)initWithUserName:(id)arg1 walletType:(unsigned int)arg2;
- (void)startLogic;
- (void)stopLogic;
- (void)onWCPayOverseaGetTransferNameResponseOK:(id)arg1;
- (void)onWCPayOverseaGetTransferNameResponseBizError:(int)arg1 errorMsg:(id)arg2;
- (void)onWCPayOverseaGetTransferNameResponseCgiError:(int)arg1 errorMsg:(id)arg2;
- (void)onStrangerContactUpdated:(id)arg1 Contact:(id)arg2;
- (void)onWCPayOverseaFacingTransferOrderResponseOK:(id)arg1;
- (void)onWCPayOverseaFacingTransferOrderResponseBizError:(int)arg1 errorMsg:(id)arg2;
- (void)onWCPayOverseaFacingTransferOrderResponseCgiError:(int)arg1 errorMsg:(id)arg2;
- (void)onWCPayOverseaTransferGetCurrencyCgiOkArgument:(id)arg1;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (void)onWCPayOverseaTransferGetCurrencyBizErrorWithRetCode:(int)arg1 ErrorMsg:(id)arg2;
- (void)onWCPayOverseaTransferGetCurrencyCgiErrorWithRetCode:(int)arg1 ErrorMsg:(id)arg2;
- (void)WCPayOverseaTransferViewControllerCancel;
- (void)WCPayOverseaTransferViewControllerOnNext:(id)arg1;
- (id)WCPayOverseaTransferViewControllerNickName;
- (id)WCPayOverseaTransferViewControllerHeadImageUrl;
- (void)onWCPayOverseaTransferOrderCgiOkWithResp:(id)arg1;
- (void)onWCPayOverseaTransferOrderCgiReturnHasTheSameAmountUnreceiveTransferWithResp:(id)arg1;
- (void)onWCPayOverseaTransferOrderCgiRetrunHasUnreceiveTransferWithResp:(id)arg1;
- (void)onClickOpenTradeUrl;
- (void)onClickContinueTransfer;
- (void)onWCPayOverseaTransferOrderCgiErrorWithRetCode:(int)arg1 ErrorMsg:(id)arg2;
- (void)onWCPayOverseaTransferOrderBizErrorWithRetCode:(int)arg1 ErrorMsg:(id)arg2;
- (void)onWebViewWillClose:(id)arg1;
- (void)webViewReturn:(id)arg1;
- (void)reportIdkeyOverseaTransferGetCurrencyFailed;
- (void)reportIdkeyOverseaTransferGetCurrencyOk;
- (void)reportIdkeyOverseaTransferGetCurrencyOkContinue;
- (void)reportIdkeyOverseaTransferGetCurrencyOkChangeToRMB;
- (void)reportIdkeyOverseaTransferOrderFailed;
- (void)reportIdkeyOverseaTransferOrderOk;
- (BOOL)shouldStartNativeHKCashier:(id)arg1;
- (void)call:(id)arg1;
- (id)m_nsQRCodeResponseUrl;
- (void)setM_nsQRCodeResponseUrl:(id)arg1;
- (id)m_getCurrencyCgi;
- (void)setM_getCurrencyCgi:(id)arg1;
- (id)m_orderCgi;
- (void)setM_orderCgi:(id)arg1;
- (id)m_currencyResp;
- (void)setM_currencyResp:(id)arg1;
- (id)m_orderResp;
- (void)setM_orderResp:(id)arg1;
- (id)m_getTransferNameCgi;
- (void)setM_getTransferNameCgi:(id)arg1;
- (id)m_getTransferNameReponse;
- (void)setM_getTransferNameReponse:(id)arg1;
- (id)m_facingTransferOrderCgi;
- (void)setM_facingTransferOrderCgi:(id)arg1;
- (id)m_facingTransferOrderResp;
- (void)setM_facingTransferOrderResp:(id)arg1;
- (id)m_facingTransferCancelCgi;
- (void)setM_facingTransferCancelCgi:(id)arg1;
- (id)m_transferMoneyControlLogic;
- (void)setM_transferMoneyControlLogic:(id)arg1;
- (void).cxx_destruct;
@end

