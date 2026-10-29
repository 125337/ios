@interface WCAccountErrorHandleLogic : MMObject
{
    WCPolicyListControlLogic * m_policyListLogic; // +0x8
    id <WCAccountErrorHandleLogicDelegate> _delegate; // +0x10
    BaseResponseErrMsgHandler * _errHandler; // +0x18
    AccountErrorInfo * _errorInfo; // +0x20
    VoicePrintVerifyLogic * _voicePrintVerifyLogic; // +0x28
}
- (id)init;
- (void)configErrHandler;
- (void)setDelegate:(id)arg1;
- (BOOL)onHandleError:(id)arg1;
- (void)onVoicePrintAction:(id)arg1;
- (void)openPolicyListUrl:(id)arg1;
- (void)openNetworkSettingPage;
- (void)onHandleErrorDone;
- (id)delegate;
- (id)errHandler;
- (void)setErrHandler:(id)arg1;
- (id)errorInfo;
- (void)setErrorInfo:(id)arg1;
- (id)voicePrintVerifyLogic;
- (void)setVoicePrintVerifyLogic:(id)arg1;
- (void).cxx_destruct;
@end
