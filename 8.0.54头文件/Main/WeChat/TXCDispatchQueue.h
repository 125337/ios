@interface TXCDispatchQueue : NSObject
{
    void * _queueKey; // +0x8
    NSObject<OS_dispatch_queue> * _queue; // +0x10
}
+ (id)pipelineQueue;
+ (id)producerQueue;
+ (id)consumerQueue;
+ (id)captureQueue;
+ (id)createEncodeQueue;
+ (id)createDecodeQueue;
+ (id)mainQueue;
- (id)initWithName:(const char *)arg1;
- (id)init;
- (void)runOnQueueOrAsync:(id /* block */)arg1;
- (void)runSync:(id /* block */)arg1;
- (void)forceAsync:(id /* block */)arg1;
- (void)runAsync:(id /* block */)arg1 after:(long long)arg2;
- (BOOL)isInQueue;
- (void)assertInQueue;
- (id)queue;
- (void).cxx_destruct;
@end

