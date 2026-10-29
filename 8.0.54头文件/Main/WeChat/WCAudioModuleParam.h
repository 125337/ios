@interface WCAudioModuleParam : NSObject
{
    WCAudioModule * _audioModuleBecomeActive; // +0x8
    WCAudioModule * _audioModuleResignActive; // +0x10
}
- (id)audioModuleBecomeActive;
- (void)setAudioModuleBecomeActive:(id)arg1;
- (id)audioModuleResignActive;
- (void)setAudioModuleResignActive:(id)arg1;
- (void).cxx_destruct;
@end

