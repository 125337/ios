@interface TSMFAValueSynchronizingQuery : TSMFAQuery
{
    Protocol * _expectedProtocol; // +0x8
    id <TuringShieldMFAOutputInfo> _outputInfo; // +0x10
    NSError * _error; // +0x18
    id _targetObject; // +0x20
    NSObject<OS_dispatch_semaphore> * _semaphore; // +0x28
}
- (id)init;
- (void)executeWithCompletion:(id /* block */)arg1;
- (void)cancel;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)expectedProtocol;
- (void)setExpectedProtocol:(id)arg1;
- (id)outputInfo;
- (void)setOutputInfo:(id)arg1;
- (id)error;
- (void)setError:(id)arg1;
- (id)targetObject;
- (void)setTargetObject:(id)arg1;
- (id)semaphore;
- (void)setSemaphore:(id)arg1;
- (void).cxx_destruct;
@end
