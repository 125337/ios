@interface TingPlayAppAudioFocusImpl : NSObject <WCAudioModuleDelegate, MonoServiceMgrExt, TingAudioFocus>
{
    BOOL _isIsolateModule; // +0x8
    BOOL _isDissociativeModule; // +0x9
    BOOL _isRequestFocusManual; // +0xa
    BOOL _disableAudioSessionSettings; // +0xb
    BOOL _isAbandonFocusForce; // +0xc
    BOOL _bWaitRecoverNotify; // +0xd
    BOOL _bIntterutedBy3rdApp; // +0xe
    BOOL _isHeadsetConnected; // +0xf
    int _moduleScene; // +0x10
    unsigned int _identifier; // +0x14
    unsigned int _pauseDeactiveSeq; // +0x18
    id <TingPlayAppAudioFocusDelegate> _delegate; // +0x20
    id <TingPlayerMinimizeHelperDelegate> _minimizeHelper; // +0x28
    UnitRCWeakPtr * _playApp; // +0x30
    UnitRCWeakPtr * _playTask; // +0x38
    UnitRCWeakPtr * _audioFocusCallback; // +0x40
}
+ (id)dissociativeModuleKey;
- (id)curMinimizeHelper;
- (void)passivePause;
- (id)initWithPlayAppConfig:(id)arg1 playApp:(id)arg2;
- (void)detachPlayApp;
- (void)dealloc;
- (unsigned int)playerModuleId;
- (BOOL)isPlaying;
- (BOOL)canPlayAndAlterConflict:(BOOL)arg1;
- (BOOL)isAuidioModuleActive;
- (BOOL)isAuidioModuleInterrupted;
- (BOOL)activeAudioModule;
- (void)deactiveAudioModule;
- (void)cancelInterruptionNotify;
- (void)deactiveAudioModuleAfterPauseLanded;
- (void)cancelDeactiveAudioModuleAfterPauseLanded;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (void)audioModuleInterruptionEnd:(id)arg1 param:(id)arg2;
- (void)audioModuleDidRemoveFromInterruptList:(id)arg1;
- (void)applicationEnterForeground;
- (void)didReceiveAVAudioSessionRouteChangeNotification:(id)arg1;
- (BOOL)checkIfHeadsetConnected;
- (void)onAudioMonoServiceBussinessAdded:(id)arg1 inMainScene:(BOOL)arg2;
- (void)pushRestorePlayer;
- (void)_requestFocus:(int)arg1 context:(id)arg2;
- (void)performOnMainThread:(id /* block */)arg1;
- (void)requestFocus:(int)arg1 context:(id)arg2;
- (void)setAudioFocusCallback:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (int)moduleScene;
- (void)setModuleScene:(int)arg1;
- (BOOL)isIsolateModule;
- (void)setIsIsolateModule:(BOOL)arg1;
- (BOOL)isDissociativeModule;
- (void)setIsDissociativeModule:(BOOL)arg1;
- (BOOL)isRequestFocusManual;
- (void)setIsRequestFocusManual:(BOOL)arg1;
- (BOOL)disableAudioSessionSettings;
- (void)setDisableAudioSessionSettings:(BOOL)arg1;
- (BOOL)isAbandonFocusForce;
- (void)setIsAbandonFocusForce:(BOOL)arg1;
- (id)minimizeHelper;
- (void)setMinimizeHelper:(id)arg1;
- (id)playApp;
- (void)setPlayApp:(id)arg1;
- (id)playTask;
- (void)setPlayTask:(id)arg1;
- (id)audioFocusCallback;
- (BOOL)bWaitRecoverNotify;
- (void)setBWaitRecoverNotify:(BOOL)arg1;
- (BOOL)bIntterutedBy3rdApp;
- (void)setBIntterutedBy3rdApp:(BOOL)arg1;
- (BOOL)isHeadsetConnected;
- (void)setIsHeadsetConnected:(BOOL)arg1;
- (unsigned int)identifier;
- (void)setIdentifier:(unsigned int)arg1;
- (unsigned int)pauseDeactiveSeq;
- (void)setPauseDeactiveSeq:(unsigned int)arg1;
- (void).cxx_destruct;
@end
