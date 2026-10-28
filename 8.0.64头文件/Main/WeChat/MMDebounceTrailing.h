@interface MMDebounceTrailing : MMDebounce
{
    NSObject<OS_dispatch_queue> * _queue; // +0x18
    id /* block */ _block; // +0x20
}
- (id)initWithInterval:(double)arg1 onQueue:(id)arg2 taskBlock:(id /* block */)arg3;
- (void)call;
- (void)invalidate;
- (id)queue;
- (void)setQueue:(id)arg1;
- (id /* block */)block;
- (void)setBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
