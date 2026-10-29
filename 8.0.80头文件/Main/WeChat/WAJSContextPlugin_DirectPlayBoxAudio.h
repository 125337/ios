@interface WAJSContextPlugin_DirectPlayBoxAudio : WAJSContextPluginBase
{
    BOOL _serviceReleased; // +0x8
}
- (id)currentTask;
- (BOOL)shouldSkipAutomaticAudioLifecycle;
- (void)driveAudioChannelsMuted:(BOOL)arg1 reason:(id)arg2;
- (BOOL)hasWxAudioNative;
- (BOOL)handleEvent:(long long)arg1 userInfo:(id)arg2;
- (BOOL)serviceReleased;
- (void)setServiceReleased:(BOOL)arg1;
@end
