@interface WAOpenALManager : NSObject
{
    ALCdevice_struct * device; // +0x8
    NSMutableDictionary * buffers; // +0x10
    NSMutableArray * contexts; // +0x18
}
+ (id)shareInstance;
- (id)init;
- (void)beginInterruption:(ALCcontext_struct *)arg1;
- (void)endInterruption:(ALCcontext_struct *)arg1;
- (void)releaseContext:(ALCcontext_struct *)arg1;
- (void)__releaseContext:(ALCcontext_struct *)arg1;
- (ALCcontext_struct *)createContext;
- (ALCcontext_struct *)currentContext;
- (void)setCurrentContext:(ALCcontext_struct *)arg1;
- (id)cachedAudio:(id)arg1;
- (void)addCachedAudio:(id)arg1 path:(id)arg2 audio:(id)arg3;
- (void)removeCachedAudio:(id)arg1 path:(id)arg2;
- (id)getCachedAudio:(id)arg1 path:(id)arg2;
- (void)dealloc;
- (void).cxx_destruct;
@end
