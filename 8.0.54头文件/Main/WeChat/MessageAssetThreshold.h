@interface MessageAssetThreshold : NSObject
{
    long long _maxConcurrent; // +0x8
    NSObject<OS_dispatch_semaphore> * _semaphore; // +0x10
    NSObject<OS_dispatch_queue> * _queue; // +0x18
}
- (void)setMaxConcurrent:(long long)arg1;
- (void)fetchAssetImage:(id)arg1 processBlock:(id /* block */)arg2 resultBlock:(id /* block */)arg3 errorBlock:(id /* block */)arg4;
- (long long)maxConcurrent;
- (id)semaphore;
- (void)setSemaphore:(id)arg1;
- (id)queue;
- (void)setQueue:(id)arg1;
- (void).cxx_destruct;
@end

