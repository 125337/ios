@interface WCAudioModuleMgr : MMUserService <SystemSoundEventExt, ISysCallCheckExt, MMServiceProtocol>
{
    BOOL m_didSetActiveModule; // +0x8
    int m_maxInterruptUnit; // +0xc
    BOOL _isCheckingOtherAudio; // +0x10
    int _checkInterval; // +0x14
    NSRecursiveLock * _inputMuteControlLock; // +0x18
    NSMutableDictionary * _inputMuteControls; // +0x20
    NSMutableArray * _activeAudioList; // +0x28
    WCAudioModuleList * _interruptAudioList; // +0x30
    NSMutableDictionary * _audiosDict; // +0x38
    MMTimer * _activeCheckTimer; // +0x40
}
+ (BOOL)audioModule:(id)arg1 canAddToAudioListDirectly:(id)arg2;
+ (BOOL)audioModule:(id)arg1 canReplaceAudioList:(id)arg2;
+ (BOOL)moduleList:(id)arg1 containModule:(id)arg2;
+ (BOOL)audioModule:(id)arg1 canMixWithAudioList:(id)arg2;
+ (BOOL)audioList:(id)arg1 canMixWithAudioModule:(id)arg2;
+ (id)descriptionForModules:(id)arg1;
+ (BOOL)isActivedAudioModuleUsingAudio:(id)arg1;
+ (void)initialize;
+ (id)getAllScenes;
+ (id)getScenesExcludeArray:(id)arg1;
- (void)startTimerCleanAudioModules;
- (void)cleanAudioModules;
- (void)cleanAudioModuleIfNeed:(id)arg1;
- (void)cleanAudioModule:(id)arg1;
- (id)getAudioModuleWithScene:(int)arg1 groupName:(id)arg2 identifier:(id)arg3 createIfNotExist:(BOOL)arg4;
- (id)genKey:(int)arg1 groupName:(id)arg2 identifier:(id)arg3;
- (void)systemSoundWillStart:(unsigned int)arg1;
- (void)systemSoundDidStop:(unsigned int)arg1;
- (void)BeginInterruption;
- (void)EndInterruption;
- (void)OnSysCallState:(int)arg1 andCallId:(id)arg2;
- (void)startActiveCheck;
- (void)stopActiveCheck;
- (void)timerActiveCheck;
- (void)executeActiveCheck;
- (void)asyncCheck3rdAppActive;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onServiceMemoryWarning;
- (BOOL)setActive:(BOOL)arg1 scene:(int)arg2 listener:(id)arg3;
- (BOOL)setActive:(BOOL)arg1 scene:(int)arg2 identifier:(id)arg3 listener:(id)arg4;
- (BOOL)setActive:(BOOL)arg1 scene:(int)arg2 identifier:(id)arg3 options:(unsigned long long)arg4 listener:(id)arg5;
- (BOOL)setActive:(BOOL)arg1 scene:(int)arg2 groupName:(id)arg3 identifier:(id)arg4 options:(unsigned long long)arg5 listener:(id)arg6;
- (id)acquireInputMuteForScene:(int)arg1;
- (id)getConflictWording;
- (void)showConflictWording;
- (BOOL)resumeInterruptModule;
- (BOOL)canSetActiveWithScene:(int)arg1;
- (BOOL)canSetActiveWithScene:(int)arg1 mixList:(id)arg2;
- (BOOL)canSetActiveWithScene:(int)arg1 groupName:(id)arg2 identifier:(id)arg3;
- (BOOL)canSetActiveWithScene:(int)arg1 groupName:(id)arg2 identifier:(id)arg3 mixList:(id)arg4;
- (id)currentActiveModules;
- (BOOL)isAudioModuleActive:(int)arg1;
- (id)currentInterruptModules;
- (BOOL)isAudioModuleInterrupt:(int)arg1;
- (void)cancelInterruptionNotifyWithScene:(int)arg1;
- (void)cancelInterruptionNotifyWithScene:(int)arg1 groupName:(id)arg2 identifier:(id)arg3;
- (id)getAudioModuleWithScene:(int)arg1 groupName:(id)arg2 identifier:(id)arg3;
- (BOOL)activeAudioModule:(id)arg1;
- (BOOL)deactiveAudioModule:(id)arg1;
- (void)moveAudioToActive:(id)arg1;
- (void)moveAllActiveToInterruptAndActiveModule:(id)arg1;
- (void)chooseAudioToPlayAndNotify:(id)arg1;
- (void)deactiveAudioSession;
- (void)removeAudioModuleFromActiveListIfNeed;
- (void)notifyWillActiveAudioModule:(id)arg1;
- (void)notifyDidActiveAudioModule:(id)arg1;
- (void)notifyDidDeactiveAudioModule:(id)arg1;
- (void)updateInputMuteControlWithKey:(id)arg1 scene:(int)arg2;
- (void)releaseInputMuteControlWithKey:(id)arg1;
- (void)clearInputMuteControls;
- (void)resetAudioInputMutedIfNeed:(id)arg1;
- (id)inputMuteControlLock;
- (void)setInputMuteControlLock:(id)arg1;
- (id)inputMuteControls;
- (void)setInputMuteControls:(id)arg1;
- (id)activeAudioList;
- (void)setActiveAudioList:(id)arg1;
- (id)interruptAudioList;
- (void)setInterruptAudioList:(id)arg1;
- (id)audiosDict;
- (void)setAudiosDict:(id)arg1;
- (id)activeCheckTimer;
- (void)setActiveCheckTimer:(id)arg1;
- (BOOL)isCheckingOtherAudio;
- (void)setIsCheckingOtherAudio:(BOOL)arg1;
- (int)checkInterval;
- (void)setCheckInterval:(int)arg1;
- (void).cxx_destruct;
@end
