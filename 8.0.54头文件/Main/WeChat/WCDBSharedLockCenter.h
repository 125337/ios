@interface WCDBSharedLockCenter : NSObject
{
    map<NSString *, std::weak_ptr<WCDBSharedLock>, WCDBStringComparator, std::allocator<std::pair<NSString *const, std::weak_ptr<WCDBSharedLock>>>> m_locks; // +0x8
    shared_ptr<WCDBSharedLock> m_inner; // +0x20
}
- (id)init;
- (shared_ptr<WCDBSharedLock>)lockWithName:(id)arg1;
- (void)purge;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

