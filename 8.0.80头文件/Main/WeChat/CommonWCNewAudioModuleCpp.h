@interface CommonWCNewAudioModuleCpp : UnitRCObjcBaseProxyClass <CommonWCNewAudioModule>
{
    recursive_mutex _fieldMutex; // +0x8
    vector<bool, std::allocator<bool>> _fieldHasCache; // +0x48
    AudioSessionPlatformConfig * _audioSessionConfig; // +0x60
}
- (id)init;
- (void)notifyFieldUpdated:(int)arg1;
- (id)audioSessionConfig;
- (id)getListener;
- (void)setListener:(id)arg1;
- (id)getAudioModuleInfo;
- (id)getKey;
- (id)getAudioSessionConfig;
- (void)setAudioSessionConfig:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
