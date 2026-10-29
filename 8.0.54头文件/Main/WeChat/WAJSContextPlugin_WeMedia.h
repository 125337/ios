@interface WAJSContextPlugin_WeMedia : WAJSContextPluginBase <WCAudioModuleDelegate>
{
    BOOL _isAudioInterrupt; // +0x8
    WeMediaApi * _wemedia_api; // +0x10
}
- (id)init;
- (void)dealloc;
- (void)addObserver;
- (void)removeObserver;
- (void)applicationWillResignActive;
- (void)applicationDidBecomeActive;
- (BOOL)TryStartAudioDevice:(unsigned long long)arg1;
- (void)TryStopAudioDevice:(unsigned long long)arg1;
- (void)onAudioEnterBackground;
- (void)onAudioEnterForeround;
- (BOOL)handleEvent:(long long)arg1 userInfo:(id)arg2;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (void)audioModuleInterruptionEnd:(id)arg1 param:(id)arg2;
- (id)mixListForAudioModule:(id)arg1;
- (BOOL)setActive:(BOOL)arg1 scene:(int)arg2;
- (id)getIdentifier;
- (void)activeAudioSession;
- (id)wemedia_api;
- (void)setWemedia_api:(id)arg1;
- (BOOL)isAudioInterrupt;
- (void)setIsAudioInterrupt:(BOOL)arg1;
- (void).cxx_destruct;
@end

