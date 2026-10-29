@interface WCPayQRCodeRewardPayControlLogic : WCPayControlLogic <WCPayQRCodeRewardPayerDetailViewControllerDelegate, WCPayQRCodeRewardPayerConfirmViewControllerDelegate, WCPayQRCodeRewardEditMoneyViewControllerDelegate, WCPayPayMoneyLogicDelegate, WCBaseControlLogicDeleagte, WCPayQRCodeRewardScanCodeCgiDelegate, WCPayQRCodeRewardPlaceOrderCgiDelegate, WCPayQRCodeRewardPayCheckCgiDelegate, IStrangerContactMgrExt, MMUseCaseCallback>
{
    id <WCPayQRCodeRewardPayControlLogicDelegate> _logicDelegate; // +0x38
    WCPayPayMoneyLogic * _payMoneyLogic; // +0x40
    WCPayQRCodeRewardScanCodeCgi * _scanCodeCgi; // +0x48
    WCPayQRCodeRewardPlaceOrderCgi * _placeOrderCgi; // +0x50
    WCPayQRCodeRewardPayCheckCgi * _payCheckCgi; // +0x58
}
- (void)stopLogic;
- (void)startLogic;
- (void)onPayerDetailViewControllerBack;
- (void)onPayerDetailViewControllerClickEditMoneyBtn;
- (void)onPayerDetailViewControllerClickAmount:(long long)arg1;
- (void)onPayerConfirmViewControllerBack;
- (void)onPayerConfirmViewControllerConfirmWithPayerCommnet:(id)arg1 shouldShowNickName:(BOOL)arg2;
- (void)onEditMoneyViewControllerBack;
- (void)onEditMoneyViewControllerConfirmRewardWithAmount:(long long)arg1 comment:(id)arg2 shouldShowNickName:(BOOL)arg3;
- (void)sendScanCodeRequest;
- (void)onGetQRCodeRewardScanCodeCgiResp:(id)arg1;
- (void)scanCodeAlertViewConfirmClick;
- (void)onStrangerContactUpdated:(id)arg1 Contact:(id)arg2;
- (void)handleGotoViewControllerAfterGetTransferContact;
- (void)sendRewardPrePayRequestWithAmount:(long long)arg1 comment:(id)arg2 isSelectAmount:(BOOL)arg3 shouldShowNickName:(BOOL)arg4;
- (void)onGetQRCodeRewardPlaceOrderResp:(id)arg1;
- (void)continueToTransfer;
- (void)continueToTransfer:(BOOL)arg1;
- (BOOL)gotoViewController:(id)arg1;
- (void)onPayMoneyLogicSuccess;
- (void)onGetQRCodeRewardPayCheckCgiResp:(id)arg1;
- (void)onPayMoneyLogicDidStop;
- (void)call:(id)arg1;
- (id)logicDelegate;
- (void)setLogicDelegate:(id)arg1;
- (id)payMoneyLogic;
- (void)setPayMoneyLogic:(id)arg1;
- (id)scanCodeCgi;
- (void)setScanCodeCgi:(id)arg1;
- (id)placeOrderCgi;
- (void)setPlaceOrderCgi:(id)arg1;
- (id)payCheckCgi;
- (void)setPayCheckCgi:(id)arg1;
- (void).cxx_destruct;
@end
