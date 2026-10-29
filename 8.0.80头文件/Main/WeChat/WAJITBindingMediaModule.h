@interface WAJITBindingMediaModule : NSObject <WeMediaDelegate, WCAudioModuleDelegate>
{
    BOOL _isBackground; // +0x8
    BOOL _isAudioInterrupt; // +0x9
    id <WAJITBindingMediaModuleDelegate> _delegate; // +0x10
    WeMediaApi * _wemedia_api; // +0x18
}
- (void)setupWithContext:(id)arg1;
- (void)dealloc;
- (void)onEnterBackground;
- (void)onEnterForeground;
- (void)weMediaLOG:(int)arg1 log:(const char *)arg2;
- (BOOL)weMediaGetExternalConfig:(id)arg1 defaultVal:(BOOL)arg2;
- (BOOL)weMediaTryStartAudioDevice:(unsigned long long)arg1;
- (void)weMediaTryStopAudioDevice:(unsigned long long)arg1;
- (id)weMediaGetAbsolutePath:(id)arg1;
- (BOOL)weMediaRegisterExternaImage:(const char *)arg1 dataLen:(unsigned long long)arg2 imageId:(int)arg3 width:(int)arg4 height:(int)arg5;
- (void)weMediaUnregisterExternaImage:(int)arg1;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (void)audioModuleInterruptionEnd:(id)arg1 param:(id)arg2;
- (id)mixListForAudioModule:(id)arg1;
- (void)sendAudioInterruptionBeginEvent;
- (void)sendAudioInterruptionEndEvent;
- (BOOL)setActive:(BOOL)arg1 scene:(int)arg2;
- (id)getIdentifier;
- (void)activeAudioSession:(int)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)wemedia_api;
- (void)setWemedia_api:(id)arg1;
- (BOOL)isBackground;
- (void)setIsBackground:(BOOL)arg1;
- (BOOL)isAudioInterrupt;
- (void)setIsAudioInterrupt:(BOOL)arg1;
- (void).cxx_destruct;
@end
