@interface MMDebounce : NSObject
{
    double _interval; // +0x8
    id /* block */ _taskBlock; // +0x10
}
- (id)initWithInterval:(double)arg1 taskBlock:(id /* block */)arg2;
- (id)initWithInterval:(double)arg1 onQueue:(id)arg2 taskBlock:(id /* block */)arg3;
- (id)initWithDebounceMode:(unsigned long long)arg1 interval:(double)arg2 onQueue:(id)arg3 taskBlock:(id /* block */)arg4;
- (void)call;
- (void)invalidate;
- (double)interval;
- (void)setInterval:(double)arg1;
- (id /* block */)taskBlock;
- (void)setTaskBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
