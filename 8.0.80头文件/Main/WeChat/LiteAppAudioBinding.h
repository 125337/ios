@interface LiteAppAudioBinding : NSObject <wxAudioFileLoaderDelegate, wxAudioStateDelegate, WCAudioModuleDelegate>
{
    WXAudioNative * _wxaudionative; // +0x8
    NSString * _pkgPath; // +0x10
    NSString * _appId; // +0x18
    unsigned int _appUuid; // +0x20
    BOOL _isAudioModuleActiveNow; // +0x24
    NSMutableSet * _playingAudioEngineSet; // +0x28
    unsigned long long _pendingReleaseToken; // +0x30
    BOOL _interruptedByOthers; // +0x38
    double _lastPlayRequestTime; // +0x40
}
- (id)initWithJsContext:(unsigned long long)arg1 appId:(id)arg2 appUuid:(unsigned int)arg3;
- (void)dealloc;
- (void)initAudioContext:(unsigned long long)arg1;
- (id)getAudioFilePath:(id)arg1;
- (void)releaseAudioNative;
- (void)setAudioModuleActive:(BOOL)arg1 completion:(id /* block */)arg2;
- (BOOL)activeAudioSession;
- (void)deactiveAudioSession;
- (void)canPlayNowAndAutoActive:(unsigned long long)arg1 block:(id /* block */)arg2;
- (void)onWXAudioState:(int)arg1 audioId:(unsigned long long)arg2;
- (void)scheduleAudioModuleReleaseWithDebounce;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (void)audioModuleInterruptionEnd:(id)arg1 param:(id)arg2;
- (void)addObserver;
- (void)removeObserver;
- (void)applicationWillResignActive;
- (void).cxx_destruct;
@end
