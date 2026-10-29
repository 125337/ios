@interface SRDelegateController : NSObject
{
    SRDelegateAvailableMethods _availableDelegateMethods; // +0x8
    id <SRWebSocketDelegate> _delegate; // +0x10
    NSObject<OS_dispatch_queue> * _dispatchQueue; // +0x18
    NSOperationQueue * _operationQueue; // +0x20
    NSObject<OS_dispatch_queue> * _accessQueue; // +0x28
}
- (id)init;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)setDispatchQueue:(id)arg1;
- (id)dispatchQueue;
- (void)setOperationQueue:(id)arg1;
- (id)operationQueue;
- (void)performDelegateBlock:(id /* block */)arg1;
- (void)performDelegateQueueBlock:(id /* block */)arg1;
- (SRDelegateAvailableMethods)availableDelegateMethods;
- (void)setAvailableDelegateMethods:(SRDelegateAvailableMethods)arg1;
- (id)accessQueue;
- (void).cxx_destruct;
@end
