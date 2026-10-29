@interface MMLiveFlowActionBase : NSObject
- (void)invokeWithInput:(id)arg1 cancelationToken:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)invokeWithInput:(id)arg1 flowInvocationContext:(id)arg2 actionInvocationContext:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)dispatchInvocation:(id /* block */)arg1 flowInvocationContext:(id)arg2 actionInvocationContext:(id)arg3;
- (void)dispatchInvocation:(id /* block */)arg1 withTarget:(unsigned long long)arg2 flowInvocationContext:(id)arg3 actionInvocationContext:(id)arg4;
- (void)dispatchInvocationToMainQueue:(id /* block */)arg1 forced:(BOOL)arg2 flowInvocationContext:(id)arg3 actionInvocationContext:(id)arg4;
- (void)dispatchInvocationToBackgroundWorkerQueue:(id /* block */)arg1 forced:(BOOL)arg2 flowInvocationContext:(id)arg3 actionInvocationContext:(id)arg4;
@end
