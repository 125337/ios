@interface WeDropReceiveSession : MMObject <WeDropReceiveViewFullscreenLifeCycleHelper, WeDropBaseSession>
{
    BOOL _didPresentVC; // +0x8
    WeDropReceiveStatusMachine * _statusMachine; // +0x10
    UIView<WeDropReceiveModuleViewProvider> * _containerView; // +0x18
    id <WeDropReceiveViewModuleLifeCycleHelper> _moduleLifeHelper; // +0x20
    WeDropReceiverViewController * _receiverVC; // +0x28
}
- (id)initWithViewContainerView:(id)arg1 moduleLifeHelper:(id)arg2;
- (void)startSession;
- (void)endSession;
- (id)getSessionId;
- (id)reportObj;
- (id)devReportObj;
- (void)showReceiveVC;
- (id)statusMachine;
- (void)setStatusMachine:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)moduleLifeHelper;
- (void)setModuleLifeHelper:(id)arg1;
- (id)receiverVC;
- (void)setReceiverVC:(id)arg1;
- (BOOL)didPresentVC;
- (void)setDidPresentVC:(BOOL)arg1;
- (void).cxx_destruct;
@end
