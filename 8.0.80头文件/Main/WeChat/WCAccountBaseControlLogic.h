@interface WCAccountBaseControlLogic : WCBaseControlLogic <WCAccountErrorHandleLogicDelegate, MMUIViewControllerDelegate>
{
    WCAccountControlData * m_data; // +0x20
    WCAccountErrorHandleLogic * m_errorHandleLogic; // +0x28
    BOOL m_bNeverAutoStop; // +0x30
}
- (id)initWithData:(id)arg1;
- (void)stopLogic;
- (void)vcBecomeFirstResponder;
- (void)vcResignFirstResponder;
- (void)startLoading;
- (void)stopLoading;
- (BOOL)onHandleError:(id)arg1;
- (id)setRootviewController:(Class)arg1 withData:(id)arg2;
- (id)setRootviewController:(Class)arg1 withData:(id)arg2 forceFullScreen:(BOOL)arg3;
- (void)checkStopLogic;
- (void)openMainFrame:(BOOL)arg1 showStyle:(id)arg2;
- (void)openMainFrame:(BOOL)arg1 showStyle:(id)arg2 closeFirstViewWithFadeoutAnimation:(BOOL)arg3;
- (BOOL)isFromReg;
- (void)onErrorHandleLogicDone;
- (id)getViewController;
- (id)data;
- (void).cxx_destruct;
@end
