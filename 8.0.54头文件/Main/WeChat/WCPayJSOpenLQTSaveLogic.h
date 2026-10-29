@interface WCPayJSOpenLQTSaveLogic : WCPayJSAuthBaseLogic <WCPayLQTMoneyControlLogicDelegate>
{
    id <WCPayJSOpenLQTSaveLogicDelegate> _m_delegate; // +0x38
    NSString * _traceInfo; // +0x40
    NSString * _operateId; // +0x48
}
- (id)initWithJSEvent:(id)arg1 param:(id)arg2 delegate:(id)arg3;
- (void)dealloc;
- (void)authFail;
- (void)authOk;
- (id)packageParam;
- (void)onLQTMoneyControlLogicStop:(BOOL)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)traceInfo;
- (void)setTraceInfo:(id)arg1;
- (id)operateId;
- (void)setOperateId:(id)arg1;
- (void).cxx_destruct;
@end

