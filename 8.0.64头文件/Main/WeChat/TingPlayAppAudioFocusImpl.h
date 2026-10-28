@interface TingPlayAppAudioFocusImpl : NSObject <WCAudioModuleDelegate, MonoServiceMgrExt, TingAudioFocus>
{
    BOOL _bWaitRecoverNotify; // +0x8
    BOOL _bIntterutedBy3rdApp; // +0x9
    int _moduleScene; // +0xc
    unsigned int _identifier; // +0x10
    id <TingPlayAppAudioFocusDelegate> _delegate; // +0x18
    UnitRCWeakPtr * _playApp; // +0x20
    UnitRCWeakPtr * _playTask; // +0x28
    UnitRCWeakPtr * _audioFocusCallback; // +0x30
}
- (id)initWithPlayAppConfig:(id)arg1 playApp:(id)arg2;
- (void)dealloc;
- (unsigned int)playerModuleId;
- (BOOL)isPlaying;
- (BOOL)canPlayAndAlterConflict:(BOOL)arg1;
- (BOOL)isAuidioModuleActive;
- (BOOL)isAuidioModuleInterrupted;
- (BOOL)activeAudioModule;
- (void)deactiveAudioModule;
- (void)cancelInterruptionNotify;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (void)audioModuleInterruptionEnd:(id)arg1 param:(id)arg2;
- (void)audioModuleDidRemoveFromInterruptList:(id)arg1;
- (void)applicationEnterForeground;
- (void)onAudioMonoServiceBussinessAdded:(id)arg1 inMainScene:(BOOL)arg2;
- (void)_requestFocus:(int)arg1 context:(id)arg2;
- (void)performOnMainThread:(id /* block */)arg1;
- (void)requestFocus:(int)arg1 context:(id)arg2;
- (void)setAudioFocusCallback:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (int)moduleScene;
- (void)setModuleScene:(int)arg1;
- (id)playApp;
- (void)setPlayApp:(id)arg1;
- (id)playTask;
- (void)setPlayTask:(id)arg1;
- (id)audioFocusCallback;
- (BOOL)bWaitRecoverNotify;
- (void)setBWaitRecoverNotify:(BOOL)arg1;
- (BOOL)bIntterutedBy3rdApp;
- (void)setBIntterutedBy3rdApp:(BOOL)arg1;
- (unsigned int)identifier;
- (void)setIdentifier:(unsigned int)arg1;
- (void).cxx_destruct;
@end
