@interface WCPayPayMoneyFromAppLogic : WCPayControlLogic <WCPayBaseViewControllerDelegate, WCBaseControlMgrExt, WCPayPayMoneyFromOverseaH5WalletLogicDelegate>
{
    NSDictionary * m_payInfo; // +0x38
    NSString * m_appID; // +0x40
    NSString * m_bundleId; // +0x48
    NSString * m_universalLink; // +0x50
    PayResp * m_resp; // +0x58
    WCPayPayMoneyLogic * m_payLogic; // +0x60
    WCPayBaseViewController * rootViewController; // +0x68
    WCPayPayMoneyFromOverseaH5WalletLogic * m_payMoneyFromOverseaH5WalletLogic; // +0x70
    BOOL m_cancelByOpenApi; // +0x78
}
- (id)initWithInfo:(id)arg1 BundleID:(id)arg2 appID:(id)arg3 universalLink:(id)arg4;
- (void)markCancelByOpenApi;
- (void)WCPayBaseViewControllerBack;
- (void)startLogic;
- (void)stopLogic;
- (BOOL)gotoViewController:(id)arg1;
- (void)OnRootViewBack;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (void)OnGetAppAuthUrlRequest:(id)arg1 AppSource:(id)arg2 PrepayId:(id)arg3 CallBackUrl:(id)arg4 WalletMixSpGenprepayResp:(id)arg5 Error:(id)arg6;
- (void)OnGetAppAuthUrlErrorRequest:(id)arg1;
- (void)succToPayMoneyFromOverseaH5WalletLogic:(id)arg1;
- (void)failToPayMoneyFromOverseaH5WalletLogic:(id)arg1;
- (void)cancelPayMoneyFromOverseaH5WalletLogic:(id)arg1;
- (BOOL)m_cancelByOpenApi;
- (void)setM_cancelByOpenApi:(BOOL)arg1;
- (void).cxx_destruct;
@end

