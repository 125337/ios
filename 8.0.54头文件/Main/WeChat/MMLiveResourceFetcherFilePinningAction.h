@interface MMLiveResourceFetcherFilePinningAction : MMLiveFlowLinearDelegatingActionBase
{
    MMLiveStorageCleanupPinningToken * _pinningToken; // +0x8
}
- (void)invokeWithInput:(id)arg1 flowInvocationContext:(id)arg2 actionInvocationContext:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)dispatchInvocation:(id /* block */)arg1 flowInvocationContext:(id)arg2 actionInvocationContext:(id)arg3;
- (id)pinningToken;
- (void)setPinningToken:(id)arg1;
- (void).cxx_destruct;
@end

