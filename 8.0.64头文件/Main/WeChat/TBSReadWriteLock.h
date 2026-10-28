@interface TBSReadWriteLock : NSObject
{
    _opaque_pthread_rwlock_t rwlock; // +0x8
}
- (int)TBS_WriterLock;
- (int)TBS_ReaderLock;
- (int)TBS_Unlock;
- (id)init;
- (void)dealloc;
@end
