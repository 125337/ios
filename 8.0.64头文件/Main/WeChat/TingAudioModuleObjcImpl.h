@interface TingAudioModuleObjcImpl : NSObject <WCAudioModuleDelegate, TingAudioModule>
{
    NSMutableSet * _listeners; // +0x8
    NSRecursiveLock * _lock; // +0x10
    NSArray * _mixAudioModuleSceneList; // +0x18
}
- (id)init;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (void)setActive:(BOOL)arg1 scene:(int)arg2 extraData:(id)arg3;
- (void)addListener:(id)arg1;
- (void)removeListener:(id)arg1;
- (id)listeners;
- (void)setListeners:(id)arg1;
- (id)lock;
- (void)setLock:(id)arg1;
- (id)mixAudioModuleSceneList;
- (void)setMixAudioModuleSceneList:(id)arg1;
- (void).cxx_destruct;
@end
