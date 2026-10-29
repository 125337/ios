@interface QMUReadWriteLock : NSObject
{
    _opaque_pthread_rwlock_t rwlock; // +0x8
}
- (int)writerLock;
- (int)readerLock;
- (int)unlock;
- (id)init;
- (void)dealloc;
@end

