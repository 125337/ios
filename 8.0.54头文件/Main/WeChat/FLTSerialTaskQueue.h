@interface FLTSerialTaskQueue : NSObject <FlutterTaskQueueDispatch>
{
    NSObject<OS_dispatch_queue> * _queue; // +0x8
}
- (id)init;
- (void)dealloc;
- (void)dispatch:(id /* block */)arg1;
- (id)queue;
- (void)setQueue:(id)arg1;
@end

