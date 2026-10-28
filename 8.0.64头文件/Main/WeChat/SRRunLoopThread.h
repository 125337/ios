@interface SRRunLoopThread : NSThread
{
    NSObject<OS_dispatch_group> * _waitGroup; // +0x40
    NSRunLoop * _runLoop; // +0x48
}
+ (id)sharedThread;
- (void)dealloc;
- (id)init;
- (void)main;
- (id)runLoop;
- (void)setRunLoop:(id)arg1;
- (void).cxx_destruct;
@end
