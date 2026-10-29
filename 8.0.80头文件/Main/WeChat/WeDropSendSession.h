@interface WeDropSendSession : MMObject <WeDropSendViewLifeCycleHelper, WeDropBaseSession>
{
    BOOL _didPresentVC; // +0x8
    WeDropSendStatusMachine * _statusMachine; // +0x10
    UIViewController * _containerVC; // +0x18
    WeDropSenderViewController * _senderVC; // +0x20
    id /* block */ _vcPresentCompletion; // +0x28
}
- (id)initWithQRContent:(id)arg1 viewController:(id)arg2 block:(id /* block */)arg3;
- (void)startSession;
- (void)endSession;
- (void)showSendVC;
- (id)getSessionId;
- (id)reportObj;
- (id)devReportObj;
- (id)statusMachine;
- (void)setStatusMachine:(id)arg1;
- (id)containerVC;
- (void)setContainerVC:(id)arg1;
- (id)senderVC;
- (void)setSenderVC:(id)arg1;
- (id /* block */)vcPresentCompletion;
- (void)setVcPresentCompletion:(id /* block */)arg1;
- (BOOL)didPresentVC;
- (void)setDidPresentVC:(BOOL)arg1;
- (void).cxx_destruct;
@end
