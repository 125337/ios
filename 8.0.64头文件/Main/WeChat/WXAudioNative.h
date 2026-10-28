@interface WXAudioNative : NSObject
{
    OpaqueJSContext * _jscontext; // +0x8
    WXAudioScriptState * _audioScriptState; // +0x10
    void * _audioMgr; // +0x18
    WXAudioNativeTask * audioTask; // +0x20
    WxAudioFileCallback * m_pAudioFileCallback; // +0x28
    id <wxAudioFileLoaderDelegate> _wxAudioFileDelegate; // +0x30
    id <wxAudioOutputDelegate> _wxAudioOutputDelegate; // +0x38
    id <wxAudioStateDelegate> _wxAudioStateDelegate; // +0x40
    id <wxAudioCommonDelegate> _wxAudioCommonDelegate; // +0x48
}
- (id)initWithJSContext:(OpaqueJSContext *)arg1 parent:(OpaqueJSValue *)arg2;
- (void)setLogDelegate:(id)arg1;
- (BOOL)isPlayingAudio;
- (BOOL)isWaitingAudio;
- (void)forcePauseAllPlayer;
- (void)forcePauseAllPlayer:(BOOL)arg1;
- (void)forceResumeAllPlayer;
- (void)setMute:(BOOL)arg1;
- (void)releaseContext;
- (void)dealloc;
- (id)wxAudioFileDelegate;
- (void)setWxAudioFileDelegate:(id)arg1;
- (id)wxAudioOutputDelegate;
- (void)setWxAudioOutputDelegate:(id)arg1;
- (id)wxAudioStateDelegate;
- (void)setWxAudioStateDelegate:(id)arg1;
- (id)wxAudioCommonDelegate;
- (void)setWxAudioCommonDelegate:(id)arg1;
- (void).cxx_destruct;
@end
