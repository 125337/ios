@interface WCPayPayMoneyFromBrandContactJSApiLogic : WCPayControlLogic <WCBaseControlMgrExt, WCPayPayMoneyLogicDelegate, WCPayLogicMgrExt, WCPayPayMoneyFromOverseaH5WalletLogicDelegate>
{
    JSEvent * m_jsEvent; // +0x38
    NSString * m_stepInURL; // +0x40
    NSString * m_stepAppUserName; // +0x48
    WCPayPayMoneyLogic * m_payLogic; // +0x50
    WCPayPayMoneyFromOverseaH5WalletLogic * m_payMoneyFromOverseaH5WalletLogic; // +0x58
    NSString * m_funcName; // +0x60
    BOOL _cancelByUser; // +0x68
    id <WCPayPayJSApiLogicParamDelegate> _paramDelegate; // +0x70
}
- (id)initWithJSEvent:(id)arg1 URL:(id)arg2 BrandUserName:(id)arg3;
- (void)setExtraInfo:(id)arg1;
- (void)startForceRotationToPortrait;
- (void)stopForceRotationToPortrait;
- (void)startLogic;
- (id)callbackStr:(id)arg1;
- (void)stopLogic;
- (BOOL)isOpenPayStautsABTest;
- (void)reportJSPayCallbackWithPayType:(int)arg1 callbackType:(int)arg2 sourceH5:(id)arg3 sourceAppUsername:(id)arg4 sourceAppPath:(id)arg5 targetAppUsername:(id)arg6 targetAppPath:(id)arg7;
- (BOOL)gotoViewController:(id)arg1;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (void)OnGetGenPaypreRequest:(id)arg1 SessionID:(id)arg2 AppSource:(id)arg3 WalletMixSpGenprepayResp:(id)arg4;
- (void)OnGetGenPaypreErrorRequest:(id)arg1 ErrorMsg:(id)arg2;
- (void)onWCPayJSApiResult:(id)arg1 needCloseWebview:(BOOL)arg2;
- (void)onWCPayJSApiNeedOpenTinyApp:(id)arg1 path:(id)arg2;
- (void)succToPayMoneyFromOverseaH5WalletLogic:(id)arg1;
- (void)failToPayMoneyFromOverseaH5WalletLogic:(id)arg1;
- (void)cancelPayMoneyFromOverseaH5WalletLogic:(id)arg1;
- (id)paramDelegate;
- (void)setParamDelegate:(id)arg1;
- (BOOL)cancelByUser;
- (void)setCancelByUser:(BOOL)arg1;
- (void).cxx_destruct;
@end
