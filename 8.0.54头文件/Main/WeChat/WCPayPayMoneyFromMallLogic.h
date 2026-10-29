@interface WCPayPayMoneyFromMallLogic : WCPayControlLogic <WCBaseControlMgrExt, WCPayPayMoneyLogicDelegate, WCPayLogicMgrExt, MMUseCaseCallback>
{
    WCPayMallPayStruct * m_oWCPayMallPayStruct; // +0x38
    WCPayPayMoneyLogic * m_payLogic; // +0x40
}
- (void)setWCPayMallPayStruct:(id)arg1;
- (void)startLogic;
- (void)stopLogic;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (BOOL)gotoViewController:(id)arg1;
- (void)OnGetMallPrepayRequest:(id)arg1 AppSource:(id)arg2 Error:(id)arg3;
- (void)call:(id)arg1;
- (void).cxx_destruct;
@end

