@interface MMLiveFlowRetryAction : MMLiveFlowLinearDelegatingActionBase
{
    unsigned long long _maximumRetryCount; // +0x8
    id /* block */ _backoffDelayFunction; // +0x10
}
+ (id)createWithMaximumRetryCount:(unsigned long long)arg1 fixedBackoffDelay:(double)arg2;
+ (id)createDefaultExponentialBackoffWithMaximumRetryCount:(unsigned long long)arg1;
+ (id)createWithMaximumRetryCount:(unsigned long long)arg1 exponentialBackoffBase:(double)arg2 initialDelay:(double)arg3 maximumRandomJitterRatio:(double)arg4;
+ (id)createWithMaximumRetryCount:(unsigned long long)arg1 backoffDelayFunction:(id /* block */)arg2;
- (id)initWithMaximumRetryCount:(unsigned long long)arg1 backoffDelayFunction:(id /* block */)arg2;
- (id)init;
- (void)invokeWithInput:(id)arg1 flowInvocationContext:(id)arg2 actionInvocationContext:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)invokeRetryWithInput:(id)arg1 flowInvocationContext:(id)arg2 actionInvocationContext:(id)arg3 currentRetry:(unsigned long long)arg4 completionBlock:(id /* block */)arg5;
- (void)dispatchInvocation:(id /* block */)arg1 flowInvocationContext:(id)arg2 actionInvocationContext:(id)arg3;
- (unsigned long long)maximumRetryCount;
- (void)setMaximumRetryCount:(unsigned long long)arg1;
- (id /* block */)backoffDelayFunction;
- (void)setBackoffDelayFunction:(id /* block */)arg1;
- (void).cxx_destruct;
@end

