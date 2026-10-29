@interface WCPayOverseaFacingReceiveControlLogic : WCPayControlLogic <MMTipsViewControllerDelegate, MMWebViewDelegate, WCPayFacingReceiveQRCodeViewControllerDelegate, WCPayFacingReceiveFixedAmountViewControllerDelegate, WCPayOverseaGetFacingReceiveQRCodeCgiDelegate>
{
    NSString * m_nsFacingAmountTotalMoney; // +0x38
    NSString * m_nsFacingAmountDesc; // +0x40
    WCPayOverseaGetFacingReceiveQRCodeCgi * _m_getQRCodeCgi; // +0x48
    WCPayOverseaGetFacingReceiveQRCodeResponse * _m_getQRCodeResponse; // +0x50
}
- (void)startLogic;
- (void)stopLogic;
- (void)onWCPayOverseaGetFacingReceiveFixQRCodeResponseOK:(id)arg1;
- (void)onWCPayOverseaGetFacingRecevieQRCodeResponseCgiError:(int)arg1 errorMsg:(id)arg2;
- (void)onWCPayOverseaGetFacingRecevieQRCodeResponseBizError:(id)arg1 errorCode:(int)arg2 errorMsg:(id)arg3;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 withText:(id)arg3 withTipsVC:(id)arg4;
- (void)onWCPayOverseaGetFacingRecevieNotFixQRCodeLocalResponse:(id)arg1;
- (void)onWCPayOverseaGetFacingRecevieNotFixQRCodeResponseOK:(id)arg1;
- (void)checkShowOverseaFacingReceiveFirstTips:(id)arg1;
- (id)facingReceiveMultipleWalletTitle:(id)arg1;
- (void)OnGetLocalPayCardList:(id)arg1 UsrVerifiedInfo:(id)arg2 SwicthInfo:(id)arg3 BalanceInfo:(id)arg4 NoticeInfo:(id)arg5 loanEntryInfo:(id)arg6 LqtInfo:(id)arg7;
- (void)OnGetBindQueryInfo:(id)arg1 Error:(id)arg2;
- (void)onWebViewWillClose:(id)arg1;
- (void)webViewReturn:(id)arg1;
- (void)WCPayFacingReceiveQRCodeViewControllerCancel;
- (void)WCPayFacingReceiveChangeToFixedAmount;
- (void)WCPayFacingReceiveChangeToUnFixedAmount;
- (int)getCurrentFacingReceiveCodeType;
- (void)userChangeFacingReceiveCodeType:(int)arg1;
- (void)WCPayFacingReceiveNotifySaveQRCode:(unsigned int)arg1 isFixedCode:(BOOL)arg2;
- (void)WCPayFacingReceiveFixedAmountViewControllerNext:(id)arg1 Description:(id)arg2;
- (void)WCPayFacingReceiveFixedAmountViewControllerCancel:(BOOL)arg1;
- (void)OnNotifyOverseaAddFacingReceiveMoneyPayerInfo:(id)arg1;
- (void)playVibration;
- (void)WCPayFacingReceiveViewReceiveDetail;
- (void)WCPayFacingReceiveSaveQRCodeImage;
- (void)WCPayFacingReceiveSaveQRCodeImageFromAlert;
- (id)WCPayFacingReceiveGetOfflineLogo;
- (id)WCPayFacingReceiveGetOfflineSlogan;
- (id)m_getQRCodeCgi;
- (void)setM_getQRCodeCgi:(id)arg1;
- (id)m_getQRCodeResponse;
- (void)setM_getQRCodeResponse:(id)arg1;
- (void).cxx_destruct;
@end

