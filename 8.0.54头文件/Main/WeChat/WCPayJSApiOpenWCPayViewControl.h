@interface WCPayJSApiOpenWCPayViewControl : WCPayControlLogic <WCPayLQTMoneyControlLogicDelegate, WCPaySecuritySettingViewControllerDelegate, WCPayLQTDetailControlLogicDelegate, HoneyPayHomeControlLogicDelegate, HoneyPayPayerDetailControlLogicDelegate, HoneyPayReceiverCardDetailControlLogicDelegate, MMUseCaseCallback, WCBaseControlMgrExt>
{
    JSEvent * m_jsEvent; // +0x38
    WCPayJSApiAuthenticationControlLogic * m_oAuthenticationLogic; // +0x40
    long long m_enWCPayCheckAuthorityScene; // +0x48
    int m_enWCPayCheckOpenWCPayViewAuthorityScene; // +0x50
    WCPayF2FJSApiAuthenticationControlLogic * _f2fJSApiAuthenControlLogic; // +0x58
    WCPayF2FReceiveDetailControlLogic * _f2fDetailControlLogic; // +0x60
    WCPayLQTDetailControlLogic * _lqtDetailControlLogic; // +0x68
    WCPayT2BCDetailControlLogic * _t2bcDetailControlLogic; // +0x70
    WCPayBalanceFetchMoneyControlLogic * _fetchBanlanceControlLogic; // +0x78
    WCPayT2BCTransferControlLogic * _t2bcTransferControlLogic; // +0x80
    WCPayJumpC2CMessageJsapiLogic * _m_jumpC2CMessageJsapiLogic; // +0x88
    WCPayLQTDepositControlLogic * _lqtDepositControlLogic; // +0x90
    WCPayLQTMoneyControlLogic * _lqtMoneyControlLogic; // +0x98
    WCPayJumpHbRefundJsapiLogic * _hbRefundControlLogic; // +0xa0
    WCPayOverseaFacingReceiveControlLogic * _overseaFacingReceiveControlLogic; // +0xa8
}
- (id)initWithJSEvent:(id)arg1;
- (void)startLogic;
- (void)call:(id)arg1;
- (void)stopLogic;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (id)packageParam;
- (void)callJSEventOKAndReport;
- (void)onLQTDetailControlLogicStop;
- (void)honeyPayHomeLogicDidStop:(id)arg1;
- (void)onWCPaySecuritySettingViewControllerBack;
- (void)onLQTMoneyControlLogicStop:(BOOL)arg1;
- (void)syncLqtVersion:(id)arg1;
- (id)f2fJSApiAuthenControlLogic;
- (void)setF2fJSApiAuthenControlLogic:(id)arg1;
- (id)f2fDetailControlLogic;
- (void)setF2fDetailControlLogic:(id)arg1;
- (id)lqtDetailControlLogic;
- (void)setLqtDetailControlLogic:(id)arg1;
- (id)t2bcDetailControlLogic;
- (void)setT2bcDetailControlLogic:(id)arg1;
- (id)fetchBanlanceControlLogic;
- (void)setFetchBanlanceControlLogic:(id)arg1;
- (id)t2bcTransferControlLogic;
- (void)setT2bcTransferControlLogic:(id)arg1;
- (id)m_jumpC2CMessageJsapiLogic;
- (void)setM_jumpC2CMessageJsapiLogic:(id)arg1;
- (id)lqtDepositControlLogic;
- (void)setLqtDepositControlLogic:(id)arg1;
- (id)lqtMoneyControlLogic;
- (void)setLqtMoneyControlLogic:(id)arg1;
- (id)hbRefundControlLogic;
- (void)setHbRefundControlLogic:(id)arg1;
- (id)overseaFacingReceiveControlLogic;
- (void)setOverseaFacingReceiveControlLogic:(id)arg1;
- (void).cxx_destruct;
@end

