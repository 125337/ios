@interface TPAudioKit : NSObject
{
    BOOL _initialized; // +0x8
    NSMutableArray * _delegateArray; // +0x10
    NSRecursiveLock * _lock; // +0x18
}
+ (id)sharedInstance;
- (id)init;
- (void)setupAudioSession;
- (void)unsetupAudioSession;
- (void)setActive:(BOOL)arg1;
- (void)addInterruptionDelegate:(id)arg1;
- (void)removeInterruptionDelegate:(id)arg1;
- (void)handleAVAudioSessionInterruption:(id)arg1;
- (void)handleTPPlayerAudioSessionInterruptionEnded:(id)arg1;
- (void)handleApplicationDidBecomeActive:(id)arg1;
- (void)handleInterruptionBegan;
- (void)handleInterruptionEnded;
- (id)delegateArray;
- (void)setDelegateArray:(id)arg1;
- (id)lock;
- (void)setLock:(id)arg1;
- (BOOL)initialized;
- (void)setInitialized:(BOOL)arg1;
- (void).cxx_destruct;
@end
