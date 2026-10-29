@interface NSThreadHolder : NSObject
{
    NSThread * _thread; // +0x8
}
- (id)initWithNSThread:(id)arg1;
- (void)checkAndPost:(id /* block */)arg1;
- (BOOL)onWorkingThread;
- (void).cxx_destruct;
@end

