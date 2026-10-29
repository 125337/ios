@interface _TPFBKVOSharedController : NSObject
{
    NSHashTable * _infos; // +0x8
    _opaque_pthread_mutex_t _mutex; // +0x10
}
+ (id)sharedController;
- (id)init;
- (void)dealloc;
- (id)debugDescription;
- (void)observe:(id)arg1 info:(id)arg2;
- (void)unobserve:(id)arg1 info:(id)arg2;
- (void)unobserve:(id)arg1 infos:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void).cxx_destruct;
@end

