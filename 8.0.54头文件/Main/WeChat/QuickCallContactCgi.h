@interface QuickCallContactCgi : WCBaseCgi
{
    BOOL _isRunning; // +0x8
    BOOL _isAddContact; // +0x9
    id <QuickCallContactCgiDelegate> _delegate; // +0x10
    id /* block */ _completion; // +0x18
    NSMutableArray * _waitingUsernames; // +0x20
    NSMutableArray * _successUsernames; // +0x28
}
- (id)init;
- (void)startAddContacts:(id)arg1 complete:(id /* block */)arg2;
- (void)startRemoveContacts:(id)arg1 complete:(id /* block */)arg2;
- (void)checkQueue;
- (void)handleFinishCallback;
- (BOOL)isEmpty;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isRunning;
- (void)setIsRunning:(BOOL)arg1;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (BOOL)isAddContact;
- (void)setIsAddContact:(BOOL)arg1;
- (id)waitingUsernames;
- (void)setWaitingUsernames:(id)arg1;
- (id)successUsernames;
- (void)setSuccessUsernames:(id)arg1;
- (void).cxx_destruct;
@end

