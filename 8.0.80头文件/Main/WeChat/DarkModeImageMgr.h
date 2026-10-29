@interface DarkModeImageMgr : MMRootService <MMServiceProtocol>
{
    NSMapTable * _darkToLightMapTable; // +0x8
    NSMapTable * _lightToDarkMapTable; // +0x10
    _opaque_pthread_rwlock_t _lock; // +0x18
}
- (void)onServiceInit;
- (id)darkModeImageForImage:(id)arg1;
- (id)lightModeImageForImage:(id)arg1;
- (id)registerPairWithLightImage:(id)arg1 darkImage:(id)arg2;
- (BOOL)hasRegistedImage:(id)arg1;
- (id)darkToLightMapTable;
- (void)setDarkToLightMapTable:(id)arg1;
- (id)lightToDarkMapTable;
- (void)setLightToDarkMapTable:(id)arg1;
- (_opaque_pthread_rwlock_t)lock;
- (void)setLock:(_opaque_pthread_rwlock_t)arg1;
- (void).cxx_destruct;
@end
