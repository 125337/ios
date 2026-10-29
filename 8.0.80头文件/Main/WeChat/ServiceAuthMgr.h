@interface ServiceAuthMgr : MMUserService <ServiceAuthDelegate, ServiceAuthTaskDelegate, MMServiceProtocol>
{
    ServiceAuthViewController * m_authController; // +0x8
    NSMutableDictionary * m_runningTasks; // +0x10
    MMUIViewController * _loadingController; // +0x18
}
- (void)onServiceInit;
- (void)showAuthViewWithConfig:(id)arg1 delegate:(id)arg2;
- (void)showAuthViewWithConfig:(id)arg1 delegateBlockWrapper:(id)arg2;
- (BOOL)isServiceOpened:(unsigned long long)arg1;
- (void)requestWithConfig:(id)arg1;
- (void)onTaskSuccess:(id)arg1;
- (void)onTaskFail:(id)arg1 error:(id)arg2;
- (void)onClickCancelButton;
- (void)onClickConfirmButton;
- (void)_stopLoadingForSuccess;
- (void)_stopLoadingForFail;
- (void)_saveStatusAuth:(id)arg1 noAuth:(id)arg2;
- (void)_notifyChange:(id)arg1 error:(id)arg2;
- (id)loadingController;
- (void)setLoadingController:(id)arg1;
- (void).cxx_destruct;
@end
