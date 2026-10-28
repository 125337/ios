@interface WCAopLock : NSObject
{
    _opaque_pthread_rwlock_t m_lock; // +0x8
}
- (_opaque_pthread_rwlock_t *)lock;
- (id)init;
- (void)dealloc;
@end
