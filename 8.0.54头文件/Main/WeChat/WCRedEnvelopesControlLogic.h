@interface WCRedEnvelopesControlLogic : WCBizControlLogic <WCRedEnvelopesLogicMgrExt>
{
    WCRedEnvelopesControlData * m_data; // +0x30
}
- (id)init;
- (id)initWithData:(id)arg1;
- (void)resume;
- (void)pause;
- (void)stopLogic;
- (void)startLoading;
- (void)startWCPayLoading;
- (void)stopLoading;
- (BOOL)OnCheckDismissCurrentViewControllerAndStopLogicBeforeDismiss;
- (BOOL)OnCheckDismissCurrentViewControllerAndStopLogicAfterDismiss;
- (void)onErrorAlertViewStopLogic:(id)arg1;
- (void)onErrorAlertViewDismiss:(id)arg1;
- (BOOL)onError:(id)arg1;
- (BOOL)onNeedToControlCurrentPublicError;
- (void)OnWCRedEnvelopesBaseRequestCommonError:(id)arg1 HongbaoCmdType:(long long)arg2;
- (void)OnWCRedEnvelopesBaseRequestCommonSystemError:(id)arg1 HongbaoCmdType:(long long)arg2;
- (void)OnWCRedEnvEnterpriseBaseRequestCommonError:(id)arg1 HBCmdType:(long long)arg2;
- (void)OnWCRedEnvEnterpriseBaseRequestCommonSystemError:(id)arg1 HBCmdType:(long long)arg2;
- (void)OnWCRedEnvBizBaseRequestCommonError:(id)arg1 HBCmdType:(long long)arg2;
- (void)OnWCRedEnvBizBaseRequestCommonSystemError:(id)arg1 HBCmdType:(long long)arg2;
- (void).cxx_destruct;
@end

