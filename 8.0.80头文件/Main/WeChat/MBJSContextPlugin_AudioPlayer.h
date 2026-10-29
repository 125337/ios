@interface MBJSContextPlugin_AudioPlayer : WAJSContextPlugin_AudioPlayer <WCAudioModuleDelegate>
- (BOOL)shouldRegisterWMPFAudioAPI;
- (BOOL)shouldRegisterCustomLoadingExt;
- (BOOL)handleEvent:(long long)arg1 userInfo:(id)arg2;
- (BOOL)setActive:(BOOL)arg1 audioId:(id)arg2;
- (void)activeAudioSession;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (void)audioModuleInterruptionEnd:(id)arg1 param:(id)arg2;
- (id)resolveLocalAudioSrc:(id)arg1 fileData:(id *)arg2;
- (void)dispatchAudioStateEvent:(id)arg1 params:(id)arg2;
@end
