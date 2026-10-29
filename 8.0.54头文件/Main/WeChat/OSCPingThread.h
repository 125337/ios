@interface OSCPingThread : NSThread
{
    BOOL _pingTaskIsRunning; // +0x3c
    NSObject<OS_dispatch_semaphore> * _semaphore; // +0x40
    double _threshold; // +0x48
    id /* block */ _handler; // +0x50
}
- (id)initWithThreashold:(double)arg1 handler:(id /* block */)arg2;
- (void)main;
- (BOOL)pingTaskIsRunning;
- (void)setPingTaskIsRunning:(BOOL)arg1;
- (id)semaphore;
- (void)setSemaphore:(id)arg1;
- (double)threshold;
- (id /* block */)handler;
- (void).cxx_destruct;
@end

