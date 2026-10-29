@interface MMLiveFlowCancelationToken : NSObject
{
    MMLiveFlowCancelationStatus * _cancelationStatus; // +0x8
    NSMutableArray * _cancelationActionRegistrations; // +0x10
    NSRecursiveLock * _registrationsLock; // +0x18
}
- (id)initWithCancelationStatus:(id)arg1;
- (id)identifier;
- (BOOL)cancelationRequested;
- (id)registerCancelationAction:(id /* block */)arg1 withAssociatedUserInfo:(id)arg2;
- (id)registerCancelationAction:(id /* block */)arg1 withAssociatedUserInfo:(id)arg2 onDispatchTarget:(unsigned long long)arg3;
- (id)registerLinkedCancelationSource:(id)arg1;
- (void)invokeRegisteredCancelationActions;
- (void)unregisterCancelationAction:(id)arg1;
- (id)cancelationStatus;
- (void)setCancelationStatus:(id)arg1;
- (id)cancelationActionRegistrations;
- (void)setCancelationActionRegistrations:(id)arg1;
- (id)registrationsLock;
- (void)setRegistrationsLock:(id)arg1;
- (void).cxx_destruct;
@end
