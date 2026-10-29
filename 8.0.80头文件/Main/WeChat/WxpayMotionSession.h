@interface WxpayMotionSession : NSObject
{
    CMMotionManager * _manager; // +0x8
    NSOperationQueue * _queue; // +0x10
    id /* block */ _emit; // +0x18
}
- (id)manager;
- (void)setManager:(id)arg1;
- (id)queue;
- (void)setQueue:(id)arg1;
- (id /* block */)emit;
- (void)setEmit:(id /* block */)arg1;
- (void).cxx_destruct;
@end
