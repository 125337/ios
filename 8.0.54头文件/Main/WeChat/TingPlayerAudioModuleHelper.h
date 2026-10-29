@interface TingPlayerAudioModuleHelper : NSObject <WCAudioModuleDelegate, MonoServiceMgrExt>
{
    BOOL _isIsolateModule; // +0x8
    BOOL _isDissociativeModule; // +0x9
    BOOL _bWaitRecoverNotify; // +0xa
    BOOL _bIntterutedBy3rdApp; // +0xb
    int _moduleScene; // +0xc
    id <TingPlayerMinimizeHelperDelegate> _minimizeHelper; // +0x10
    id <TingFlowPlayerProtocol> _player; // +0x18
}
+ (BOOL)isTingAuidioModuleActive;
+ (id)dissociativeModuleKey;
- (id)initWithPlayer:(id)arg1;
- (void)dealloc;
- (unsigned int)playerModuleId;
- (id)curMinimizeHelper;
- (BOOL)isPlaying;
- (BOOL)canPlay;
- (BOOL)canPlayAndAlterConflict:(BOOL)arg1;
- (BOOL)isAuidioModuleActive;
- (BOOL)activeAudioModule;
- (void)deactiveAudioModule;
- (void)cancelInterruptionNotify;
- (void)pushRestorePlayer;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (void)audioModuleInterruptionEnd:(id)arg1 param:(id)arg2;
- (void)audioModuleDidRemoveFromInterruptList:(id)arg1;
- (void)applicationEnterForeground;
- (void)onAudioMonoServiceBussinessAdded:(id)arg1 inMainScene:(BOOL)arg2;
- (BOOL)isIsolateModule;
- (void)setIsIsolateModule:(BOOL)arg1;
- (BOOL)isDissociativeModule;
- (void)setIsDissociativeModule:(BOOL)arg1;
- (int)moduleScene;
- (void)setModuleScene:(int)arg1;
- (id)minimizeHelper;
- (void)setMinimizeHelper:(id)arg1;
- (id)player;
- (void)setPlayer:(id)arg1;
- (BOOL)bWaitRecoverNotify;
- (void)setBWaitRecoverNotify:(BOOL)arg1;
- (BOOL)bIntterutedBy3rdApp;
- (void)setBIntterutedBy3rdApp:(BOOL)arg1;
- (void).cxx_destruct;
@end

