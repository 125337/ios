@interface TPRecursiveLock : NSObject <ITPLock>
{
    NSRecursiveLock * _lock; // +0x8
}
- (id)init;
- (void)lock;
- (void)unlock;
- (void)setLock:(id)arg1;
- (void).cxx_destruct;
@end
