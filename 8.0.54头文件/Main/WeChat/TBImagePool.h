@interface TBImagePool : NSObject
{
    NSMutableDictionary * _pool; // +0x8
    TBSReadWriteLock * _lock; // +0x10
}
- (id)imageForKey:(id)arg1;
- (void)setImage:(id)arg1 forKey:(id)arg2;
- (void)removeImageForKey:(id)arg1;
- (id)init;
- (id)pool;
- (void)setPool:(id)arg1;
- (id)lock;
- (void)setLock:(id)arg1;
- (void).cxx_destruct;
@end

