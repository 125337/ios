@interface TPLock : NSObject <ITPLock>
{
    NSObject<OS_dispatch_semaphore> * _semaphore; // +0x8
}
- (id)init;
- (void)lock;
- (void)unlock;
- (id)semaphore;
- (void)setSemaphore:(id)arg1;
- (void).cxx_destruct;
@end
