@interface TingPlayTaskImplementation : TingPlayTaskCpp
{
    TingPlayerAudioModuleHelper * _audioModuleHelper; // +0x8
}
- (void)configurateAudioModuleHelper:(id)arg1;
- (BOOL)checkAndActiveAudioModule;
- (void)play:(int)arg1;
- (void)stop;
- (void)resume;
- (void)pause;
- (id)audioModuleHelper;
- (void)setAudioModuleHelper:(id)arg1;
- (void).cxx_destruct;
@end
