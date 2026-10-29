@interface WCPayLQTMoneyControlLogic : WCPayControlLogic <WCPayLQTQryUserFundDetailCgiDelegate, WCPayLQTPurchaseFundCgiDelegate, WCPayLQTQryPurchaaseResultCgiDelegate, WCPayLQTRedeemFundCgiDelegate, WCPayLQTMoneyViewControllerDelegate, WCPayPayMoneyLogicDelegate, WCPayLQTTransSuccessViewControllerDelegate, WCBaseControlLogicDeleagte, WCPayLQTPreRedeemFundCgiDelegate, WCPayAddPayCardDelegate, WCPayLQTClickRedeemCgiDelegate, WCPayPaidSuccessStatusViewControllerDelegate, WCPayLQTClickPurchaseCgiDelegate, MMWebViewDelegate, MMUseCaseCallback, WCPayLQTPurchaseFromBankGuideCgiDelegate, WCPayLQTGetDistributePreviewCgiDelegate>
{
    BOOL _bIsFetchOrSaveSucc; // +0x38
    unsigned int _entranceType; // +0x3c
    id <WCPayLQTMoneyControlLogicDelegate> _logicDelegate; // +0x40
    NSString * _traceInfo; // +0x48
    NSString * _operateId; // +0x50
    WCPayLQTQryUserFundDetailCgi * _detailCgi; // +0x58
    WCPayLQTPurchaseFundCgi * _prepayCgi; // +0x60
    WCPayLQTQryPurchaseResultCgi * _payResultQryCgi; // +0x68
    WCPayLQTPreRedeemFundCgi * _preRedeemFundCgi; // +0x70
    WCPayLQTRedeemFundCgi * _redeemFundCgi; // +0x78
    WCPayLQTClickRedeemCgi * _clickRedeemCgi; // +0x80
    WCPayLQTGetDistributePreviewCgi * _getDistributePreviewCgi; // +0x88
    WCPayLQTClickPurchaseCgi * _clickPurchaseCgi; // +0x90
    WCPayLQTPurchaseFromBankGuideCgi * _purchaseFromLqReportCgi; // +0x98
    WCPayPayMoneyLogic * _payMoneyLogic; // +0xa0
    PurchaseFundRes * _purchaseResp; // +0xa8
    PreRedeemFundRes * _preRedeemResp; // +0xb0
    WCPayComplianceHalfPage * _complianceHalfPage; // +0xb8
    NSString * _bindSerialFromNewCard; // +0xc0
    MMTipsViewController * _upgradeTipsView; // +0xc8
    MMWebViewController * _uploadIDCardWebView; // +0xd0
    MMPanelView * _largeAmountPanelView; // +0xd8
}
- (void)updateTraceInfo:(id)arg1;
- (void)dealloc;
- (id)initWithMoneyScene:(unsigned long long)arg1 controlData:(id)arg2;
- (void)stopLogic;
- (void)startLogic;
- (id)operateIdFromUrl:(id)arg1;
- (void)internalStartLogic;
- (BOOL)MoneyViewControllerCurrentLogicIsTop;
- (void)onMoneyViewControllerBack;
- (void)onMoneyViewControllerActionWithAmount:(id)arg1 redeemType:(unsigned int)arg2;
- (BOOL)shouldHandleRealNameInfo:(id)arg1;
- (void)handleRealnamePopups:(id)arg1;
- (void)webViewReturn:(id)arg1;
- (void)onMoneyViewControllerActionWithAmount:(id)arg1 pwdEnString:(id)arg2;
- (void)onMoneyViewControllerClickAddNewCard;
- (void)onMoneyViewControllerNeedUpdatePageData;
- (void)onMoneyViewControllerReportGuideFromLqWithShow:(unsigned int)arg1 click:(unsigned int)arg2;
- (void)onMoneyViewControllerGetDistributePreview:(unsigned long long)arg1 scene:(unsigned int)arg2;
- (void)onGetLQTPurchaseFromBankGuideResp:(id)arg1;
- (void)onPurchaseFundResPageSheetClickContinuePurchase:(id)arg1;
- (void)onPreRedeemFundResPageSheetClickContinuePreRedeem:(id)arg1 redeemType:(unsigned int)arg2;
- (void)onTransSuccessViewControllerConfirmBtnClick;
- (void)statusViewControlleDidClickDone:(id)arg1;
- (void)sendLQTPrePayRquestWithMoney:(unsigned int)arg1;
- (void)onGetLQTPurchaseFundResp:(id)arg1;
- (void)continueHandlePurchaseFundResp;
- (void)call:(id)arg1;
- (void)sendQryPurchaseResultFromSvrWithTransactionId:(id)arg1 isUseJointPayChannelFlag:(unsigned int)arg2;
- (void)sendQryPurchaseResultFromSvr;
- (void)onGetLQTQryPurchaseResultResp:(id)arg1;
- (void)sendPreRedeemRequestWithFee:(unsigned int)arg1 redeemType:(unsigned int)arg2;
- (void)onGetLQTPreRedeemFundResp:(id)arg1;
- (void)continueLQTPreRedeemFund;
- (void)sendRedeemRequestWithFee:(unsigned int)arg1 pwdEnString:(id)arg2;
- (void)onGetLQTRedeemFundResp:(id)arg1;
- (void)OnRetryPayMoneyFromPwdError;
- (void)sendClickRedeemCgi;
- (void)onGetLQTClickRedeemCgiResp:(id)arg1;
- (void)sendGetDistributePreviewCgi:(unsigned long long)arg1 scene:(unsigned int)arg2;
- (void)onGetDistributePreviewCgiResp:(id)arg1;
- (void)onGetLQTClickRedeemCgiPopItems:(id)arg1;
- (void)onPopsItemClick:(id)arg1;
- (void)sendClickPurchaseCgi:(BOOL)arg1;
- (void)onGetLQTClickPurchaseCgiResp:(id)arg1;
- (void)addBalanceInfoInfoCardList:(id)arg1;
- (void)startPayMoneyLogicWithReqkey:(id)arg1;
- (void)onPayMoneyLogicDidStop;
- (BOOL)gotoViewController:(id)arg1;
- (void)alertViewConfirmClick;
- (void)onAddPayCardResult:(BOOL)arg1 newCardBindSerial:(id)arg2;
- (id)genCardInfoFromBindQueryRecard:(id)arg1;
- (void)onTransSuccessViewControllerPlanCellClick;
- (void)onGetLQTQryUserFundDetailResp:(id)arg1;
- (void)reportLQTUpgradeV2:(unsigned long long)arg1 action:(unsigned long long)arg2;
- (void)ActiveMoenyViewControllerTextField;
- (id)logicDelegate;
- (void)setLogicDelegate:(id)arg1;
- (unsigned int)entranceType;
- (void)setEntranceType:(unsigned int)arg1;
- (id)traceInfo;
- (void)setTraceInfo:(id)arg1;
- (id)operateId;
- (void)setOperateId:(id)arg1;
- (id)detailCgi;
- (void)setDetailCgi:(id)arg1;
- (id)prepayCgi;
- (void)setPrepayCgi:(id)arg1;
- (id)payResultQryCgi;
- (void)setPayResultQryCgi:(id)arg1;
- (id)preRedeemFundCgi;
- (void)setPreRedeemFundCgi:(id)arg1;
- (id)redeemFundCgi;
- (void)setRedeemFundCgi:(id)arg1;
- (id)clickRedeemCgi;
- (void)setClickRedeemCgi:(id)arg1;
- (id)getDistributePreviewCgi;
- (void)setGetDistributePreviewCgi:(id)arg1;
- (id)clickPurchaseCgi;
- (void)setClickPurchaseCgi:(id)arg1;
- (id)purchaseFromLqReportCgi;
- (void)setPurchaseFromLqReportCgi:(id)arg1;
- (id)payMoneyLogic;
- (void)setPayMoneyLogic:(id)arg1;
- (id)purchaseResp;
- (void)setPurchaseResp:(id)arg1;
- (id)preRedeemResp;
- (void)setPreRedeemResp:(id)arg1;
- (id)complianceHalfPage;
- (void)setComplianceHalfPage:(id)arg1;
- (id)bindSerialFromNewCard;
- (void)setBindSerialFromNewCard:(id)arg1;
- (BOOL)bIsFetchOrSaveSucc;
- (void)setBIsFetchOrSaveSucc:(BOOL)arg1;
- (id)upgradeTipsView;
- (void)setUpgradeTipsView:(id)arg1;
- (id)uploadIDCardWebView;
- (void)setUploadIDCardWebView:(id)arg1;
- (id)largeAmountPanelView;
- (void)setLargeAmountPanelView:(id)arg1;
- (void).cxx_destruct;
@end

