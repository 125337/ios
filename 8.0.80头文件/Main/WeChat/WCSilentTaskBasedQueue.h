@interface WCSilentTaskBasedQueue : WCSilentTask
{
    queue<void (^)(), std::deque<void (^)()>> _queue; // +0x8
    NSRecursiveLock * _lock; // +0x38
}
- (id)initWithName:(id)arg1;
- (void)dispatchAsync:(id /* block */)arg1;
- (void)dispatchSync:(id /* block */)arg1;
- (void)dispatchRecursively:(id /* block */)arg1;
- (void)runLoop;
- (id)lock;
- (void)setLock:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
