@interface MMLiveFlowConcurrencyControlAction : MMLiveFlowLinearDelegatingActionBase
{
    unsigned long long _degreeOfParallelism; // +0x8
    unsigned long long _currentExecutingCount; // +0x10
    NSMutableArray * _queue; // +0x18
}
+ (id)createSerial;
+ (id)createConcurrentDefault;
+ (id)createConcurrentUnlimited;
+ (id)createWithDegreeOfParallelism:(unsigned long long)arg1;
- (id)initWithDegreeOfParallelism:(unsigned long long)arg1;
- (id)init;
- (void)invokeWithInput:(id)arg1 flowInvocationContext:(id)arg2 actionInvocationContext:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)invokeTaskWithInput:(id)arg1 flowInvocationContext:(id)arg2 actionInvocationContext:(id)arg3 completionBlock:(id /* block */)arg4;
- (unsigned long long)degreeOfParallelism;
- (void)setDegreeOfParallelism:(unsigned long long)arg1;
- (unsigned long long)currentExecutingCount;
- (void)setCurrentExecutingCount:(unsigned long long)arg1;
- (id)queue;
- (void)setQueue:(id)arg1;
- (void).cxx_destruct;
@end
