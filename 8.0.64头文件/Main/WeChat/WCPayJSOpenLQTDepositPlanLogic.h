@interface WCPayJSOpenLQTDepositPlanLogic : WCPayJSAuthBaseLogic <WCBaseControlMgrExt>
{
    id <WCPayJSOpenLQTDepositPlanLogicDelegate> _m_delegate; // +0x38
}
- (id)initWithJSEvent:(id)arg1 param:(id)arg2 delegate:(id)arg3;
- (void)dealloc;
- (void)authFail;
- (void)authOk;
- (void)startLQTFixedDepositPlanList;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end
