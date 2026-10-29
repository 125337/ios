@interface TPCondiction : NSObject
{
    NSObject<OS_dispatch_semaphore> * _semaphore; // +0x8
    unsigned long long _waitMs; // +0x10
}
- (id)init;
- (id)initWithCondiction:(long long)arg1 waitTime:(unsigned long long)arg2;
- (void)wait;
- (void)waitWithTimeoutBlock:(id /* block */)arg1;
- (void)signal;
- (id)semaphore;
- (void)setSemaphore:(id)arg1;
- (unsigned long long)waitMs;
- (void)setWaitMs:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
