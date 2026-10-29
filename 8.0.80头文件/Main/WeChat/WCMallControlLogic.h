@interface WCMallControlLogic : WCBizControlLogic <WCMallLogicMgrExt>
{
    WCMallControlData * m_data; // +0x30
}
- (id)init;
- (id)initWithData:(id)arg1;
- (void)resume;
- (void)pause;
- (void)stopLogic;
- (BOOL)onError:(id)arg1;
- (void)onErrorAlertViewStopLogic:(id)arg1;
- (void).cxx_destruct;
@end
