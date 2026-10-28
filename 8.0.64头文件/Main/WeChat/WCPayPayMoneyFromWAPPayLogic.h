@interface WCPayPayMoneyFromWAPPayLogic : WCPayControlLogic <WCBaseControlMgrExt, WCPayPayMoneyFromOverseaH5WalletLogicDelegate>
{
    NSDictionary * m_payInfo; // +0x38
    NSString * m_bundleId; // +0x40
    WCPayPayMoneyLogic * m_payLogic; // +0x48
    WCPayBaseViewController * rootViewController; // +0x50
    WCPayPayMoneyFromOverseaH5WalletLogic * m_payMoneyFromOverseaH5WalletLogic; // +0x58
}
- (BOOL)cancelByOpenApi;
- (void)markCancelByOpenApi;
- (id)initWithInfo:(id)arg1 BundleID:(id)arg2;
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
- (void).cxx_destruct;
@end
